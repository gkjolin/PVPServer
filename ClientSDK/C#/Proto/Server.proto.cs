//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: Server.proto
namespace Server
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
    
    private int _flags;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"flags", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int flags
    {
      get { return _flags; }
      set { _flags = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Login")]
  public partial class Login : global::ProtoBuf.IExtensible
  {
    public Login() {}
    
    private int _err;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"err", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int err
    {
      get { return _err; }
      set { _err = value; }
    }
    private int _guid = default(int);
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int guid
    {
      get { return _guid; }
      set { _guid = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"CreateGame")]
  public partial class CreateGame : global::ProtoBuf.IExtensible
  {
    public CreateGame() {}
    
    private int _err;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"err", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int err
    {
      get { return _err; }
      set { _err = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"DestroyGame")]
  public partial class DestroyGame : global::ProtoBuf.IExtensible
  {
    public DestroyGame() {}
    
    private int _err;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"err", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int err
    {
      get { return _err; }
      set { _err = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"EnterGame")]
  public partial class EnterGame : global::ProtoBuf.IExtensible
  {
    public EnterGame() {}
    
    private int _err;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"err", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int err
    {
      get { return _err; }
      set { _err = value; }
    }
    private int _guid = default(int);
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int guid
    {
      get { return _guid; }
      set { _guid = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ExitGame")]
  public partial class ExitGame : global::ProtoBuf.IExtensible
  {
    public ExitGame() {}
    
    private int _err;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"err", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int err
    {
      get { return _err; }
      set { _err = value; }
    }
    private int _guid = default(int);
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int guid
    {
      get { return _guid; }
      set { _guid = value; }
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
  
    [global::ProtoBuf.ProtoContract(Name=@"RESPONSE_MSG")]
    public enum RESPONSE_MSG
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"HEART", Value=0)]
      HEART = 0,
            
      [global::ProtoBuf.ProtoEnum(Name=@"FLAGS", Value=1)]
      FLAGS = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"LOGIN", Value=2)]
      LOGIN = 2,
            
      [global::ProtoBuf.ProtoEnum(Name=@"CREATE_GAME", Value=3)]
      CREATE_GAME = 3,
            
      [global::ProtoBuf.ProtoEnum(Name=@"DESTROY_GAME", Value=4)]
      DESTROY_GAME = 4,
            
      [global::ProtoBuf.ProtoEnum(Name=@"ENTER_GAME", Value=5)]
      ENTER_GAME = 5,
            
      [global::ProtoBuf.ProtoEnum(Name=@"EXIT_GAME", Value=6)]
      EXIT_GAME = 6,
            
      [global::ProtoBuf.ProtoEnum(Name=@"MODIFY_GAME_PASSWORD", Value=7)]
      MODIFY_GAME_PASSWORD = 7,
            
      [global::ProtoBuf.ProtoEnum(Name=@"SEND_TO_PLAYER", Value=8)]
      SEND_TO_PLAYER = 8
    }
  
}