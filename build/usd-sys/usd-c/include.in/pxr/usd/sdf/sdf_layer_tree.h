#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t_s pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t pxr_SdfLayerOffset_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;

/** \class SdfLayerTree

A SdfLayerTree is an immutable tree structure representing a sublayer
stack and its recursive structure.

Layers can have sublayers, which can in turn have sublayers of their
own.  Clients that want to represent that hierarchical structure in
memory can build a SdfLayerTree for that purpose.

We use TfRefPtr<SdfLayerTree> as handles to LayerTrees, as a simple way
to pass them around as immutable trees without worrying about lifetime. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayerTree_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfLayerTree_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerTree_t pxr_SdfLayerTree_t;


/** Return the current reference count of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetCurrentCount(
    pxr_SdfLayerTree_t const * this_
    , size_t * return_);
#define pxr_SdfLayerTree_GetCurrentCount pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetCurrentCount


/** Return true if only one \c TfRefPtr points to this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_IsUnique(
    pxr_SdfLayerTree_t const * this_
    , _Bool * return_);
#define pxr_SdfLayerTree_IsUnique pxrInternal_v0_21__pxrReserved____SdfLayerTree_IsUnique


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_SetShouldInvokeUniqueChangedListener(
    pxr_SdfLayerTree_t * this_
    , _Bool shouldCall);
#define pxr_SdfLayerTree_SetShouldInvokeUniqueChangedListener pxrInternal_v0_21__pxrReserved____SdfLayerTree_SetShouldInvokeUniqueChangedListener


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_EnableNotification2(
    pxr_SdfLayerTree_t const * this_);
#define pxr_SdfLayerTree_EnableNotification2 pxrInternal_v0_21__pxrReserved____SdfLayerTree_EnableNotification2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetUniqueIdentifier(
    pxr_SdfLayerTree_t const * this_
    , void const * * return_);
#define pxr_SdfLayerTree_GetUniqueIdentifier pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetUniqueIdentifier


/** Returns the layer handle this tree node represents. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetLayer(
    pxr_SdfLayerTree_t const * this_
    , pxr_SdfLayerHandle_t const * * return_);
#define pxr_SdfLayerTree_GetLayer pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetLayer


/** Returns the cumulative layer offset from the root of the tree. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetOffset(
    pxr_SdfLayerTree_t const * this_
    , pxr_SdfLayerOffset_t const * * return_);
#define pxr_SdfLayerTree_GetOffset pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetOffset


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_dtor(
    pxr_SdfLayerTree_t * this_);
#define pxr_SdfLayerTree_dtor pxrInternal_v0_21__pxrReserved____SdfLayerTree_dtor


#ifdef __cplusplus
}
#endif
