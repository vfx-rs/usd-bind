#pragma once
#include "usd-api-export.h"

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____ArTimestamp_t_s pxrInternal_v0_21__pxrReserved____ArTimestamp_t;
typedef pxrInternal_v0_21__pxrReserved____ArTimestamp_t pxr_ArTimestamp_t;
typedef struct pxrInternal_v0_21__pxrReserved____ArResolvedPath_t_s pxrInternal_v0_21__pxrReserved____ArResolvedPath_t;
typedef pxrInternal_v0_21__pxrReserved____ArResolvedPath_t pxr_ArResolvedPath_t;

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


/** Returns an ArTimestamp holding the mtime of the file at \p resolvedPath.
Returns an invalid ArTimestamp if the mtime could not be retrieved. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_GetModificationTimestamp(
    pxr_ArTimestamp_t * * return_
    , pxr_ArResolvedPath_t const * resolvedPath);
#define pxr_ArFilesystemAsset_GetModificationTimestamp pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_GetModificationTimestamp


/** Closes the file owned by this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_dtor(
    pxr_ArFilesystemAsset_t * this_);
#define pxr_ArFilesystemAsset_dtor pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_dtor


#ifdef __cplusplus
}
#endif
