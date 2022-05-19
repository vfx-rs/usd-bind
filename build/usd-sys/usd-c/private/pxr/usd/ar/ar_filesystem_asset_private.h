#pragma once
#include <pxr/usd/ar/ar_filesystem_asset.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/filesystemAsset.h>

inline pxrInternal_v0_21__pxrReserved__::ArFilesystemAsset const & to_cpp_ref(
    pxr_ArFilesystemAsset_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArFilesystemAsset const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArFilesystemAsset & to_cpp_ref(
    pxr_ArFilesystemAsset_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArFilesystemAsset * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArFilesystemAsset const * to_cpp(
    pxr_ArFilesystemAsset_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArFilesystemAsset const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArFilesystemAsset * to_cpp(
    pxr_ArFilesystemAsset_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArFilesystemAsset * >(rhs);
}

inline void to_c(
    pxr_ArFilesystemAsset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArFilesystemAsset const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArFilesystemAsset_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArFilesystemAsset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArFilesystemAsset const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArFilesystemAsset_t const * >(rhs);
}

inline void to_c(
    pxr_ArFilesystemAsset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArFilesystemAsset & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArFilesystemAsset_t * >(&(rhs));
}

inline void to_c(
    pxr_ArFilesystemAsset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArFilesystemAsset * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArFilesystemAsset_t * >(rhs);
}

