#pragma once
#include <pxr/usd/ar/ar_filesystem_writable_asset.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/filesystemWritableAsset.h>

inline pxrInternal_v0_21__pxrReserved__::ArFilesystemWritableAsset const & to_cpp_ref(
    pxr_ArFilesystemWritableAsset_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArFilesystemWritableAsset const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArFilesystemWritableAsset & to_cpp_ref(
    pxr_ArFilesystemWritableAsset_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArFilesystemWritableAsset * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArFilesystemWritableAsset const * to_cpp(
    pxr_ArFilesystemWritableAsset_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArFilesystemWritableAsset const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArFilesystemWritableAsset * to_cpp(
    pxr_ArFilesystemWritableAsset_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArFilesystemWritableAsset * >(rhs);
}

inline void to_c(
    pxr_ArFilesystemWritableAsset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArFilesystemWritableAsset const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArFilesystemWritableAsset_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArFilesystemWritableAsset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArFilesystemWritableAsset const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArFilesystemWritableAsset_t const * >(rhs);
}

inline void to_c(
    pxr_ArFilesystemWritableAsset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArFilesystemWritableAsset & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArFilesystemWritableAsset_t * >(&(rhs));
}

inline void to_c(
    pxr_ArFilesystemWritableAsset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArFilesystemWritableAsset * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArFilesystemWritableAsset_t * >(rhs);
}

