#pragma once
#include "usd-api-export.h"

#include <pxr/usd/usd/usd_common.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__vector_pxr__SdfPath__t_s std__vector_pxr__SdfPath__t;
typedef std__vector_pxr__SdfPath__t std_SdfPathVector_t;
typedef struct pxrInternal_v0_21__pxrReserved____UsdProperty_t_s pxrInternal_v0_21__pxrReserved____UsdProperty_t;
typedef pxrInternal_v0_21__pxrReserved____UsdProperty_t pxr_UsdProperty_t;
typedef struct pxrInternal_v0_21__pxrReserved____UsdPrim_t_s pxrInternal_v0_21__pxrReserved____UsdPrim_t;
typedef pxrInternal_v0_21__pxrReserved____UsdPrim_t pxr_UsdPrim_t;
typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____UsdTimeCode_t_s pxrInternal_v0_21__pxrReserved____UsdTimeCode_t;
typedef pxrInternal_v0_21__pxrReserved____UsdTimeCode_t pxr_UsdTimeCode_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t pxr_UsdStagePtr_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t_s pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t;
typedef pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t pxr_SdfValueTypeName_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

/** \class UsdAttribute

Scenegraph object for authoring and retrieving numeric, string, and array
valued data, sampled over time.

The allowed value types for UsdAttribute are dictated by the Sdf
("Scene Description Foundations") core's data model, which we summarize in
\ref Usd_Page_Datatypes .

\section Usd_AttributeQualities Attribute Defining Qualities

In addition to its value type, an Attribute has two other defining
qualities:
\li <b>Variability</b> Expresses whether an attribute is intended to
have time samples (GetVariability() == \c SdfVariabilityVarying), or only
a default (GetVariability() == \c SdfVariabilityUniform).  For more on
reasoning about time samples, 
see \ref Usd_AttributeValueMethods "Value & Time-Sample Accessors".

\li <b>Custom</b> Determines whether an attribute belongs to a
schema (IsCustom() == \c false), or is a user-defined, custom attribute.
schema attributes will always be defined on a prim of the schema type,
ans may possess fallback values from the schema, whereas custom 
attributes must always first be authored in order to be defined.  Note
that \em custom is actually an aspect of UsdProperty, as UsdRelationship
can also be custom or provided by a schema.

\section Usd_AttributeExistence Attribute Creation and Existence

One can always create an attribute generically via 
UsdPrim::CreateAttribute(), which ensures that an attribute "is defined"
in the current \ref UsdEditTarget .  In order to author any metadata or
a default or timesample for an attribute, <em>it must first be defined</em>.
It is sufficient that the attribute be defined in any one of the layers
participating in the stage's current composition; for \em builtin 
attributes (those belonging to the owning prim's defining schema, i.e.
the most specific subclass of UsdTypedSchema for which prim.IsA<schema>()
will evaluate to true) there need be no authored scene description, because
a definition is provided by the prim's schema definition.

<b>Creating</b> an attribute does not imply that the attribute has a value.
More broadly, in the following code:
\code
if (UsdAttribute attr = prim.GetAttribute(TfToken("myAttr"))){
   ...
}
\endcode

The UsdAttribute passes the bool test, because it is defined; however, 
inside the clause, we have no guarantee that attr has a value.

\section Usd_AttributeInterpolation Attribute Value Interpolation

UsdAttribute supports two interpolation behaviors when retrieving
attribute values at times where no value is explicitly authored.
The desired behavior may be specified via UsdStage::SetInterpolationType.
That behavior will be used for all calls to UsdAttribute::Get.

The supported interpolation types are:

\li <b>Held</b> Attribute values are held constant between authored
values.  An attribute's value will be equal to the nearest preceding
authored value.  If there is no preceding authored value, the value 
will be equal to the nearest subsequent value.

\li <b>Linear</b> Attribute values are linearly interpolated between
authored values.

Linear interpolation is only supported for certain data types.  See 
\ref USD_LINEAR_INTERPOLATION_TYPES for the list of these types.  Types 
that do not support linear interpolation will use held interpolation 
instead.

Linear interpolation is done element-by-element for array, vector, 
and matrix data types.  If linear interpolation is requested for
two array values with different sizes, held interpolation will
be used instead.

\section Usd_AttributeBlocking Attribute Value Blocking

While prims can effectively be removed from a scene by
\ref Usd_ActiveInactive "deactivating them," properties cannot.  However,
it is possible to **block an attribute's value**, thus making the attribute
behave as if it has a definition (and possibly metadata), but no authored
value.  


One blocks an attribute using UsdAttribute::Block(), which will block the
attribute in the stage's current UsdEditTarget, by authoring an
SdfValueBlock in the attribute's *default*, and only values authored in
weaker layers than the editTarget will be blocked.  If the value block is
the strongest authored opinion for the attribute, the HasAuthoredValue()
method will return *false*, and the HasValue() and Get() methods will
only return *true* if the attribute possesses a fallback value from the
prim's schema.  "Unblocking" a blocked attribute is as simple as setting
a *default* or timeSample value for the attribute in the same or stronger
layer.

\subsection Usd_TimeVaryingAttributeBlocks Time-varying Blocks

The semantics of \ref Usd_ValueClips_Overview "Value Clips" necessitate
the ability to selectively block an attribute's value for only some intervals
in its authored range of samples.  One can block an attribute's value at
time *t* by calling `attr.Set(SdfValueBlock, t)` When an attribute is thusly
"partially blocked", UsdAttribute::Get() will succeed only for those time
intervals whose left/earlier bracketing timeSample is **not** SdfValueBlock.

Due to this time-varying potential of value blocking, it may be the case 
that an attribute's  HasAuthoredValue() and HasValue() methods both return
*true* (because they do not and cannot consider time-varying blocks), but
Get() may yet return *false* over some intervals.

\section Usd_AssetPathValuedAttributes Attributes of type SdfAssetPath and UsdAttribute::Get()

If an attribute's value type is SdfAssetPath or SdfAssetPathArray, Get()
performs extra work to compute the resolved asset paths, using the layer
that has the strongest value opinion as the anchor for "relative" asset
paths.  Both the unresolved and resolved results are available through
SdfAssetPath::GetAssetPath() and SdfAssetPath::GetResolvedPath(),
respectively.

Clients that call Get() on many asset-path-valued attributes may wish to
employ an ArResolverScopedCache to improve asset path resolution
performance. */
typedef struct pxrInternal_v0_21__pxrReserved____UsdAttribute_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____UsdAttribute_t;
typedef pxrInternal_v0_21__pxrReserved____UsdAttribute_t pxr_UsdAttribute_t;


/** Return true if this is a valid object, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_IsValid(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_IsValid pxrInternal_v0_21__pxrReserved____UsdAttribute_IsValid


/** Return the stage that owns the object, and to whose state and lifetime
this object's validity is tied. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetStage(
    pxr_UsdAttribute_t const * this_
    , pxr_UsdStagePtr_t * * return_);
#define pxr_UsdAttribute_GetStage pxrInternal_v0_21__pxrReserved____UsdAttribute_GetStage


/** Return the complete scene path to this object on its UsdStage,
which may (UsdPrim) or may not (all other subclasses) return a 
cached result */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetPath(
    pxr_UsdAttribute_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_UsdAttribute_GetPath pxrInternal_v0_21__pxrReserved____UsdAttribute_GetPath


/** Return this object's path if this object is a prim, otherwise this
object's nearest owning prim's path.  Equivalent to GetPrim().GetPath(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetPrimPath(
    pxr_UsdAttribute_t const * this_
    , pxr_SdfPath_t const * * return_);
#define pxr_UsdAttribute_GetPrimPath pxrInternal_v0_21__pxrReserved____UsdAttribute_GetPrimPath


/** Return this object if it is a prim, otherwise return this object's
nearest owning prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetPrim(
    pxr_UsdAttribute_t const * this_
    , pxr_UsdPrim_t * * return_);
#define pxr_UsdAttribute_GetPrim pxrInternal_v0_21__pxrReserved____UsdAttribute_GetPrim


/** Return the full name of this object, i.e. the last component of its
SdfPath in namespace.

This is equivalent to, but generally cheaper than,
GetPath().GetNameToken() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetName(
    pxr_UsdAttribute_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_UsdAttribute_GetName pxrInternal_v0_21__pxrReserved____UsdAttribute_GetName


/** Return a string that provides a brief summary description of the
object.  This method, along with IsValid()/bool_operator,
is always safe to call on a possibly-expired object, and the 
description will specify whether the object is valid or expired,
along with a few other bits of data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDescription(
    pxr_UsdAttribute_t const * this_
    , std_string_t * * return_);
#define pxr_UsdAttribute_GetDescription pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDescription


/** \overload

Type-erased access */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetMetadata_value(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t * value);
#define pxr_UsdAttribute_GetMetadata_value pxrInternal_v0_21__pxrReserved____UsdAttribute_GetMetadata_value


/** \overload */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetMetadata_value(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * value);
#define pxr_UsdAttribute_SetMetadata_value pxrInternal_v0_21__pxrReserved____UsdAttribute_SetMetadata_value


/** Clears the authored \a key's value at the current EditTarget,
returning false on error.

If no value is present, this method is a no-op and returns true. It is
considered an error to call ClearMetadata when no spec is present for 
this UsdObject, i.e. if the object has no presence in the
current UsdEditTarget.

\sa \ref Usd_OM_Metadata */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearMetadata(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_UsdAttribute_ClearMetadata pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearMetadata


/** Returns true if the \a key has a meaningful value, that is, if
GetMetadata() will provide a value, either because it was authored
or because a prim's metadata fallback will be provided. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasMetadata(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_UsdAttribute_HasMetadata pxrInternal_v0_21__pxrReserved____UsdAttribute_HasMetadata


/** Returns true if the \a key has an authored value, false if no
value was authored or the only value available is a prim's metadata 
fallback. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredMetadata(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_UsdAttribute_HasAuthoredMetadata pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredMetadata


/** \overload */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetMetadataByDictKey_value(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t * value);
#define pxr_UsdAttribute_GetMetadataByDictKey_value pxrInternal_v0_21__pxrReserved____UsdAttribute_GetMetadataByDictKey_value


/** \overload */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetMetadataByDictKey(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t const * value);
#define pxr_UsdAttribute_SetMetadataByDictKey pxrInternal_v0_21__pxrReserved____UsdAttribute_SetMetadataByDictKey


/** Clear any authored value identified by \p key and \p keyPath
at the current EditTarget.  The \p keyPath is a ':'-separated path
identifying a path in subdictionaries stored in the metadata field at
\p key.  Return true if the value is cleared successfully, false
otherwise.

\sa \ref Usd_Dictionary_Type */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearMetadataByDictKey(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_TfToken_t const * keyPath);
#define pxr_UsdAttribute_ClearMetadataByDictKey pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearMetadataByDictKey


/** Return true if there exists any authored or fallback opinion for
\p key and \p keyPath.  The \p keyPath is a ':'-separated path
identifying a value in subdictionaries stored in the metadata field at
\p key.

\sa \ref Usd_Dictionary_Type */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasMetadataDictKey(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_TfToken_t const * keyPath);
#define pxr_UsdAttribute_HasMetadataDictKey pxrInternal_v0_21__pxrReserved____UsdAttribute_HasMetadataDictKey


/** Return true if there exists any authored opinion (excluding
fallbacks) for \p key and \p keyPath.  The \p keyPath is a ':'-separated
path identifying a value in subdictionaries stored in the metadata field
at \p key.

\sa \ref Usd_Dictionary_Type */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredMetadataDictKey(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_TfToken_t const * keyPath);
#define pxr_UsdAttribute_HasAuthoredMetadataDictKey pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredMetadataDictKey


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_IsHidden(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_IsHidden pxrInternal_v0_21__pxrReserved____UsdAttribute_IsHidden


/** Sets the value of the 'hidden' metadata field. See IsHidden()
for details. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetHidden(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , _Bool hidden);
#define pxr_UsdAttribute_SetHidden pxrInternal_v0_21__pxrReserved____UsdAttribute_SetHidden


/** Clears the opinion for "Hidden" at the current EditTarget. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearHidden(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_ClearHidden pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearHidden


/** Returns true if hidden was explicitly authored and GetMetadata()
will return a meaningful value for Hidden. 

Note that IsHidden returns a fallback value (false) when hidden is not
authored. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredHidden(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_HasAuthoredHidden pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredHidden


/** Return this object's documentation (metadata).  This returns the
empty string if no documentation has been set.
\sa SetDocumentation() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDocumentation(
    pxr_UsdAttribute_t const * this_
    , std_string_t * * return_);
#define pxr_UsdAttribute_GetDocumentation pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDocumentation


/** Sets this object's documentation (metadata).  Returns true on success. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetDocumentation(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , std_string_t const * doc);
#define pxr_UsdAttribute_SetDocumentation pxrInternal_v0_21__pxrReserved____UsdAttribute_SetDocumentation


/** Clears this object's documentation (metadata) in the current EditTarget
(only).  Returns true on success. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearDocumentation(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_ClearDocumentation pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearDocumentation


/** Returns true if documentation was explicitly authored and GetMetadata()
will return a meaningful value for documentation.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredDocumentation(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_HasAuthoredDocumentation pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredDocumentation


/** @} */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetNamespaceDelimiter(
    char * return_);
#define pxr_UsdAttribute_GetNamespaceDelimiter pxrInternal_v0_21__pxrReserved____UsdAttribute_GetNamespaceDelimiter


/** Return this property's name with all namespace prefixes removed,
i.e. the last component of the return value of GetName()

This is generally the property's "client name"; property namespaces are
often used to group related properties together.  The namespace prefixes
the property name but many consumers will care only about un-namespaced
name, i.e. its BaseName.  For more information, see \ref Usd_Ordering */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetBaseName(
    pxr_UsdAttribute_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_UsdAttribute_GetBaseName pxrInternal_v0_21__pxrReserved____UsdAttribute_GetBaseName


/** Return this property's complete namespace prefix.  Return the empty
token if this property has no namespaces.

This is the complement of GetBaseName(), although it does \em not
contain a trailing namespace delimiter */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetNamespace(
    pxr_UsdAttribute_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_UsdAttribute_GetNamespace pxrInternal_v0_21__pxrReserved____UsdAttribute_GetNamespace


/** Return this property's name elements including namespaces and its base
name as the final element. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SplitName(
    pxr_UsdAttribute_t const * this_
    , std_vector_string_t * * return_);
#define pxr_UsdAttribute_SplitName pxrInternal_v0_21__pxrReserved____UsdAttribute_SplitName


/** Return this property's display group (metadata).  This returns the
empty token if no display group has been set.
\sa SetDisplayGroup() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDisplayGroup(
    pxr_UsdAttribute_t const * this_
    , std_string_t * * return_);
#define pxr_UsdAttribute_GetDisplayGroup pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDisplayGroup


/** Sets this property's display group (metadata).  Returns true on success.

DisplayGroup provides UI hinting for grouping related properties
together for display.  We define a convention for specifying nesting
of groups by recognizing the property namespace separator in 
displayGroup as denoting group-nesting.
\sa SetNestedDisplayGroups() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetDisplayGroup(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , std_string_t const * displayGroup);
#define pxr_UsdAttribute_SetDisplayGroup pxrInternal_v0_21__pxrReserved____UsdAttribute_SetDisplayGroup


/** Clears this property's display group (metadata) in
the current EditTarget (only).  Returns true on success. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearDisplayGroup(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_ClearDisplayGroup pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearDisplayGroup


/** Returns true if displayGroup was explicitly authored and GetMetadata()
will return a meaningful value for displayGroup.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredDisplayGroup(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_HasAuthoredDisplayGroup pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredDisplayGroup


/** Return this property's displayGroup as a sequence of groups to be
nested, or an empty vector if displayGroup is empty or not authored. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetNestedDisplayGroups(
    pxr_UsdAttribute_t const * this_
    , std_vector_string_t * * return_);
#define pxr_UsdAttribute_GetNestedDisplayGroups pxrInternal_v0_21__pxrReserved____UsdAttribute_GetNestedDisplayGroups


/** Sets this property's display group (metadata) to the nested sequence.  
Returns true on success.

A displayGroup set with this method can still be retrieved with
GetDisplayGroup(), with the namespace separator embedded in the result.
If \p nestedGroups is empty, we author an empty string for displayGroup.
\sa SetDisplayGroup() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetNestedDisplayGroups(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , std_vector_string_t const * nestedGroups);
#define pxr_UsdAttribute_SetNestedDisplayGroups pxrInternal_v0_21__pxrReserved____UsdAttribute_SetNestedDisplayGroups


/** Return this property's display name (metadata).  This returns the
empty string if no display name has been set.
\sa SetDisplayName() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDisplayName(
    pxr_UsdAttribute_t const * this_
    , std_string_t * * return_);
#define pxr_UsdAttribute_GetDisplayName pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDisplayName


/** Sets this property's display name (metadata).  Returns true on success.

DisplayName is meant to be a descriptive label, not necessarily an
alternate identifier; therefore there is no restriction on which
characters can appear in it. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetDisplayName(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , std_string_t const * name);
#define pxr_UsdAttribute_SetDisplayName pxrInternal_v0_21__pxrReserved____UsdAttribute_SetDisplayName


/** Clears this property's display name (metadata) in the current EditTarget
(only).  Returns true on success. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearDisplayName(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_ClearDisplayName pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearDisplayName


/** Returns true if displayName was explicitly authored and GetMetadata()
will return a meaningful value for displayName.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredDisplayName(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_HasAuthoredDisplayName pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredDisplayName


/** Return true if this is a custom property (i.e., not part of a
prim schema).

The 'custom' modifier in USD serves the same function as Alembic's
'userProperties', which is to say as a categorization for ad hoc
client data not formalized into any schema, and therefore not 
carrying an expectation of specific processing by consuming applications. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_IsCustom(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_IsCustom pxrInternal_v0_21__pxrReserved____UsdAttribute_IsCustom


/** Set the value for custom at the current EditTarget, return true on
success, false if the value can not be written.

\b Note that this value should not be changed as it is typically either
automatically authored or provided by a property definition. This method
is provided primarily for fixing invalid scene description. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetCustom(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , _Bool isCustom);
#define pxr_UsdAttribute_SetCustom pxrInternal_v0_21__pxrReserved____UsdAttribute_SetCustom


/** Return true if this is a builtin property or if the strongest
authored SdfPropertySpec for this property's path matches this
property's dynamic type.  That is, SdfRelationshipSpec in case this is a
UsdRelationship, and SdfAttributeSpec in case this is a UsdAttribute.
Return \c false if this property's prim has expired.

For attributes, a \c true return does not imply that this attribute
possesses a value, only that has been declared, is of a certain type and
variability, and that it is safe to use to query and author values and
metadata. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_IsDefined(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_IsDefined pxrInternal_v0_21__pxrReserved____UsdAttribute_IsDefined


/** Return true if there are any authored opinions for this property
in any layer that contributes to this stage, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_IsAuthored(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_IsAuthored pxrInternal_v0_21__pxrReserved____UsdAttribute_IsAuthored


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_FlattenTo_parent(
    pxr_UsdAttribute_t const * this_
    , pxr_UsdProperty_t * * return_
    , pxr_UsdPrim_t const * parent);
#define pxr_UsdAttribute_FlattenTo_parent pxrInternal_v0_21__pxrReserved____UsdAttribute_FlattenTo_parent


/** \overload
Flattens this property to a property spec with the given
\p propName beneath the given \p parent prim in the edit target of its 
owning stage.

The \p parent prim may belong to a different stage than this property's 
owning stage. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_FlattenTo_parent_property(
    pxr_UsdAttribute_t const * this_
    , pxr_UsdProperty_t * * return_
    , pxr_UsdPrim_t const * parent
    , pxr_TfToken_t const * propName);
#define pxr_UsdAttribute_FlattenTo_parent_property pxrInternal_v0_21__pxrReserved____UsdAttribute_FlattenTo_parent_property


/** \overload
Flattens this property to a property spec for the given
\p property in the edit target of its owning prim's stage.

The \p property owning prim may belong to a different stage than this 
property's owning stage. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_FlattenTo_property(
    pxr_UsdAttribute_t const * this_
    , pxr_UsdProperty_t * * return_
    , pxr_UsdProperty_t const * property);
#define pxr_UsdAttribute_FlattenTo_property pxrInternal_v0_21__pxrReserved____UsdAttribute_FlattenTo_property


/** Construct an invalid attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ctor(
    pxr_UsdAttribute_t * * this_);
#define pxr_UsdAttribute_ctor pxrInternal_v0_21__pxrReserved____UsdAttribute_ctor


/** Return the "scene description" value type name for this attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetTypeName(
    pxr_UsdAttribute_t const * this_
    , pxr_SdfValueTypeName_t * return_);
#define pxr_UsdAttribute_GetTypeName pxrInternal_v0_21__pxrReserved____UsdAttribute_GetTypeName


/** Set the value for typeName at the current EditTarget, return true on
success, false if the value can not be written.

\b Note that this value should not be changed as it is typically either
automatically authored or provided by a property definition. This method
is provided primarily for fixing invalid scene description. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetTypeName(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_SdfValueTypeName_t const * typeName);
#define pxr_UsdAttribute_SetTypeName pxrInternal_v0_21__pxrReserved____UsdAttribute_SetTypeName


/** Return the roleName for this attribute's typeName. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetRoleName(
    pxr_UsdAttribute_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_UsdAttribute_GetRoleName pxrInternal_v0_21__pxrReserved____UsdAttribute_GetRoleName


/** Return true if this attribute has an authored default value, authored
time samples or a fallback value provided by a registered schema. If
the attribute has been \ref Usd_AttributeBlocking "blocked", then
return `true` if and only if it has a fallback value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasValue(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_HasValue pxrInternal_v0_21__pxrReserved____UsdAttribute_HasValue


/** Return true if this attribute has either an authored default value or
authored time samples.  If the attribute has been 
\ref Usd_AttributeBlocking "blocked", then return `false` */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredValue(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_HasAuthoredValue pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredValue


/** Return true if this attribute has a fallback value provided by 
a registered schema. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasFallbackValue(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_HasFallbackValue pxrInternal_v0_21__pxrReserved____UsdAttribute_HasFallbackValue


/** Return true if it is possible, but not certain, that this attribute's
value changes over time, false otherwise. 

If this function returns false, it is certain that this attribute's
value remains constant over time.

This function is equivalent to checking if GetNumTimeSamples() > 1,
but may be more efficient since it does not actually need to get a
full count of all time samples. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ValueMightBeTimeVarying(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_ValueMightBeTimeVarying pxrInternal_v0_21__pxrReserved____UsdAttribute_ValueMightBeTimeVarying


/** \overload 
Type-erased access, often not as efficient as typed access. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_Get_value(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_VtValue_t * value
    , pxr_UsdTimeCode_t time);
#define pxr_UsdAttribute_Get_value pxrInternal_v0_21__pxrReserved____UsdAttribute_Get_value


/** \overload  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_Set_value(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_VtValue_t const * value
    , pxr_UsdTimeCode_t time);
#define pxr_UsdAttribute_Set_value pxrInternal_v0_21__pxrReserved____UsdAttribute_Set_value


/** Adds \p source to the list of connections, in the position
specified by \p position.

Issue an error if \p source identifies a prototype prim or an object
descendant to a prototype prim.  It is not valid to author connections
to these objects. 

What data this actually authors depends on what data is currently
authored in the authoring layer, with respect to list-editing
semantics, which we will document soon  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_AddConnection(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * source
    , pxr_UsdListPosition position);
#define pxr_UsdAttribute_AddConnection pxrInternal_v0_21__pxrReserved____UsdAttribute_AddConnection


/** Removes \p target from the list of targets.

Issue an error if \p source identifies a prototype prim or an object
descendant to a prototype prim.  It is not valid to author connections
to these objects. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_RemoveConnection(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * source);
#define pxr_UsdAttribute_RemoveConnection pxrInternal_v0_21__pxrReserved____UsdAttribute_RemoveConnection


/** Make the authoring layer's opinion of the connection list explicit,
and set exactly to \p sources.

Issue an error if \p source identifies a prototype prim or an object
descendant to a prototype prim.  It is not valid to author connections
to these objects.

If any path in \p sources is invalid, issue an error and return false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetConnections(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , std_SdfPathVector_t const * sources);
#define pxr_UsdAttribute_SetConnections pxrInternal_v0_21__pxrReserved____UsdAttribute_SetConnections


/** Remove all opinions about the connections list from the current edit
target. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearConnections(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_ClearConnections pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearConnections


/** Compose this attribute's connections and fill \p sources with the
result.  All preexisting elements in \p sources are lost.

Returns true if any connection path opinions have been authored and no
composition errors were encountered, returns false otherwise. 
Note that authored opinions may include opinions that clear the 
connections and a return value of true does not necessarily indicate 
that \p sources will contain any connection paths.

See \ref Usd_ScenegraphInstancing_TargetsAndConnections for details on 
behavior when targets point to objects beneath instance prims.

The result is not cached, and thus recomputed on each query. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetConnections(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , std_SdfPathVector_t * sources);
#define pxr_UsdAttribute_GetConnections pxrInternal_v0_21__pxrReserved____UsdAttribute_GetConnections


/** Return true if this attribute has any authored opinions regarding
connections.  Note that this includes opinions that remove connections,
so a true return does not necessarily indicate that this attribute has
connections. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredConnections(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_HasAuthoredConnections pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredConnections


/** Gets the color space in which the attribute is authored.
\sa SetColorSpace()
\ref Usd_ColorConfigurationAPI "UsdStage Color Configuration API" */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetColorSpace(
    pxr_UsdAttribute_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_UsdAttribute_GetColorSpace pxrInternal_v0_21__pxrReserved____UsdAttribute_GetColorSpace


/** Sets the color space of the attribute to \p colorSpace.
\sa GetColorSpace()
\ref Usd_ColorConfigurationAPI "UsdStage Color Configuration API" */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetColorSpace(
    pxr_UsdAttribute_t const * this_
    , pxr_TfToken_t const * colorSpace);
#define pxr_UsdAttribute_SetColorSpace pxrInternal_v0_21__pxrReserved____UsdAttribute_SetColorSpace


/** Returns whether color-space is authored on the attribute.
\sa GetColorSpace() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasColorSpace(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_HasColorSpace pxrInternal_v0_21__pxrReserved____UsdAttribute_HasColorSpace


/** Clears authored color-space value on the attribute.
\sa SetColorSpace() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearColorSpace(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_);
#define pxr_UsdAttribute_ClearColorSpace pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearColorSpace


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_copy(
    pxr_UsdAttribute_t * * this_
    , pxr_UsdAttribute_t const * rhs);
#define pxr_UsdAttribute_copy pxrInternal_v0_21__pxrReserved____UsdAttribute_copy


#ifdef __cplusplus
}
#endif
