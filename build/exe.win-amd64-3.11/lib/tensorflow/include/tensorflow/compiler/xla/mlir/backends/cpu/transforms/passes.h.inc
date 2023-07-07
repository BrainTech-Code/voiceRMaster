/* Autogenerated by mlir-tblgen; don't manually edit */

#ifdef GEN_PASS_DECL
// Generate declarations for all passes.
#define GEN_PASS_DECL_CONVERTLMHLOTOCPURUNTIMEPASS
#define GEN_PASS_DECL_CONVERTXLACPUMEMREFELEMENTCASTTOLLVMPASS
#define GEN_PASS_DECL_LEGALIZECOLLECTIVEOPSPASS
#define GEN_PASS_DECL_LEGALIZEI1VECTORTRANSFEROPSPASS
#define GEN_PASS_DECL_LEGALIZEXLAABIPASS
#define GEN_PASS_DECL_REMOVECOPIESTOOUTPARAMSPASS
#undef GEN_PASS_DECL
#endif // GEN_PASS_DECL

//===----------------------------------------------------------------------===//
// ConvertLmhloToCpuRuntimePass
//===----------------------------------------------------------------------===//
#ifdef GEN_PASS_DECL_CONVERTLMHLOTOCPURUNTIMEPASS
#undef GEN_PASS_DECL_CONVERTLMHLOTOCPURUNTIMEPASS
#endif // GEN_PASS_DECL_CONVERTLMHLOTOCPURUNTIMEPASS
#ifdef GEN_PASS_DEF_CONVERTLMHLOTOCPURUNTIMEPASS
namespace impl {

template <typename DerivedT>
class ConvertLmhloToCpuRuntimePassBase : public ::mlir::OperationPass<mlir::ModuleOp> {
public:
  using Base = ConvertLmhloToCpuRuntimePassBase;

  ConvertLmhloToCpuRuntimePassBase() : ::mlir::OperationPass<mlir::ModuleOp>(::mlir::TypeID::get<DerivedT>()) {}
  ConvertLmhloToCpuRuntimePassBase(const ConvertLmhloToCpuRuntimePassBase &other) : ::mlir::OperationPass<mlir::ModuleOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xla-lmhlo-to-cpu-runtime");
  }
  ::llvm::StringRef getArgument() const override { return "xla-lmhlo-to-cpu-runtime"; }

  ::llvm::StringRef getDescription() const override { return "Converts lmhlo operations to XLA Cpu runtime custom calls"; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("ConvertLmhloToCpuRuntimePass");
  }
  ::llvm::StringRef getName() const override { return "ConvertLmhloToCpuRuntimePass"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(ConvertLmhloToCpuRuntimePassBase<DerivedT>)

protected:
private:
};
} // namespace impl
#undef GEN_PASS_DEF_CONVERTLMHLOTOCPURUNTIMEPASS
#endif // GEN_PASS_DEF_CONVERTLMHLOTOCPURUNTIMEPASS

//===----------------------------------------------------------------------===//
// ConvertXlaCpuMemRefElementCastToLLVMPass
//===----------------------------------------------------------------------===//
#ifdef GEN_PASS_DECL_CONVERTXLACPUMEMREFELEMENTCASTTOLLVMPASS
#undef GEN_PASS_DECL_CONVERTXLACPUMEMREFELEMENTCASTTOLLVMPASS
#endif // GEN_PASS_DECL_CONVERTXLACPUMEMREFELEMENTCASTTOLLVMPASS
#ifdef GEN_PASS_DEF_CONVERTXLACPUMEMREFELEMENTCASTTOLLVMPASS
namespace impl {

template <typename DerivedT>
class ConvertXlaCpuMemRefElementCastToLLVMPassBase : public ::mlir::OperationPass<mlir::func::FuncOp> {
public:
  using Base = ConvertXlaCpuMemRefElementCastToLLVMPassBase;

  ConvertXlaCpuMemRefElementCastToLLVMPassBase() : ::mlir::OperationPass<mlir::func::FuncOp>(::mlir::TypeID::get<DerivedT>()) {}
  ConvertXlaCpuMemRefElementCastToLLVMPassBase(const ConvertXlaCpuMemRefElementCastToLLVMPassBase &other) : ::mlir::OperationPass<mlir::func::FuncOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xla-convert-memref-element-cast-to-llvm");
  }
  ::llvm::StringRef getArgument() const override { return "xla-convert-memref-element-cast-to-llvm"; }

  ::llvm::StringRef getDescription() const override { return "Converts xla_cpu.memref_element_cast ops to LLVM."; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("ConvertXlaCpuMemRefElementCastToLLVMPass");
  }
  ::llvm::StringRef getName() const override { return "ConvertXlaCpuMemRefElementCastToLLVMPass"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  registry.insert<mlir::LLVM::LLVMDialect>();

  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(ConvertXlaCpuMemRefElementCastToLLVMPassBase<DerivedT>)

protected:
private:
};
} // namespace impl
#undef GEN_PASS_DEF_CONVERTXLACPUMEMREFELEMENTCASTTOLLVMPASS
#endif // GEN_PASS_DEF_CONVERTXLACPUMEMREFELEMENTCASTTOLLVMPASS

//===----------------------------------------------------------------------===//
// LegalizeCollectiveOpsPass
//===----------------------------------------------------------------------===//
#ifdef GEN_PASS_DECL_LEGALIZECOLLECTIVEOPSPASS
#undef GEN_PASS_DECL_LEGALIZECOLLECTIVEOPSPASS
#endif // GEN_PASS_DECL_LEGALIZECOLLECTIVEOPSPASS
#ifdef GEN_PASS_DEF_LEGALIZECOLLECTIVEOPSPASS
namespace impl {

template <typename DerivedT>
class LegalizeCollectiveOpsPassBase : public ::mlir::OperationPass<mlir::func::FuncOp> {
public:
  using Base = LegalizeCollectiveOpsPassBase;

  LegalizeCollectiveOpsPassBase() : ::mlir::OperationPass<mlir::func::FuncOp>(::mlir::TypeID::get<DerivedT>()) {}
  LegalizeCollectiveOpsPassBase(const LegalizeCollectiveOpsPassBase &other) : ::mlir::OperationPass<mlir::func::FuncOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xla-legalize-collective-ops");
  }
  ::llvm::StringRef getArgument() const override { return "xla-legalize-collective-ops"; }

  ::llvm::StringRef getDescription() const override { return "Legalizes collective ops to AllToAll and regular ops."; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("LegalizeCollectiveOpsPass");
  }
  ::llvm::StringRef getName() const override { return "LegalizeCollectiveOpsPass"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  registry.insert<mlir::mhlo::MhloDialect>();

  registry.insert<mlir::xla_cpu::XlaCpuDialect>();

  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(LegalizeCollectiveOpsPassBase<DerivedT>)

protected:
private:
};
} // namespace impl
#undef GEN_PASS_DEF_LEGALIZECOLLECTIVEOPSPASS
#endif // GEN_PASS_DEF_LEGALIZECOLLECTIVEOPSPASS

//===----------------------------------------------------------------------===//
// LegalizeI1VectorTransferOpsPass
//===----------------------------------------------------------------------===//
#ifdef GEN_PASS_DECL_LEGALIZEI1VECTORTRANSFEROPSPASS
#undef GEN_PASS_DECL_LEGALIZEI1VECTORTRANSFEROPSPASS
#endif // GEN_PASS_DECL_LEGALIZEI1VECTORTRANSFEROPSPASS
#ifdef GEN_PASS_DEF_LEGALIZEI1VECTORTRANSFEROPSPASS
namespace impl {

template <typename DerivedT>
class LegalizeI1VectorTransferOpsPassBase : public ::mlir::OperationPass<mlir::func::FuncOp> {
public:
  using Base = LegalizeI1VectorTransferOpsPassBase;

  LegalizeI1VectorTransferOpsPassBase() : ::mlir::OperationPass<mlir::func::FuncOp>(::mlir::TypeID::get<DerivedT>()) {}
  LegalizeI1VectorTransferOpsPassBase(const LegalizeI1VectorTransferOpsPassBase &other) : ::mlir::OperationPass<mlir::func::FuncOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xla-legalize-i1-vector-transfers");
  }
  ::llvm::StringRef getArgument() const override { return "xla-legalize-i1-vector-transfers"; }

  ::llvm::StringRef getDescription() const override { return "Legalizes transfer ops operating on vectors of i1."; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("LegalizeI1VectorTransferOpsPass");
  }
  ::llvm::StringRef getName() const override { return "LegalizeI1VectorTransferOpsPass"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  registry.insert<mlir::vector::VectorDialect>();

  registry.insert<mlir::xla_cpu::XlaCpuDialect>();

  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(LegalizeI1VectorTransferOpsPassBase<DerivedT>)

protected:
private:
};
} // namespace impl
#undef GEN_PASS_DEF_LEGALIZEI1VECTORTRANSFEROPSPASS
#endif // GEN_PASS_DEF_LEGALIZEI1VECTORTRANSFEROPSPASS

//===----------------------------------------------------------------------===//
// LegalizeXlaAbiPass
//===----------------------------------------------------------------------===//
#ifdef GEN_PASS_DECL_LEGALIZEXLAABIPASS
#undef GEN_PASS_DECL_LEGALIZEXLAABIPASS
#endif // GEN_PASS_DECL_LEGALIZEXLAABIPASS
#ifdef GEN_PASS_DEF_LEGALIZEXLAABIPASS
namespace impl {

template <typename DerivedT>
class LegalizeXlaAbiPassBase : public ::mlir::OperationPass<mlir::ModuleOp> {
public:
  using Base = LegalizeXlaAbiPassBase;

  LegalizeXlaAbiPassBase() : ::mlir::OperationPass<mlir::ModuleOp>(::mlir::TypeID::get<DerivedT>()) {}
  LegalizeXlaAbiPassBase(const LegalizeXlaAbiPassBase &other) : ::mlir::OperationPass<mlir::ModuleOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xla-legalize-abi");
  }
  ::llvm::StringRef getArgument() const override { return "xla-legalize-abi"; }

  ::llvm::StringRef getDescription() const override { return "Convers layouts and data formats at ABI boundaries"; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("LegalizeXlaAbiPass");
  }
  ::llvm::StringRef getName() const override { return "LegalizeXlaAbiPass"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  registry.insert<mlir::func::FuncDialect>();

  registry.insert<mlir::mhlo::MhloDialect>();

  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(LegalizeXlaAbiPassBase<DerivedT>)

protected:
private:
};
} // namespace impl
#undef GEN_PASS_DEF_LEGALIZEXLAABIPASS
#endif // GEN_PASS_DEF_LEGALIZEXLAABIPASS

//===----------------------------------------------------------------------===//
// RemoveCopiesToOutParamsPass
//===----------------------------------------------------------------------===//
#ifdef GEN_PASS_DECL_REMOVECOPIESTOOUTPARAMSPASS
#undef GEN_PASS_DECL_REMOVECOPIESTOOUTPARAMSPASS
#endif // GEN_PASS_DECL_REMOVECOPIESTOOUTPARAMSPASS
#ifdef GEN_PASS_DEF_REMOVECOPIESTOOUTPARAMSPASS
namespace impl {

template <typename DerivedT>
class RemoveCopiesToOutParamsPassBase : public ::mlir::OperationPass<mlir::func::FuncOp> {
public:
  using Base = RemoveCopiesToOutParamsPassBase;

  RemoveCopiesToOutParamsPassBase() : ::mlir::OperationPass<mlir::func::FuncOp>(::mlir::TypeID::get<DerivedT>()) {}
  RemoveCopiesToOutParamsPassBase(const RemoveCopiesToOutParamsPassBase &other) : ::mlir::OperationPass<mlir::func::FuncOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xla-remove-copies-to-out-params");
  }
  ::llvm::StringRef getArgument() const override { return "xla-remove-copies-to-out-params"; }

  ::llvm::StringRef getDescription() const override { return "Removes redundant alloc/copy pairs to out params."; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("RemoveCopiesToOutParamsPass");
  }
  ::llvm::StringRef getName() const override { return "RemoveCopiesToOutParamsPass"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(RemoveCopiesToOutParamsPassBase<DerivedT>)

protected:
private:
};
} // namespace impl
#undef GEN_PASS_DEF_REMOVECOPIESTOOUTPARAMSPASS
#endif // GEN_PASS_DEF_REMOVECOPIESTOOUTPARAMSPASS
#ifdef GEN_PASS_REGISTRATION

//===----------------------------------------------------------------------===//
// ConvertLmhloToCpuRuntimePass Registration
//===----------------------------------------------------------------------===//

inline void registerConvertLmhloToCpuRuntimePass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createConvertLmhloToCpuRuntimePass();
  });
}

// Old registration code, kept for temporary backwards compatibility.
inline void registerConvertLmhloToCpuRuntimePassPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createConvertLmhloToCpuRuntimePass();
  });
}

//===----------------------------------------------------------------------===//
// ConvertXlaCpuMemRefElementCastToLLVMPass Registration
//===----------------------------------------------------------------------===//

inline void registerConvertXlaCpuMemRefElementCastToLLVMPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createConvertXlaCpuMemRefElementCastToLLVMPass();
  });
}

// Old registration code, kept for temporary backwards compatibility.
inline void registerConvertXlaCpuMemRefElementCastToLLVMPassPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createConvertXlaCpuMemRefElementCastToLLVMPass();
  });
}

//===----------------------------------------------------------------------===//
// LegalizeCollectiveOpsPass Registration
//===----------------------------------------------------------------------===//

inline void registerLegalizeCollectiveOpsPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createLegalizeCollectiveOpsPass();
  });
}

// Old registration code, kept for temporary backwards compatibility.
inline void registerLegalizeCollectiveOpsPassPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createLegalizeCollectiveOpsPass();
  });
}

//===----------------------------------------------------------------------===//
// LegalizeI1VectorTransferOpsPass Registration
//===----------------------------------------------------------------------===//

inline void registerLegalizeI1VectorTransferOpsPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createLegalizeI1VectorTransferOpsPass();
  });
}

// Old registration code, kept for temporary backwards compatibility.
inline void registerLegalizeI1VectorTransferOpsPassPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createLegalizeI1VectorTransferOpsPass();
  });
}

//===----------------------------------------------------------------------===//
// LegalizeXlaAbiPass Registration
//===----------------------------------------------------------------------===//

inline void registerLegalizeXlaAbiPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createXlaAbiLegalizationPass();
  });
}

// Old registration code, kept for temporary backwards compatibility.
inline void registerLegalizeXlaAbiPassPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createXlaAbiLegalizationPass();
  });
}

//===----------------------------------------------------------------------===//
// RemoveCopiesToOutParamsPass Registration
//===----------------------------------------------------------------------===//

inline void registerRemoveCopiesToOutParamsPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createRemoveCopiesToOutParamsPass();
  });
}

// Old registration code, kept for temporary backwards compatibility.
inline void registerRemoveCopiesToOutParamsPassPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createRemoveCopiesToOutParamsPass();
  });
}

//===----------------------------------------------------------------------===//
// CpuTransforms Registration
//===----------------------------------------------------------------------===//

inline void registerCpuTransformsPasses() {
  registerConvertLmhloToCpuRuntimePass();
  registerConvertXlaCpuMemRefElementCastToLLVMPass();
  registerLegalizeCollectiveOpsPass();
  registerLegalizeI1VectorTransferOpsPass();
  registerLegalizeXlaAbiPass();
  registerRemoveCopiesToOutParamsPass();
}
#undef GEN_PASS_REGISTRATION
#endif // GEN_PASS_REGISTRATION
// Deprecated. Please use the new per-pass macros.
#ifdef GEN_PASS_CLASSES

template <typename DerivedT>
class ConvertLmhloToCpuRuntimePassBase : public ::mlir::OperationPass<mlir::ModuleOp> {
public:
  using Base = ConvertLmhloToCpuRuntimePassBase;

  ConvertLmhloToCpuRuntimePassBase() : ::mlir::OperationPass<mlir::ModuleOp>(::mlir::TypeID::get<DerivedT>()) {}
  ConvertLmhloToCpuRuntimePassBase(const ConvertLmhloToCpuRuntimePassBase &other) : ::mlir::OperationPass<mlir::ModuleOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xla-lmhlo-to-cpu-runtime");
  }
  ::llvm::StringRef getArgument() const override { return "xla-lmhlo-to-cpu-runtime"; }

  ::llvm::StringRef getDescription() const override { return "Converts lmhlo operations to XLA Cpu runtime custom calls"; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("ConvertLmhloToCpuRuntimePass");
  }
  ::llvm::StringRef getName() const override { return "ConvertLmhloToCpuRuntimePass"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(ConvertLmhloToCpuRuntimePassBase<DerivedT>)

protected:
};

template <typename DerivedT>
class ConvertXlaCpuMemRefElementCastToLLVMPassBase : public ::mlir::OperationPass<mlir::func::FuncOp> {
public:
  using Base = ConvertXlaCpuMemRefElementCastToLLVMPassBase;

  ConvertXlaCpuMemRefElementCastToLLVMPassBase() : ::mlir::OperationPass<mlir::func::FuncOp>(::mlir::TypeID::get<DerivedT>()) {}
  ConvertXlaCpuMemRefElementCastToLLVMPassBase(const ConvertXlaCpuMemRefElementCastToLLVMPassBase &other) : ::mlir::OperationPass<mlir::func::FuncOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xla-convert-memref-element-cast-to-llvm");
  }
  ::llvm::StringRef getArgument() const override { return "xla-convert-memref-element-cast-to-llvm"; }

  ::llvm::StringRef getDescription() const override { return "Converts xla_cpu.memref_element_cast ops to LLVM."; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("ConvertXlaCpuMemRefElementCastToLLVMPass");
  }
  ::llvm::StringRef getName() const override { return "ConvertXlaCpuMemRefElementCastToLLVMPass"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  registry.insert<mlir::LLVM::LLVMDialect>();

  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(ConvertXlaCpuMemRefElementCastToLLVMPassBase<DerivedT>)

protected:
};

template <typename DerivedT>
class LegalizeCollectiveOpsPassBase : public ::mlir::OperationPass<mlir::func::FuncOp> {
public:
  using Base = LegalizeCollectiveOpsPassBase;

  LegalizeCollectiveOpsPassBase() : ::mlir::OperationPass<mlir::func::FuncOp>(::mlir::TypeID::get<DerivedT>()) {}
  LegalizeCollectiveOpsPassBase(const LegalizeCollectiveOpsPassBase &other) : ::mlir::OperationPass<mlir::func::FuncOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xla-legalize-collective-ops");
  }
  ::llvm::StringRef getArgument() const override { return "xla-legalize-collective-ops"; }

  ::llvm::StringRef getDescription() const override { return "Legalizes collective ops to AllToAll and regular ops."; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("LegalizeCollectiveOpsPass");
  }
  ::llvm::StringRef getName() const override { return "LegalizeCollectiveOpsPass"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  registry.insert<mlir::mhlo::MhloDialect>();

  registry.insert<mlir::xla_cpu::XlaCpuDialect>();

  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(LegalizeCollectiveOpsPassBase<DerivedT>)

protected:
};

template <typename DerivedT>
class LegalizeI1VectorTransferOpsPassBase : public ::mlir::OperationPass<mlir::func::FuncOp> {
public:
  using Base = LegalizeI1VectorTransferOpsPassBase;

  LegalizeI1VectorTransferOpsPassBase() : ::mlir::OperationPass<mlir::func::FuncOp>(::mlir::TypeID::get<DerivedT>()) {}
  LegalizeI1VectorTransferOpsPassBase(const LegalizeI1VectorTransferOpsPassBase &other) : ::mlir::OperationPass<mlir::func::FuncOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xla-legalize-i1-vector-transfers");
  }
  ::llvm::StringRef getArgument() const override { return "xla-legalize-i1-vector-transfers"; }

  ::llvm::StringRef getDescription() const override { return "Legalizes transfer ops operating on vectors of i1."; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("LegalizeI1VectorTransferOpsPass");
  }
  ::llvm::StringRef getName() const override { return "LegalizeI1VectorTransferOpsPass"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  registry.insert<mlir::vector::VectorDialect>();

  registry.insert<mlir::xla_cpu::XlaCpuDialect>();

  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(LegalizeI1VectorTransferOpsPassBase<DerivedT>)

protected:
};

template <typename DerivedT>
class LegalizeXlaAbiPassBase : public ::mlir::OperationPass<mlir::ModuleOp> {
public:
  using Base = LegalizeXlaAbiPassBase;

  LegalizeXlaAbiPassBase() : ::mlir::OperationPass<mlir::ModuleOp>(::mlir::TypeID::get<DerivedT>()) {}
  LegalizeXlaAbiPassBase(const LegalizeXlaAbiPassBase &other) : ::mlir::OperationPass<mlir::ModuleOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xla-legalize-abi");
  }
  ::llvm::StringRef getArgument() const override { return "xla-legalize-abi"; }

  ::llvm::StringRef getDescription() const override { return "Convers layouts and data formats at ABI boundaries"; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("LegalizeXlaAbiPass");
  }
  ::llvm::StringRef getName() const override { return "LegalizeXlaAbiPass"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  registry.insert<mlir::func::FuncDialect>();

  registry.insert<mlir::mhlo::MhloDialect>();

  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(LegalizeXlaAbiPassBase<DerivedT>)

protected:
};

template <typename DerivedT>
class RemoveCopiesToOutParamsPassBase : public ::mlir::OperationPass<mlir::func::FuncOp> {
public:
  using Base = RemoveCopiesToOutParamsPassBase;

  RemoveCopiesToOutParamsPassBase() : ::mlir::OperationPass<mlir::func::FuncOp>(::mlir::TypeID::get<DerivedT>()) {}
  RemoveCopiesToOutParamsPassBase(const RemoveCopiesToOutParamsPassBase &other) : ::mlir::OperationPass<mlir::func::FuncOp>(other) {}

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xla-remove-copies-to-out-params");
  }
  ::llvm::StringRef getArgument() const override { return "xla-remove-copies-to-out-params"; }

  ::llvm::StringRef getDescription() const override { return "Removes redundant alloc/copy pairs to out params."; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("RemoveCopiesToOutParamsPass");
  }
  ::llvm::StringRef getName() const override { return "RemoveCopiesToOutParamsPass"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    
  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(RemoveCopiesToOutParamsPassBase<DerivedT>)

protected:
};
#undef GEN_PASS_CLASSES
#endif // GEN_PASS_CLASSES