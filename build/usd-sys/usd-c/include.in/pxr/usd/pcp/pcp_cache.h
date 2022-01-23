#pragma once
#include "usd-api-export.h"

#include <pxr/base/tf/tf_token.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct std__vector_pxr__SdfPath__t_s std__vector_pxr__SdfPath__t;
typedef std__vector_pxr__SdfPath__t std_SdfPathVector_t;
typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;

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


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_dtor(
    pxr_PcpCache_t * this_);
#define pxr_PcpCache_dtor pxrInternal_v0_21__pxrReserved____PcpCache_dtor


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


/** Prints various statistics about the data stored in this cache. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_PrintStatistics(
    pxr_PcpCache_t const * this_);
#define pxr_PcpCache_PrintStatistics pxrInternal_v0_21__pxrReserved____PcpCache_PrintStatistics


#ifdef __cplusplus
}
#endif
