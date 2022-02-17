#pragma once
#include <pxr/usd/sdf/sdf_asset_path.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/assetPath.h>

inline pxrInternal_v0_21__pxrReserved__::SdfAssetPath const & to_cpp_ref(
    pxr_SdfAssetPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAssetPath const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAssetPath & to_cpp_ref(
    pxr_SdfAssetPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAssetPath * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAssetPath const * to_cpp(
    pxr_SdfAssetPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAssetPath const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfAssetPath * to_cpp(
    pxr_SdfAssetPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAssetPath * >(rhs);
}

inline void to_c(
    pxr_SdfAssetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAssetPath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAssetPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfAssetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAssetPath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAssetPath_t const * >(rhs);
}

inline void to_c(
    pxr_SdfAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAssetPath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAssetPath_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAssetPath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAssetPath_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAssetPath const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfAssetPath_copy(lhs, reinterpret_cast<pxr_SdfAssetPath_t const * >(&(rhs)));
}

