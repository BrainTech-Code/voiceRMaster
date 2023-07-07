/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace vector {
// Kind of combining function for contractions and reductions
enum class CombiningKind : uint32_t {
  ADD = 1,
  MUL = 2,
  MINUI = 4,
  MINSI = 8,
  MINF = 16,
  MAXUI = 32,
  MAXSI = 64,
  MAXF = 128,
  AND = 256,
  OR = 512,
  XOR = 1024,
};

::std::optional<CombiningKind> symbolizeCombiningKind(uint32_t);
std::string stringifyCombiningKind(CombiningKind);
::std::optional<CombiningKind> symbolizeCombiningKind(::llvm::StringRef);

inline constexpr CombiningKind operator|(CombiningKind a, CombiningKind b) {
  return static_cast<CombiningKind>(static_cast<uint32_t>(a) | static_cast<uint32_t>(b));
}
inline constexpr CombiningKind operator&(CombiningKind a, CombiningKind b) {
  return static_cast<CombiningKind>(static_cast<uint32_t>(a) & static_cast<uint32_t>(b));
}
inline constexpr CombiningKind operator^(CombiningKind a, CombiningKind b) {
  return static_cast<CombiningKind>(static_cast<uint32_t>(a) ^ static_cast<uint32_t>(b));
}
inline constexpr CombiningKind operator~(CombiningKind bits) {
  // Ensure only bits that can be present in the enum are set
  return static_cast<CombiningKind>(~static_cast<uint32_t>(bits) & static_cast<uint32_t>(2047u));
}
inline constexpr bool bitEnumContainsAll(CombiningKind bits, CombiningKind bit) {
  return (bits & bit) == bit;
}
inline constexpr bool bitEnumContainsAny(CombiningKind bits, CombiningKind bit) {
  return (static_cast<uint32_t>(bits) & static_cast<uint32_t>(bit)) != 0;
}
inline constexpr CombiningKind bitEnumClear(CombiningKind bits, CombiningKind bit) {
  return bits & ~bit;
}
inline constexpr CombiningKind bitEnumSet(CombiningKind bits, CombiningKind bit, /*optional*/bool value=true) {
  return value ? (bits | bit) : bitEnumClear(bits, bit);
}
  
inline std::string stringifyEnum(CombiningKind enumValue) {
  return stringifyCombiningKind(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<CombiningKind> symbolizeEnum<CombiningKind>(::llvm::StringRef str) {
  return symbolizeCombiningKind(str);
}
} // namespace vector
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::vector::CombiningKind, ::mlir::vector::CombiningKind> {
  template <typename ParserT>
  static FailureOr<::mlir::vector::CombiningKind> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Kind of combining function for contractions and reductions");

    // Symbolize the keyword.
    if (::std::optional<::mlir::vector::CombiningKind> attr = ::mlir::vector::symbolizeEnum<::mlir::vector::CombiningKind>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Kind of combining function for contractions and reductions specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::vector::CombiningKind value) {
  auto valueStr = stringifyEnum(value);
  auto underlyingValue = static_cast<std::make_unsigned_t<::mlir::vector::CombiningKind>>(value);
  if (underlyingValue && !llvm::has_single_bit(underlyingValue))
    return p << '"' << valueStr << '"';
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::vector::CombiningKind> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::vector::CombiningKind getEmptyKey() {
    return static_cast<::mlir::vector::CombiningKind>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::vector::CombiningKind getTombstoneKey() {
    return static_cast<::mlir::vector::CombiningKind>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::vector::CombiningKind &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::vector::CombiningKind &lhs, const ::mlir::vector::CombiningKind &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace vector {
// Iterator type
enum class IteratorType : uint32_t {
  parallel = 0,
  reduction = 1,
};

::std::optional<IteratorType> symbolizeIteratorType(uint32_t);
::llvm::StringRef stringifyIteratorType(IteratorType);
::std::optional<IteratorType> symbolizeIteratorType(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForIteratorType() {
  return 1;
}


inline ::llvm::StringRef stringifyEnum(IteratorType enumValue) {
  return stringifyIteratorType(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<IteratorType> symbolizeEnum<IteratorType>(::llvm::StringRef str) {
  return symbolizeIteratorType(str);
}
} // namespace vector
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::vector::IteratorType, ::mlir::vector::IteratorType> {
  template <typename ParserT>
  static FailureOr<::mlir::vector::IteratorType> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Iterator type");

    // Symbolize the keyword.
    if (::std::optional<::mlir::vector::IteratorType> attr = ::mlir::vector::symbolizeEnum<::mlir::vector::IteratorType>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Iterator type specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::vector::IteratorType value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::vector::IteratorType> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::vector::IteratorType getEmptyKey() {
    return static_cast<::mlir::vector::IteratorType>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::vector::IteratorType getTombstoneKey() {
    return static_cast<::mlir::vector::IteratorType>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::vector::IteratorType &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::vector::IteratorType &lhs, const ::mlir::vector::IteratorType &rhs) {
    return lhs == rhs;
  }
};
}
