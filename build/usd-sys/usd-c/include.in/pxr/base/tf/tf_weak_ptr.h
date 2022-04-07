#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__t_s pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__t;
typedef pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__t pxr_UsdStageRefPtr_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayer_t_s pxrInternal_v0_21__pxrReserved____SdfLayer_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayer_t pxr_SdfLayer_t;
typedef struct pxrInternal_v0_21__pxrReserved____UsdStage_t_s pxrInternal_v0_21__pxrReserved____UsdStage_t;
typedef pxrInternal_v0_21__pxrReserved____UsdStage_t pxr_UsdStage_t;

typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;

typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t pxr_UsdStagePtr_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__is_null(
    pxr_SdfLayerHandle_t const * this_
    , _Bool * return_);
#define pxr_SdfLayerHandle_is_null pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__is_null


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__deref(
    pxr_SdfLayerHandle_t const * this_
    , pxr_SdfLayer_t * * return_);
#define pxr_SdfLayerHandle_deref pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__deref


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__ctor(
    pxr_SdfLayerHandle_t * * this_);
#define pxr_SdfLayerHandle_ctor pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__ctor


/** Copy construction */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__copy(
    pxr_SdfLayerHandle_t * * this_
    , pxr_SdfLayerHandle_t const * p);
#define pxr_SdfLayerHandle_copy pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__IsExpired(
    pxr_SdfLayerHandle_t const * this_
    , _Bool * return_);
#define pxr_SdfLayerHandle_IsExpired pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__IsExpired


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__dtor(
    pxr_SdfLayerHandle_t * this_);
#define pxr_SdfLayerHandle_dtor pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__is_null(
    pxr_UsdStagePtr_t const * this_
    , _Bool * return_);
#define pxr_UsdStagePtr_is_null pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__is_null


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__deref(
    pxr_UsdStagePtr_t const * this_
    , pxr_UsdStage_t * * return_);
#define pxr_UsdStagePtr_deref pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__deref


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__ctor(
    pxr_UsdStagePtr_t * * this_);
#define pxr_UsdStagePtr_ctor pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__ctor


/** Copy construction */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__copy(
    pxr_UsdStagePtr_t * * this_
    , pxr_UsdStagePtr_t const * p);
#define pxr_UsdStagePtr_copy pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__IsExpired(
    pxr_UsdStagePtr_t const * this_
    , _Bool * return_);
#define pxr_UsdStagePtr_IsExpired pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__IsExpired


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__dtor(
    pxr_UsdStagePtr_t * this_);
#define pxr_UsdStagePtr_dtor pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__from_ref(
    pxr_UsdStagePtr_t * * this_
    , pxr_UsdStageRefPtr_t const * p);
#define pxr_UsdStagePtr_from_ref pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__from_ref


#ifdef __cplusplus
}
#endif
