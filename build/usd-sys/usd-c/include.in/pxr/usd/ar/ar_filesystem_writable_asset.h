#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \class ArFilesystemWritableAsset

ArWritableAsset implementation for asset represented by a file on a
filesystem.

This implementation uses TfSafeOutputFile; in the case where the asset
has been opened for replacement, data will be written to a temporary 
file which will be renamed over the destination file when this object
is destroyed. See documentation for TfSafeOutputFile for more details. */
typedef struct pxrInternal_v0_21__pxrReserved____ArFilesystemWritableAsset_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArFilesystemWritableAsset_t;
typedef pxrInternal_v0_21__pxrReserved____ArFilesystemWritableAsset_t pxr_ArFilesystemWritableAsset_t;


/** Closes the file owned by this asset. If the TfSafeOutputFile was
opened for replacement, the temporary file that was being written
to be will be renamed over the destination file. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemWritableAsset_Close(
    pxr_ArFilesystemWritableAsset_t * this_
    , _Bool * return_);
#define pxr_ArFilesystemWritableAsset_Close pxrInternal_v0_21__pxrReserved____ArFilesystemWritableAsset_Close


/** Writes \p count bytes from \p buffer at \p offset from the beginning
of the file held by this object. Returns number of bytes written, or
0 on error. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemWritableAsset_Write(
    pxr_ArFilesystemWritableAsset_t * this_
    , size_t * return_
    , void const * buffer
    , size_t count
    , size_t offset);
#define pxr_ArFilesystemWritableAsset_Write pxrInternal_v0_21__pxrReserved____ArFilesystemWritableAsset_Write


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArFilesystemWritableAsset_dtor(
    pxr_ArFilesystemWritableAsset_t * this_);
#define pxr_ArFilesystemWritableAsset_dtor pxrInternal_v0_21__pxrReserved____ArFilesystemWritableAsset_dtor


#ifdef __cplusplus
}
#endif
