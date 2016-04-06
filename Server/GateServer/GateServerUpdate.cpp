#include "GateServer.h"


//
// 客户端链接回调
//
void CGateServer::OnConnect(CIOContext *pContext, SOCKET acceptSocket)
{
	pContext->guid = 0xffffffff;
	CIOCPServer::OnConnect(pContext, acceptSocket);
}

//
// 客户端断链回调
//
void CGateServer::OnDisconnect(CIOContext *pContext)
{
	Logout(pContext);
	ClearGameServer(pContext);
	CIOCPServer::OnDisconnect(pContext);
}

//
// 更新接收消息
//
void CGateServer::OnUpdateRecv(DWORD dwDeltaTime)
{
	CIOContext *pContext = m_pActiveContext;

	while (pContext) {
		CIOContext *pNextContext = pContext->pNextActive;

		if (pContext->IsAlive()) {
			pContext->recvBuffer.Lock();
			{
				pContext->dwHeartTime += dwDeltaTime;

				while (TRUE) {
					WORD msg;
					WORD fullSize;
					WORD bodySize;

					if (pContext->recvBuffer.GetData((BYTE *)&fullSize, sizeof(fullSize)) != sizeof(fullSize)) break;
					if (pContext->recvBuffer.GetActiveBufferSize() < sizeof(fullSize) + fullSize) break;

					if (pContext->recvBuffer.PopData((BYTE *)&fullSize, sizeof(fullSize)) != sizeof(fullSize)) break;
					if (pContext->recvBuffer.PopData((BYTE *)&msg, sizeof(msg)) != sizeof(msg))  break;

					bodySize = fullSize - sizeof(msg);
					m_dwRecvDataSize += sizeof(fullSize) + fullSize;

					switch (msg) {
					case ProtoGateClient::REQUEST_MSG::HEART:
						OnHeart(pContext, bodySize);
						OnHeartReset(pContext);
						break;

					case ProtoGateClient::REQUEST_MSG::LOGIN:
						OnLogin(pContext, bodySize);
						OnHeartReset(pContext);
						break;

					case ProtoGateClient::REQUEST_MSG::LIST_GAME_SERVER:
						OnListGameServer(pContext, bodySize);
						OnHeartReset(pContext);
						break;

					case ProtoGateClient::REQUEST_MSG::SEND_TO_PLAYER:
						OnSendToPlayer(pContext, bodySize);
						OnHeartReset(pContext);
						break;

					case ProtoGameServer::REQUEST_MSG::SERVER_STATUS:
						OnGameServerStatus(pContext, bodySize);
						OnHeartReset(pContext);
						break;
					}
				}
			}
			pContext->recvBuffer.Unlock();
		}

		if (pContext->Check((DWORD)(1000 * m_timeOut)) == FALSE) {
			ReleaseContext(pContext, FALSE);
		}

		pContext = pNextContext;
	}
}

//
// 重置心跳
//
void CGateServer::OnHeartReset(CIOContext *pContext)
{
	pContext->dwHeartTime = 0;
}

//
// 心跳
//
void CGateServer::OnHeart(CIOContext *pContext, WORD size)
{
	ProtoGateClient::Heart requestHeart;
	ProtoGateServer::Heart responseHeart;

	BYTE buffer[PACK_BUFFER_SIZE];
	CCacheBuffer writeBuffer(sizeof(buffer), buffer);

	//
	// 1. 解析消息
	//
	if (Parser(&pContext->recvBuffer, &requestHeart, size) == FALSE) {
		return;
	}

	//
	// 2. 心跳
	//
	responseHeart.set_timestamp(requestHeart.timestamp());

	//
	// 3. 序列化消息
	//
	Serializer(&writeBuffer, &responseHeart, ProtoGateServer::RESPONSE_MSG::HEART);

	//
	// 4. 发送
	//
	SendTo(pContext, buffer, writeBuffer.GetActiveBufferSize());
}

//
// 登陆
//
void CGateServer::OnLogin(CIOContext *pContext, WORD size)
{
	ProtoGateClient::Login requestLogin;
	ProtoGateServer::Login responseLogin;

	BYTE buffer[PACK_BUFFER_SIZE];
	CCacheBuffer writeBuffer(sizeof(buffer), buffer);

	//
	// 1. 解析消息
	//
	if (Parser(&pContext->recvBuffer, &requestLogin, size) == FALSE) {
		return;
	}

	//
	// 2. 登陆
	//
	ProtoGateServer::ERROR_CODE err = ProtoGateServer::ERROR_CODE::ERR_NONE;

	if (requestLogin.version() != ProtoGateServer::VERSION_NUMBER::VERSION) {
		err = ProtoGateServer::ERROR_CODE::ERR_VERSION_INVALID; goto ERR;
	}

	if (pContext->guid != 0xffffffff) {
		err = ProtoGateServer::ERROR_CODE::ERR_PLAYER_NOT_NONE; goto ERR;
	}

	if (Login(pContext, requestLogin.guid()) == FALSE) {
		err = ProtoGateServer::ERROR_CODE::ERR_PLAYER_INVALID_GUID; goto ERR;
	}

	responseLogin.set_guid(pContext->guid);

	goto NEXT;
ERR:
NEXT:
	responseLogin.set_err(err);

	 //
	 // 3. 序列化消息
	 //
	 Serializer(&writeBuffer, &responseLogin, ProtoGateServer::RESPONSE_MSG::LOGIN);

	 //
	 // 4. 发送
	 //
	 SendTo(pContext, buffer, writeBuffer.GetActiveBufferSize());
}

//
// 游戏服务器列表
//
void CGateServer::OnListGameServer(CIOContext *pContext, WORD size)
{
	ProtoGateClient::ListGameServer requestListGameServer;
	ProtoGateServer::ListGameServer responseListGameServer;

	BYTE buffer[PACK_BUFFER_SIZE];
	CCacheBuffer writeBuffer(sizeof(buffer), buffer);

	//
	// 1. 解析消息
	//
	if (Parser(&pContext->recvBuffer, &requestListGameServer, size) == FALSE) {
		return;
	}

	//
	// 2. 获得游戏服务器列表
	//
	ProtoGateServer::ERROR_CODE err = ProtoGateServer::ERROR_CODE::ERR_NONE;

	if (pContext->guid == 0xffffffff) {
		err = ProtoGateServer::ERROR_CODE::ERR_PLAYER_NOT_LOGIN; goto ERR;
	}

	for (GameServerMap::const_iterator itGameServer = m_gameServerMap.begin(); itGameServer != m_gameServerMap.end(); ++itGameServer) {
		if (ProtoGateServer::ListGameServer_GameServer *pGameServer = responseListGameServer.add_servers()) {
			pGameServer->set_ip(itGameServer->second.ip);
			pGameServer->set_port(itGameServer->second.port);
			pGameServer->set_maxgames(itGameServer->second.maxGames);
			pGameServer->set_curgames(itGameServer->second.curGames);
		}
	}

	goto NEXT;
ERR:
NEXT:
	responseListGameServer.set_err(err);

	//
	// 3. 序列化消息
	//
	Serializer(&writeBuffer, &responseListGameServer, ProtoGateServer::RESPONSE_MSG::LIST_GAME_SERVER);

	//
	// 4. 发送
	//
	SendTo(pContext, buffer, writeBuffer.GetActiveBufferSize());
}

//
// 发送指定玩家
//
void CGateServer::OnSendToPlayer(CIOContext *pContext, WORD size)
{
	ProtoGateClient::SendToPlayer requestSendToPlayer;
	ProtoGateServer::SendToPlayer responseSendToPlayer;

	BYTE buffer[PACK_BUFFER_SIZE];
	CCacheBuffer writeBuffer(sizeof(buffer), buffer);

	//
	// 1. 解析消息
	//
	if (Parser(&pContext->recvBuffer, &requestSendToPlayer, size) == FALSE) {
		return;
	}

	//
	// 2. 转发协议
	//
	if (pContext->guid == 0xffffffff) {
		return;
	}

	responseSendToPlayer.set_size(requestSendToPlayer.size());
	responseSendToPlayer.set_data(requestSendToPlayer.data().c_str(), requestSendToPlayer.size());

	//
	// 3. 序列化消息
	//
	Serializer(&writeBuffer, &responseSendToPlayer, ProtoGateServer::RESPONSE_MSG::SEND_TO_PLAYER);

	//
	// 4. 发送指定玩家
	//
	if (requestSendToPlayer.players_size() > 0) {
		for (int index = 0; index < requestSendToPlayer.players_size(); index++) {
			if (CIOContext *pContextSendTo = QueryContext(requestSendToPlayer.players().Get(index))) {
				if (pContext != pContextSendTo) {
					SendTo(pContextSendTo, buffer, writeBuffer.GetActiveBufferSize());
				}
			}
		}
	}
	else {
		for (GUIDMAP::const_iterator itContext = m_guidmap.begin(); itContext != m_guidmap.end(); ++itContext) {
			if (pContext != itContext->second) {
				SendTo(itContext->second, buffer, writeBuffer.GetActiveBufferSize());
			}
		}
	}
}

//
// 游戏服务器状态
//
void CGateServer::OnGameServerStatus(CIOContext *pContext, WORD size)
{
	ProtoGameServer::ServerStatus requestServerStatus;

	//
	// 1. 解析消息
	//
	if (Parser(&pContext->recvBuffer, &requestServerStatus, size) == FALSE) {
		return;
	}

	//
	// 2. 更新游戏服务器列表
	//
	strcpy(m_gameServerMap[pContext].ip, requestServerStatus.ip().c_str());
	m_gameServerMap[pContext].port = requestServerStatus.port();
	m_gameServerMap[pContext].maxGames = requestServerStatus.maxgames();
	m_gameServerMap[pContext].curGames = requestServerStatus.curgames();
}

//
// 输出日志
//
void WriteLog(const char *szFmt, ...)
{
	va_list argList;
	static char szString[1024 * 1024];

	va_start(argList, szFmt);
	vsprintf(szString, szFmt, argList);

	time_t timeRaw;
	struct tm *timeInfo;
	time(&timeRaw);
	timeInfo = localtime(&timeRaw);

	char szFileName[260];
	sprintf(szFileName, "GateServer%d-%02d-%02d.log", timeInfo->tm_year + 1900, timeInfo->tm_mon + 1, timeInfo->tm_mday);

	if (FILE *pFile = fopen(szFileName, "a+")) {
		fprintf(pFile, "%02d:%02d:%02d: %s", timeInfo->tm_hour, timeInfo->tm_min, timeInfo->tm_sec, szString);
		fclose(pFile);
	}

	printf("%s", szString);
}
