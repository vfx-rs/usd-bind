#pragma once
#include <pxr/usd/ar/ar_asset.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/asset.h>

inline pxrInternal_v0_21__pxrReserved__::ArAsset const & to_cpp_ref(
    pxr_ArAsset_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArAsset const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArAsset & to_cpp_ref(
    pxr_ArAsset_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArAsset * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArAsset const * to_cpp(
    pxr_ArAsset_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArAsset const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArAsset * to_cpp(
    pxr_ArAsset_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArAsset * >(rhs);
}

inline void to_c(
    pxr_ArAsset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArAsset const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArAsset_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArAsset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArAsset const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArAsset_t const * >(rhs);
}

inline void to_c(
    pxr_ArAsset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArAsset & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArAsset_t * >(&(rhs));
}

inline void to_c(
    pxr_ArAsset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArAsset * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArAsset_t * >(rhs);
}

