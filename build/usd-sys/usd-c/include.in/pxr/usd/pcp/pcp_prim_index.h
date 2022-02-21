#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpArc_t_s pxrInternal_v0_21__pxrReserved____PcpArc_t;
typedef pxrInternal_v0_21__pxrReserved____PcpArc_t pxr_PcpArc_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpNodeRef_t_s pxrInternal_v0_21__pxrReserved____PcpNodeRef_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNodeRef_t pxr_PcpNodeRef_t;
typedef struct std__map_std__string_std__string__t_s std__map_std__string_std__string__t;
typedef std__map_std__string_std__string__t std_map_string_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpCache_t_s pxrInternal_v0_21__pxrReserved____PcpCache_t;
typedef pxrInternal_v0_21__pxrReserved____PcpCache_t pxr_PcpCache_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** Enumerator whose enumerants describe the payload state of this prim
index.  NoPayload if the index has no payload arcs, otherwise whether
payloads were included or excluded, and if done so by consulting either
the cache's payload include set, or determined by a payload predicate. */
enum pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__PayloadState_e {
    pxr_PcpPrimIndexOutputs_PayloadState_NoPayload = 0,
    pxr_PcpPrimIndexOutputs_PayloadState_IncludedByIncludeSet = 1,
    pxr_PcpPrimIndexOutputs_PayloadState_ExcludedByIncludeSet = 2,
    pxr_PcpPrimIndexOutputs_PayloadState_IncludedByPredicate = 3,
    pxr_PcpPrimIndexOutputs_PayloadState_ExcludedByPredicate = 4,
};
typedef unsigned int pxr_PcpPrimIndexOutputs_PayloadState;

/** \class PcpPrimIndex

PcpPrimIndex is an index of the all sites of scene description that
contribute opinions to a specific prim, under composition
semantics.

PcpComputePrimIndex() builds an index ("indexes") the given prim site.
At any site there may be scene description values expressing arcs
that represent instructions to pull in further scene description.
PcpComputePrimIndex() recursively follows these arcs, building and
ordering the results. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpPrimIndex_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpPrimIndex_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPrimIndex_t pxr_PcpPrimIndex_t;

/** \class PcpPrimIndexInputs

Inputs for the prim indexing procedure. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_t pxr_PcpPrimIndexInputs_t;

/** \class PcpPrimIndexOutputs

Outputs of the prim indexing procedure. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_t pxr_PcpPrimIndexOutputs_t;


/** Default construct an empty, invalid prim index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_ctor(
    pxr_PcpPrimIndex_t * * this_);
#define pxr_PcpPrimIndex_ctor pxrInternal_v0_21__pxrReserved____PcpPrimIndex_ctor


/** Copy-construct a prim index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_copy(
    pxr_PcpPrimIndex_t * * this_
    , pxr_PcpPrimIndex_t const * rhs);
#define pxr_PcpPrimIndex_copy pxrInternal_v0_21__pxrReserved____PcpPrimIndex_copy


/** Assignment. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex__assign(
    pxr_PcpPrimIndex_t * this_
    , pxr_PcpPrimIndex_t * * return_
    , pxr_PcpPrimIndex_t const * rhs);
#define pxr_PcpPrimIndex__assign pxrInternal_v0_21__pxrReserved____PcpPrimIndex__assign


/** Swap the contents of this prim index with \p index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_Swap(
    pxr_PcpPrimIndex_t * this_
    , pxr_PcpPrimIndex_t * rhs);
#define pxr_PcpPrimIndex_Swap pxrInternal_v0_21__pxrReserved____PcpPrimIndex_Swap


/** Same as Swap(), but standard name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_swap(
    pxr_PcpPrimIndex_t * this_
    , pxr_PcpPrimIndex_t * rhs);
#define pxr_PcpPrimIndex_swap pxrInternal_v0_21__pxrReserved____PcpPrimIndex_swap


/** Return true if this index is valid.
A default-constructed index is invalid. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_IsValid(
    pxr_PcpPrimIndex_t const * this_
    , _Bool * return_);
#define pxr_PcpPrimIndex_IsValid pxrInternal_v0_21__pxrReserved____PcpPrimIndex_IsValid


/** Returns the root node of the prim index graph. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetRootNode(
    pxr_PcpPrimIndex_t const * this_
    , pxr_PcpNodeRef_t * * return_);
#define pxr_PcpPrimIndex_GetRootNode pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetRootNode


/** Returns the path of the prim whose opinions are represented by this 
prim index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetPath(
    pxr_PcpPrimIndex_t const * this_
    , pxr_SdfPath_t const * * return_);
#define pxr_PcpPrimIndex_GetPath pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetPath


/** Returns true if this prim index contains any scene description
opinions. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_HasSpecs(
    pxr_PcpPrimIndex_t const * this_
    , _Bool * return_);
#define pxr_PcpPrimIndex_HasSpecs pxrInternal_v0_21__pxrReserved____PcpPrimIndex_HasSpecs


/** Returns true if the prim has any authored payload arcs.
The payload contents are only resolved and included
if this prim's path is in the payload inclusion set
provided in PcpPrimIndexInputs.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_HasAnyPayloads(
    pxr_PcpPrimIndex_t const * this_
    , _Bool * return_);
#define pxr_PcpPrimIndex_HasAnyPayloads pxrInternal_v0_21__pxrReserved____PcpPrimIndex_HasAnyPayloads


/** Returns true if this prim index was composed in USD mode.
\see PcpCache::IsUsd(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_IsUsd(
    pxr_PcpPrimIndex_t const * this_
    , _Bool * return_);
#define pxr_PcpPrimIndex_IsUsd pxrInternal_v0_21__pxrReserved____PcpPrimIndex_IsUsd


/** Returns true if this prim index is instanceable.
Instanceable prim indexes with the same instance key are
guaranteed to have the same set of opinions, but may not have
local opinions about name children.
\see PcpInstanceKey */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_IsInstanceable(
    pxr_PcpPrimIndex_t const * this_
    , _Bool * return_);
#define pxr_PcpPrimIndex_IsInstanceable pxrInternal_v0_21__pxrReserved____PcpPrimIndex_IsInstanceable


/** Returns the node that brings opinions from the Sd prim spec at \p layer
and \p path into this prim index. If no such node exists, returns an
invalid PcpNodeRef. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetNodeProvidingSpec(
    pxr_PcpPrimIndex_t const * this_
    , pxr_PcpNodeRef_t * * return_
    , pxr_SdfLayerHandle_t const * layer
    , pxr_SdfPath_t const * path);
#define pxr_PcpPrimIndex_GetNodeProvidingSpec pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetNodeProvidingSpec


/** Prints various statistics about this prim index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_PrintStatistics(
    pxr_PcpPrimIndex_t const * this_);
#define pxr_PcpPrimIndex_PrintStatistics pxrInternal_v0_21__pxrReserved____PcpPrimIndex_PrintStatistics


/** Dump the prim index contents to a string.

If \p includeInheritOriginInfo is \c true, output for implied inherit
nodes will include information about the originating inherit node.
If \p includeMaps is \c true, output for each node will include the
mappings to the parent and root node. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_DumpToString(
    pxr_PcpPrimIndex_t const * this_
    , std_string_t * * return_
    , _Bool includeInheritOriginInfo
    , _Bool includeMaps);
#define pxr_PcpPrimIndex_DumpToString pxrInternal_v0_21__pxrReserved____PcpPrimIndex_DumpToString


/** Dump the prim index in dot format to the file named \p filename.
See Dump(...) for information regarding arguments. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_DumpToDotGraph(
    pxr_PcpPrimIndex_t const * this_
    , std_string_t const * filename
    , _Bool includeInheritOriginInfo
    , _Bool includeMaps);
#define pxr_PcpPrimIndex_DumpToDotGraph pxrInternal_v0_21__pxrReserved____PcpPrimIndex_DumpToDotGraph


/** Compose the authored prim variant selections.

These are the variant selections expressed in scene description.
Note that these selections may not have actually been applied,
if they are invalid.

\note This result is not cached, but computed each time. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_ComposeAuthoredVariantSelections(
    pxr_PcpPrimIndex_t const * this_
    , std_map_string_string_t * * return_);
#define pxr_PcpPrimIndex_ComposeAuthoredVariantSelections pxrInternal_v0_21__pxrReserved____PcpPrimIndex_ComposeAuthoredVariantSelections


/** Return the variant selection applied for the named variant set.
If none was applied, this returns an empty string.
This can be different from the authored variant selection;
for example, if the authored selection is invalid. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetSelectionAppliedForVariantSet(
    pxr_PcpPrimIndex_t const * this_
    , std_string_t * * return_
    , std_string_t const * variantSet);
#define pxr_PcpPrimIndex_GetSelectionAppliedForVariantSet pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetSelectionAppliedForVariantSet


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_dtor(
    pxr_PcpPrimIndex_t * this_);
#define pxr_PcpPrimIndex_dtor pxrInternal_v0_21__pxrReserved____PcpPrimIndex_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_ctor(
    pxr_PcpPrimIndexInputs_t * * this_);
#define pxr_PcpPrimIndexInputs_ctor pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_ctor


/** Returns true if prim index computations using this parameters object
would be equivalent to computations using \p params. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_IsEquivalentTo(
    pxr_PcpPrimIndexInputs_t const * this_
    , _Bool * return_
    , pxr_PcpPrimIndexInputs_t const * params);
#define pxr_PcpPrimIndexInputs_IsEquivalentTo pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_IsEquivalentTo


/** If supplied, the given PcpCache will be used where possible to compute
needed intermediate results. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_Cache(
    pxr_PcpPrimIndexInputs_t * this_
    , pxr_PcpPrimIndexInputs_t * * return_
    , pxr_PcpCache_t * cache_);
#define pxr_PcpPrimIndexInputs_Cache pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_Cache


/** Whether subtrees that contribute no opinions should be culled
from the index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_Cull(
    pxr_PcpPrimIndexInputs_t * this_
    , pxr_PcpPrimIndexInputs_t * * return_
    , _Bool doCulling);
#define pxr_PcpPrimIndexInputs_Cull pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_Cull


/** Whether the prim stack should be computed, and
whether relocates, inherits, permissions, symmetry, or payloads should
be considered during prim index computation, */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_USD(
    pxr_PcpPrimIndexInputs_t * this_
    , pxr_PcpPrimIndexInputs_t * * return_
    , _Bool doUSD);
#define pxr_PcpPrimIndexInputs_USD pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_USD


/** The file format target for scene description layers encountered during
prim index computation. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_FileFormatTarget(
    pxr_PcpPrimIndexInputs_t * this_
    , pxr_PcpPrimIndexInputs_t * * return_
    , std_string_t const * target);
#define pxr_PcpPrimIndexInputs_FileFormatTarget pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_FileFormatTarget


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_copy(
    pxr_PcpPrimIndexInputs_t * * this_
    , pxr_PcpPrimIndexInputs_t const * rhs);
#define pxr_PcpPrimIndexInputs_copy pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs__assign(
    pxr_PcpPrimIndexInputs_t * this_
    , pxr_PcpPrimIndexInputs_t * * return_
    , pxr_PcpPrimIndexInputs_t const * rhs);
#define pxr_PcpPrimIndexInputs__assign pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_dtor(
    pxr_PcpPrimIndexInputs_t * this_);
#define pxr_PcpPrimIndexInputs_dtor pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_dtor


/** Swap content with \p r. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_swap(
    pxr_PcpPrimIndexOutputs_t * this_
    , pxr_PcpPrimIndexOutputs_t * r);
#define pxr_PcpPrimIndexOutputs_swap pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_swap


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_copy(
    pxr_PcpPrimIndexOutputs_t * * this_
    , pxr_PcpPrimIndexOutputs_t const * rhs);
#define pxr_PcpPrimIndexOutputs_copy pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__assign(
    pxr_PcpPrimIndexOutputs_t * this_
    , pxr_PcpPrimIndexOutputs_t * * return_
    , pxr_PcpPrimIndexOutputs_t const * rhs);
#define pxr_PcpPrimIndexOutputs__assign pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_dtor(
    pxr_PcpPrimIndexOutputs_t * this_);
#define pxr_PcpPrimIndexOutputs_dtor pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_dtor


/** Free function version for generic code and ADL. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___swap(
    pxr_PcpPrimIndex_t * l
    , pxr_PcpPrimIndex_t * r);
#define pxr_swap pxrInternal_v0_21__pxrReserved___swap


/** Free function version for generic code and ADL. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___swap_1(
    pxr_PcpPrimIndexOutputs_t * l
    , pxr_PcpPrimIndexOutputs_t * r);
#define pxr_swap_1 pxrInternal_v0_21__pxrReserved___swap_1


/** Returns true if the 'new' default standin behavior is enabled. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpIsNewDefaultStandinBehaviorEnabled(
    _Bool * return_);
#define pxr_PcpIsNewDefaultStandinBehaviorEnabled pxrInternal_v0_21__pxrReserved___PcpIsNewDefaultStandinBehaviorEnabled


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___Pcp_RescanForSpecs(
    pxr_PcpPrimIndex_t * index
    , _Bool usd);
#define pxr_Pcp_RescanForSpecs pxrInternal_v0_21__pxrReserved___Pcp_RescanForSpecs


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___Pcp_NeedToRecomputeDueToAssetPathChange(
    _Bool * return_
    , pxr_PcpPrimIndex_t const * index);
#define pxr_Pcp_NeedToRecomputeDueToAssetPathChange pxrInternal_v0_21__pxrReserved___Pcp_NeedToRecomputeDueToAssetPathChange


#ifdef __cplusplus
}
#endif
