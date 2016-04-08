//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: ProtoGameClient.proto
namespace ProtoGameClient
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
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Flags")]
  public partial class Flags : global::ProtoBuf.IExtensible
  {
    public Flags() {}
    
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Login")]
  public partial class Login : global::ProtoBuf.IExtensible
  {
    public Login() {}
    
    private uint _guid;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public uint guid
    {
      get { return _guid; }
      set { _guid = value; }
    }
    private int _version;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"version", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int version
    {
      get { return _version; }
      set { _version = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ListGame")]
  public partial class ListGame : global::ProtoBuf.IExtensible
  {
    public ListGame() {}
    
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"CreateGame")]
  public partial class CreateGame : global::ProtoBuf.IExtensible
  {
    public CreateGame() {}
    
    private string _password;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"password", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string password
    {
      get { return _password; }
      set { _password = value; }
    }
    private int _gameid;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"gameid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int gameid
    {
      get { return _gameid; }
      set { _gameid = value; }
    }
    private int _mode;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"mode", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int mode
    {
      get { return _mode; }
      set { _mode = value; }
    }
    private int _mapid;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"mapid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int mapid
    {
      get { return _mapid; }
      set { _mapid = value; }
    }
    private int _maxPlayers;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"maxPlayers", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int maxPlayers
    {
      get { return _maxPlayers; }
      set { _maxPlayers = value; }
    }
    private int _evaluation;
    [global::ProtoBuf.ProtoMember(6, IsRequired = true, Name=@"evaluation", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int evaluation
    {
      get { return _evaluation; }
      set { _evaluation = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"DestroyGame")]
  public partial class DestroyGame : global::ProtoBuf.IExtensible
  {
    public DestroyGame() {}
    
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"EnterGame")]
  public partial class EnterGame : global::ProtoBuf.IExtensible
  {
    public EnterGame() {}
    
    private int _gameid;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"gameid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int gameid
    {
      get { return _gameid; }
      set { _gameid = value; }
    }
    private string _password;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"password", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string password
    {
      get { return _password; }
      set { _password = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ExitGame")]
  public partial class ExitGame : global::ProtoBuf.IExtensible
  {
    public ExitGame() {}
    
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"SendToPlayer")]
  public partial class SendToPlayer : global::ProtoBuf.IExtensible
  {
    public SendToPlayer() {}
    
    private uint _guid;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public uint guid
    {
      get { return _guid; }
      set { _guid = value; }
    }
    private int _size;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"size", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int size
    {
      get { return _size; }
      set { _size = value; }
    }
    private byte[] _data;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"data", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] data
    {
      get { return _data; }
      set { _data = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"SendToPlayerAll")]
  public partial class SendToPlayerAll : global::ProtoBuf.IExtensible
  {
    public SendToPlayerAll() {}
    
    private uint _filter;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"filter", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public uint filter
    {
      get { return _filter; }
      set { _filter = value; }
    }
    private int _size;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"size", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int size
    {
      get { return _size; }
      set { _size = value; }
    }
    private byte[] _data;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"data", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] data
    {
      get { return _data; }
      set { _data = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
    [global::ProtoBuf.ProtoContract(Name=@"REQUEST_MSG")]
    public enum REQUEST_MSG
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"HEART", Value=1000)]
      HEART = 1000,
            
      [global::ProtoBuf.ProtoEnum(Name=@"FLAGS", Value=1001)]
      FLAGS = 1001,
            
      [global::ProtoBuf.ProtoEnum(Name=@"LOGIN", Value=1002)]
      LOGIN = 1002,
            
      [global::ProtoBuf.ProtoEnum(Name=@"LIST_GAME", Value=1003)]
      LIST_GAME = 1003,
            
      [global::ProtoBuf.ProtoEnum(Name=@"CREATE_GAME", Value=1004)]
      CREATE_GAME = 1004,
            
      [global::ProtoBuf.ProtoEnum(Name=@"DESTROY_GAME", Value=1005)]
      DESTROY_GAME = 1005,
            
      [global::ProtoBuf.ProtoEnum(Name=@"ENTER_GAME", Value=1006)]
      ENTER_GAME = 1006,
            
      [global::ProtoBuf.ProtoEnum(Name=@"EXIT_GAME", Value=1007)]
      EXIT_GAME = 1007,
            
      [global::ProtoBuf.ProtoEnum(Name=@"SEND_TO_PLAYER", Value=1008)]
      SEND_TO_PLAYER = 1008,
            
      [global::ProtoBuf.ProtoEnum(Name=@"SEND_TO_PLAYER_ALL", Value=1009)]
      SEND_TO_PLAYER_ALL = 1009
    }
  
}