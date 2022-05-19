#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct std__vector_pxr__SdfPath__t_s std__vector_pxr__SdfPath__t;
typedef std__vector_pxr__SdfPath__t std_SdfPathVector_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_t_s pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_t pxr_PcpLayerStackIdentifier_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpMapExpression_t_s pxrInternal_v0_21__pxrReserved____PcpMapExpression_t;
typedef pxrInternal_v0_21__pxrReserved____PcpMapExpression_t pxr_PcpMapExpression_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t_s pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t pxr_SdfLayerOffset_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpLifeboat_t_s pxrInternal_v0_21__pxrReserved____PcpLifeboat_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLifeboat_t pxr_PcpLifeboat_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStackChanges_t_s pxrInternal_v0_21__pxrReserved____PcpLayerStackChanges_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStackChanges_t pxr_PcpLayerStackChanges_t;

/** \class PcpLayerStack

Represents a stack of layers that contribute opinions to composition.

Each PcpLayerStack is identified by a PcpLayerStackIdentifier. This
identifier contains all of the parameters needed to construct a layer stack,
such as the root layer, session layer, and path resolver context.

PcpLayerStacks are constructed and managed by a Pcp_LayerStackRegistry. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStack_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpLayerStack_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStack_t pxr_PcpLayerStack_t;


/** Return the current reference count of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetCurrentCount(
    pxr_PcpLayerStack_t const * this_
    , size_t * return_);
#define pxr_PcpLayerStack_GetCurrentCount pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetCurrentCount


/** Return true if only one \c TfRefPtr points to this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_IsUnique(
    pxr_PcpLayerStack_t const * this_
    , _Bool * return_);
#define pxr_PcpLayerStack_IsUnique pxrInternal_v0_21__pxrReserved____PcpLayerStack_IsUnique


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_SetShouldInvokeUniqueChangedListener(
    pxr_PcpLayerStack_t * this_
    , _Bool shouldCall);
#define pxr_PcpLayerStack_SetShouldInvokeUniqueChangedListener pxrInternal_v0_21__pxrReserved____PcpLayerStack_SetShouldInvokeUniqueChangedListener


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_EnableNotification2(
    pxr_PcpLayerStack_t const * this_);
#define pxr_PcpLayerStack_EnableNotification2 pxrInternal_v0_21__pxrReserved____PcpLayerStack_EnableNotification2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetUniqueIdentifier(
    pxr_PcpLayerStack_t const * this_
    , void const * * return_);
#define pxr_PcpLayerStack_GetUniqueIdentifier pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetUniqueIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_dtor(
    pxr_PcpLayerStack_t * this_);
#define pxr_PcpLayerStack_dtor pxrInternal_v0_21__pxrReserved____PcpLayerStack_dtor


/** Returns the identifier for this layer stack. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetIdentifier(
    pxr_PcpLayerStack_t const * this_
    , pxr_PcpLayerStackIdentifier_t const * * return_);
#define pxr_PcpLayerStack_GetIdentifier pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetIdentifier


/** Returns the layer offset for the given layer, or NULL if the layer
can't be found or is the identity. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetLayerOffsetForLayer(
    pxr_PcpLayerStack_t const * this_
    , pxr_SdfLayerOffset_t const * * return_
    , pxr_SdfLayerHandle_t const * rhs);
#define pxr_PcpLayerStack_GetLayerOffsetForLayer pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetLayerOffsetForLayer


/** Returns the layer offset for the layer at the given index in this
layer stack. Returns NULL if the offset is the identity. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetLayerOffsetForLayer_1(
    pxr_PcpLayerStack_t const * this_
    , pxr_SdfLayerOffset_t const * * return_
    , size_t layerIdx);
#define pxr_PcpLayerStack_GetLayerOffsetForLayer_1 pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetLayerOffsetForLayer_1


/** Returns true if this layer stack contains the given layer, false
otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_HasLayer(
    pxr_PcpLayerStack_t const * this_
    , _Bool * return_
    , pxr_SdfLayerHandle_t const * layer);
#define pxr_PcpLayerStack_HasLayer pxrInternal_v0_21__pxrReserved____PcpLayerStack_HasLayer


/** Return the time codes per second value of the layer stack. This is 
usually the same as the computed time codes per second of the root layer
but may be computed from the session layer when its present. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetTimeCodesPerSecond(
    pxr_PcpLayerStack_t const * this_
    , double * return_);
#define pxr_PcpLayerStack_GetTimeCodesPerSecond pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetTimeCodesPerSecond


/** Returns a list of paths to all prims across all layers in this 
layer stack that contained relocates. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetPathsToPrimsWithRelocates(
    pxr_PcpLayerStack_t const * this_
    , std_SdfPathVector_t const * * return_);
#define pxr_PcpLayerStack_GetPathsToPrimsWithRelocates pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetPathsToPrimsWithRelocates


/** Apply the changes in \p changes.  This blows caches.  It's up to
the client to pull on those caches again as needed.

Objects that are no longer needed and would be destroyed are
retained in \p lifeboat and won't be destroyed until \p lifeboat is
itself destroyed.  This gives the client control over the timing
of the destruction of those objects.  Clients may choose to pull
on the caches before destroying \p lifeboat.  That may cause the
caches to again retain the objects, meaning they won't be destroyed
when \p lifeboat is destroyed.

For example, if blowing a cache means an SdfLayer is no longer
needed then \p lifeboat will hold an SdfLayerRefPtr to that layer. 
The client can then pull on that cache, which could cause the
cache to hold an SdfLayerRefPtr to the layer again.  If so then
destroying \p changes will not destroy the layer.  In any case,
we don't destroy the layer and then read it again.  However, if
the client destroys \p lifeboat before pulling on the cache then
we would destroy the layer then read it again. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_Apply(
    pxr_PcpLayerStack_t * this_
    , pxr_PcpLayerStackChanges_t const * changes
    , pxr_PcpLifeboat_t * lifeboat);
#define pxr_PcpLayerStack_Apply pxrInternal_v0_21__pxrReserved____PcpLayerStack_Apply


/** Return a PcpMapExpression representing the relocations that affect
namespace at and below the given path.  The value of this
expression will continue to track the effective relocations if
they are changed later. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetExpressionForRelocatesAtPath(
    pxr_PcpLayerStack_t * this_
    , pxr_PcpMapExpression_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_PcpLayerStack_GetExpressionForRelocatesAtPath pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetExpressionForRelocatesAtPath


/** Returns true when the environment variable has been set to disable the 
behavior where differing time codes per second metadata in layers sublayered
or referenced by another layer are used to apply a layer offset scale to the
map function. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpIsTimeScalingForLayerTimeCodesPerSecondDisabled(
    _Bool * return_);
#define pxr_PcpIsTimeScalingForLayerTimeCodesPerSecondDisabled pxrInternal_v0_21__pxrReserved___PcpIsTimeScalingForLayerTimeCodesPerSecondDisabled


#ifdef __cplusplus
}
#endif
