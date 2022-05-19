#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \class ArAssetInfo

Contains information about a resolved asset. */
typedef struct pxrInternal_v0_21__pxrReserved____ArAssetInfo_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArAssetInfo_t;
typedef pxrInternal_v0_21__pxrReserved____ArAssetInfo_t pxr_ArAssetInfo_t;


USD_CPPMM_API unsigned int ArAssetInfo_get_version(
    std_string_t * * return_
    , pxr_ArAssetInfo_t * self);

USD_CPPMM_API unsigned int ArAssetInfo_get_assetName(
    std_string_t * * return_
    , pxr_ArAssetInfo_t * self);

USD_CPPMM_API unsigned int ArAssetInfo_get_repoPath(
    std_string_t * * return_
    , pxr_ArAssetInfo_t * self);

#ifdef __cplusplus
}
#endif
