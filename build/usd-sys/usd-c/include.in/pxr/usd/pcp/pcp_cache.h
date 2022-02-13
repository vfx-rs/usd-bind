#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____PcpPrimIndex_t_s pxrInternal_v0_21__pxrReserved____PcpPrimIndex_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPrimIndex_t pxr_PcpPrimIndex_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_t_s pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_t pxr_PcpPrimIndexInputs_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_t_s pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_t pxr_PcpPropertyIndex_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct std__vector_pxr__SdfPath__t_s std__vector_pxr__SdfPath__t;
typedef std__vector_pxr__SdfPath__t std_SdfPathVector_t;
typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_t_s pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_t;
typedef pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_t pxr_PcpDynamicFileFormatDependencyData_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_t_s pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_t pxr_PcpLayerStackIdentifier_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpCacheChanges_t_s pxrInternal_v0_21__pxrReserved____PcpCacheChanges_t;
typedef pxrInternal_v0_21__pxrReserved____PcpCacheChanges_t pxr_PcpCacheChanges_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpLifeboat_t_s pxrInternal_v0_21__pxrReserved____PcpLifeboat_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLifeboat_t pxr_PcpLifeboat_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpChanges_t_s pxrInternal_v0_21__pxrReserved____PcpChanges_t;
typedef pxrInternal_v0_21__pxrReserved____PcpChanges_t pxr_PcpChanges_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;

/** \class PcpCache

PcpCache is the context required to make requests of the Pcp
composition algorithm and cache the results.

Because the algorithms are recursive -- making a request typically
makes other internal requests to solve subproblems -- caching
subproblem results is required for reasonable performance, and
so this cache is the only entrypoint to the algorithms.

There is a set of parameters that affect the composition results:

\li variant fallbacks: per named variant set, an ordered list of
    fallback values to use when composing a prim that defines
    a variant set but does not specify a selection
\li payload inclusion set: an SdfPath set used to identify which
    prims should have their payloads included during composition;
    this is the basis for explicit control over the "working set"
    of composition
\li file format target: the file format target that Pcp will request
    when opening scene description layers
\li "USD mode" configures the Pcp composition algorithm to provide
    only a custom, lighter subset of the full feature set, as needed
    by the Universal Scene Description system

There are a number of different computations that can be requested.
These include computing a layer stack from a PcpLayerStackIdentifier,
computing a prim index or prim stack, and computing a property index. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpCache_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpCache_t;
typedef pxrInternal_v0_21__pxrReserved____PcpCache_t pxr_PcpCache_t;


/** Construct a PcpCache to compose results for the layer stack identified
by \a layerStackIdentifier. 

If \p fileFormatTarget is given, Pcp will specify \p fileFormatTarget
as the file format target when searching for or opening a layer.

If \p usd is true, computation of prim indices and composition of prim 
child names are performed without relocates, inherits, permissions, 
symmetry, or payloads, and without populating the prim stack and 
gathering its dependencies. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_ctor(
    pxr_PcpCache_t * * this_
    , pxr_PcpLayerStackIdentifier_t const * layerStackIdentifier
    , std_string_t const * fileFormatTarget
    , _Bool usd);
#define pxr_PcpCache_ctor pxrInternal_v0_21__pxrReserved____PcpCache_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_dtor(
    pxr_PcpCache_t * this_);
#define pxr_PcpCache_dtor pxrInternal_v0_21__pxrReserved____PcpCache_dtor


/** Get the identifier of the layerStack used for composition. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_GetLayerStackIdentifier(
    pxr_PcpCache_t const * this_
    , pxr_PcpLayerStackIdentifier_t const * * return_);
#define pxr_PcpCache_GetLayerStackIdentifier pxrInternal_v0_21__pxrReserved____PcpCache_GetLayerStackIdentifier


/** Return true if the cache is configured in Usd mode. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsUsd(
    pxr_PcpCache_t const * this_
    , _Bool * return_);
#define pxr_PcpCache_IsUsd pxrInternal_v0_21__pxrReserved____PcpCache_IsUsd


/** Returns the file format target this cache is configured for. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_GetFileFormatTarget(
    pxr_PcpCache_t const * this_
    , std_string_t const * * return_);
#define pxr_PcpCache_GetFileFormatTarget pxrInternal_v0_21__pxrReserved____PcpCache_GetFileFormatTarget


/** Return true if the payload is included for the given path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsPayloadIncluded(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path);
#define pxr_PcpCache_IsPayloadIncluded pxrInternal_v0_21__pxrReserved____PcpCache_IsPayloadIncluded


/** 
 Note that muting a layer will cause this cache to release all
 references to that layer.  If no other client is holding on to
 references to that layer, it will be unloaded.  In this case, if 
 there are unsaved edits to the muted layer, those edits are lost.  
 Since anonymous layers are not serialized, muting an anonymous
 layer will cause that layer and its contents to be lost in this
 case.

 If \p changes is not \c nullptr, it is adjusted to reflect the
 changes necessary to see the change in muted layers.  Otherwise,
 those changes are applied immediately.
 
 \p newLayersMuted and \p newLayersUnmuted contains the pruned vector
 of layers which are muted or unmuted by this call to RequestLayerMuting. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_RequestLayerMuting(
    pxr_PcpCache_t * this_
    , std_vector_string_t const * layersToMute
    , std_vector_string_t const * layersToUnmute
    , pxr_PcpChanges_t * changes
    , std_vector_string_t * newLayersMuted
    , std_vector_string_t * newLayersUnmuted);
#define pxr_PcpCache_RequestLayerMuting pxrInternal_v0_21__pxrReserved____PcpCache_RequestLayerMuting


/** Returns the list of canonical identifiers for muted layers
in this cache.  See documentation on RequestLayerMuting for
more details. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_GetMutedLayers(
    pxr_PcpCache_t const * this_
    , std_vector_string_t const * * return_);
#define pxr_PcpCache_GetMutedLayers pxrInternal_v0_21__pxrReserved____PcpCache_GetMutedLayers


/** Returns true if the layer specified by \p layerIdentifier is
muted in this cache, false otherwise.  If \p layerIdentifier
is relative, it is assumed to be relative to this cache's
root layer.  See documentation on RequestLayerMuting for
more details. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsLayerMuted(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , std_string_t const * layerIdentifier);
#define pxr_PcpCache_IsLayerMuted pxrInternal_v0_21__pxrReserved____PcpCache_IsLayerMuted


/** Returns true if the layer specified by \p layerIdentifier is
muted in this cache, false otherwise.  If \p layerIdentifier
is relative, it is assumed to be relative to \p anchorLayer.
If \p canonicalMutedLayerIdentifier is supplied, it will be
populated with the canonical identifier of the muted layer if this
function returns true.  See documentation on RequestLayerMuting
for more details.   */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsLayerMuted_1(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , pxr_SdfLayerHandle_t const * anchorLayer
    , std_string_t const * layerIdentifier
    , std_string_t * canonicalMutedLayerIdentifier);
#define pxr_PcpCache_IsLayerMuted_1 pxrInternal_v0_21__pxrReserved____PcpCache_IsLayerMuted_1


/** Returns parameter object containing all inputs for the prim index
computation used by this cache.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_GetPrimIndexInputs(
    pxr_PcpCache_t * this_
    , pxr_PcpPrimIndexInputs_t * * return_);
#define pxr_PcpCache_GetPrimIndexInputs pxrInternal_v0_21__pxrReserved____PcpCache_GetPrimIndexInputs


/** Returns a pointer to the cached computed prim index for the given
path, or NULL if it has not been computed. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_FindPrimIndex(
    pxr_PcpCache_t const * this_
    , pxr_PcpPrimIndex_t const * * return_
    , pxr_SdfPath_t const * primPath);
#define pxr_PcpCache_FindPrimIndex pxrInternal_v0_21__pxrReserved____PcpCache_FindPrimIndex


/** Returns a pointer to the cached computed property index for the given
path, or NULL if it has not been computed. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_FindPropertyIndex(
    pxr_PcpCache_t const * this_
    , pxr_PcpPropertyIndex_t const * * return_
    , pxr_SdfPath_t const * propPath);
#define pxr_PcpCache_FindPropertyIndex pxrInternal_v0_21__pxrReserved____PcpCache_FindPropertyIndex


/** Return a number that can be used to determine whether or not the set of
layers used by this cache may have changed or not.  For example, if one
calls GetUsedLayers() and saves the GetUsedLayersRevision(), and then
later calls GetUsedLayersRevision() again, if the number is unchanged,
then GetUsedLayers() is guaranteed to be unchanged as well. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_GetUsedLayersRevision(
    pxr_PcpCache_t const * this_
    , size_t * return_);
#define pxr_PcpCache_GetUsedLayersRevision pxrInternal_v0_21__pxrReserved____PcpCache_GetUsedLayersRevision


/** Returns \c true if an opinion for the site at \p localPcpSitePath
in the cache's layer stack can be provided by an opinion in \p layer,
\c false otherwise.  If \c true and \p allowedPathInLayer is not
\c NULL then it's set to a path in \p layer that would provide an
opinion.

This returns \c false if no prim index has yet been computed for
\p localPcpSitePath. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_CanHaveOpinionForSite(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * localPcpSitePath
    , pxr_SdfLayerHandle_t const * layer
    , pxr_SdfPath_t * allowedPathInLayer);
#define pxr_PcpCache_CanHaveOpinionForSite pxrInternal_v0_21__pxrReserved____PcpCache_CanHaveOpinionForSite


/** Returns a vector of sublayer asset paths used in the layer stack
that didn't resolve to valid assets. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_GetInvalidSublayerIdentifiers(
    pxr_PcpCache_t const * this_
    , std_vector_string_t * * return_);
#define pxr_PcpCache_GetInvalidSublayerIdentifiers pxrInternal_v0_21__pxrReserved____PcpCache_GetInvalidSublayerIdentifiers


/** Returns true if \p identifier was used as a sublayer path in a 
layer stack but did not identify a valid layer. This is functionally 
equivalent to examining the values in the vector returned by
GetInvalidSublayerIdentifiers, but more efficient. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsInvalidSublayerIdentifier(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , std_string_t const * identifier);
#define pxr_PcpCache_IsInvalidSublayerIdentifier pxrInternal_v0_21__pxrReserved____PcpCache_IsInvalidSublayerIdentifier


/** Returns true if \p resolvedAssetPath was used by a prim (e.g. in
a reference) but did not resolve to a valid asset. This is
functionally equivalent to examining the values in the map returned
by GetInvalidAssetPaths, but more efficient. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsInvalidAssetPath(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , std_string_t const * resolvedAssetPath);
#define pxr_PcpCache_IsInvalidAssetPath pxrInternal_v0_21__pxrReserved____PcpCache_IsInvalidAssetPath


/** Returns true if any prim index in this cache has a dependency on a 
dynamic file format argument field.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_HasAnyDynamicFileFormatArgumentDependencies(
    pxr_PcpCache_t const * this_
    , _Bool * return_);
#define pxr_PcpCache_HasAnyDynamicFileFormatArgumentDependencies pxrInternal_v0_21__pxrReserved____PcpCache_HasAnyDynamicFileFormatArgumentDependencies


/** Returns true if the given \p field is the name of a field that 
was composed while generating dynamic file format arguments for any prim
index in this cache.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsPossibleDynamicFileFormatArgumentField(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * field);
#define pxr_PcpCache_IsPossibleDynamicFileFormatArgumentField pxrInternal_v0_21__pxrReserved____PcpCache_IsPossibleDynamicFileFormatArgumentField


/** Returns the dynamic file format dependency data object for the prim
index with the given \p primIndexPath. This will return an empty 
dependency data if either there is no cache prim index for the path or 
if the prim index has no dynamic file formats that it depends on. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_GetDynamicFileFormatArgumentDependencyData(
    pxr_PcpCache_t const * this_
    , pxr_PcpDynamicFileFormatDependencyData_t const * * return_
    , pxr_SdfPath_t const * primIndexPath);
#define pxr_PcpCache_GetDynamicFileFormatArgumentDependencyData pxrInternal_v0_21__pxrReserved____PcpCache_GetDynamicFileFormatArgumentDependencyData


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_Apply(
    pxr_PcpCache_t * this_
    , pxr_PcpCacheChanges_t const * changes
    , pxr_PcpLifeboat_t * lifeboat);
#define pxr_PcpCache_Apply pxrInternal_v0_21__pxrReserved____PcpCache_Apply


/** Reload the layers of the layer stack, except session layers
and sublayers of session layers.  This will also try to load
sublayers in this cache's layer stack that could not be loaded
previously.  It will also try to load any referenced or payloaded
layer that could not be loaded previously.  Clients should
subsequently \c Apply() \p changes to use any now-valid layers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_Reload(
    pxr_PcpCache_t * this_
    , pxr_PcpChanges_t * changes);
#define pxr_PcpCache_Reload pxrInternal_v0_21__pxrReserved____PcpCache_Reload


/** Reload every layer used by the prim at \p primPath that's across
a reference or payload.  Clients should subsequently apply the
changes to use any now valid layers.

Note:  If a reference or payload was to an invalid asset and this
asset is valid upon reloading then this call will not necessarily
reload every layer accessible across the reference or payload.
For example, say prim R has an invalid reference and prim Q has a
valid reference to layer X with sublayer Y.  If on reload R now
has a valid reference to layer Z with sublayer Y, we will load Z
but we will not reload Y. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_ReloadReferences(
    pxr_PcpCache_t * this_
    , pxr_PcpChanges_t * changes
    , pxr_SdfPath_t const * primPath);
#define pxr_PcpCache_ReloadReferences pxrInternal_v0_21__pxrReserved____PcpCache_ReloadReferences


/** Prints various statistics about the data stored in this cache. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_PrintStatistics(
    pxr_PcpCache_t const * this_);
#define pxr_PcpCache_PrintStatistics pxrInternal_v0_21__pxrReserved____PcpCache_PrintStatistics


#ifdef __cplusplus
}
#endif
