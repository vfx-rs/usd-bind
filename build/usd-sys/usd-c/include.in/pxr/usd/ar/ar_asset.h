#pragma once
#include "usd-api-export.h"

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \class ArAsset

Interface for accessing the contents of an asset.

\see ArResolver::OpenAsset for how to retrieve instances of this object. */
typedef struct pxrInternal_v0_21__pxrReserved____ArAsset_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArAsset_t;
typedef pxrInternal_v0_21__pxrReserved____ArAsset_t pxr_ArAsset_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArAsset_dtor(
    pxr_ArAsset_t * this_);
#define pxr_ArAsset_dtor pxrInternal_v0_21__pxrReserved____ArAsset_dtor


/** Returns size of the asset. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArAsset_GetSize(
    pxr_ArAsset_t const * this_
    , size_t * return_);
#define pxr_ArAsset_GetSize pxrInternal_v0_21__pxrReserved____ArAsset_GetSize


/** Read \p count bytes at \p offset from the beginning of the asset
into \p buffer. Returns number of bytes read, or 0 on error.

Implementers should range-check calls and return zero for out-of-bounds
reads. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArAsset_Read(
    pxr_ArAsset_t const * this_
    , size_t * return_
    , void * buffer
    , size_t count
    , size_t offset);
#define pxr_ArAsset_Read pxrInternal_v0_21__pxrReserved____ArAsset_Read


#ifdef __cplusplus
}
#endif
