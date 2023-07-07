// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/types.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fframework_2ftypes_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fframework_2ftypes_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fframework_2ftypes_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2fcore_2fframework_2ftypes_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcore_2fframework_2ftypes_2eproto;
namespace tensorflow {
class SerializedDType;
struct SerializedDTypeDefaultTypeInternal;
extern SerializedDTypeDefaultTypeInternal _SerializedDType_default_instance_;
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::SerializedDType* Arena::CreateMaybeMessage<::tensorflow::SerializedDType>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {

enum DataType : int {
  DT_INVALID = 0,
  DT_FLOAT = 1,
  DT_DOUBLE = 2,
  DT_INT32 = 3,
  DT_UINT8 = 4,
  DT_INT16 = 5,
  DT_INT8 = 6,
  DT_STRING = 7,
  DT_COMPLEX64 = 8,
  DT_INT64 = 9,
  DT_BOOL = 10,
  DT_QINT8 = 11,
  DT_QUINT8 = 12,
  DT_QINT32 = 13,
  DT_BFLOAT16 = 14,
  DT_QINT16 = 15,
  DT_QUINT16 = 16,
  DT_UINT16 = 17,
  DT_COMPLEX128 = 18,
  DT_HALF = 19,
  DT_RESOURCE = 20,
  DT_VARIANT = 21,
  DT_UINT32 = 22,
  DT_UINT64 = 23,
  DT_FLOAT8_E5M2 = 24,
  DT_FLOAT8_E4M3FN = 25,
  DT_FLOAT_REF = 101,
  DT_DOUBLE_REF = 102,
  DT_INT32_REF = 103,
  DT_UINT8_REF = 104,
  DT_INT16_REF = 105,
  DT_INT8_REF = 106,
  DT_STRING_REF = 107,
  DT_COMPLEX64_REF = 108,
  DT_INT64_REF = 109,
  DT_BOOL_REF = 110,
  DT_QINT8_REF = 111,
  DT_QUINT8_REF = 112,
  DT_QINT32_REF = 113,
  DT_BFLOAT16_REF = 114,
  DT_QINT16_REF = 115,
  DT_QUINT16_REF = 116,
  DT_UINT16_REF = 117,
  DT_COMPLEX128_REF = 118,
  DT_HALF_REF = 119,
  DT_RESOURCE_REF = 120,
  DT_VARIANT_REF = 121,
  DT_UINT32_REF = 122,
  DT_UINT64_REF = 123,
  DT_FLOAT8_E5M2_REF = 124,
  DT_FLOAT8_E4M3FN_REF = 125,
  DataType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  DataType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool DataType_IsValid(int value);
constexpr DataType DataType_MIN = DT_INVALID;
constexpr DataType DataType_MAX = DT_FLOAT8_E4M3FN_REF;
constexpr int DataType_ARRAYSIZE = DataType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DataType_descriptor();
template<typename T>
inline const std::string& DataType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DataType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DataType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    DataType_descriptor(), enum_t_value);
}
inline bool DataType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, DataType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<DataType>(
    DataType_descriptor(), name, value);
}
// ===================================================================

class SerializedDType final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.SerializedDType) */ {
 public:
  inline SerializedDType() : SerializedDType(nullptr) {}
  ~SerializedDType() override;
  explicit PROTOBUF_CONSTEXPR SerializedDType(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SerializedDType(const SerializedDType& from);
  SerializedDType(SerializedDType&& from) noexcept
    : SerializedDType() {
    *this = ::std::move(from);
  }

  inline SerializedDType& operator=(const SerializedDType& from) {
    CopyFrom(from);
    return *this;
  }
  inline SerializedDType& operator=(SerializedDType&& from) noexcept {
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
  static const SerializedDType& default_instance() {
    return *internal_default_instance();
  }
  static inline const SerializedDType* internal_default_instance() {
    return reinterpret_cast<const SerializedDType*>(
               &_SerializedDType_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SerializedDType& a, SerializedDType& b) {
    a.Swap(&b);
  }
  inline void Swap(SerializedDType* other) {
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
  void UnsafeArenaSwap(SerializedDType* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SerializedDType* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SerializedDType>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SerializedDType& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SerializedDType& from) {
    SerializedDType::MergeImpl(*this, from);
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
  void InternalSwap(SerializedDType* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.SerializedDType";
  }
  protected:
  explicit SerializedDType(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDatatypeFieldNumber = 1,
  };
  // .tensorflow.DataType datatype = 1;
  void clear_datatype();
  ::tensorflow::DataType datatype() const;
  void set_datatype(::tensorflow::DataType value);
  private:
  ::tensorflow::DataType _internal_datatype() const;
  void _internal_set_datatype(::tensorflow::DataType value);
  public:

  // @@protoc_insertion_point(class_scope:tensorflow.SerializedDType)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int datatype_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_tensorflow_2fcore_2fframework_2ftypes_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SerializedDType

// .tensorflow.DataType datatype = 1;
inline void SerializedDType::clear_datatype() {
  _impl_.datatype_ = 0;
}
inline ::tensorflow::DataType SerializedDType::_internal_datatype() const {
  return static_cast< ::tensorflow::DataType >(_impl_.datatype_);
}
inline ::tensorflow::DataType SerializedDType::datatype() const {
  // @@protoc_insertion_point(field_get:tensorflow.SerializedDType.datatype)
  return _internal_datatype();
}
inline void SerializedDType::_internal_set_datatype(::tensorflow::DataType value) {
  
  _impl_.datatype_ = value;
}
inline void SerializedDType::set_datatype(::tensorflow::DataType value) {
  _internal_set_datatype(value);
  // @@protoc_insertion_point(field_set:tensorflow.SerializedDType.datatype)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::tensorflow::DataType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tensorflow::DataType>() {
  return ::tensorflow::DataType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fframework_2ftypes_2eproto
