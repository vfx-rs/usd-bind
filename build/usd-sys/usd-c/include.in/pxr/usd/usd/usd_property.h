#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____UsdPrim_t_s pxrInternal_v0_21__pxrReserved____UsdPrim_t;
typedef pxrInternal_v0_21__pxrReserved____UsdPrim_t pxr_UsdPrim_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t pxr_UsdStagePtr_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;

/** \class UsdProperty

Base class for UsdAttribute and UsdRelationship scenegraph objects.

UsdProperty has a bool conversion operator that validates that the property
IsDefined() and thus valid for querying and authoring values and metadata.
This is a fairly expensive query that we do <b>not</b> cache, so if client
code retains UsdProperty objects it should manage its object validity
closely for performance.  An ideal pattern is to listen for
UsdNotice::StageContentsChanged notifications, and revalidate/refetch
retained UsdObjects only then and otherwise use them without validity
checking. */
typedef struct pxrInternal_v0_21__pxrReserved____UsdProperty_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____UsdProperty_t;
typedef pxrInternal_v0_21__pxrReserved____UsdProperty_t pxr_UsdProperty_t;


/** Return true if this is a valid object, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_IsValid(
    pxr_UsdProperty_t const * this_
    , _Bool * return_);
#define pxr_UsdProperty_IsValid pxrInternal_v0_21__pxrReserved____UsdProperty_IsValid


/** Return the stage that owns the object, and to whose state and lifetime
this object's validity is tied. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetStage(
    pxr_UsdProperty_t const * this_
    , pxr_UsdStagePtr_t * * return_);
#define pxr_UsdProperty_GetStage pxrInternal_v0_21__pxrReserved____UsdProperty_GetStage


/** Return the complete scene path to this object on its UsdStage,
which may (UsdPrim) or may not (all other subclasses) return a 
cached result */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetPath(
    pxr_UsdProperty_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_UsdProperty_GetPath pxrInternal_v0_21__pxrReserved____UsdProperty_GetPath


/** Return this object's path if this object is a prim, otherwise this
object's nearest owning prim's path.  Equivalent to GetPrim().GetPath(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetPrimPath(
    pxr_UsdProperty_t const * this_
    , pxr_SdfPath_t const * * return_);
#define pxr_UsdProperty_GetPrimPath pxrInternal_v0_21__pxrReserved____UsdProperty_GetPrimPath


/** Return this object if it is a prim, otherwise return this object's
nearest owning prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetPrim(
    pxr_UsdProperty_t const * this_
    , pxr_UsdPrim_t * * return_);
#define pxr_UsdProperty_GetPrim pxrInternal_v0_21__pxrReserved____UsdProperty_GetPrim


/** Return the full name of this object, i.e. the last component of its
SdfPath in namespace.

This is equivalent to, but generally cheaper than,
GetPath().GetNameToken() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetName(
    pxr_UsdProperty_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_UsdProperty_GetName pxrInternal_v0_21__pxrReserved____UsdProperty_GetName


/** Return a string that provides a brief summary description of the
object.  This method, along with IsValid()/bool_operator,
is always safe to call on a possibly-expired object, and the 
description will specify whether the object is valid or expired,
along with a few other bits of data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetDescription(
    pxr_UsdProperty_t const * this_
    , std_string_t * * return_);
#define pxr_UsdProperty_GetDescription pxrInternal_v0_21__pxrReserved____UsdProperty_GetDescription


/** \overload

Type-erased access */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetMetadata(
    pxr_UsdProperty_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t * value);
#define pxr_UsdProperty_GetMetadata pxrInternal_v0_21__pxrReserved____UsdProperty_GetMetadata


/** \overload */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_SetMetadata(
    pxr_UsdProperty_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * value);
#define pxr_UsdProperty_SetMetadata pxrInternal_v0_21__pxrReserved____UsdProperty_SetMetadata


/** Clears the authored \a key's value at the current EditTarget,
returning false on error.

If no value is present, this method is a no-op and returns true. It is
considered an error to call ClearMetadata when no spec is present for 
this UsdObject, i.e. if the object has no presence in the
current UsdEditTarget.

\sa \ref Usd_OM_Metadata */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_ClearMetadata(
    pxr_UsdProperty_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_UsdProperty_ClearMetadata pxrInternal_v0_21__pxrReserved____UsdProperty_ClearMetadata


/** Returns true if the \a key has a meaningful value, that is, if
GetMetadata() will provide a value, either because it was authored
or because a prim's metadata fallback will be provided. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_HasMetadata(
    pxr_UsdProperty_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_UsdProperty_HasMetadata pxrInternal_v0_21__pxrReserved____UsdProperty_HasMetadata


/** Returns true if the \a key has an authored value, false if no
value was authored or the only value available is a prim's metadata 
fallback. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredMetadata(
    pxr_UsdProperty_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_UsdProperty_HasAuthoredMetadata pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredMetadata


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_IsHidden(
    pxr_UsdProperty_t const * this_
    , _Bool * return_);
#define pxr_UsdProperty_IsHidden pxrInternal_v0_21__pxrReserved____UsdProperty_IsHidden


/** Sets the value of the 'hidden' metadata field. See IsHidden()
for details. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_SetHidden(
    pxr_UsdProperty_t const * this_
    , _Bool * return_
    , _Bool hidden);
#define pxr_UsdProperty_SetHidden pxrInternal_v0_21__pxrReserved____UsdProperty_SetHidden


/** Clears the opinion for "Hidden" at the current EditTarget. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_ClearHidden(
    pxr_UsdProperty_t const * this_
    , _Bool * return_);
#define pxr_UsdProperty_ClearHidden pxrInternal_v0_21__pxrReserved____UsdProperty_ClearHidden


/** Returns true if hidden was explicitly authored and GetMetadata()
will return a meaningful value for Hidden. 

Note that IsHidden returns a fallback value (false) when hidden is not
authored. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredHidden(
    pxr_UsdProperty_t const * this_
    , _Bool * return_);
#define pxr_UsdProperty_HasAuthoredHidden pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredHidden


/** Return this object's documentation (metadata).  This returns the
empty string if no documentation has been set.
\sa SetDocumentation() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetDocumentation(
    pxr_UsdProperty_t const * this_
    , std_string_t * * return_);
#define pxr_UsdProperty_GetDocumentation pxrInternal_v0_21__pxrReserved____UsdProperty_GetDocumentation


/** Sets this object's documentation (metadata).  Returns true on success. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_SetDocumentation(
    pxr_UsdProperty_t const * this_
    , _Bool * return_
    , std_string_t const * doc);
#define pxr_UsdProperty_SetDocumentation pxrInternal_v0_21__pxrReserved____UsdProperty_SetDocumentation


/** Clears this object's documentation (metadata) in the current EditTarget
(only).  Returns true on success. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_ClearDocumentation(
    pxr_UsdProperty_t const * this_
    , _Bool * return_);
#define pxr_UsdProperty_ClearDocumentation pxrInternal_v0_21__pxrReserved____UsdProperty_ClearDocumentation


/** Returns true if documentation was explicitly authored and GetMetadata()
will return a meaningful value for documentation.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredDocumentation(
    pxr_UsdProperty_t const * this_
    , _Bool * return_);
#define pxr_UsdProperty_HasAuthoredDocumentation pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredDocumentation


/** @} */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetNamespaceDelimiter(
    char * return_);
#define pxr_UsdProperty_GetNamespaceDelimiter pxrInternal_v0_21__pxrReserved____UsdProperty_GetNamespaceDelimiter


/** Construct an invalid property. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_ctor(
    pxr_UsdProperty_t * * this_);
#define pxr_UsdProperty_ctor pxrInternal_v0_21__pxrReserved____UsdProperty_ctor


/** Return this property's name with all namespace prefixes removed,
i.e. the last component of the return value of GetName()

This is generally the property's "client name"; property namespaces are
often used to group related properties together.  The namespace prefixes
the property name but many consumers will care only about un-namespaced
name, i.e. its BaseName.  For more information, see \ref Usd_Ordering */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetBaseName(
    pxr_UsdProperty_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_UsdProperty_GetBaseName pxrInternal_v0_21__pxrReserved____UsdProperty_GetBaseName


/** Return this property's complete namespace prefix.  Return the empty
token if this property has no namespaces.

This is the complement of GetBaseName(), although it does \em not
contain a trailing namespace delimiter */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetNamespace(
    pxr_UsdProperty_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_UsdProperty_GetNamespace pxrInternal_v0_21__pxrReserved____UsdProperty_GetNamespace


/** Return this property's name elements including namespaces and its base
name as the final element. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_SplitName(
    pxr_UsdProperty_t const * this_
    , std_vector_string_t * * return_);
#define pxr_UsdProperty_SplitName pxrInternal_v0_21__pxrReserved____UsdProperty_SplitName


/** Return this property's display group (metadata).  This returns the
empty token if no display group has been set.
\sa SetDisplayGroup() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetDisplayGroup(
    pxr_UsdProperty_t const * this_
    , std_string_t * * return_);
#define pxr_UsdProperty_GetDisplayGroup pxrInternal_v0_21__pxrReserved____UsdProperty_GetDisplayGroup


/** Sets this property's display group (metadata).  Returns true on success.

DisplayGroup provides UI hinting for grouping related properties
together for display.  We define a convention for specifying nesting
of groups by recognizing the property namespace separator in 
displayGroup as denoting group-nesting.
\sa SetNestedDisplayGroups() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_SetDisplayGroup(
    pxr_UsdProperty_t const * this_
    , _Bool * return_
    , std_string_t const * displayGroup);
#define pxr_UsdProperty_SetDisplayGroup pxrInternal_v0_21__pxrReserved____UsdProperty_SetDisplayGroup


/** Clears this property's display group (metadata) in
the current EditTarget (only).  Returns true on success. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_ClearDisplayGroup(
    pxr_UsdProperty_t const * this_
    , _Bool * return_);
#define pxr_UsdProperty_ClearDisplayGroup pxrInternal_v0_21__pxrReserved____UsdProperty_ClearDisplayGroup


/** Returns true if displayGroup was explicitly authored and GetMetadata()
will return a meaningful value for displayGroup.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredDisplayGroup(
    pxr_UsdProperty_t const * this_
    , _Bool * return_);
#define pxr_UsdProperty_HasAuthoredDisplayGroup pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredDisplayGroup


/** Return this property's displayGroup as a sequence of groups to be
nested, or an empty vector if displayGroup is empty or not authored. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetNestedDisplayGroups(
    pxr_UsdProperty_t const * this_
    , std_vector_string_t * * return_);
#define pxr_UsdProperty_GetNestedDisplayGroups pxrInternal_v0_21__pxrReserved____UsdProperty_GetNestedDisplayGroups


/** Sets this property's display group (metadata) to the nested sequence.  
Returns true on success.

A displayGroup set with this method can still be retrieved with
GetDisplayGroup(), with the namespace separator embedded in the result.
If \p nestedGroups is empty, we author an empty string for displayGroup.
\sa SetDisplayGroup() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_SetNestedDisplayGroups(
    pxr_UsdProperty_t const * this_
    , _Bool * return_
    , std_vector_string_t const * nestedGroups);
#define pxr_UsdProperty_SetNestedDisplayGroups pxrInternal_v0_21__pxrReserved____UsdProperty_SetNestedDisplayGroups


/** Return this property's display name (metadata).  This returns the
empty string if no display name has been set.
\sa SetDisplayName() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_GetDisplayName(
    pxr_UsdProperty_t const * this_
    , std_string_t * * return_);
#define pxr_UsdProperty_GetDisplayName pxrInternal_v0_21__pxrReserved____UsdProperty_GetDisplayName


/** Sets this property's display name (metadata).  Returns true on success.

DisplayName is meant to be a descriptive label, not necessarily an
alternate identifier; therefore there is no restriction on which
characters can appear in it. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_SetDisplayName(
    pxr_UsdProperty_t const * this_
    , _Bool * return_
    , std_string_t const * name);
#define pxr_UsdProperty_SetDisplayName pxrInternal_v0_21__pxrReserved____UsdProperty_SetDisplayName


/** Clears this property's display name (metadata) in the current EditTarget
(only).  Returns true on success. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_ClearDisplayName(
    pxr_UsdProperty_t const * this_
    , _Bool * return_);
#define pxr_UsdProperty_ClearDisplayName pxrInternal_v0_21__pxrReserved____UsdProperty_ClearDisplayName


/** Returns true if displayName was explicitly authored and GetMetadata()
will return a meaningful value for displayName.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredDisplayName(
    pxr_UsdProperty_t const * this_
    , _Bool * return_);
#define pxr_UsdProperty_HasAuthoredDisplayName pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredDisplayName


/** Return true if this is a custom property (i.e., not part of a
prim schema).

The 'custom' modifier in USD serves the same function as Alembic's
'userProperties', which is to say as a categorization for ad hoc
client data not formalized into any schema, and therefore not 
carrying an expectation of specific processing by consuming applications. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_IsCustom(
    pxr_UsdProperty_t const * this_
    , _Bool * return_);
#define pxr_UsdProperty_IsCustom pxrInternal_v0_21__pxrReserved____UsdProperty_IsCustom


/** Set the value for custom at the current EditTarget, return true on
success, false if the value can not be written.

\b Note that this value should not be changed as it is typically either
automatically authored or provided by a property definition. This method
is provided primarily for fixing invalid scene description. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_SetCustom(
    pxr_UsdProperty_t const * this_
    , _Bool * return_
    , _Bool isCustom);
#define pxr_UsdProperty_SetCustom pxrInternal_v0_21__pxrReserved____UsdProperty_SetCustom


/** Return true if this is a builtin property or if the strongest
authored SdfPropertySpec for this property's path matches this
property's dynamic type.  That is, SdfRelationshipSpec in case this is a
UsdRelationship, and SdfAttributeSpec in case this is a UsdAttribute.
Return \c false if this property's prim has expired.

For attributes, a \c true return does not imply that this attribute
possesses a value, only that has been declared, is of a certain type and
variability, and that it is safe to use to query and author values and
metadata. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_IsDefined(
    pxr_UsdProperty_t const * this_
    , _Bool * return_);
#define pxr_UsdProperty_IsDefined pxrInternal_v0_21__pxrReserved____UsdProperty_IsDefined


/** Return true if there are any authored opinions for this property
in any layer that contributes to this stage, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_IsAuthored(
    pxr_UsdProperty_t const * this_
    , _Bool * return_);
#define pxr_UsdProperty_IsAuthored pxrInternal_v0_21__pxrReserved____UsdProperty_IsAuthored


/** Flattens this property to a property spec with the same name 
beneath the given \p parent prim in the edit target of its owning stage.

The \p parent prim may belong to a different stage than this property's 
owning stage.

Flattening authors all authored resolved values and metadata for 
this property into the destination property spec. If this property
is a builtin property, fallback values and metadata will also be
authored if the destination property has a different fallback 
value or no fallback value, or if the destination property has an
authored value that overrides its fallback.

Attribute connections and relationship targets that target an
object beneath this property's owning prim will be remapped to
target objects beneath the destination \p parent prim.

If the destination spec already exists, it will be overwritten.

\sa UsdStage::Flatten */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_FlattenTo_parent(
    pxr_UsdProperty_t const * this_
    , pxr_UsdProperty_t * * return_
    , pxr_UsdPrim_t const * parent);
#define pxr_UsdProperty_FlattenTo_parent pxrInternal_v0_21__pxrReserved____UsdProperty_FlattenTo_parent


/** \overload
Flattens this property to a property spec with the given
\p propName beneath the given \p parent prim in the edit target of its 
owning stage.

The \p parent prim may belong to a different stage than this property's 
owning stage. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_FlattenTo_parent_property(
    pxr_UsdProperty_t const * this_
    , pxr_UsdProperty_t * * return_
    , pxr_UsdPrim_t const * parent
    , pxr_TfToken_t const * propName);
#define pxr_UsdProperty_FlattenTo_parent_property pxrInternal_v0_21__pxrReserved____UsdProperty_FlattenTo_parent_property


/** \overload
Flattens this property to a property spec for the given
\p property in the edit target of its owning prim's stage.

The \p property owning prim may belong to a different stage than this 
property's owning stage. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_FlattenTo_property(
    pxr_UsdProperty_t const * this_
    , pxr_UsdProperty_t * * return_
    , pxr_UsdProperty_t const * property);
#define pxr_UsdProperty_FlattenTo_property pxrInternal_v0_21__pxrReserved____UsdProperty_FlattenTo_property


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdProperty_copy(
    pxr_UsdProperty_t * * this_
    , pxr_UsdProperty_t const * rhs);
#define pxr_UsdProperty_copy pxrInternal_v0_21__pxrReserved____UsdProperty_copy


#ifdef __cplusplus
}
#endif
