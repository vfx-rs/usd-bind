#pragma once
#include "usd-api-export.h"


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


#ifdef __cplusplus
}
#endif
