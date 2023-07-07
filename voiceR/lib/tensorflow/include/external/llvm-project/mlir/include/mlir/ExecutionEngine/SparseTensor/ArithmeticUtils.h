//===- ArithmeticUtils.h - Arithmetic helper functions ----------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This header is not part of the public API.  It is placed in the
// includes directory only because that's required by the implementations
// of template-classes.
//
// This file is part of the lightweight runtime support library for sparse
// tensor manipulations.  The functionality of the support library is meant
// to simplify benchmarking, testing, and debugging MLIR code operating on
// sparse tensors.  However, the provided functionality is **not** part of
// core MLIR itself.
//
//===----------------------------------------------------------------------===//

#ifndef MLIR_EXECUTIONENGINE_SPARSETENSOR_ARITHMETICUTILS_H
#define MLIR_EXECUTIONENGINE_SPARSETENSOR_ARITHMETICUTILS_H

#include "mlir/ExecutionEngine/SparseTensor/Attributes.h"

#include <cassert>
#include <cinttypes>
#include <limits>
#include <type_traits>

namespace mlir {
namespace sparse_tensor {
namespace detail {

//===----------------------------------------------------------------------===//
//
// Safe comparison functions.
//
// Variants of the `==`, `!=`, `<`, `<=`, `>`, and `>=` operators which
// are careful to ensure that negatives are always considered strictly
// less than non-negatives regardless of the signedness of the types of
// the two arguments.  They are "safe" in that they guarantee to *always*
// give an output and that that output is correct; in particular this means
// they never use assertions or other mechanisms for "returning an error".
//
// These functions are C++17-compatible backports of the safe comparison
// functions added in C++20, and the implementations are based on the
// sample implementations provided by the standard:
// <https://en.cppreference.com/w/cpp/utility/intcmp>.
//
//===----------------------------------------------------------------------===//

template <typename T, typename U>
constexpr bool safelyEQ(T t, U u) noexcept {
  using UT = std::make_unsigned_t<T>;
  using UU = std::make_unsigned_t<U>;
  if constexpr (std::is_signed_v<T> == std::is_signed_v<U>)
    return t == u;
  else if constexpr (std::is_signed_v<T>)
    return t < 0 ? false : static_cast<UT>(t) == u;
  else
    return u < 0 ? false : t == static_cast<UU>(u);
}

template <typename T, typename U>
constexpr bool safelyNE(T t, U u) noexcept {
  return !safelyEQ(t, u);
}

template <typename T, typename U>
constexpr bool safelyLT(T t, U u) noexcept {
  using UT = std::make_unsigned_t<T>;
  using UU = std::make_unsigned_t<U>;
  if constexpr (std::is_signed_v<T> == std::is_signed_v<U>)
    return t < u;
  else if constexpr (std::is_signed_v<T>)
    return t < 0 ? true : static_cast<UT>(t) < u;
  else
    return u < 0 ? false : t < static_cast<UU>(u);
}

template <typename T, typename U>
constexpr bool safelyGT(T t, U u) noexcept {
  return safelyLT(u, t);
}

template <typename T, typename U>
constexpr bool safelyLE(T t, U u) noexcept {
  return !safelyGT(t, u);
}

template <typename T, typename U>
constexpr bool safelyGE(T t, U u) noexcept {
  return !safelyLT(t, u);
}

//===----------------------------------------------------------------------===//
//
// Overflow checking functions.
//
// These functions use assertions to ensure correctness with respect to
// overflow/underflow.  Unlike the "safe" functions above, these "checked"
// functions only guarantee that *if* they return an answer then that answer
// is correct.  When assertions are enabled, they do their best to remain
// as fast as possible (since MLIR keeps assertions enabled by default,
// even for optimized builds).  When assertions are disabled, they use the
// standard unchecked implementations.
//
//===----------------------------------------------------------------------===//

// TODO: we would like to be able to pass in custom error messages, to
// improve the user experience.  We should be able to use something like
// `assert(((void)(msg ? msg : defaultMsg), cond))`; but I'm not entirely
// sure that'll work as intended when done within a function-definition
// rather than within a macro-definition.

/// A version of `static_cast<To>` which checks for overflow/underflow.
/// The implementation avoids performing runtime assertions whenever
/// the types alone are sufficient to statically prove that overflow
/// cannot happen.
template <typename To, typename From>
[[nodiscard]] inline To checkOverflowCast(From x) {
  // Check the lower bound. (For when casting from signed types.)
  constexpr To minTo = std::numeric_limits<To>::min();
  constexpr From minFrom = std::numeric_limits<From>::min();
  if constexpr (!safelyGE(minFrom, minTo))
    assert(safelyGE(x, minTo) && "cast would underflow");
  // Check the upper bound.
  constexpr To maxTo = std::numeric_limits<To>::max();
  constexpr From maxFrom = std::numeric_limits<From>::max();
  if constexpr (!safelyLE(maxFrom, maxTo))
    assert(safelyLE(x, maxTo) && "cast would overflow");
  // Now do the cast itself.
  return static_cast<To>(x);
}

/// A version of `operator*` on `uint64_t` which guards against overflows
/// (when assertions are enabled).
inline uint64_t checkedMul(uint64_t lhs, uint64_t rhs) {
  // If assertions are enabled and we have the intrinsic, then use it to
  // avoid the expensive division.  If assertions are disabled, then don't
  // bother with intrinsics (to avoid any possible slowdown vs `operator*`).
#if !defined(NDEBUG) && MLIR_SPARSETENSOR_HAS_BUILTIN(__builtin_mul_overflow)
  uint64_t result;
  bool overflowed = __builtin_mul_overflow(lhs, rhs, &result);
  assert(!overflowed && "Integer overflow");
  return result;
#else
  assert((lhs == 0 || rhs <= std::numeric_limits<uint64_t>::max() / lhs) &&
         "Integer overflow");
  return lhs * rhs;
#endif
}

} // namespace detail
} // namespace sparse_tensor
} // namespace mlir

#endif // MLIR_EXECUTIONENGINE_SPARSETENSOR_ARITHMETICUTILS_H
