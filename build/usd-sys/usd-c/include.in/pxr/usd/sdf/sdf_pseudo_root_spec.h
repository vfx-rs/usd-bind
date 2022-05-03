#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;

typedef struct pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_t pxr_SdfPseudoRootSpec_t;


/** Returns true if this object is invalid or expired. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsDormant(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPseudoRootSpec_IsDormant pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsDormant


/** Returns the layer that this object belongs to. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetLayer(
    pxr_SdfPseudoRootSpec_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_SdfPseudoRootSpec_GetLayer pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetLayer


/** Returns the scene path of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetPath(
    pxr_SdfPseudoRootSpec_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfPseudoRootSpec_GetPath pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetPath


#ifdef __cplusplus
}
#endif
