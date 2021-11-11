#pragma once
#include <pxr/base/vt/vt_array.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/gf/matrix2d.h>
#include <pxr/base/gf/matrix2f.h>
#include <pxr/base/gf/matrix3d.h>
#include <pxr/base/gf/matrix3f.h>
#include <pxr/base/gf/matrix4d.h>
#include <pxr/base/gf/matrix4f.h>
#include <pxr/base/gf/quatd.h>
#include <pxr/base/gf/quatf.h>
#include <pxr/base/gf/vec2f.h>
#include <pxr/base/gf/vec2i.h>
#include <pxr/base/gf/vec3f.h>
#include <pxr/base/gf/vec3i.h>
#include <pxr/base/gf/vec4f.h>
#include <pxr/base/gf/vec4i.h>
#include <pxr/base/tf/token.h>
#include <pxr/base/vt/array.h>
#include <pxr/usd/sdf/assetPath.h>
#include <pxr/usd/sdf/timeCode.h>

inline pxrInternal_v0_21__pxrReserved__::VtArray<_Bool> const & to_cpp_ref(
    pxr_VtArrayBool_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<_Bool> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<_Bool> & to_cpp_ref(
    pxr_VtArrayBool_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<_Bool> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<_Bool> const * to_cpp(
    pxr_VtArrayBool_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<_Bool> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<_Bool> * to_cpp(
    pxr_VtArrayBool_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<_Bool> * >(rhs);
}

inline void to_c(
    pxr_VtArrayBool_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<_Bool> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayBool_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayBool_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<_Bool> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayBool_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayBool_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<_Bool> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayBool_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayBool_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<_Bool> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayBool_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayBool_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<_Bool> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<_Bool>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t> const & to_cpp_ref(
    pxr_VtArrayU8_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t> & to_cpp_ref(
    pxr_VtArrayU8_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t> const * to_cpp(
    pxr_VtArrayU8_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t> * to_cpp(
    pxr_VtArrayU8_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t> * >(rhs);
}

inline void to_c(
    pxr_VtArrayU8_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayU8_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayU8_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayU8_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayU8_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayU8_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayU8_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayU8_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayU8_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<uint8_t>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t> const & to_cpp_ref(
    pxr_VtArrayU32_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t> & to_cpp_ref(
    pxr_VtArrayU32_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t> const * to_cpp(
    pxr_VtArrayU32_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t> * to_cpp(
    pxr_VtArrayU32_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t> * >(rhs);
}

inline void to_c(
    pxr_VtArrayU32_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayU32_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayU32_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayU32_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayU32_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayU32_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayU32_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayU32_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayU32_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<uint32_t>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t> const & to_cpp_ref(
    pxr_VtArrayU64_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t> & to_cpp_ref(
    pxr_VtArrayU64_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t> const * to_cpp(
    pxr_VtArrayU64_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t> * to_cpp(
    pxr_VtArrayU64_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t> * >(rhs);
}

inline void to_c(
    pxr_VtArrayU64_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayU64_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayU64_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayU64_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayU64_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayU64_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayU64_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayU64_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayU64_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<uint64_t>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<int32_t> const & to_cpp_ref(
    pxr_VtArrayI32_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<int32_t> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<int32_t> & to_cpp_ref(
    pxr_VtArrayI32_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<int32_t> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<int32_t> const * to_cpp(
    pxr_VtArrayI32_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<int32_t> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<int32_t> * to_cpp(
    pxr_VtArrayI32_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<int32_t> * >(rhs);
}

inline void to_c(
    pxr_VtArrayI32_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<int32_t> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayI32_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayI32_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<int32_t> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayI32_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayI32_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<int32_t> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayI32_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayI32_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<int32_t> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayI32_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayI32_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<int32_t> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<int32_t>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<int64_t> const & to_cpp_ref(
    pxr_VtArrayI64_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<int64_t> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<int64_t> & to_cpp_ref(
    pxr_VtArrayI64_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<int64_t> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<int64_t> const * to_cpp(
    pxr_VtArrayI64_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<int64_t> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<int64_t> * to_cpp(
    pxr_VtArrayI64_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<int64_t> * >(rhs);
}

inline void to_c(
    pxr_VtArrayI64_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<int64_t> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayI64_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayI64_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<int64_t> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayI64_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayI64_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<int64_t> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayI64_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayI64_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<int64_t> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayI64_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayI64_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<int64_t> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<int64_t>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<float> const & to_cpp_ref(
    pxr_VtArrayF32_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<float> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<float> & to_cpp_ref(
    pxr_VtArrayF32_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<float> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<float> const * to_cpp(
    pxr_VtArrayF32_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<float> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<float> * to_cpp(
    pxr_VtArrayF32_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<float> * >(rhs);
}

inline void to_c(
    pxr_VtArrayF32_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<float> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayF32_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayF32_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<float> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayF32_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayF32_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<float> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayF32_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayF32_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<float> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayF32_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayF32_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<float> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<float>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<double> const & to_cpp_ref(
    pxr_VtArrayF64_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<double> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<double> & to_cpp_ref(
    pxr_VtArrayF64_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<double> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<double> const * to_cpp(
    pxr_VtArrayF64_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<double> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<double> * to_cpp(
    pxr_VtArrayF64_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<double> * >(rhs);
}

inline void to_c(
    pxr_VtArrayF64_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<double> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayF64_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayF64_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<double> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayF64_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayF64_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<double> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayF64_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayF64_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<double> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayF64_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayF64_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<double> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<double>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath> const & to_cpp_ref(
    pxr_VtArraySdfAssetPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath> & to_cpp_ref(
    pxr_VtArraySdfAssetPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath> const * to_cpp(
    pxr_VtArraySdfAssetPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath> * to_cpp(
    pxr_VtArraySdfAssetPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath> * >(rhs);
}

inline void to_c(
    pxr_VtArraySdfAssetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArraySdfAssetPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArraySdfAssetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArraySdfAssetPath_t const * >(rhs);
}

inline void to_c(
    pxr_VtArraySdfAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArraySdfAssetPath_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArraySdfAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArraySdfAssetPath_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArraySdfAssetPath_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfAssetPath>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode> const & to_cpp_ref(
    pxr_VtArraySdfTimeCode_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode> & to_cpp_ref(
    pxr_VtArraySdfTimeCode_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode> const * to_cpp(
    pxr_VtArraySdfTimeCode_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode> * to_cpp(
    pxr_VtArraySdfTimeCode_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode> * >(rhs);
}

inline void to_c(
    pxr_VtArraySdfTimeCode_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArraySdfTimeCode_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArraySdfTimeCode_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArraySdfTimeCode_t const * >(rhs);
}

inline void to_c(
    pxr_VtArraySdfTimeCode_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArraySdfTimeCode_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArraySdfTimeCode_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArraySdfTimeCode_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArraySdfTimeCode_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::SdfTimeCode>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken> const & to_cpp_ref(
    pxr_VtArrayTfToken_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken> & to_cpp_ref(
    pxr_VtArrayTfToken_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken> const * to_cpp(
    pxr_VtArrayTfToken_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken> * to_cpp(
    pxr_VtArrayTfToken_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken> * >(rhs);
}

inline void to_c(
    pxr_VtArrayTfToken_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayTfToken_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayTfToken_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayTfToken_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayTfToken_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayTfToken_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayTfToken_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayTfToken_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayTfToken_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::TfToken>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<std::string> const & to_cpp_ref(
    pxr_VtArraystring_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<std::string> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<std::string> & to_cpp_ref(
    pxr_VtArraystring_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<std::string> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<std::string> const * to_cpp(
    pxr_VtArraystring_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<std::string> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<std::string> * to_cpp(
    pxr_VtArraystring_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<std::string> * >(rhs);
}

inline void to_c(
    pxr_VtArraystring_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<std::string> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArraystring_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArraystring_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<std::string> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArraystring_t const * >(rhs);
}

inline void to_c(
    pxr_VtArraystring_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<std::string> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArraystring_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArraystring_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<std::string> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArraystring_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArraystring_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<std::string> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<std::string>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i> const & to_cpp_ref(
    pxr_VtArrayGfVec2i_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i> & to_cpp_ref(
    pxr_VtArrayGfVec2i_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i> const * to_cpp(
    pxr_VtArrayGfVec2i_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i> * to_cpp(
    pxr_VtArrayGfVec2i_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec2i_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec2i_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec2i_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec2i_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec2i_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec2i_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec2i_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec2i_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfVec2i_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2i>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i> const & to_cpp_ref(
    pxr_VtArrayGfVec3i_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i> & to_cpp_ref(
    pxr_VtArrayGfVec3i_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i> const * to_cpp(
    pxr_VtArrayGfVec3i_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i> * to_cpp(
    pxr_VtArrayGfVec3i_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec3i_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec3i_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec3i_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec3i_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec3i_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec3i_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec3i_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec3i_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfVec3i_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3i>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i> const & to_cpp_ref(
    pxr_VtArrayGfVec4i_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i> & to_cpp_ref(
    pxr_VtArrayGfVec4i_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i> const * to_cpp(
    pxr_VtArrayGfVec4i_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i> * to_cpp(
    pxr_VtArrayGfVec4i_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec4i_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec4i_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec4i_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec4i_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec4i_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec4i_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec4i_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec4i_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfVec4i_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4i>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f> const & to_cpp_ref(
    pxr_VtArrayGfVec2f_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f> & to_cpp_ref(
    pxr_VtArrayGfVec2f_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f> const * to_cpp(
    pxr_VtArrayGfVec2f_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f> * to_cpp(
    pxr_VtArrayGfVec2f_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec2f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec2f_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec2f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec2f_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec2f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec2f_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec2f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec2f_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfVec2f_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2f>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f> const & to_cpp_ref(
    pxr_VtArrayGfVec3f_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f> & to_cpp_ref(
    pxr_VtArrayGfVec3f_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f> const * to_cpp(
    pxr_VtArrayGfVec3f_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f> * to_cpp(
    pxr_VtArrayGfVec3f_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec3f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec3f_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec3f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec3f_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec3f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec3f_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec3f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec3f_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfVec3f_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3f>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f> const & to_cpp_ref(
    pxr_VtArrayGfVec4f_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f> & to_cpp_ref(
    pxr_VtArrayGfVec4f_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f> const * to_cpp(
    pxr_VtArrayGfVec4f_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f> * to_cpp(
    pxr_VtArrayGfVec4f_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec4f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec4f_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec4f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec4f_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec4f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec4f_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec4f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec4f_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfVec4f_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4f>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d> const & to_cpp_ref(
    pxr_VtArrayGfVec2d_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d> & to_cpp_ref(
    pxr_VtArrayGfVec2d_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d> const * to_cpp(
    pxr_VtArrayGfVec2d_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d> * to_cpp(
    pxr_VtArrayGfVec2d_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec2d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec2d_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec2d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec2d_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec2d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec2d_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec2d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec2d_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfVec2d_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec2d>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d> const & to_cpp_ref(
    pxr_VtArrayGfVec3d_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d> & to_cpp_ref(
    pxr_VtArrayGfVec3d_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d> const * to_cpp(
    pxr_VtArrayGfVec3d_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d> * to_cpp(
    pxr_VtArrayGfVec3d_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec3d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec3d_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec3d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec3d_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec3d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec3d_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec3d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec3d_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfVec3d_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec3d>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d> const & to_cpp_ref(
    pxr_VtArrayGfVec4d_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d> & to_cpp_ref(
    pxr_VtArrayGfVec4d_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d> const * to_cpp(
    pxr_VtArrayGfVec4d_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d> * to_cpp(
    pxr_VtArrayGfVec4d_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec4d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec4d_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec4d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec4d_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfVec4d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec4d_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfVec4d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfVec4d_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfVec4d_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfVec4d>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf> const & to_cpp_ref(
    pxr_VtArrayGfQuatf_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf> & to_cpp_ref(
    pxr_VtArrayGfQuatf_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf> const * to_cpp(
    pxr_VtArrayGfQuatf_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf> * to_cpp(
    pxr_VtArrayGfQuatf_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfQuatf_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfQuatf_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfQuatf_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfQuatf_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfQuatf_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfQuatf_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfQuatf_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfQuatf_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfQuatf_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatf>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd> const & to_cpp_ref(
    pxr_VtArrayGfQuatd_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd> & to_cpp_ref(
    pxr_VtArrayGfQuatd_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd> const * to_cpp(
    pxr_VtArrayGfQuatd_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd> * to_cpp(
    pxr_VtArrayGfQuatd_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfQuatd_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfQuatd_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfQuatd_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfQuatd_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfQuatd_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfQuatd_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfQuatd_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfQuatd_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfQuatd_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfQuatd>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f> const & to_cpp_ref(
    pxr_VtArrayGfMatrix2f_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f> & to_cpp_ref(
    pxr_VtArrayGfMatrix2f_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f> const * to_cpp(
    pxr_VtArrayGfMatrix2f_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f> * to_cpp(
    pxr_VtArrayGfMatrix2f_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfMatrix2f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix2f_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfMatrix2f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix2f_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfMatrix2f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix2f_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfMatrix2f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix2f_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfMatrix2f_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2f>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f> const & to_cpp_ref(
    pxr_VtArrayGfMatrix3f_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f> & to_cpp_ref(
    pxr_VtArrayGfMatrix3f_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f> const * to_cpp(
    pxr_VtArrayGfMatrix3f_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f> * to_cpp(
    pxr_VtArrayGfMatrix3f_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfMatrix3f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix3f_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfMatrix3f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix3f_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfMatrix3f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix3f_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfMatrix3f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix3f_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfMatrix3f_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3f>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f> const & to_cpp_ref(
    pxr_VtArrayGfMatrix4f_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f> & to_cpp_ref(
    pxr_VtArrayGfMatrix4f_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f> const * to_cpp(
    pxr_VtArrayGfMatrix4f_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f> * to_cpp(
    pxr_VtArrayGfMatrix4f_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfMatrix4f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix4f_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfMatrix4f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix4f_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfMatrix4f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix4f_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfMatrix4f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix4f_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfMatrix4f_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4f>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d> const & to_cpp_ref(
    pxr_VtArrayGfMatrix2d_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d> & to_cpp_ref(
    pxr_VtArrayGfMatrix2d_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d> const * to_cpp(
    pxr_VtArrayGfMatrix2d_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d> * to_cpp(
    pxr_VtArrayGfMatrix2d_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfMatrix2d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix2d_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfMatrix2d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix2d_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfMatrix2d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix2d_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfMatrix2d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix2d_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfMatrix2d_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix2d>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d> const & to_cpp_ref(
    pxr_VtArrayGfMatrix3d_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d> & to_cpp_ref(
    pxr_VtArrayGfMatrix3d_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d> const * to_cpp(
    pxr_VtArrayGfMatrix3d_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d> * to_cpp(
    pxr_VtArrayGfMatrix3d_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfMatrix3d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix3d_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfMatrix3d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix3d_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfMatrix3d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix3d_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfMatrix3d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix3d_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfMatrix3d_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix3d>(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d> const & to_cpp_ref(
    pxr_VtArrayGfMatrix4d_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d> & to_cpp_ref(
    pxr_VtArrayGfMatrix4d_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d> const * to_cpp(
    pxr_VtArrayGfMatrix4d_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d> * to_cpp(
    pxr_VtArrayGfMatrix4d_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d> * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfMatrix4d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix4d_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfMatrix4d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix4d_t const * >(rhs);
}

inline void to_c(
    pxr_VtArrayGfMatrix4d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix4d_t * >(&(rhs));
}

inline void to_c(
    pxr_VtArrayGfMatrix4d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtArrayGfMatrix4d_t * >(rhs);
}

inline void to_c_move(
    pxr_VtArrayGfMatrix4d_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d> * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtArray<pxr::GfMatrix4d>(std::move(*(rhs)));
}

