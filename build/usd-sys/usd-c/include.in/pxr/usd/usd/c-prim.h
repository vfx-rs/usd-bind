#pragma once
#include "usd-api-export.h"

#include <pxr/base/tf/weak_ptr.h>
#include <pxr/usd/sdf/c-path.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_20__pxrReserved____TfToken_t_s pxrInternal_v0_20__pxrReserved____TfToken_t;
typedef pxrInternal_v0_20__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_20__pxrReserved____SdfPath_t_s pxrInternal_v0_20__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_20__pxrReserved____SdfPath_t pxr_SdfPath_t;

/** \class UsdPrim

UsdPrim is the sole persistent scenegraph object on a UsdStage, and
is the embodiment of a "Prim" as described in the <em>Universal Scene
Description Composition Compendium</em>

A UsdPrim is the principal container of other types of scene description.
It provides API for accessing and creating all of the contained kinds
of scene description, which include:
\li UsdVariantSets - all VariantSets on the prim (GetVariantSets(), GetVariantSet())
\li UsdReferences - all references on the prim (GetReferences())
\li UsdInherits - all inherits on the prim (GetInherits())
\li UsdSpecializes - all specializes on the prim (GetSpecializes())

As well as access to the API objects for properties contained within the 
prim - UsdPrim as well as all of the following classes are subclasses
of UsdObject:
\li UsdProperty - generic access to all attributes and relationships.
A UsdProperty can be queried and cast to a UsdAttribute or UsdRelationship
using UsdObject::Is<>() and UsdObject::As<>(). (GetPropertyNames(), 
GetProperties(), GetPropertiesInNamespace(), GetPropertyOrder(),
SetPropertyOrder())
\li UsdAttribute - access to default and timesampled attribute values, as 
well as value resolution information, and attribute-specific metadata 
(CreateAttribute(), GetAttribute(), GetAttributes(), HasAttribute())
\li UsdRelationship - access to authoring and resolving relationships
to other prims and properties (CreateRelationship(), GetRelationship(), 
GetRelationships(), HasRelationship())

UsdPrim also provides access to iteration through its prim children,
optionally making use of the \ref primFlags.h "prim predicates facility" 
(GetChildren(), GetAllChildren(), GetFilteredChildren()).

\section Lifetime Management

Clients acquire UsdPrim objects, which act like weak/guarded pointers
to persistent objects owned and managed by their originating UsdStage.
We provide the following guarantees for a UsdPrim acquired via 
UsdStage::GetPrimAtPath() or UsdStage::OverridePrim() or 
UsdStage::DefinePrim():
\li As long as no further mutations to the structure of the UsdStage
    are made, the UsdPrim will still be valid.  Loading and
    Unloading are considered structural mutations.
\li When the UsdStage's structure \em is mutated, the thread performing
    the mutation will receive a UsdNotice::ObjectsChanged notice
    after the stage has been reconfigured, which provides details as to
    what prims may have been created or destroyed, and what prims
    may simply have changed in some structural way.

Prim access in "reader" threads should be limited to GetPrimAtPath(), which
will never cause a mutation to the Stage or its layers.

Please refer to \ref UsdNotice for a listing of
the events that could cause UsdNotice::ObjectsChanged to be emitted. */
typedef struct pxrInternal_v0_20__pxrReserved____UsdPrim_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_20__pxrReserved____UsdPrim_t;
typedef pxrInternal_v0_20__pxrReserved____UsdPrim_t pxr_UsdPrim_t;


/** Return true if this is a valid object, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_IsValid(
    pxr_UsdPrim_t const * this_
    , _Bool * return_);
#define pxr_UsdPrim_IsValid pxrInternal_v0_20__pxrReserved____UsdPrim_IsValid


/** Return the stage that owns the object, and to whose state and lifetime
this object's validity is tied. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetStage(
    pxr_UsdPrim_t const * this_
    , pxr_UsdStagePtr_t * * return_);
#define pxr_UsdPrim_GetStage pxrInternal_v0_20__pxrReserved____UsdPrim_GetStage


/** Return the complete scene path to this object on its UsdStage,
which may (UsdPrim) or may not (all other subclasses) return a 
cached result */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetPath(
    pxr_UsdPrim_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_UsdPrim_GetPath pxrInternal_v0_20__pxrReserved____UsdPrim_GetPath


/** Return this object's path if this object is a prim, otherwise this
object's nearest owning prim's path.  Equivalent to GetPrim().GetPath(). */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetPrimPath(
    pxr_UsdPrim_t const * this_
    , pxr_SdfPath_t const * * return_);
#define pxr_UsdPrim_GetPrimPath pxrInternal_v0_20__pxrReserved____UsdPrim_GetPrimPath


/** Return this object if it is a prim, otherwise return this object's
nearest owning prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetPrim(
    pxr_UsdPrim_t const * this_
    , pxr_UsdPrim_t * * return_);
#define pxr_UsdPrim_GetPrim pxrInternal_v0_20__pxrReserved____UsdPrim_GetPrim


/** Return the full name of this object, i.e. the last component of its
SdfPath in namespace.

This is equivalent to, but generally cheaper than,
GetPath().GetNameToken() */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetName(
    pxr_UsdPrim_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_UsdPrim_GetName pxrInternal_v0_20__pxrReserved____UsdPrim_GetName


/** Construct an invalid prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_ctor(
    pxr_UsdPrim_t * * this_);
#define pxr_UsdPrim_ctor pxrInternal_v0_20__pxrReserved____UsdPrim_ctor


/** Return this prim's composed type name.  Note that this value is
cached and is efficient to query. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetTypeName(
    pxr_UsdPrim_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_UsdPrim_GetTypeName pxrInternal_v0_20__pxrReserved____UsdPrim_GetTypeName


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_copy(
    pxr_UsdPrim_t * * this_
    , pxr_UsdPrim_t const * rhs);
#define pxr_UsdPrim_copy pxrInternal_v0_20__pxrReserved____UsdPrim_copy


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_dtor(
    pxr_UsdPrim_t * this_);
#define pxr_UsdPrim_dtor pxrInternal_v0_20__pxrReserved____UsdPrim_dtor


#ifdef __cplusplus
}
#endif
