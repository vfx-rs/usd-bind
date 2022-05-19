#pragma once
#include <pxr/usd/ar/ar_asset_info.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/assetInfo.h>

inline pxrInternal_v0_21__pxrReserved__::ArAssetInfo const & to_cpp_ref(
    pxr_ArAssetInfo_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArAssetInfo const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArAssetInfo & to_cpp_ref(
    pxr_ArAssetInfo_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArAssetInfo * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArAssetInfo const * to_cpp(
    pxr_ArAssetInfo_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArAssetInfo const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArAssetInfo * to_cpp(
    pxr_ArAssetInfo_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArAssetInfo * >(rhs);
}

inline void to_c(
    pxr_ArAssetInfo_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArAssetInfo const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArAssetInfo_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArAssetInfo_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArAssetInfo const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArAssetInfo_t const * >(rhs);
}

inline void to_c(
    pxr_ArAssetInfo_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArAssetInfo & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArAssetInfo_t * >(&(rhs));
}

inline void to_c(
    pxr_ArAssetInfo_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArAssetInfo * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArAssetInfo_t * >(rhs);
}

inline void to_c_move(
    pxr_ArAssetInfo_t * lhs
    , pxrInternal_v0_21__pxrReserved__::ArAssetInfo * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::ArAssetInfo(std::move(*(rhs)));
}

