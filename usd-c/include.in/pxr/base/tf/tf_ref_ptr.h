#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_20__pxrReserved____UsdStage_t_s pxrInternal_v0_20__pxrReserved____UsdStage_t;
typedef pxrInternal_v0_20__pxrReserved____UsdStage_t pxr_UsdStage_t;

typedef struct pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__t;
typedef pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__t pxr_UsdStageRefPtr_t;


/** Initializes \c *this to point at \p p's object.

Increments \p p's object's reference count. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__copy(
    pxr_UsdStageRefPtr_t * * this_
    , pxr_UsdStageRefPtr_t const * p);
#define pxr_UsdStageRefPtr_copy pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__copy


/** Decrements reference count of object being pointed to.

If the reference count of the object (if any) that was just pointed at
reaches zero, the object will typically be destroyed at this point. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__dtor(
    pxr_UsdStageRefPtr_t * this_);
#define pxr_UsdStageRefPtr_dtor pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__dtor


/** Dereferences the stored pointer. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__deref(
    pxr_UsdStageRefPtr_t const * this_
    , pxr_UsdStage_t * * return_);
#define pxr_UsdStageRefPtr_deref pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__deref


/** True if the pointer points to \c NULL. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__is_null(
    pxr_UsdStageRefPtr_t const * this_
    , _Bool * return_);
#define pxr_UsdStageRefPtr_is_null pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__is_null


#ifdef __cplusplus
}
#endif
