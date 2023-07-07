// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/compiler/xla/service/metrics.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcompiler_2fxla_2fservice_2fmetrics_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcompiler_2fxla_2fservice_2fmetrics_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021009 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/duration.pb.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcompiler_2fxla_2fservice_2fmetrics_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2fcompiler_2fxla_2fservice_2fmetrics_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcompiler_2fxla_2fservice_2fmetrics_2eproto;
namespace xla {
class CompilationLogEntry;
struct CompilationLogEntryDefaultTypeInternal;
extern CompilationLogEntryDefaultTypeInternal _CompilationLogEntry_default_instance_;
}  // namespace xla
PROTOBUF_NAMESPACE_OPEN
template<> ::xla::CompilationLogEntry* Arena::CreateMaybeMessage<::xla::CompilationLogEntry>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace xla {

enum CompilationLogEntry_CompilationStage : int {
  CompilationLogEntry_CompilationStage_UNSPECIFIED = 0,
  CompilationLogEntry_CompilationStage_END_TO_END = 1,
  CompilationLogEntry_CompilationStage_HLO_PASSES = 2,
  CompilationLogEntry_CompilationStage_CODE_GENERATION = 3,
  CompilationLogEntry_CompilationStage_BACKEND_PASSES = 4,
  CompilationLogEntry_CompilationStage_CompilationLogEntry_CompilationStage_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  CompilationLogEntry_CompilationStage_CompilationLogEntry_CompilationStage_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool CompilationLogEntry_CompilationStage_IsValid(int value);
constexpr CompilationLogEntry_CompilationStage CompilationLogEntry_CompilationStage_CompilationStage_MIN = CompilationLogEntry_CompilationStage_UNSPECIFIED;
constexpr CompilationLogEntry_CompilationStage CompilationLogEntry_CompilationStage_CompilationStage_MAX = CompilationLogEntry_CompilationStage_BACKEND_PASSES;
constexpr int CompilationLogEntry_CompilationStage_CompilationStage_ARRAYSIZE = CompilationLogEntry_CompilationStage_CompilationStage_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CompilationLogEntry_CompilationStage_descriptor();
template<typename T>
inline const std::string& CompilationLogEntry_CompilationStage_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CompilationLogEntry_CompilationStage>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CompilationLogEntry_CompilationStage_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CompilationLogEntry_CompilationStage_descriptor(), enum_t_value);
}
inline bool CompilationLogEntry_CompilationStage_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, CompilationLogEntry_CompilationStage* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CompilationLogEntry_CompilationStage>(
    CompilationLogEntry_CompilationStage_descriptor(), name, value);
}
// ===================================================================

class CompilationLogEntry final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:xla.CompilationLogEntry) */ {
 public:
  inline CompilationLogEntry() : CompilationLogEntry(nullptr) {}
  ~CompilationLogEntry() override;
  explicit PROTOBUF_CONSTEXPR CompilationLogEntry(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CompilationLogEntry(const CompilationLogEntry& from);
  CompilationLogEntry(CompilationLogEntry&& from) noexcept
    : CompilationLogEntry() {
    *this = ::std::move(from);
  }

  inline CompilationLogEntry& operator=(const CompilationLogEntry& from) {
    CopyFrom(from);
    return *this;
  }
  inline CompilationLogEntry& operator=(CompilationLogEntry&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CompilationLogEntry& default_instance() {
    return *internal_default_instance();
  }
  static inline const CompilationLogEntry* internal_default_instance() {
    return reinterpret_cast<const CompilationLogEntry*>(
               &_CompilationLogEntry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CompilationLogEntry& a, CompilationLogEntry& b) {
    a.Swap(&b);
  }
  inline void Swap(CompilationLogEntry* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CompilationLogEntry* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CompilationLogEntry* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CompilationLogEntry>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CompilationLogEntry& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CompilationLogEntry& from) {
    CompilationLogEntry::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CompilationLogEntry* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "xla.CompilationLogEntry";
  }
  protected:
  explicit CompilationLogEntry(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef CompilationLogEntry_CompilationStage CompilationStage;
  static constexpr CompilationStage UNSPECIFIED =
    CompilationLogEntry_CompilationStage_UNSPECIFIED;
  static constexpr CompilationStage END_TO_END =
    CompilationLogEntry_CompilationStage_END_TO_END;
  static constexpr CompilationStage HLO_PASSES =
    CompilationLogEntry_CompilationStage_HLO_PASSES;
  static constexpr CompilationStage CODE_GENERATION =
    CompilationLogEntry_CompilationStage_CODE_GENERATION;
  static constexpr CompilationStage BACKEND_PASSES =
    CompilationLogEntry_CompilationStage_BACKEND_PASSES;
  static inline bool CompilationStage_IsValid(int value) {
    return CompilationLogEntry_CompilationStage_IsValid(value);
  }
  static constexpr CompilationStage CompilationStage_MIN =
    CompilationLogEntry_CompilationStage_CompilationStage_MIN;
  static constexpr CompilationStage CompilationStage_MAX =
    CompilationLogEntry_CompilationStage_CompilationStage_MAX;
  static constexpr int CompilationStage_ARRAYSIZE =
    CompilationLogEntry_CompilationStage_CompilationStage_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CompilationStage_descriptor() {
    return CompilationLogEntry_CompilationStage_descriptor();
  }
  template<typename T>
  static inline const std::string& CompilationStage_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CompilationStage>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CompilationStage_Name.");
    return CompilationLogEntry_CompilationStage_Name(enum_t_value);
  }
  static inline bool CompilationStage_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      CompilationStage* value) {
    return CompilationLogEntry_CompilationStage_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kTimestampFieldNumber = 1,
    kDurationFieldNumber = 3,
    kStageFieldNumber = 2,
    kTaskIndexFieldNumber = 4,
  };
  // .google.protobuf.Timestamp timestamp = 1;
  bool has_timestamp() const;
  private:
  bool _internal_has_timestamp() const;
  public:
  void clear_timestamp();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& timestamp() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_timestamp();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_timestamp();
  void set_allocated_timestamp(::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_timestamp() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_timestamp();
  public:
  void unsafe_arena_set_allocated_timestamp(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_timestamp();

  // .google.protobuf.Duration duration = 3;
  bool has_duration() const;
  private:
  bool _internal_has_duration() const;
  public:
  void clear_duration();
  const ::PROTOBUF_NAMESPACE_ID::Duration& duration() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Duration* release_duration();
  ::PROTOBUF_NAMESPACE_ID::Duration* mutable_duration();
  void set_allocated_duration(::PROTOBUF_NAMESPACE_ID::Duration* duration);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Duration& _internal_duration() const;
  ::PROTOBUF_NAMESPACE_ID::Duration* _internal_mutable_duration();
  public:
  void unsafe_arena_set_allocated_duration(
      ::PROTOBUF_NAMESPACE_ID::Duration* duration);
  ::PROTOBUF_NAMESPACE_ID::Duration* unsafe_arena_release_duration();

  // .xla.CompilationLogEntry.CompilationStage stage = 2;
  void clear_stage();
  ::xla::CompilationLogEntry_CompilationStage stage() const;
  void set_stage(::xla::CompilationLogEntry_CompilationStage value);
  private:
  ::xla::CompilationLogEntry_CompilationStage _internal_stage() const;
  void _internal_set_stage(::xla::CompilationLogEntry_CompilationStage value);
  public:

  // int32 task_index = 4;
  void clear_task_index();
  int32_t task_index() const;
  void set_task_index(int32_t value);
  private:
  int32_t _internal_task_index() const;
  void _internal_set_task_index(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:xla.CompilationLogEntry)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp_;
    ::PROTOBUF_NAMESPACE_ID::Duration* duration_;
    int stage_;
    int32_t task_index_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_tensorflow_2fcompiler_2fxla_2fservice_2fmetrics_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CompilationLogEntry

// .google.protobuf.Timestamp timestamp = 1;
inline bool CompilationLogEntry::_internal_has_timestamp() const {
  return this != internal_default_instance() && _impl_.timestamp_ != nullptr;
}
inline bool CompilationLogEntry::has_timestamp() const {
  return _internal_has_timestamp();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CompilationLogEntry::_internal_timestamp() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.timestamp_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& CompilationLogEntry::timestamp() const {
  // @@protoc_insertion_point(field_get:xla.CompilationLogEntry.timestamp)
  return _internal_timestamp();
}
inline void CompilationLogEntry::unsafe_arena_set_allocated_timestamp(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.timestamp_);
  }
  _impl_.timestamp_ = timestamp;
  if (timestamp) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:xla.CompilationLogEntry.timestamp)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CompilationLogEntry::release_timestamp() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.timestamp_;
  _impl_.timestamp_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CompilationLogEntry::unsafe_arena_release_timestamp() {
  // @@protoc_insertion_point(field_release:xla.CompilationLogEntry.timestamp)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.timestamp_;
  _impl_.timestamp_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CompilationLogEntry::_internal_mutable_timestamp() {
  
  if (_impl_.timestamp_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.timestamp_ = p;
  }
  return _impl_.timestamp_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* CompilationLogEntry::mutable_timestamp() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_timestamp();
  // @@protoc_insertion_point(field_mutable:xla.CompilationLogEntry.timestamp)
  return _msg;
}
inline void CompilationLogEntry::set_allocated_timestamp(::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.timestamp_);
  }
  if (timestamp) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp));
    if (message_arena != submessage_arena) {
      timestamp = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:xla.CompilationLogEntry.timestamp)
}

// .xla.CompilationLogEntry.CompilationStage stage = 2;
inline void CompilationLogEntry::clear_stage() {
  _impl_.stage_ = 0;
}
inline ::xla::CompilationLogEntry_CompilationStage CompilationLogEntry::_internal_stage() const {
  return static_cast< ::xla::CompilationLogEntry_CompilationStage >(_impl_.stage_);
}
inline ::xla::CompilationLogEntry_CompilationStage CompilationLogEntry::stage() const {
  // @@protoc_insertion_point(field_get:xla.CompilationLogEntry.stage)
  return _internal_stage();
}
inline void CompilationLogEntry::_internal_set_stage(::xla::CompilationLogEntry_CompilationStage value) {
  
  _impl_.stage_ = value;
}
inline void CompilationLogEntry::set_stage(::xla::CompilationLogEntry_CompilationStage value) {
  _internal_set_stage(value);
  // @@protoc_insertion_point(field_set:xla.CompilationLogEntry.stage)
}

// .google.protobuf.Duration duration = 3;
inline bool CompilationLogEntry::_internal_has_duration() const {
  return this != internal_default_instance() && _impl_.duration_ != nullptr;
}
inline bool CompilationLogEntry::has_duration() const {
  return _internal_has_duration();
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& CompilationLogEntry::_internal_duration() const {
  const ::PROTOBUF_NAMESPACE_ID::Duration* p = _impl_.duration_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Duration&>(
      ::PROTOBUF_NAMESPACE_ID::_Duration_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& CompilationLogEntry::duration() const {
  // @@protoc_insertion_point(field_get:xla.CompilationLogEntry.duration)
  return _internal_duration();
}
inline void CompilationLogEntry::unsafe_arena_set_allocated_duration(
    ::PROTOBUF_NAMESPACE_ID::Duration* duration) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.duration_);
  }
  _impl_.duration_ = duration;
  if (duration) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:xla.CompilationLogEntry.duration)
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* CompilationLogEntry::release_duration() {
  
  ::PROTOBUF_NAMESPACE_ID::Duration* temp = _impl_.duration_;
  _impl_.duration_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* CompilationLogEntry::unsafe_arena_release_duration() {
  // @@protoc_insertion_point(field_release:xla.CompilationLogEntry.duration)
  
  ::PROTOBUF_NAMESPACE_ID::Duration* temp = _impl_.duration_;
  _impl_.duration_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* CompilationLogEntry::_internal_mutable_duration() {
  
  if (_impl_.duration_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Duration>(GetArenaForAllocation());
    _impl_.duration_ = p;
  }
  return _impl_.duration_;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* CompilationLogEntry::mutable_duration() {
  ::PROTOBUF_NAMESPACE_ID::Duration* _msg = _internal_mutable_duration();
  // @@protoc_insertion_point(field_mutable:xla.CompilationLogEntry.duration)
  return _msg;
}
inline void CompilationLogEntry::set_allocated_duration(::PROTOBUF_NAMESPACE_ID::Duration* duration) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.duration_);
  }
  if (duration) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(duration));
    if (message_arena != submessage_arena) {
      duration = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, duration, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.duration_ = duration;
  // @@protoc_insertion_point(field_set_allocated:xla.CompilationLogEntry.duration)
}

// int32 task_index = 4;
inline void CompilationLogEntry::clear_task_index() {
  _impl_.task_index_ = 0;
}
inline int32_t CompilationLogEntry::_internal_task_index() const {
  return _impl_.task_index_;
}
inline int32_t CompilationLogEntry::task_index() const {
  // @@protoc_insertion_point(field_get:xla.CompilationLogEntry.task_index)
  return _internal_task_index();
}
inline void CompilationLogEntry::_internal_set_task_index(int32_t value) {
  
  _impl_.task_index_ = value;
}
inline void CompilationLogEntry::set_task_index(int32_t value) {
  _internal_set_task_index(value);
  // @@protoc_insertion_point(field_set:xla.CompilationLogEntry.task_index)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace xla

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::xla::CompilationLogEntry_CompilationStage> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::xla::CompilationLogEntry_CompilationStage>() {
  return ::xla::CompilationLogEntry_CompilationStage_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcompiler_2fxla_2fservice_2fmetrics_2eproto
