/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace TF {
class _TfrtGetResourceOp;
} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {
class _TfrtSetResourceOp;
} // namespace TF
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_TfrtGetResourceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class _TfrtGetResourceOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  _TfrtGetResourceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getIndicesAttr();
  ::mlir::ArrayAttr getIndices();
  ::mlir::ArrayAttr getSharedNameAttr();
  ::mlir::ArrayAttr getSharedName();
  ::mlir::ArrayAttr getContainerAttr();
  ::mlir::ArrayAttr getContainer();
};
} // namespace detail
template <typename RangeT>
class _TfrtGetResourceOpGenericAdaptor : public detail::_TfrtGetResourceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::_TfrtGetResourceOpGenericAdaptorBase;
public:
  _TfrtGetResourceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class _TfrtGetResourceOpAdaptor : public _TfrtGetResourceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using _TfrtGetResourceOpGenericAdaptor::_TfrtGetResourceOpGenericAdaptor;
  _TfrtGetResourceOpAdaptor(_TfrtGetResourceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class _TfrtGetResourceOp : public ::mlir::Op<_TfrtGetResourceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::TF::NoConstantFold, ResourceHandleAllocatorInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = _TfrtGetResourceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = _TfrtGetResourceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("container"), ::llvm::StringRef("indices"), ::llvm::StringRef("shared_name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getContainerAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getContainerAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIndicesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIndicesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getSharedNameAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getSharedNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf._TfrtGetResource");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResults();
  ::mlir::ArrayAttr getIndicesAttr();
  ::mlir::ArrayAttr getIndices();
  ::mlir::ArrayAttr getSharedNameAttr();
  ::mlir::ArrayAttr getSharedName();
  ::mlir::ArrayAttr getContainerAttr();
  ::mlir::ArrayAttr getContainer();
  void setIndicesAttr(::mlir::ArrayAttr attr);
  void setSharedNameAttr(::mlir::ArrayAttr attr);
  void setContainerAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::ArrayAttr indices, ::mlir::ArrayAttr shared_name, ::mlir::ArrayAttr container);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  llvm::SmallVector<ResourceHandleValueAndId, 4> GetResourceHandleValueAndIdList(llvm::SmallDenseMap<ResourceHandle, int64_t>&resource_handle_id_map, int64_t&next_id);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace TF
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::TF::_TfrtGetResourceOp)

namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_TfrtSetResourceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class _TfrtSetResourceOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  _TfrtSetResourceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getIndexAttr();
  uint64_t getIndex();
};
} // namespace detail
template <typename RangeT>
class _TfrtSetResourceOpGenericAdaptor : public detail::_TfrtSetResourceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::_TfrtSetResourceOpGenericAdaptorBase;
public:
  _TfrtSetResourceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getArg() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class _TfrtSetResourceOpAdaptor : public _TfrtSetResourceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using _TfrtSetResourceOpGenericAdaptor::_TfrtSetResourceOpGenericAdaptor;
  _TfrtSetResourceOpAdaptor(_TfrtSetResourceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class _TfrtSetResourceOp : public ::mlir::Op<_TfrtSetResourceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = _TfrtSetResourceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = _TfrtSetResourceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("index")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIndexAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIndexAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf._TfrtSetResource");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getArg();
  ::mlir::MutableOperandRange getArgMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::IntegerAttr getIndexAttr();
  uint64_t getIndex();
  void setIndexAttr(::mlir::IntegerAttr attr);
  void setIndex(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg, ::mlir::IntegerAttr index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg, ::mlir::IntegerAttr index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg, uint64_t index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg, uint64_t index);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace TF
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::TF::_TfrtSetResourceOp)


#endif  // GET_OP_CLASSES
