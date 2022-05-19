#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfSpec_t_s pxrInternal_v0_21__pxrReserved____SdfSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSpec_t pxr_SdfSpec_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayer_t_s pxrInternal_v0_21__pxrReserved____SdfLayer_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayer_t pxr_SdfLayer_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_CastAccess_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_CastAccess_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_CastAccess_t pxr_Sdf_CastAccess_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfCreateHandle(
    pxr_SdfLayerHandle_t * * return_
    , pxr_SdfLayer_t * p);
#define pxr_SdfCreateHandle pxrInternal_v0_21__pxrReserved___SdfCreateHandle


#ifdef __cplusplus
}
#endif
