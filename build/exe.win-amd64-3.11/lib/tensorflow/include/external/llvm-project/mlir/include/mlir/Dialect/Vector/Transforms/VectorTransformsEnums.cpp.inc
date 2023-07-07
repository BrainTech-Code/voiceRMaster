/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace vector {
::llvm::StringRef stringifyVectorContractLowering(VectorContractLowering val) {
  switch (val) {
    case VectorContractLowering::Dot: return "dot";
    case VectorContractLowering::Matmul: return "matmulintrinsics";
    case VectorContractLowering::OuterProduct: return "outerproduct";
    case VectorContractLowering::ParallelArith: return "parallelarith";
  }
  return "";
}

::std::optional<VectorContractLowering> symbolizeVectorContractLowering(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<VectorContractLowering>>(str)
      .Case("dot", VectorContractLowering::Dot)
      .Case("matmulintrinsics", VectorContractLowering::Matmul)
      .Case("outerproduct", VectorContractLowering::OuterProduct)
      .Case("parallelarith", VectorContractLowering::ParallelArith)
      .Default(::std::nullopt);
}
::std::optional<VectorContractLowering> symbolizeVectorContractLowering(uint32_t value) {
  switch (value) {
  case 0: return VectorContractLowering::Dot;
  case 1: return VectorContractLowering::Matmul;
  case 2: return VectorContractLowering::OuterProduct;
  case 3: return VectorContractLowering::ParallelArith;
  default: return ::std::nullopt;
  }
}

bool VectorContractLoweringAttr::classof(::mlir::Attribute attr) {
  return (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(32)))) && (((attr.cast<::mlir::IntegerAttr>().getInt() == 0)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 1)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 2)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 3)));
}
VectorContractLoweringAttr VectorContractLoweringAttr::get(::mlir::MLIRContext *context, VectorContractLowering val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return baseAttr.cast<VectorContractLoweringAttr>();
}
VectorContractLowering VectorContractLoweringAttr::getValue() const {
  return static_cast<VectorContractLowering>(::mlir::IntegerAttr::getInt());
}
} // namespace vector
} // namespace mlir

namespace mlir {
namespace vector {
::llvm::StringRef stringifyVectorMultiReductionLowering(VectorMultiReductionLowering val) {
  switch (val) {
    case VectorMultiReductionLowering::InnerParallel: return "innerparallel";
    case VectorMultiReductionLowering::InnerReduction: return "innerreduction";
  }
  return "";
}

::std::optional<VectorMultiReductionLowering> symbolizeVectorMultiReductionLowering(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<VectorMultiReductionLowering>>(str)
      .Case("innerparallel", VectorMultiReductionLowering::InnerParallel)
      .Case("innerreduction", VectorMultiReductionLowering::InnerReduction)
      .Default(::std::nullopt);
}
::std::optional<VectorMultiReductionLowering> symbolizeVectorMultiReductionLowering(uint32_t value) {
  switch (value) {
  case 0: return VectorMultiReductionLowering::InnerParallel;
  case 1: return VectorMultiReductionLowering::InnerReduction;
  default: return ::std::nullopt;
  }
}

bool VectorMultiReductionLoweringAttr::classof(::mlir::Attribute attr) {
  return (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(32)))) && (((attr.cast<::mlir::IntegerAttr>().getInt() == 0)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 1)));
}
VectorMultiReductionLoweringAttr VectorMultiReductionLoweringAttr::get(::mlir::MLIRContext *context, VectorMultiReductionLowering val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return baseAttr.cast<VectorMultiReductionLoweringAttr>();
}
VectorMultiReductionLowering VectorMultiReductionLoweringAttr::getValue() const {
  return static_cast<VectorMultiReductionLowering>(::mlir::IntegerAttr::getInt());
}
} // namespace vector
} // namespace mlir

namespace mlir {
namespace vector {
::llvm::StringRef stringifyVectorTransferSplit(VectorTransferSplit val) {
  switch (val) {
    case VectorTransferSplit::None: return "none";
    case VectorTransferSplit::VectorTransfer: return "vector-transfer";
    case VectorTransferSplit::LinalgCopy: return "linalg-copy";
    case VectorTransferSplit::ForceInBounds: return "force-in-bounds";
  }
  return "";
}

::std::optional<VectorTransferSplit> symbolizeVectorTransferSplit(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<VectorTransferSplit>>(str)
      .Case("none", VectorTransferSplit::None)
      .Case("vector-transfer", VectorTransferSplit::VectorTransfer)
      .Case("linalg-copy", VectorTransferSplit::LinalgCopy)
      .Case("force-in-bounds", VectorTransferSplit::ForceInBounds)
      .Default(::std::nullopt);
}
::std::optional<VectorTransferSplit> symbolizeVectorTransferSplit(uint32_t value) {
  switch (value) {
  case 0: return VectorTransferSplit::None;
  case 1: return VectorTransferSplit::VectorTransfer;
  case 2: return VectorTransferSplit::LinalgCopy;
  case 3: return VectorTransferSplit::ForceInBounds;
  default: return ::std::nullopt;
  }
}

bool VectorTransferSplitAttr::classof(::mlir::Attribute attr) {
  return (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(32)))) && (((attr.cast<::mlir::IntegerAttr>().getInt() == 0)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 1)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 2)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 3)));
}
VectorTransferSplitAttr VectorTransferSplitAttr::get(::mlir::MLIRContext *context, VectorTransferSplit val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return baseAttr.cast<VectorTransferSplitAttr>();
}
VectorTransferSplit VectorTransferSplitAttr::getValue() const {
  return static_cast<VectorTransferSplit>(::mlir::IntegerAttr::getInt());
}
} // namespace vector
} // namespace mlir

namespace mlir {
namespace vector {
::llvm::StringRef stringifyVectorTransposeLowering(VectorTransposeLowering val) {
  switch (val) {
    case VectorTransposeLowering::EltWise: return "eltwise";
    case VectorTransposeLowering::Flat: return "flat_transpose";
    case VectorTransposeLowering::Shuffle: return "shuffle";
  }
  return "";
}

::std::optional<VectorTransposeLowering> symbolizeVectorTransposeLowering(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<VectorTransposeLowering>>(str)
      .Case("eltwise", VectorTransposeLowering::EltWise)
      .Case("flat_transpose", VectorTransposeLowering::Flat)
      .Case("shuffle", VectorTransposeLowering::Shuffle)
      .Default(::std::nullopt);
}
::std::optional<VectorTransposeLowering> symbolizeVectorTransposeLowering(uint32_t value) {
  switch (value) {
  case 0: return VectorTransposeLowering::EltWise;
  case 1: return VectorTransposeLowering::Flat;
  case 2: return VectorTransposeLowering::Shuffle;
  default: return ::std::nullopt;
  }
}

bool VectorTransposeLoweringAttr::classof(::mlir::Attribute attr) {
  return (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(32)))) && (((attr.cast<::mlir::IntegerAttr>().getInt() == 0)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 1)) || ((attr.cast<::mlir::IntegerAttr>().getInt() == 2)));
}
VectorTransposeLoweringAttr VectorTransposeLoweringAttr::get(::mlir::MLIRContext *context, VectorTransposeLowering val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return baseAttr.cast<VectorTransposeLoweringAttr>();
}
VectorTransposeLowering VectorTransposeLoweringAttr::getValue() const {
  return static_cast<VectorTransposeLowering>(::mlir::IntegerAttr::getInt());
}
} // namespace vector
} // namespace mlir
