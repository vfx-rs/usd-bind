#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \class ArWritableAsset

Interface for writing data to an asset.

\see ArResolver::OpenAssetForWrite for how to retrieve instances of
this object. */
typedef struct pxrInternal_v0_21__pxrReserved____ArWritableAsset_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArWritableAsset_t;
typedef pxrInternal_v0_21__pxrReserved____ArWritableAsset_t pxr_ArWritableAsset_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArWritableAsset_dtor(
    pxr_ArWritableAsset_t * this_);
#define pxr_ArWritableAsset_dtor pxrInternal_v0_21__pxrReserved____ArWritableAsset_dtor


/** Close this asset, performing any necessary finalization or commits
of data that was previously written. Returns true on success, false
otherwise.

If successful, reads to the written asset in the same process should
reflect the fully written state by the time this function returns.
Also, further calls to any functions on this interface are invalid. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArWritableAsset_Close(
    pxr_ArWritableAsset_t * this_
    , _Bool * return_);
#define pxr_ArWritableAsset_Close pxrInternal_v0_21__pxrReserved____ArWritableAsset_Close


/** Writes \p count bytes from \p buffer at \p offset from the beginning
of the asset. Returns number of bytes written, or 0 on error. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArWritableAsset_Write(
    pxr_ArWritableAsset_t * this_
    , size_t * return_
    , void const * buffer
    , size_t count
    , size_t offset);
#define pxr_ArWritableAsset_Write pxrInternal_v0_21__pxrReserved____ArWritableAsset_Write


#ifdef __cplusplus
}
#endif
