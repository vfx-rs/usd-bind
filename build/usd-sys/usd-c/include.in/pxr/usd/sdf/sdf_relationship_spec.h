#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t_s pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t pxr_SdfSchemaBase_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfType_t_s pxrInternal_v0_21__pxrReserved____TfType_t;
typedef pxrInternal_v0_21__pxrReserved____TfType_t pxr_TfType_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t_s pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t;
typedef pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t pxr_SdfValueTypeName_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;

/** \class SdfRelationshipSpec

A property that contains a reference to one or more SdfPrimSpec instances.

A relationship may refer to one or more target prims or attributes.
All targets of a single relationship are considered to be playing the same
role. Note that \c role does not imply that the target prims or attributes
are of the same \c type.

Relationships may be annotated with relational attributes.
Relational attributes are named SdfAttributeSpec objects containing
values that describe the relationship.  For example, point weights are
commonly expressed as relational attributes. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_t pxr_SdfRelationshipSpec_t;


/** Returns the SdfSchemaBase for the layer that owns this spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSchema(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_SdfSchemaBase_t const * * return_);
#define pxr_SdfRelationshipSpec_GetSchema pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSchema


/** Returns true if this object is invalid or expired. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsDormant(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfRelationshipSpec_IsDormant pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsDormant


/** Returns the layer that this object belongs to. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetLayer(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_SdfRelationshipSpec_GetLayer pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetLayer


/** Returns the scene path of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetPath(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfRelationshipSpec_GetPath pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetPath


/** Returns whether this object's layer can be edited. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_PermissionToEdit(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfRelationshipSpec_PermissionToEdit pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_PermissionToEdit


/** Returns this metadata key's displayGroup. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetMetaDataDisplayGroup(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfRelationshipSpec_GetMetaDataDisplayGroup pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetMetaDataDisplayGroup


/** Sets the value for the given metadata key.

It is an error to pass a value that is not the correct type for
that given key.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetInfo(
    pxr_SdfRelationshipSpec_t * this_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * value);
#define pxr_SdfRelationshipSpec_SetInfo pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetInfo


/** Sets the value for \p entryKey to \p value within the dictionary 
       with the given metadata key \p dictionaryKey */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetInfoDictionaryValue(
    pxr_SdfRelationshipSpec_t * this_
    , pxr_TfToken_t const * dictionaryKey
    , pxr_TfToken_t const * entryKey
    , pxr_VtValue_t const * value);
#define pxr_SdfRelationshipSpec_SetInfoDictionaryValue pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetInfoDictionaryValue


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasInfo(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfRelationshipSpec_HasInfo pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasInfo


/** Clears the value for scene spec info with the given \a key.

After calling this, HasInfo() will return \b false.
To make HasInfo() return \b true just set a value for that
scene spec info.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearInfo(
    pxr_SdfRelationshipSpec_t * this_
    , pxr_TfToken_t const * key);
#define pxr_SdfRelationshipSpec_ClearInfo pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearInfo


/** Returns the data type for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetTypeForInfo(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_TfType_t * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfRelationshipSpec_GetTypeForInfo pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetTypeForInfo


/** Returns the fallback for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetFallbackForInfo(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfRelationshipSpec_GetFallbackForInfo pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetFallbackForInfo


/** Returns whether this object has no significant data.

"Significant" here means that the object contributes opinions to
a scene. If this spec has any child scenegraph objects (e.g.,
prim or property spec), it will be considered significant even if
those child objects are not.
However, if \p ignoreChildren is \c true, these child objects
will be ignored.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsInert(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_
    , _Bool ignoreChildren);
#define pxr_SdfRelationshipSpec_IsInert pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsInert


/** Returns \c true if the spec has a non-empty value with field
name \p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasField(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfRelationshipSpec_HasField pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetField(
    pxr_SdfRelationshipSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfRelationshipSpec_SetField pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetField


/** Clears a field. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearField(
    pxr_SdfRelationshipSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfRelationshipSpec_ClearField pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearField


/** Returns the property's name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetName(
    pxr_SdfRelationshipSpec_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfRelationshipSpec_GetName pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetName


/** Returns the property's name, as a token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetNameToken(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfRelationshipSpec_GetNameToken pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetNameToken


/** Returns true if setting the property spec's name to \p newName
will succeed.

Returns false if it won't, and sets \p whyNot with a string
describing why not. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_CanSetName(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_
    , std_string_t const * newName
    , std_string_t * whyNot);
#define pxr_SdfRelationshipSpec_CanSetName pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_CanSetName


/** Sets the property's name.

A Prim's properties must be unique by name. Setting the
name to the same name as an existing property is an error.

Setting \p validate to false, will skip validation of the newName
(that is, CanSetName will not be called). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetName(
    pxr_SdfRelationshipSpec_t * this_
    , _Bool * return_
    , std_string_t const * newName
    , _Bool validate);
#define pxr_SdfRelationshipSpec_SetName pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetName


/** Returns true if the given name is considered a valid name for a
property.  A valid name is not empty, and does not use invalid
characters (such as '/', '[', or '.'). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsValidName(
    _Bool * return_
    , std_string_t const * name);
#define pxr_SdfRelationshipSpec_IsValidName pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsValidName


/** Sets a property custom data entry.

If \p value is empty, then this removes the given custom data entry. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetCustomData(
    pxr_SdfRelationshipSpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfRelationshipSpec_SetCustomData pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetCustomData


/** Sets a asset info entry for this property.

If \p value is empty, then this removes the given asset info entry.

\sa GetAssetInfo() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetAssetInfo(
    pxr_SdfRelationshipSpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfRelationshipSpec_SetAssetInfo pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetAssetInfo


/** Returns the displayGroup string for this property spec.

The default value for displayGroup is empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetDisplayGroup(
    pxr_SdfRelationshipSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfRelationshipSpec_GetDisplayGroup pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetDisplayGroup


/** Sets the displayGroup string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDisplayGroup(
    pxr_SdfRelationshipSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfRelationshipSpec_SetDisplayGroup pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDisplayGroup


/** Returns the displayName string for this property spec.

The default value for displayName is empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetDisplayName(
    pxr_SdfRelationshipSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfRelationshipSpec_GetDisplayName pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetDisplayName


/** Sets the displayName string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDisplayName(
    pxr_SdfRelationshipSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfRelationshipSpec_SetDisplayName pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDisplayName


/** Returns the documentation string for this property spec.

The default value for documentation is empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetDocumentation(
    pxr_SdfRelationshipSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfRelationshipSpec_GetDocumentation pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetDocumentation


/** Sets the documentation string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDocumentation(
    pxr_SdfRelationshipSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfRelationshipSpec_SetDocumentation pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDocumentation


/** Returns whether this property spec will be hidden in browsers.

The default value for hidden is false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetHidden(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfRelationshipSpec_GetHidden pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetHidden


/** Sets whether this property spec will be hidden in browsers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetHidden(
    pxr_SdfRelationshipSpec_t * this_
    , _Bool value);
#define pxr_SdfRelationshipSpec_SetHidden pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetHidden


/** Returns the prefix string for this property spec.

The default value for prefix is "". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetPrefix(
    pxr_SdfRelationshipSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfRelationshipSpec_GetPrefix pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetPrefix


/** Sets the prefix string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetPrefix(
    pxr_SdfRelationshipSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfRelationshipSpec_SetPrefix pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetPrefix


/** Returns the suffix string for this property spec.

The default value for suffix is "". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSuffix(
    pxr_SdfRelationshipSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfRelationshipSpec_GetSuffix pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSuffix


/** Sets the suffix string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSuffix(
    pxr_SdfRelationshipSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfRelationshipSpec_SetSuffix pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSuffix


/** Returns the property's symmetric peer.

The default value for the symmetric peer is an empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSymmetricPeer(
    pxr_SdfRelationshipSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfRelationshipSpec_GetSymmetricPeer pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSymmetricPeer


/** Sets the property's symmetric peer.

If \p peerName is empty, then this removes any symmetric peer for the
given property. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSymmetricPeer(
    pxr_SdfRelationshipSpec_t * this_
    , std_string_t const * peerName);
#define pxr_SdfRelationshipSpec_SetSymmetricPeer pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSymmetricPeer


/** Sets a property symmetry argument.

If \p value is empty, then this removes the argument with the given
\p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSymmetryArgument(
    pxr_SdfRelationshipSpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfRelationshipSpec_SetSymmetryArgument pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSymmetryArgument


/** Returns the property's symmetry function.

The default value for the symmetry function is an empty token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSymmetryFunction(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfRelationshipSpec_GetSymmetryFunction pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSymmetryFunction


/** Sets the property's symmetry function.

If \p functionName is empty, then this removes any symmetry function
for the given property. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSymmetryFunction(
    pxr_SdfRelationshipSpec_t * this_
    , pxr_TfToken_t const * functionName);
#define pxr_SdfRelationshipSpec_SetSymmetryFunction pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSymmetryFunction


/** Returns the TfType representing the value type this property holds. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetValueType(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_TfType_t * * return_);
#define pxr_SdfRelationshipSpec_GetValueType pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetValueType


/** Returns the name of the value type that this property holds.

Returns the typename used to represent the types of value held by
this attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetTypeName(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_SdfValueTypeName_t * return_);
#define pxr_SdfRelationshipSpec_GetTypeName pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetTypeName


/** Sets the attribute's default value.

Returns true if successful, false otherwise.  Fails if \p defaultValue
has wrong type. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDefaultValue(
    pxr_SdfRelationshipSpec_t * this_
    , _Bool * return_
    , pxr_VtValue_t const * defaultValue);
#define pxr_SdfRelationshipSpec_SetDefaultValue pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDefaultValue


/** Returns true if a default value is set for this attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasDefaultValue(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfRelationshipSpec_HasDefaultValue pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasDefaultValue


/** Clear the attribute's default value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearDefaultValue(
    pxr_SdfRelationshipSpec_t * this_);
#define pxr_SdfRelationshipSpec_ClearDefaultValue pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearDefaultValue


/** Returns the comment string for this property spec.

The default value for comment is "". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetComment(
    pxr_SdfRelationshipSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfRelationshipSpec_GetComment pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetComment


/** Sets the comment string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetComment(
    pxr_SdfRelationshipSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfRelationshipSpec_SetComment pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetComment


/** Returns true if this spec declares a custom property */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsCustom(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfRelationshipSpec_IsCustom pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsCustom


/** Sets whether this spec declares a custom property */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetCustom(
    pxr_SdfRelationshipSpec_t * this_
    , _Bool custom);
#define pxr_SdfRelationshipSpec_SetCustom pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetCustom


/** Returns true if this PropertySpec has no significant data other than
just what is necessary for instantiation.

For example, "double foo" has only required fields, but "double foo = 3"
has more than just what is required.

This is similar to IsInert except that IsInert will always return false 
even for properties that have only required fields; PropertySpecs are 
never considered inert because even a spec with only required fields 
will cause instantiation of on-demand properties. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasOnlyRequiredFields(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfRelationshipSpec_HasOnlyRequiredFields pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasOnlyRequiredFields


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ctor(
    pxr_SdfRelationshipSpec_t * * this_);
#define pxr_SdfRelationshipSpec_ctor pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_copy(
    pxr_SdfRelationshipSpec_t * * this_
    , pxr_SdfRelationshipSpec_t const * spec);
#define pxr_SdfRelationshipSpec_copy pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_copy


/** Returns true if the relationship has any target paths. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasTargetPathList(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfRelationshipSpec_HasTargetPathList pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasTargetPathList


/** Clears the list of target paths on this relationship. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearTargetPathList(
    pxr_SdfRelationshipSpec_t const * this_);
#define pxr_SdfRelationshipSpec_ClearTargetPathList pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearTargetPathList


/** Updates the specified target path.

Replaces the path given by \p oldPath with the one specified by
\p newPath.  Relational attributes are updated if necessary. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ReplaceTargetPath(
    pxr_SdfRelationshipSpec_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath);
#define pxr_SdfRelationshipSpec_ReplaceTargetPath pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ReplaceTargetPath


/** Removes the specified target path.

Removes the given target path and any relational attributes for the
given target path. If \p preserveTargetOrder is \c true, Erase() is
called on the list editor instead of RemoveItemEdits(). This preserves
the ordered items list. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_RemoveTargetPath(
    pxr_SdfRelationshipSpec_t * this_
    , pxr_SdfPath_t const * path
    , _Bool preserveTargetOrder);
#define pxr_SdfRelationshipSpec_RemoveTargetPath pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_RemoveTargetPath


/** Get whether loading the target of this relationship is necessary
to load the prim we're attached to */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetNoLoadHint(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfRelationshipSpec_GetNoLoadHint pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetNoLoadHint


/** Set whether loading the target of this relationship is necessary
to load the prim we're attached to */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetNoLoadHint(
    pxr_SdfRelationshipSpec_t * this_
    , _Bool noload);
#define pxr_SdfRelationshipSpec_SetNoLoadHint pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetNoLoadHint


#ifdef __cplusplus
}
#endif
