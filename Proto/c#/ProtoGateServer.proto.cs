//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: ProtoGateServer.proto
namespace ProtoGateServer
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Heart")]
  public partial class Heart : global::ProtoBuf.IExtensible
  {
    public Heart() {}
    
    private int _timestamp;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"timestamp", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int timestamp
    {
      get { return _timestamp; }
      set { _timestamp = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ListGameServer")]
  public partial class ListGameServer : global::ProtoBuf.IExtensible
  {
    public ListGameServer() {}
    
    private readonly global::System.Collections.Generic.List<ProtoGateServer.ListGameServer.GameServer> _servers = new global::System.Collections.Generic.List<ProtoGateServer.ListGameServer.GameServer>();
    [global::ProtoBuf.ProtoMember(1, Name=@"servers", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<ProtoGateServer.ListGameServer.GameServer> servers
    {
      get { return _servers; }
    }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"GameServer")]
  public partial class GameServer : global::ProtoBuf.IExtensible
  {
    public GameServer() {}
    
    private string _ip;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"ip", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string ip
    {
      get { return _ip; }
      set { _ip = value; }
    }
    private int _port;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"port", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int port
    {
      get { return _port; }
      set { _port = value; }
    }
    private int _maxGames;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"maxGames", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int maxGames
    {
      get { return _maxGames; }
      set { _maxGames = value; }
    }
    private int _curGames;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"curGames", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int curGames
    {
      get { return _curGames; }
      set { _curGames = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"SendToPlayer")]
  public partial class SendToPlayer : global::ProtoBuf.IExtensible
  {
    public SendToPlayer() {}
    
    private int _size;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"size", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int size
    {
      get { return _size; }
      set { _size = value; }
    }
    private byte[] _data;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"data", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] data
    {
      get { return _data; }
      set { _data = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
    [global::ProtoBuf.ProtoContract(Name=@"VERSION_NUMBER")]
    public enum VERSION_NUMBER
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"VERSION", Value=65536)]
      VERSION = 65536
    }
  
    [global::ProtoBuf.ProtoContract(Name=@"RESPONSE_MSG")]
    public enum RESPONSE_MSG
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"HEART", Value=3000)]
      HEART = 3000,
            
      [global::ProtoBuf.ProtoEnum(Name=@"LIST_GAME_SERVER", Value=3001)]
      LIST_GAME_SERVER = 3001,
            
      [global::ProtoBuf.ProtoEnum(Name=@"SEND_TO_PLAYER", Value=3002)]
      SEND_TO_PLAYER = 3002
    }
  
}