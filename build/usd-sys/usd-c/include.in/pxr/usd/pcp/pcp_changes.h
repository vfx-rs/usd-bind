#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpSite_t_s pxrInternal_v0_21__pxrReserved____PcpSite_t;
typedef pxrInternal_v0_21__pxrReserved____PcpSite_t pxr_PcpSite_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpCache_t_s pxrInternal_v0_21__pxrReserved____PcpCache_t;
typedef pxrInternal_v0_21__pxrReserved____PcpCache_t pxr_PcpCache_t;

/** \class PcpLayerStackChanges

Types of changes per layer stack. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStackChanges_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpLayerStackChanges_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStackChanges_t pxr_PcpLayerStackChanges_t;

/** \class PcpCacheChanges

Types of changes per cache. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpCacheChanges_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpCacheChanges_t;
typedef pxrInternal_v0_21__pxrReserved____PcpCacheChanges_t pxr_PcpCacheChanges_t;

/** Structure used to temporarily retain layers and layerStacks within
a code block.  Analogous to the autorelease pool in obj-c. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpLifeboat_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpLifeboat_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLifeboat_t pxr_PcpLifeboat_t;

/** \class PcpChanges

Describes Pcp changes.

Collects changes to Pcp necessary to reflect changes in Sd.  It does
not cause any changes to any Pcp caches, layer stacks, etc;  it only
computes what changes would be necessary to Pcp to reflect the Sd
changes. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpChanges_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpChanges_t;
typedef pxrInternal_v0_21__pxrReserved____PcpChanges_t pxr_PcpChanges_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackChanges_ctor(
    pxr_PcpLayerStackChanges_t * * this_);
#define pxr_PcpLayerStackChanges_ctor pxrInternal_v0_21__pxrReserved____PcpLayerStackChanges_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLifeboat_ctor(
    pxr_PcpLifeboat_t * * this_);
#define pxr_PcpLifeboat_ctor pxrInternal_v0_21__pxrReserved____PcpLifeboat_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLifeboat_dtor(
    pxr_PcpLifeboat_t * this_);
#define pxr_PcpLifeboat_dtor pxrInternal_v0_21__pxrReserved____PcpLifeboat_dtor


/** Swap the contents of this and \p other. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLifeboat_Swap(
    pxr_PcpLifeboat_t * this_
    , pxr_PcpLifeboat_t * other);
#define pxr_PcpLifeboat_Swap pxrInternal_v0_21__pxrReserved____PcpLifeboat_Swap


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_ctor(
    pxr_PcpChanges_t * * this_);
#define pxr_PcpChanges_ctor pxrInternal_v0_21__pxrReserved____PcpChanges_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_dtor(
    pxr_PcpChanges_t * this_);
#define pxr_PcpChanges_dtor pxrInternal_v0_21__pxrReserved____PcpChanges_dtor


/** Tries to load the sublayer of \p layer at \p sublayerPath.  If
successful, any layer stack using \p layer is marked as having changed
and all prims in \p cache using any prim in any of those layer stacks
are marked as changed. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidMaybeFixSublayer(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_SdfLayerHandle_t const * layer
    , std_string_t const * assetPath);
#define pxr_PcpChanges_DidMaybeFixSublayer pxrInternal_v0_21__pxrReserved____PcpChanges_DidMaybeFixSublayer


/** Tries to load the asset at \p assetPath.  If successful, any prim
in \p cache using the site \p site is marked as changed. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidMaybeFixAsset(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_PcpSite_t const * site
    , pxr_SdfLayerHandle_t const * srcLayer
    , std_string_t const * assetPath);
#define pxr_PcpChanges_DidMaybeFixAsset pxrInternal_v0_21__pxrReserved____PcpChanges_DidMaybeFixAsset


/** The layer identified by \p layerId was muted in \p cache. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidMuteLayer(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , std_string_t const * layerId);
#define pxr_PcpChanges_DidMuteLayer pxrInternal_v0_21__pxrReserved____PcpChanges_DidMuteLayer


/** The layer identified by \p layerId was unmuted in \p cache. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidUnmuteLayer(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , std_string_t const * layerId);
#define pxr_PcpChanges_DidUnmuteLayer pxrInternal_v0_21__pxrReserved____PcpChanges_DidUnmuteLayer


/** The sublayer tree changed.  This often, but doesn't always, imply that
anything and everything may have changed.  If clients want to indicate
that anything and everything may have changed they should call this
method and \c DidChangePrimGraph() with the absolute root path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeLayers(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache);
#define pxr_PcpChanges_DidChangeLayers pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeLayers


/** The sublayer offsets changed. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeLayerOffsets(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache);
#define pxr_PcpChanges_DidChangeLayerOffsets pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeLayerOffsets


/** The object at \p path changed significantly enough to require
recomputing the entire prim or property index.  A significant change
implies changes to every namespace descendant's index, specs, and
dependencies. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeSignificantly(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_SdfPath_t const * path);
#define pxr_PcpChanges_DidChangeSignificantly pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeSignificantly


/** The spec stack for the prim or property has changed, due to the
addition or removal of the spec in \p changedLayer at \p changedPath.
This is used when inert prims/properties are added or removed or when 
any change requires rebuilding the property stack.  It implies that 
dependencies on those specs has changed. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeSpecs(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_SdfPath_t const * path
    , pxr_SdfLayerHandle_t const * changedLayer
    , pxr_SdfPath_t const * changedPath);
#define pxr_PcpChanges_DidChangeSpecs pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeSpecs


/** The spec stack for the prim or property at \p path in \p cache has
changed. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeSpecStack(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_SdfPath_t const * path);
#define pxr_PcpChanges_DidChangeSpecStack pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeSpecStack


/** The relocates that affect prims and properties at and below
the given cache path have changed. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeRelocates(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_SdfPath_t const * path);
#define pxr_PcpChanges_DidChangeRelocates pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeRelocates


/** The composed object at \p oldPath was moved to \p newPath.  This
implies every corresponding Sd change.  This object will subsume
those Sd changes under this higher-level move.  Sd path changes
that are not so subsumed will be converted to DidChangePrimGraph()
and/or DidChangeSpecs() changes. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangePaths(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath);
#define pxr_PcpChanges_DidChangePaths pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangePaths


/** Remove any changes for \p cache. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidDestroyCache(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache);
#define pxr_PcpChanges_DidDestroyCache pxrInternal_v0_21__pxrReserved____PcpChanges_DidDestroyCache


/** The asset resolver has changed, invalidating previously-resolved
asset paths. This function will check all prim indexes in \p cache
for composition arcs that may now refer to a different asset and
mark them as needing significant resyncs. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeAssetResolver(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache);
#define pxr_PcpChanges_DidChangeAssetResolver pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeAssetResolver


/** Swap the contents of this and \p other. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_Swap(
    pxr_PcpChanges_t * this_
    , pxr_PcpChanges_t * other);
#define pxr_PcpChanges_Swap pxrInternal_v0_21__pxrReserved____PcpChanges_Swap


/** Returns \c true iff there are no changes. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_IsEmpty(
    pxr_PcpChanges_t const * this_
    , _Bool * return_);
#define pxr_PcpChanges_IsEmpty pxrInternal_v0_21__pxrReserved____PcpChanges_IsEmpty


/** Returns the lifeboat responsible for maintaining the lifetime of
layers and layer stacks during change processing. Consumers may
inspect this object to determine which of these objects, if any,
had their lifetimes affected during change processing. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_GetLifeboat(
    pxr_PcpChanges_t const * this_
    , pxr_PcpLifeboat_t const * * return_);
#define pxr_PcpChanges_GetLifeboat pxrInternal_v0_21__pxrReserved____PcpChanges_GetLifeboat


/** Applies the changes to the layer stacks and caches. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_Apply(
    pxr_PcpChanges_t const * this_);
#define pxr_PcpChanges_Apply pxrInternal_v0_21__pxrReserved____PcpChanges_Apply


#ifdef __cplusplus
}
#endif
