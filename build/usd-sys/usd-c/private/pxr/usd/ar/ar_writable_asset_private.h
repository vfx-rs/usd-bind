#pragma once
#include <pxr/usd/ar/ar_writable_asset.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/writableAsset.h>

inline pxrInternal_v0_21__pxrReserved__::ArWritableAsset const & to_cpp_ref(
    pxr_ArWritableAsset_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArWritableAsset const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArWritableAsset & to_cpp_ref(
    pxr_ArWritableAsset_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArWritableAsset * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArWritableAsset const * to_cpp(
    pxr_ArWritableAsset_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArWritableAsset const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArWritableAsset * to_cpp(
    pxr_ArWritableAsset_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArWritableAsset * >(rhs);
}

inline void to_c(
    pxr_ArWritableAsset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArWritableAsset const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArWritableAsset_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArWritableAsset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArWritableAsset const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArWritableAsset_t const * >(rhs);
}

inline void to_c(
    pxr_ArWritableAsset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArWritableAsset & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArWritableAsset_t * >(&(rhs));
}

inline void to_c(
    pxr_ArWritableAsset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArWritableAsset * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArWritableAsset_t * >(rhs);
}

