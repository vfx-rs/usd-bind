#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

enum pxrInternal_v0_21__pxrReserved____SdfChangeList__SubLayerChangeType_e {
    pxr_SdfChangeList_SubLayerChangeType_SubLayerAdded = 0,
    pxr_SdfChangeList_SubLayerChangeType_SubLayerRemoved = 1,
    pxr_SdfChangeList_SubLayerChangeType_SubLayerOffset = 2,
};
typedef unsigned int pxr_SdfChangeList_SubLayerChangeType;

/** \class SdfChangeList

A list of scene description modifications, organized by the namespace
paths where the changes occur. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfChangeList_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfChangeList_t;
typedef pxrInternal_v0_21__pxrReserved____SdfChangeList_t pxr_SdfChangeList_t;

/** \struct Entry

Entry of changes at a single path in namespace.

If the path is SdfPath::AbsoluteRootPath(), that indicates a change
to the root of namespace (that is, a layer or stage).

Note: Our language for invalidation used to be more precise
about items added, removed, or reordered.  It might seem that
this would afford more opportunities for efficient updates,
but in practice it does not.  Because our derived data typically
must recompose or reinstantiate based on the underlying data,
the particular delta might be ignored, overridden, or invalid.
It is simpler to treat all changes identically, and focus on 
making the common base case fast, rather than have complicated
differential update logic.  It also vastly simplifies the
language of invalidation. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_t;
typedef pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_t pxr_SdfChangeList_Entry_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_ctor(
    pxr_SdfChangeList_t * * this_);
#define pxr_SdfChangeList_ctor pxrInternal_v0_21__pxrReserved____SdfChangeList_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_copy(
    pxr_SdfChangeList_t * * this_
    , pxr_SdfChangeList_t const * rhs);
#define pxr_SdfChangeList_copy pxrInternal_v0_21__pxrReserved____SdfChangeList_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList__assign(
    pxr_SdfChangeList_t * this_
    , pxr_SdfChangeList_t * * return_
    , pxr_SdfChangeList_t const * rhs);
#define pxr_SdfChangeList__assign pxrInternal_v0_21__pxrReserved____SdfChangeList__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReplaceLayerContent(
    pxr_SdfChangeList_t * this_);
#define pxr_SdfChangeList_DidReplaceLayerContent pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReplaceLayerContent


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReloadLayerContent(
    pxr_SdfChangeList_t * this_);
#define pxr_SdfChangeList_DidReloadLayerContent pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReloadLayerContent


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeLayerResolvedPath(
    pxr_SdfChangeList_t * this_);
#define pxr_SdfChangeList_DidChangeLayerResolvedPath pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeLayerResolvedPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeLayerIdentifier(
    pxr_SdfChangeList_t * this_
    , std_string_t const * oldIdentifier);
#define pxr_SdfChangeList_DidChangeLayerIdentifier pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeLayerIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeSublayerPaths(
    pxr_SdfChangeList_t * this_
    , std_string_t const * subLayerPath
    , pxr_SdfChangeList_SubLayerChangeType changeType);
#define pxr_SdfChangeList_DidChangeSublayerPaths pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeSublayerPaths


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidAddPrim(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * primPath
    , _Bool inert);
#define pxr_SdfChangeList_DidAddPrim pxrInternal_v0_21__pxrReserved____SdfChangeList_DidAddPrim


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidRemovePrim(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * primPath
    , _Bool inert);
#define pxr_SdfChangeList_DidRemovePrim pxrInternal_v0_21__pxrReserved____SdfChangeList_DidRemovePrim


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReorderPrims(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * parentPath);
#define pxr_SdfChangeList_DidReorderPrims pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReorderPrims


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimName(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath);
#define pxr_SdfChangeList_DidChangePrimName pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimName


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimVariantSets(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * primPath);
#define pxr_SdfChangeList_DidChangePrimVariantSets pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimVariantSets


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimInheritPaths(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * primPath);
#define pxr_SdfChangeList_DidChangePrimInheritPaths pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimInheritPaths


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimReferences(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * primPath);
#define pxr_SdfChangeList_DidChangePrimReferences pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimReferences


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimSpecializes(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * primPath);
#define pxr_SdfChangeList_DidChangePrimSpecializes pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimSpecializes


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidAddProperty(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * propPath
    , _Bool hasOnlyRequiredFields);
#define pxr_SdfChangeList_DidAddProperty pxrInternal_v0_21__pxrReserved____SdfChangeList_DidAddProperty


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidRemoveProperty(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * propPath
    , _Bool hasOnlyRequiredFields);
#define pxr_SdfChangeList_DidRemoveProperty pxrInternal_v0_21__pxrReserved____SdfChangeList_DidRemoveProperty


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReorderProperties(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * propPath);
#define pxr_SdfChangeList_DidReorderProperties pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReorderProperties


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePropertyName(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath);
#define pxr_SdfChangeList_DidChangePropertyName pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePropertyName


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeAttributeTimeSamples(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * attrPath);
#define pxr_SdfChangeList_DidChangeAttributeTimeSamples pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeAttributeTimeSamples


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeAttributeConnection(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * attrPath);
#define pxr_SdfChangeList_DidChangeAttributeConnection pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeAttributeConnection


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeRelationshipTargets(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * relPath);
#define pxr_SdfChangeList_DidChangeRelationshipTargets pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeRelationshipTargets


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidAddTarget(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * targetPath);
#define pxr_SdfChangeList_DidAddTarget pxrInternal_v0_21__pxrReserved____SdfChangeList_DidAddTarget


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidRemoveTarget(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * targetPath);
#define pxr_SdfChangeList_DidRemoveTarget pxrInternal_v0_21__pxrReserved____SdfChangeList_DidRemoveTarget


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeInfo(
    pxr_SdfChangeList_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * oldValue
    , pxr_VtValue_t const * newValue);
#define pxr_SdfChangeList_DidChangeInfo pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeInfo


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_GetEntry(
    pxr_SdfChangeList_t const * this_
    , pxr_SdfChangeList_Entry_t const * * return_
    , pxr_SdfPath_t const * rhs);
#define pxr_SdfChangeList_GetEntry pxrInternal_v0_21__pxrReserved____SdfChangeList_GetEntry


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList_dtor(
    pxr_SdfChangeList_t * this_);
#define pxr_SdfChangeList_dtor pxrInternal_v0_21__pxrReserved____SdfChangeList_dtor


/** Return true if this entry has an info change for \p key, false
otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_HasInfoChange(
    pxr_SdfChangeList_Entry_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfChangeList_Entry_HasInfoChange pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_HasInfoChange


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_copy(
    pxr_SdfChangeList_Entry_t * * this_
    , pxr_SdfChangeList_Entry_t const * rhs);
#define pxr_SdfChangeList_Entry_copy pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry__assign(
    pxr_SdfChangeList_Entry_t * this_
    , pxr_SdfChangeList_Entry_t * * return_
    , pxr_SdfChangeList_Entry_t const * rhs);
#define pxr_SdfChangeList_Entry__assign pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_dtor(
    pxr_SdfChangeList_Entry_t * this_);
#define pxr_SdfChangeList_Entry_dtor pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_ctor(
    pxr_SdfChangeList_Entry_t * * this_);
#define pxr_SdfChangeList_Entry_ctor pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_ctor


#ifdef __cplusplus
}
#endif
