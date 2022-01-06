#pragma once
#include "usd-api-export.h"

#include <pxr/base/tf/tf_token.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t pxr_UsdStagePtr_t;
typedef struct std__vector_pxr__UsdAttribute__t_s std__vector_pxr__UsdAttribute__t;
typedef std__vector_pxr__UsdAttribute__t std_UsdAttributeVector_t;
typedef struct pxrInternal_v0_21__pxrReserved____UsdAttribute_t_s pxrInternal_v0_21__pxrReserved____UsdAttribute_t;
typedef pxrInternal_v0_21__pxrReserved____UsdAttribute_t pxr_UsdAttribute_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____UsdReferences_t_s pxrInternal_v0_21__pxrReserved____UsdReferences_t;
typedef pxrInternal_v0_21__pxrReserved____UsdReferences_t pxr_UsdReferences_t;

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
typedef struct pxrInternal_v0_21__pxrReserved____UsdPrim_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____UsdPrim_t;
typedef pxrInternal_v0_21__pxrReserved____UsdPrim_t pxr_UsdPrim_t;


/** Return true if this is a valid object, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_IsValid(
    pxr_UsdPrim_t const * this_
    , _Bool * return_);
#define pxr_UsdPrim_IsValid pxrInternal_v0_21__pxrReserved____UsdPrim_IsValid


/** Return the stage that owns the object, and to whose state and lifetime
this object's validity is tied. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_GetStage(
    pxr_UsdPrim_t const * this_
    , pxr_UsdStagePtr_t * * return_);
#define pxr_UsdPrim_GetStage pxrInternal_v0_21__pxrReserved____UsdPrim_GetStage


/** Return the complete scene path to this object on its UsdStage,
which may (UsdPrim) or may not (all other subclasses) return a 
cached result */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_GetPath(
    pxr_UsdPrim_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_UsdPrim_GetPath pxrInternal_v0_21__pxrReserved____UsdPrim_GetPath


/** Return this object's path if this object is a prim, otherwise this
object's nearest owning prim's path.  Equivalent to GetPrim().GetPath(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_GetPrimPath(
    pxr_UsdPrim_t const * this_
    , pxr_SdfPath_t const * * return_);
#define pxr_UsdPrim_GetPrimPath pxrInternal_v0_21__pxrReserved____UsdPrim_GetPrimPath


/** Return this object if it is a prim, otherwise return this object's
nearest owning prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_GetPrim(
    pxr_UsdPrim_t const * this_
    , pxr_UsdPrim_t * * return_);
#define pxr_UsdPrim_GetPrim pxrInternal_v0_21__pxrReserved____UsdPrim_GetPrim


/** Return the full name of this object, i.e. the last component of its
SdfPath in namespace.

This is equivalent to, but generally cheaper than,
GetPath().GetNameToken() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_GetName(
    pxr_UsdPrim_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_UsdPrim_GetName pxrInternal_v0_21__pxrReserved____UsdPrim_GetName


/** Gets the value of the 'hidden' metadata field, false if not 
authored.

When an object is marked as hidden, it is an indicator to clients who 
generically display objects (such as GUI widgets) that this object 
should not be included, unless explicitly asked for.  Although this
is just a hint and thus up to each application to interpret, we
use it primarily as a way of simplifying hierarchy displays, by
hiding \em only the representation of the object itself, \em not its
subtree, instead "pulling up" everything below it one level in the
hierarchical nesting.

Note again that this is a hint for UI only - it should not be 
interpreted by any renderer as making a prim invisible to drawing. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_IsHidden(
    pxr_UsdPrim_t const * this_
    , _Bool * return_);
#define pxr_UsdPrim_IsHidden pxrInternal_v0_21__pxrReserved____UsdPrim_IsHidden


/** Sets the value of the 'hidden' metadata field. See IsHidden()
for details. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_SetHidden(
    pxr_UsdPrim_t const * this_
    , _Bool * return_
    , _Bool hidden);
#define pxr_UsdPrim_SetHidden pxrInternal_v0_21__pxrReserved____UsdPrim_SetHidden


/** Clears the opinion for "Hidden" at the current EditTarget. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_ClearHidden(
    pxr_UsdPrim_t const * this_
    , _Bool * return_);
#define pxr_UsdPrim_ClearHidden pxrInternal_v0_21__pxrReserved____UsdPrim_ClearHidden


/** Returns true if hidden was explicitly authored and GetMetadata()
will return a meaningful value for Hidden. 

Note that IsHidden returns a fallback value (false) when hidden is not
authored. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_HasAuthoredHidden(
    pxr_UsdPrim_t const * this_
    , _Bool * return_);
#define pxr_UsdPrim_HasAuthoredHidden pxrInternal_v0_21__pxrReserved____UsdPrim_HasAuthoredHidden


/** Construct an invalid prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_ctor(
    pxr_UsdPrim_t * * this_);
#define pxr_UsdPrim_ctor pxrInternal_v0_21__pxrReserved____UsdPrim_ctor


/** Return this prim's composed type name. This value is cached and is 
efficient to query. 
Note that this is just the composed type name as authored and may not 
represent the full type of the prim and its prim definition. If you 
need to reason about the actual type of the prim, use GetPrimTypeInfo 
instead as it accounts for recognized schemas, applied API schemas,
fallback types, etc. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_GetTypeName(
    pxr_UsdPrim_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_UsdPrim_GetTypeName pxrInternal_v0_21__pxrReserved____UsdPrim_GetTypeName


/** Returns the attribute at \p path on the same stage as this prim.
If path is relative, it will be anchored to the path of this prim.

\note There is no guarantee that this method returns an attribute on
this prim. This is only guaranteed if path is a purely relative
property path.
\sa GetAttribute(const TfToken&) const
\sa UsdStage::GetAttributeAtPath(const SdfPath&) const */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_GetAttributeAtPath(
    pxr_UsdPrim_t const * this_
    , pxr_UsdAttribute_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_UsdPrim_GetAttributeAtPath pxrInternal_v0_21__pxrReserved____UsdPrim_GetAttributeAtPath


/** Like GetProperties(), but exclude all relationships from the result. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_GetAttributes(
    pxr_UsdPrim_t const * this_
    , std_UsdAttributeVector_t * * return_);
#define pxr_UsdPrim_GetAttributes pxrInternal_v0_21__pxrReserved____UsdPrim_GetAttributes


/** Like GetAttributes(), but exclude attributes without authored scene
description from the result.  See UsdProperty::IsAuthored(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_GetAuthoredAttributes(
    pxr_UsdPrim_t const * this_
    , std_UsdAttributeVector_t * * return_);
#define pxr_UsdPrim_GetAuthoredAttributes pxrInternal_v0_21__pxrReserved____UsdPrim_GetAuthoredAttributes


/** Return a UsdAttribute with the name \a attrName. The attribute 
returned may or may not \b actually exist so it must be checked for
validity. Suggested use:

\code
if (UsdAttribute myAttr = prim.GetAttribute("myAttr")) {
   // myAttr is safe to use. 
   // Edits to the owning stage requires subsequent validation.
} else {
   // myAttr was not defined/authored
}
\endcode */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_GetAttribute(
    pxr_UsdPrim_t const * this_
    , pxr_UsdAttribute_t * * return_
    , pxr_TfToken_t const * attrName);
#define pxr_UsdPrim_GetAttribute pxrInternal_v0_21__pxrReserved____UsdPrim_GetAttribute


/** Return true if this prim has an attribute named \p attrName, false
otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_HasAttribute(
    pxr_UsdPrim_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * attrName);
#define pxr_UsdPrim_HasAttribute pxrInternal_v0_21__pxrReserved____UsdPrim_HasAttribute


/** Return a UsdReferences object that allows one to add, remove, or
mutate references <em>at the currently set UsdEditTarget</em>.

While the UsdReferences object has no methods for \em listing the 
currently authored references on a prim, one can use a 
UsdPrimCompositionQuery to query the reference arcs that are composed 
by this prim.

\sa UsdPrimCompositionQuery::GetDirectReferences */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_GetReferences(
    pxr_UsdPrim_t const * this_
    , pxr_UsdReferences_t * * return_);
#define pxr_UsdPrim_GetReferences pxrInternal_v0_21__pxrReserved____UsdPrim_GetReferences


/** Return true if this prim has any authored references. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_HasAuthoredReferences(
    pxr_UsdPrim_t const * this_
    , _Bool * return_);
#define pxr_UsdPrim_HasAuthoredReferences pxrInternal_v0_21__pxrReserved____UsdPrim_HasAuthoredReferences


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_copy(
    pxr_UsdPrim_t * * this_
    , pxr_UsdPrim_t const * rhs);
#define pxr_UsdPrim_copy pxrInternal_v0_21__pxrReserved____UsdPrim_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrim_dtor(
    pxr_UsdPrim_t * this_);
#define pxr_UsdPrim_dtor pxrInternal_v0_21__pxrReserved____UsdPrim_dtor


#ifdef __cplusplus
}
#endif
