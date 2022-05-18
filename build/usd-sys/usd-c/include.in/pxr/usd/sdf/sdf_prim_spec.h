#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfType_t_s pxrInternal_v0_21__pxrReserved____TfType_t;
typedef pxrInternal_v0_21__pxrReserved____TfType_t pxr_TfType_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t_s pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t pxr_SdfSchemaBase_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtDictionary_t_s pxrInternal_v0_21__pxrReserved____VtDictionary_t;
typedef pxrInternal_v0_21__pxrReserved____VtDictionary_t pxr_VtDictionary_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfSpec_t_s pxrInternal_v0_21__pxrReserved____SdfSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSpec_t pxr_SdfSpec_t;

/** \class SdfPrimSpec

Represents a prim description in an SdfLayer object.

Every SdfPrimSpec object is defined in a layer.  It is identified by its
path (SdfPath class) in the namespace hierarchy of its layer.  SdfPrimSpecs
can be created using the New() method as children of either the containing
SdfLayer itself (for "root level" prims), or as children of other 
SdfPrimSpec objects to extend a hierarchy.  The helper function 
SdfCreatePrimInLayer() can be used to quickly create a hierarchy of
primSpecs.

SdfPrimSpec objects have properties of two general types: attributes
(containing values) and relationships (different types of connections to
other prims and attributes).  Attributes are represented by the
SdfAttributeSpec class and relationships by the SdfRelationshipSpec class.
Each prim has its own namespace of properties.  Properties are stored and
accessed by their name.

SdfPrimSpec objects have a typeName, permission restriction, and they
reference and inherit prim paths.  Permission restrictions control which
other layers may refer to, or express opinions about a prim. See the
SdfPermission class for more information.

\todo
\li Insert doc about references and inherits here.
\li Should have validate... methods for name, children, properties */
typedef struct pxrInternal_v0_21__pxrReserved____SdfPrimSpec_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfPrimSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPrimSpec_t pxr_SdfPrimSpec_t;


/** Returns the SdfSchemaBase for the layer that owns this spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSchema(
    pxr_SdfPrimSpec_t const * this_
    , pxr_SdfSchemaBase_t const * * return_);
#define pxr_SdfPrimSpec_GetSchema pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSchema


/** Returns true if this object is invalid or expired. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_IsDormant(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_IsDormant pxrInternal_v0_21__pxrReserved____SdfPrimSpec_IsDormant


/** Returns the layer that this object belongs to. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetLayer(
    pxr_SdfPrimSpec_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_SdfPrimSpec_GetLayer pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetLayer


/** Returns the scene path of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetPath(
    pxr_SdfPrimSpec_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfPrimSpec_GetPath pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetPath


/** Returns whether this object's layer can be edited. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_PermissionToEdit(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_PermissionToEdit pxrInternal_v0_21__pxrReserved____SdfPrimSpec_PermissionToEdit


/** Returns this metadata key's displayGroup. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetMetaDataDisplayGroup(
    pxr_SdfPrimSpec_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPrimSpec_GetMetaDataDisplayGroup pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetMetaDataDisplayGroup


/** Sets the value for the given metadata key.

It is an error to pass a value that is not the correct type for
that given key.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetInfo(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * value);
#define pxr_SdfPrimSpec_SetInfo pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetInfo


/** Sets the value for \p entryKey to \p value within the dictionary 
       with the given metadata key \p dictionaryKey */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetInfoDictionaryValue(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * dictionaryKey
    , pxr_TfToken_t const * entryKey
    , pxr_VtValue_t const * value);
#define pxr_SdfPrimSpec_SetInfoDictionaryValue pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetInfoDictionaryValue


/** Returns whether there is a setting for the scene spec info 
with the given key.

When asked for a value for one of its scene spec info, a valid value
will always be returned. But if this API returns \b false for a scene
spec info, the value of that info will be the defined default value.

When dealing with a composedLayer, it is not necessary to worry about
whether a scene spec info "has a value" because the composed layer will
always have a valid value, even if it is the default.

A spec may or may not have an expressed value for some of its
scene spec info.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasInfo(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPrimSpec_HasInfo pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasInfo


/** Clears the value for scene spec info with the given \a key.

After calling this, HasInfo() will return \b false.
To make HasInfo() return \b true just set a value for that
scene spec info.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearInfo(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * key);
#define pxr_SdfPrimSpec_ClearInfo pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearInfo


/** Returns the data type for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetTypeForInfo(
    pxr_SdfPrimSpec_t const * this_
    , pxr_TfType_t * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPrimSpec_GetTypeForInfo pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetTypeForInfo


/** Returns the fallback for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetFallbackForInfo(
    pxr_SdfPrimSpec_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPrimSpec_GetFallbackForInfo pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetFallbackForInfo


/** Returns whether this object has no significant data.

"Significant" here means that the object contributes opinions to
a scene. If this spec has any child scenegraph objects (e.g.,
prim or property spec), it will be considered significant even if
those child objects are not.
However, if \p ignoreChildren is \c true, these child objects
will be ignored.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_IsInert(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_
    , _Bool ignoreChildren);
#define pxr_SdfPrimSpec_IsInert pxrInternal_v0_21__pxrReserved____SdfPrimSpec_IsInert


/** Returns \c true if the spec has a non-empty value with field
name \p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasField(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfPrimSpec_HasField pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetField(
    pxr_SdfPrimSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfPrimSpec_SetField pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetField


/** Clears a field. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearField(
    pxr_SdfPrimSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfPrimSpec_ClearField pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearField


/** \name Comparison operators
@{ */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec__eq(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_
    , pxr_SdfSpec_t const * rhs);
#define pxr_SdfPrimSpec__eq pxrInternal_v0_21__pxrReserved____SdfPrimSpec__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_operator_(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_
    , pxr_SdfSpec_t const * rhs);
#define pxr_SdfPrimSpec_operator_ pxrInternal_v0_21__pxrReserved____SdfPrimSpec_operator_


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ctor(
    pxr_SdfPrimSpec_t * * this_);
#define pxr_SdfPrimSpec_ctor pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_copy(
    pxr_SdfPrimSpec_t * * this_
    , pxr_SdfPrimSpec_t const * spec);
#define pxr_SdfPrimSpec_copy pxrInternal_v0_21__pxrReserved____SdfPrimSpec_copy


/** Returns the prim's name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetName(
    pxr_SdfPrimSpec_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfPrimSpec_GetName pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetName


/** Returns the prim's name, as a token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetNameToken(
    pxr_SdfPrimSpec_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfPrimSpec_GetNameToken pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetNameToken


/** Returns true if setting the prim spec's name to \p newName will
succeed.

Returns false if it won't, and sets \p whyNot with a string
describing why not. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_CanSetName(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_
    , std_string_t const * newName
    , std_string_t * whyNot);
#define pxr_SdfPrimSpec_CanSetName pxrInternal_v0_21__pxrReserved____SdfPrimSpec_CanSetName


/** Sets the prim's name.

Children prims must be unique by name. It is an error to
set the name to the same name as an existing child of this
prim's parent.

Setting validate to false, will skip validation of the \p newName
(that is, CanSetName will not be called).

Returns true if successful, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetName(
    pxr_SdfPrimSpec_t * this_
    , _Bool * return_
    , std_string_t const * newName
    , _Bool validate);
#define pxr_SdfPrimSpec_SetName pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetName


/** Returns true if the given string is a valid prim name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_IsValidName(
    _Bool * return_
    , std_string_t const * name);
#define pxr_SdfPrimSpec_IsValidName pxrInternal_v0_21__pxrReserved____SdfPrimSpec_IsValidName


/** Returns true if this prim has name children order specified */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasNameChildrenOrder(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_HasNameChildrenOrder pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasNameChildrenOrder


/** Adds a new name child \p name in the name children order.
If \p index is -1, the name is inserted at the end. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_InsertInNameChildrenOrder(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * name
    , int index);
#define pxr_SdfPrimSpec_InsertInNameChildrenOrder pxrInternal_v0_21__pxrReserved____SdfPrimSpec_InsertInNameChildrenOrder


/** Removes a name child name from the name children order. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromNameChildrenOrder(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * name);
#define pxr_SdfPrimSpec_RemoveFromNameChildrenOrder pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromNameChildrenOrder


/** Removes a name child name from the name children order by index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromNameChildrenOrderByIndex(
    pxr_SdfPrimSpec_t * this_
    , int index);
#define pxr_SdfPrimSpec_RemoveFromNameChildrenOrderByIndex pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromNameChildrenOrderByIndex


/** Returns true if this prim has a property ordering specified. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasPropertyOrder(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_HasPropertyOrder pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasPropertyOrder


/** Add a new property \p name in the property order.
If \p index is -1, the name is inserted at the end. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_InsertInPropertyOrder(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * name
    , int index);
#define pxr_SdfPrimSpec_InsertInPropertyOrder pxrInternal_v0_21__pxrReserved____SdfPrimSpec_InsertInPropertyOrder


/** Remove a property name from the property order. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromPropertyOrder(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * name);
#define pxr_SdfPrimSpec_RemoveFromPropertyOrder pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromPropertyOrder


/** Remove a property name from the property order by index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromPropertyOrderByIndex(
    pxr_SdfPrimSpec_t * this_
    , int index);
#define pxr_SdfPrimSpec_RemoveFromPropertyOrderByIndex pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromPropertyOrderByIndex


/** Returns the typeName of the model prim.

For prims this specifies the sub-class of MfPrim that
this prim describes.

The default value for typeName is the empty token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetTypeName(
    pxr_SdfPrimSpec_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfPrimSpec_GetTypeName pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetTypeName


/** Sets the typeName of the model prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetTypeName(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPrimSpec_SetTypeName pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetTypeName


/** Returns the comment string for this prim spec.

The default value for comment is @"". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetComment(
    pxr_SdfPrimSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPrimSpec_GetComment pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetComment


/** Sets the comment string for this prim spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetComment(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPrimSpec_SetComment pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetComment


/** Returns the documentation string for this prim spec.

The default value for documentation is @"". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetDocumentation(
    pxr_SdfPrimSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPrimSpec_GetDocumentation pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetDocumentation


/** Sets the documentation string for this prim spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetDocumentation(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPrimSpec_SetDocumentation pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetDocumentation


/** Returns whether this prim spec is active.

The default value for active is true. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetActive(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_GetActive pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetActive


/** Sets whether this prim spec is active. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetActive(
    pxr_SdfPrimSpec_t * this_
    , _Bool value);
#define pxr_SdfPrimSpec_SetActive pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetActive


/** Returns true if this prim spec has an opinion about active. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasActive(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_HasActive pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasActive


/** Removes the active opinion in this prim spec if there is one. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearActive(
    pxr_SdfPrimSpec_t * this_);
#define pxr_SdfPrimSpec_ClearActive pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearActive


/** Returns whether this prim spec will be hidden in browsers.

The default value for hidden is false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetHidden(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_GetHidden pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetHidden


/** Sets whether this prim spec will be hidden in browsers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetHidden(
    pxr_SdfPrimSpec_t * this_
    , _Bool value);
#define pxr_SdfPrimSpec_SetHidden pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetHidden


/** Returns this prim spec's kind.

The default value for kind is an empty \c TfToken. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetKind(
    pxr_SdfPrimSpec_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfPrimSpec_GetKind pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetKind


/** Sets this prim spec's kind. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetKind(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * value);
#define pxr_SdfPrimSpec_SetKind pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetKind


/** Returns true if this prim spec has an opinion about kind. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasKind(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_HasKind pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasKind


/** Remove the kind opinion from this prim spec if there is one. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearKind(
    pxr_SdfPrimSpec_t * this_);
#define pxr_SdfPrimSpec_ClearKind pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearKind


/** Returns the symmetry function for this prim.

The default value for symmetry function is an empty token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSymmetryFunction(
    pxr_SdfPrimSpec_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfPrimSpec_GetSymmetryFunction pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSymmetryFunction


/** Sets the symmetry function for this prim.

If \p functionName is an empty token, then this removes any symmetry
function for the given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSymmetryFunction(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * functionName);
#define pxr_SdfPrimSpec_SetSymmetryFunction pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSymmetryFunction


/** Sets a symmetry argument for this prim.

If \p value is empty, then this removes the setting
for the given symmetry argument \p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSymmetryArgument(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfPrimSpec_SetSymmetryArgument pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSymmetryArgument


/** Returns the symmetric peer for this prim.

The default value for symmetric peer is an empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSymmetricPeer(
    pxr_SdfPrimSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPrimSpec_GetSymmetricPeer pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSymmetricPeer


/** Sets a symmetric peer for this prim.

If \p peerName is empty, then this removes the symmetric peer
for this prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSymmetricPeer(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * peerName);
#define pxr_SdfPrimSpec_SetSymmetricPeer pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSymmetricPeer


/** Returns the prefix string for this prim spec.

The default value for prefix is "". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetPrefix(
    pxr_SdfPrimSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPrimSpec_GetPrefix pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetPrefix


/** Sets the prefix string for this prim spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetPrefix(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPrimSpec_SetPrefix pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetPrefix


/** Returns the suffix string for this prim spec.

The default value for suffix is "". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSuffix(
    pxr_SdfPrimSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPrimSpec_GetSuffix pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSuffix


/** Sets the suffix string for this prim spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSuffix(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPrimSpec_SetSuffix pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSuffix


/** Sets a custom data entry for this prim.

If \p value is empty, then this removes the given custom data entry. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetCustomData(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfPrimSpec_SetCustomData pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetCustomData


/** Sets a asset info entry for this prim.

If \p value is empty, then this removes the given asset info entry.

\sa GetAssetInfo() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetAssetInfo(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfPrimSpec_SetAssetInfo pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetAssetInfo


/** Sets the \p prefixSubstitutions dictionary for this prim spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetPrefixSubstitutions(
    pxr_SdfPrimSpec_t * this_
    , pxr_VtDictionary_t const * prefixSubstitutions);
#define pxr_SdfPrimSpec_SetPrefixSubstitutions pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetPrefixSubstitutions


/** Sets the \p suffixSubstitutions dictionary for this prim spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSuffixSubstitutions(
    pxr_SdfPrimSpec_t * this_
    , pxr_VtDictionary_t const * suffixSubstitutions);
#define pxr_SdfPrimSpec_SetSuffixSubstitutions pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSuffixSubstitutions


/** Sets the value for the prim's instanceable flag. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetInstanceable(
    pxr_SdfPrimSpec_t * this_
    , _Bool instanceable);
#define pxr_SdfPrimSpec_SetInstanceable pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetInstanceable


/** Returns the value for the prim's instanceable flag. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetInstanceable(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_GetInstanceable pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetInstanceable


/** Returns true if this prim spec has a value authored for its
instanceable flag, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasInstanceable(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_HasInstanceable pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasInstanceable


/** Clears the value for the prim's instanceable flag. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearInstanceable(
    pxr_SdfPrimSpec_t * this_);
#define pxr_SdfPrimSpec_ClearInstanceable pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearInstanceable


/** Returns true if this prim has payloads set. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasPayloads(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_HasPayloads pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasPayloads


/** Clears the payloads for this prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearPayloadList(
    pxr_SdfPrimSpec_t * this_);
#define pxr_SdfPrimSpec_ClearPayloadList pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearPayloadList


/** Returns true if this prim has inherit paths set. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasInheritPaths(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_HasInheritPaths pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasInheritPaths


/** Clears the inherit paths for this prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearInheritPathList(
    pxr_SdfPrimSpec_t * this_);
#define pxr_SdfPrimSpec_ClearInheritPathList pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearInheritPathList


/** Returns true if this prim has specializes set. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasSpecializes(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_HasSpecializes pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasSpecializes


/** Clears the specializes for this prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearSpecializesList(
    pxr_SdfPrimSpec_t * this_);
#define pxr_SdfPrimSpec_ClearSpecializesList pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearSpecializesList


/** Returns true if this prim has references set. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasReferences(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_HasReferences pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasReferences


/** Clears the references for this prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearReferenceList(
    pxr_SdfPrimSpec_t * this_);
#define pxr_SdfPrimSpec_ClearReferenceList pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearReferenceList


/** Returns true if this prim has variant sets set. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasVariantSetNames(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_HasVariantSetNames pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasVariantSetNames


/** Returns list of variant names for the given variant set. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetVariantNames(
    pxr_SdfPrimSpec_t const * this_
    , std_vector_string_t * * return_
    , std_string_t const * name);
#define pxr_SdfPrimSpec_GetVariantNames pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetVariantNames


/** Removes the variant set with the given \a name.

Note that the set's name should probably also be removed from
the variant set names list. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveVariantSet(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * name);
#define pxr_SdfPrimSpec_RemoveVariantSet pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveVariantSet


/** Sets the variant selected for the given variant set.
If \p variantName is empty, then this removes the variant
selection opinion for the variant set \p variantSetName. To 
explicitly set the variant selection to be empty, use
BlockVariantSelection instead. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetVariantSelection(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * variantSetName
    , std_string_t const * variantName);
#define pxr_SdfPrimSpec_SetVariantSelection pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetVariantSelection


/** Blocks the variant selected for the given variant set by setting
the variant selection to empty. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_BlockVariantSelection(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * variantSetName);
#define pxr_SdfPrimSpec_BlockVariantSelection pxrInternal_v0_21__pxrReserved____SdfPrimSpec_BlockVariantSelection


/** Returns true if this prim has any relocates opinion, including
that there should be no relocates (i.e. an empty map).  An empty
map (no relocates) does not mean the same thing as a missing map
(no opinion). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasRelocates(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPrimSpec_HasRelocates pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasRelocates


/** Clears the relocates opinion for this prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearRelocates(
    pxr_SdfPrimSpec_t * this_);
#define pxr_SdfPrimSpec_ClearRelocates pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearRelocates


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec__assign(
    pxr_SdfPrimSpec_t * this_
    , pxr_SdfPrimSpec_t * * return_
    , pxr_SdfPrimSpec_t const * rhs);
#define pxr_SdfPrimSpec__assign pxrInternal_v0_21__pxrReserved____SdfPrimSpec__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_dtor(
    pxr_SdfPrimSpec_t * this_);
#define pxr_SdfPrimSpec_dtor pxrInternal_v0_21__pxrReserved____SdfPrimSpec_dtor


/** Convenience function to create a prim at the given path, and any 
necessary parent prims, in the given layer.

If a prim already exists at the given path, do nothing and return true.

Any newly created specs have SdfSpecifierOver and an empty type.  primPath
must be a valid prim path.  Return false and issue an error if we fail to
author the required scene description. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfJustCreatePrimInLayer(
    _Bool * return_
    , pxr_SdfLayerHandle_t const * layer
    , pxr_SdfPath_t const * primPath);
#define pxr_SdfJustCreatePrimInLayer pxrInternal_v0_21__pxrReserved___SdfJustCreatePrimInLayer


#ifdef __cplusplus
}
#endif
