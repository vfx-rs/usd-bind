#pragma once
#include "usd-api-export.h"

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \class ArFilesystemAsset

ArAsset implementation for asset represented by a file on a filesystem. */
typedef struct pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_t;
typedef pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_t pxr_ArFilesystemAsset_t;


/** Returns the size of the file held by this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_GetSize(
    pxr_ArFilesystemAsset_t const * this_
    , size_t * return_);
#define pxr_ArFilesystemAsset_GetSize pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_GetSize


/** Reads \p count bytes from the file held by this object at the
given \p offset into \p buffer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_Read(
    pxr_ArFilesystemAsset_t const * this_
    , size_t * return_
    , void * buffer
    , size_t count
    , size_t offset);
#define pxr_ArFilesystemAsset_Read pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_Read


/** Closes the file owned by this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_dtor(
    pxr_ArFilesystemAsset_t * this_);
#define pxr_ArFilesystemAsset_dtor pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_dtor


#ifdef __cplusplus
}
#endif
