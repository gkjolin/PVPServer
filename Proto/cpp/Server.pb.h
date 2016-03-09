// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Server.proto

#ifndef PROTOBUF_Server_2eproto__INCLUDED
#define PROTOBUF_Server_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Server {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Server_2eproto();
void protobuf_AssignDesc_Server_2eproto();
void protobuf_ShutdownFile_Server_2eproto();

class Heart;
class Flags;
class Login;
class CreateGame;
class DestroyGame;
class EnterGame;
class ExitGame;
class SendToPlayer;

enum RESPONSE_MSG {
  HEART = 0,
  FLAGS = 1,
  LOGIN = 2,
  CREATE_GAME = 3,
  DESTROY_GAME = 4,
  ENTER_GAME = 5,
  EXIT_GAME = 6,
  MODIFY_GAME_PASSWORD = 7,
  SEND_TO_PLAYER = 8
};
bool RESPONSE_MSG_IsValid(int value);
const RESPONSE_MSG RESPONSE_MSG_MIN = HEART;
const RESPONSE_MSG RESPONSE_MSG_MAX = SEND_TO_PLAYER;
const int RESPONSE_MSG_ARRAYSIZE = RESPONSE_MSG_MAX + 1;

const ::google::protobuf::EnumDescriptor* RESPONSE_MSG_descriptor();
inline const ::std::string& RESPONSE_MSG_Name(RESPONSE_MSG value) {
  return ::google::protobuf::internal::NameOfEnum(
    RESPONSE_MSG_descriptor(), value);
}
inline bool RESPONSE_MSG_Parse(
    const ::std::string& name, RESPONSE_MSG* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RESPONSE_MSG>(
    RESPONSE_MSG_descriptor(), name, value);
}
// ===================================================================

class Heart : public ::google::protobuf::Message {
 public:
  Heart();
  virtual ~Heart();

  Heart(const Heart& from);

  inline Heart& operator=(const Heart& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Heart& default_instance();

  void Swap(Heart* other);

  // implements Message ----------------------------------------------

  Heart* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Heart& from);
  void MergeFrom(const Heart& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 timestamp = 1;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  inline ::google::protobuf::int32 timestamp() const;
  inline void set_timestamp(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Server.Heart)
 private:
  inline void set_has_timestamp();
  inline void clear_has_timestamp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 timestamp_;
  friend void  protobuf_AddDesc_Server_2eproto();
  friend void protobuf_AssignDesc_Server_2eproto();
  friend void protobuf_ShutdownFile_Server_2eproto();

  void InitAsDefaultInstance();
  static Heart* default_instance_;
};
// -------------------------------------------------------------------

class Flags : public ::google::protobuf::Message {
 public:
  Flags();
  virtual ~Flags();

  Flags(const Flags& from);

  inline Flags& operator=(const Flags& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Flags& default_instance();

  void Swap(Flags* other);

  // implements Message ----------------------------------------------

  Flags* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Flags& from);
  void MergeFrom(const Flags& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 flags = 1;
  inline bool has_flags() const;
  inline void clear_flags();
  static const int kFlagsFieldNumber = 1;
  inline ::google::protobuf::int32 flags() const;
  inline void set_flags(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Server.Flags)
 private:
  inline void set_has_flags();
  inline void clear_has_flags();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 flags_;
  friend void  protobuf_AddDesc_Server_2eproto();
  friend void protobuf_AssignDesc_Server_2eproto();
  friend void protobuf_ShutdownFile_Server_2eproto();

  void InitAsDefaultInstance();
  static Flags* default_instance_;
};
// -------------------------------------------------------------------

class Login : public ::google::protobuf::Message {
 public:
  Login();
  virtual ~Login();

  Login(const Login& from);

  inline Login& operator=(const Login& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Login& default_instance();

  void Swap(Login* other);

  // implements Message ----------------------------------------------

  Login* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Login& from);
  void MergeFrom(const Login& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 err = 1;
  inline bool has_err() const;
  inline void clear_err();
  static const int kErrFieldNumber = 1;
  inline ::google::protobuf::int32 err() const;
  inline void set_err(::google::protobuf::int32 value);

  // optional int32 guid = 2;
  inline bool has_guid() const;
  inline void clear_guid();
  static const int kGuidFieldNumber = 2;
  inline ::google::protobuf::int32 guid() const;
  inline void set_guid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Server.Login)
 private:
  inline void set_has_err();
  inline void clear_has_err();
  inline void set_has_guid();
  inline void clear_has_guid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 err_;
  ::google::protobuf::int32 guid_;
  friend void  protobuf_AddDesc_Server_2eproto();
  friend void protobuf_AssignDesc_Server_2eproto();
  friend void protobuf_ShutdownFile_Server_2eproto();

  void InitAsDefaultInstance();
  static Login* default_instance_;
};
// -------------------------------------------------------------------

class CreateGame : public ::google::protobuf::Message {
 public:
  CreateGame();
  virtual ~CreateGame();

  CreateGame(const CreateGame& from);

  inline CreateGame& operator=(const CreateGame& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CreateGame& default_instance();

  void Swap(CreateGame* other);

  // implements Message ----------------------------------------------

  CreateGame* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CreateGame& from);
  void MergeFrom(const CreateGame& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 err = 1;
  inline bool has_err() const;
  inline void clear_err();
  static const int kErrFieldNumber = 1;
  inline ::google::protobuf::int32 err() const;
  inline void set_err(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Server.CreateGame)
 private:
  inline void set_has_err();
  inline void clear_has_err();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 err_;
  friend void  protobuf_AddDesc_Server_2eproto();
  friend void protobuf_AssignDesc_Server_2eproto();
  friend void protobuf_ShutdownFile_Server_2eproto();

  void InitAsDefaultInstance();
  static CreateGame* default_instance_;
};
// -------------------------------------------------------------------

class DestroyGame : public ::google::protobuf::Message {
 public:
  DestroyGame();
  virtual ~DestroyGame();

  DestroyGame(const DestroyGame& from);

  inline DestroyGame& operator=(const DestroyGame& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DestroyGame& default_instance();

  void Swap(DestroyGame* other);

  // implements Message ----------------------------------------------

  DestroyGame* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DestroyGame& from);
  void MergeFrom(const DestroyGame& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 err = 1;
  inline bool has_err() const;
  inline void clear_err();
  static const int kErrFieldNumber = 1;
  inline ::google::protobuf::int32 err() const;
  inline void set_err(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Server.DestroyGame)
 private:
  inline void set_has_err();
  inline void clear_has_err();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 err_;
  friend void  protobuf_AddDesc_Server_2eproto();
  friend void protobuf_AssignDesc_Server_2eproto();
  friend void protobuf_ShutdownFile_Server_2eproto();

  void InitAsDefaultInstance();
  static DestroyGame* default_instance_;
};
// -------------------------------------------------------------------

class EnterGame : public ::google::protobuf::Message {
 public:
  EnterGame();
  virtual ~EnterGame();

  EnterGame(const EnterGame& from);

  inline EnterGame& operator=(const EnterGame& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EnterGame& default_instance();

  void Swap(EnterGame* other);

  // implements Message ----------------------------------------------

  EnterGame* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EnterGame& from);
  void MergeFrom(const EnterGame& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 err = 1;
  inline bool has_err() const;
  inline void clear_err();
  static const int kErrFieldNumber = 1;
  inline ::google::protobuf::int32 err() const;
  inline void set_err(::google::protobuf::int32 value);

  // optional int32 guid = 2;
  inline bool has_guid() const;
  inline void clear_guid();
  static const int kGuidFieldNumber = 2;
  inline ::google::protobuf::int32 guid() const;
  inline void set_guid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Server.EnterGame)
 private:
  inline void set_has_err();
  inline void clear_has_err();
  inline void set_has_guid();
  inline void clear_has_guid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 err_;
  ::google::protobuf::int32 guid_;
  friend void  protobuf_AddDesc_Server_2eproto();
  friend void protobuf_AssignDesc_Server_2eproto();
  friend void protobuf_ShutdownFile_Server_2eproto();

  void InitAsDefaultInstance();
  static EnterGame* default_instance_;
};
// -------------------------------------------------------------------

class ExitGame : public ::google::protobuf::Message {
 public:
  ExitGame();
  virtual ~ExitGame();

  ExitGame(const ExitGame& from);

  inline ExitGame& operator=(const ExitGame& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ExitGame& default_instance();

  void Swap(ExitGame* other);

  // implements Message ----------------------------------------------

  ExitGame* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ExitGame& from);
  void MergeFrom(const ExitGame& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 err = 1;
  inline bool has_err() const;
  inline void clear_err();
  static const int kErrFieldNumber = 1;
  inline ::google::protobuf::int32 err() const;
  inline void set_err(::google::protobuf::int32 value);

  // optional int32 guid = 2;
  inline bool has_guid() const;
  inline void clear_guid();
  static const int kGuidFieldNumber = 2;
  inline ::google::protobuf::int32 guid() const;
  inline void set_guid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Server.ExitGame)
 private:
  inline void set_has_err();
  inline void clear_has_err();
  inline void set_has_guid();
  inline void clear_has_guid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 err_;
  ::google::protobuf::int32 guid_;
  friend void  protobuf_AddDesc_Server_2eproto();
  friend void protobuf_AssignDesc_Server_2eproto();
  friend void protobuf_ShutdownFile_Server_2eproto();

  void InitAsDefaultInstance();
  static ExitGame* default_instance_;
};
// -------------------------------------------------------------------

class SendToPlayer : public ::google::protobuf::Message {
 public:
  SendToPlayer();
  virtual ~SendToPlayer();

  SendToPlayer(const SendToPlayer& from);

  inline SendToPlayer& operator=(const SendToPlayer& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SendToPlayer& default_instance();

  void Swap(SendToPlayer* other);

  // implements Message ----------------------------------------------

  SendToPlayer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SendToPlayer& from);
  void MergeFrom(const SendToPlayer& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 size = 1;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 1;
  inline ::google::protobuf::int32 size() const;
  inline void set_size(::google::protobuf::int32 value);

  // required bytes data = 2;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 2;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  inline void set_allocated_data(::std::string* data);

  // @@protoc_insertion_point(class_scope:Server.SendToPlayer)
 private:
  inline void set_has_size();
  inline void clear_has_size();
  inline void set_has_data();
  inline void clear_has_data();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* data_;
  ::google::protobuf::int32 size_;
  friend void  protobuf_AddDesc_Server_2eproto();
  friend void protobuf_AssignDesc_Server_2eproto();
  friend void protobuf_ShutdownFile_Server_2eproto();

  void InitAsDefaultInstance();
  static SendToPlayer* default_instance_;
};
// ===================================================================


// ===================================================================

// Heart

// required int32 timestamp = 1;
inline bool Heart::has_timestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Heart::set_has_timestamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Heart::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Heart::clear_timestamp() {
  timestamp_ = 0;
  clear_has_timestamp();
}
inline ::google::protobuf::int32 Heart::timestamp() const {
  // @@protoc_insertion_point(field_get:Server.Heart.timestamp)
  return timestamp_;
}
inline void Heart::set_timestamp(::google::protobuf::int32 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:Server.Heart.timestamp)
}

// -------------------------------------------------------------------

// Flags

// required int32 flags = 1;
inline bool Flags::has_flags() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Flags::set_has_flags() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Flags::clear_has_flags() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Flags::clear_flags() {
  flags_ = 0;
  clear_has_flags();
}
inline ::google::protobuf::int32 Flags::flags() const {
  // @@protoc_insertion_point(field_get:Server.Flags.flags)
  return flags_;
}
inline void Flags::set_flags(::google::protobuf::int32 value) {
  set_has_flags();
  flags_ = value;
  // @@protoc_insertion_point(field_set:Server.Flags.flags)
}

// -------------------------------------------------------------------

// Login

// required int32 err = 1;
inline bool Login::has_err() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Login::set_has_err() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Login::clear_has_err() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Login::clear_err() {
  err_ = 0;
  clear_has_err();
}
inline ::google::protobuf::int32 Login::err() const {
  // @@protoc_insertion_point(field_get:Server.Login.err)
  return err_;
}
inline void Login::set_err(::google::protobuf::int32 value) {
  set_has_err();
  err_ = value;
  // @@protoc_insertion_point(field_set:Server.Login.err)
}

// optional int32 guid = 2;
inline bool Login::has_guid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Login::set_has_guid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Login::clear_has_guid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Login::clear_guid() {
  guid_ = 0;
  clear_has_guid();
}
inline ::google::protobuf::int32 Login::guid() const {
  // @@protoc_insertion_point(field_get:Server.Login.guid)
  return guid_;
}
inline void Login::set_guid(::google::protobuf::int32 value) {
  set_has_guid();
  guid_ = value;
  // @@protoc_insertion_point(field_set:Server.Login.guid)
}

// -------------------------------------------------------------------

// CreateGame

// required int32 err = 1;
inline bool CreateGame::has_err() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CreateGame::set_has_err() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CreateGame::clear_has_err() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CreateGame::clear_err() {
  err_ = 0;
  clear_has_err();
}
inline ::google::protobuf::int32 CreateGame::err() const {
  // @@protoc_insertion_point(field_get:Server.CreateGame.err)
  return err_;
}
inline void CreateGame::set_err(::google::protobuf::int32 value) {
  set_has_err();
  err_ = value;
  // @@protoc_insertion_point(field_set:Server.CreateGame.err)
}

// -------------------------------------------------------------------

// DestroyGame

// required int32 err = 1;
inline bool DestroyGame::has_err() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DestroyGame::set_has_err() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DestroyGame::clear_has_err() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DestroyGame::clear_err() {
  err_ = 0;
  clear_has_err();
}
inline ::google::protobuf::int32 DestroyGame::err() const {
  // @@protoc_insertion_point(field_get:Server.DestroyGame.err)
  return err_;
}
inline void DestroyGame::set_err(::google::protobuf::int32 value) {
  set_has_err();
  err_ = value;
  // @@protoc_insertion_point(field_set:Server.DestroyGame.err)
}

// -------------------------------------------------------------------

// EnterGame

// required int32 err = 1;
inline bool EnterGame::has_err() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EnterGame::set_has_err() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EnterGame::clear_has_err() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EnterGame::clear_err() {
  err_ = 0;
  clear_has_err();
}
inline ::google::protobuf::int32 EnterGame::err() const {
  // @@protoc_insertion_point(field_get:Server.EnterGame.err)
  return err_;
}
inline void EnterGame::set_err(::google::protobuf::int32 value) {
  set_has_err();
  err_ = value;
  // @@protoc_insertion_point(field_set:Server.EnterGame.err)
}

// optional int32 guid = 2;
inline bool EnterGame::has_guid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void EnterGame::set_has_guid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void EnterGame::clear_has_guid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void EnterGame::clear_guid() {
  guid_ = 0;
  clear_has_guid();
}
inline ::google::protobuf::int32 EnterGame::guid() const {
  // @@protoc_insertion_point(field_get:Server.EnterGame.guid)
  return guid_;
}
inline void EnterGame::set_guid(::google::protobuf::int32 value) {
  set_has_guid();
  guid_ = value;
  // @@protoc_insertion_point(field_set:Server.EnterGame.guid)
}

// -------------------------------------------------------------------

// ExitGame

// required int32 err = 1;
inline bool ExitGame::has_err() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ExitGame::set_has_err() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ExitGame::clear_has_err() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ExitGame::clear_err() {
  err_ = 0;
  clear_has_err();
}
inline ::google::protobuf::int32 ExitGame::err() const {
  // @@protoc_insertion_point(field_get:Server.ExitGame.err)
  return err_;
}
inline void ExitGame::set_err(::google::protobuf::int32 value) {
  set_has_err();
  err_ = value;
  // @@protoc_insertion_point(field_set:Server.ExitGame.err)
}

// optional int32 guid = 2;
inline bool ExitGame::has_guid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ExitGame::set_has_guid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ExitGame::clear_has_guid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ExitGame::clear_guid() {
  guid_ = 0;
  clear_has_guid();
}
inline ::google::protobuf::int32 ExitGame::guid() const {
  // @@protoc_insertion_point(field_get:Server.ExitGame.guid)
  return guid_;
}
inline void ExitGame::set_guid(::google::protobuf::int32 value) {
  set_has_guid();
  guid_ = value;
  // @@protoc_insertion_point(field_set:Server.ExitGame.guid)
}

// -------------------------------------------------------------------

// SendToPlayer

// required int32 size = 1;
inline bool SendToPlayer::has_size() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SendToPlayer::set_has_size() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SendToPlayer::clear_has_size() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SendToPlayer::clear_size() {
  size_ = 0;
  clear_has_size();
}
inline ::google::protobuf::int32 SendToPlayer::size() const {
  // @@protoc_insertion_point(field_get:Server.SendToPlayer.size)
  return size_;
}
inline void SendToPlayer::set_size(::google::protobuf::int32 value) {
  set_has_size();
  size_ = value;
  // @@protoc_insertion_point(field_set:Server.SendToPlayer.size)
}

// required bytes data = 2;
inline bool SendToPlayer::has_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SendToPlayer::set_has_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SendToPlayer::clear_has_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SendToPlayer::clear_data() {
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& SendToPlayer::data() const {
  // @@protoc_insertion_point(field_get:Server.SendToPlayer.data)
  return *data_;
}
inline void SendToPlayer::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(value);
  // @@protoc_insertion_point(field_set:Server.SendToPlayer.data)
}
inline void SendToPlayer::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(value);
  // @@protoc_insertion_point(field_set_char:Server.SendToPlayer.data)
}
inline void SendToPlayer::set_data(const void* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Server.SendToPlayer.data)
}
inline ::std::string* SendToPlayer::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Server.SendToPlayer.data)
  return data_;
}
inline ::std::string* SendToPlayer::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void SendToPlayer::set_allocated_data(::std::string* data) {
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete data_;
  }
  if (data) {
    set_has_data();
    data_ = data;
  } else {
    clear_has_data();
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Server.SendToPlayer.data)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Server

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Server::RESPONSE_MSG> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Server::RESPONSE_MSG>() {
  return ::Server::RESPONSE_MSG_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Server_2eproto__INCLUDED
