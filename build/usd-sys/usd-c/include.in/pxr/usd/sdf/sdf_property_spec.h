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
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t_s pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t pxr_SdfSchemaBase_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t_s pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t;
typedef pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t pxr_SdfValueTypeName_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

/** \class SdfPropertySpec

Base class for SdfAttributeSpec and SdfRelationshipSpec.

Scene Spec Attributes (SdfAttributeSpec) and Relationships
(SdfRelationshipSpec) are the basic properties that make up Scene Spec Prims
(SdfPrimSpec).  They share many qualities and can sometimes be treated
uniformly.  The common qualities are provided by this base class.

NOTE: Do not use Python reserved words and keywords as attribute names.
This will cause attribute resolution to fail. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfPropertySpec_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfPropertySpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPropertySpec_t pxr_SdfPropertySpec_t;


/** Returns the SdfSchemaBase for the layer that owns this spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetSchema(
    pxr_SdfPropertySpec_t const * this_
    , pxr_SdfSchemaBase_t const * * return_);
#define pxr_SdfPropertySpec_GetSchema pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetSchema


/** Returns true if this object is invalid or expired. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsDormant(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPropertySpec_IsDormant pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsDormant


/** Returns the layer that this object belongs to. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetLayer(
    pxr_SdfPropertySpec_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_SdfPropertySpec_GetLayer pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetLayer


/** Returns the scene path of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetPath(
    pxr_SdfPropertySpec_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfPropertySpec_GetPath pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetPath


/** Returns whether this object's layer can be edited. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_PermissionToEdit(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPropertySpec_PermissionToEdit pxrInternal_v0_21__pxrReserved____SdfPropertySpec_PermissionToEdit


/** Returns this metadata key's displayGroup. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetMetaDataDisplayGroup(
    pxr_SdfPropertySpec_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPropertySpec_GetMetaDataDisplayGroup pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetMetaDataDisplayGroup


/** Sets the value for the given metadata key.

It is an error to pass a value that is not the correct type for
that given key.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetInfo(
    pxr_SdfPropertySpec_t * this_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * value);
#define pxr_SdfPropertySpec_SetInfo pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetInfo


/** Sets the value for \p entryKey to \p value within the dictionary 
       with the given metadata key \p dictionaryKey */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetInfoDictionaryValue(
    pxr_SdfPropertySpec_t * this_
    , pxr_TfToken_t const * dictionaryKey
    , pxr_TfToken_t const * entryKey
    , pxr_VtValue_t const * value);
#define pxr_SdfPropertySpec_SetInfoDictionaryValue pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetInfoDictionaryValue


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasInfo(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPropertySpec_HasInfo pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasInfo


/** Clears the value for scene spec info with the given \a key.

After calling this, HasInfo() will return \b false.
To make HasInfo() return \b true just set a value for that
scene spec info.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ClearInfo(
    pxr_SdfPropertySpec_t * this_
    , pxr_TfToken_t const * key);
#define pxr_SdfPropertySpec_ClearInfo pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ClearInfo


/** Returns the data type for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetTypeForInfo(
    pxr_SdfPropertySpec_t const * this_
    , pxr_TfType_t * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPropertySpec_GetTypeForInfo pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetTypeForInfo


/** Returns the fallback for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetFallbackForInfo(
    pxr_SdfPropertySpec_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPropertySpec_GetFallbackForInfo pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetFallbackForInfo


/** Returns whether this object has no significant data.

"Significant" here means that the object contributes opinions to
a scene. If this spec has any child scenegraph objects (e.g.,
prim or property spec), it will be considered significant even if
those child objects are not.
However, if \p ignoreChildren is \c true, these child objects
will be ignored.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsInert(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_
    , _Bool ignoreChildren);
#define pxr_SdfPropertySpec_IsInert pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsInert


/** Returns \c true if the spec has a non-empty value with field
name \p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasField(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfPropertySpec_HasField pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetField(
    pxr_SdfPropertySpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfPropertySpec_SetField pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetField


/** Clears a field. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ClearField(
    pxr_SdfPropertySpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfPropertySpec_ClearField pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ClearField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ctor(
    pxr_SdfPropertySpec_t * * this_);
#define pxr_SdfPropertySpec_ctor pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_copy(
    pxr_SdfPropertySpec_t * * this_
    , pxr_SdfPropertySpec_t const * spec);
#define pxr_SdfPropertySpec_copy pxrInternal_v0_21__pxrReserved____SdfPropertySpec_copy


/** Returns the property's name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetName(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfPropertySpec_GetName pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetName


/** Returns the property's name, as a token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetNameToken(
    pxr_SdfPropertySpec_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfPropertySpec_GetNameToken pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetNameToken


/** Returns true if setting the property spec's name to \p newName
will succeed.

Returns false if it won't, and sets \p whyNot with a string
describing why not. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_CanSetName(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_
    , std_string_t const * newName
    , std_string_t * whyNot);
#define pxr_SdfPropertySpec_CanSetName pxrInternal_v0_21__pxrReserved____SdfPropertySpec_CanSetName


/** Sets the property's name.

A Prim's properties must be unique by name. Setting the
name to the same name as an existing property is an error.

Setting \p validate to false, will skip validation of the newName
(that is, CanSetName will not be called). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetName(
    pxr_SdfPropertySpec_t * this_
    , _Bool * return_
    , std_string_t const * newName
    , _Bool validate);
#define pxr_SdfPropertySpec_SetName pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetName


/** Returns true if the given name is considered a valid name for a
property.  A valid name is not empty, and does not use invalid
characters (such as '/', '[', or '.'). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsValidName(
    _Bool * return_
    , std_string_t const * name);
#define pxr_SdfPropertySpec_IsValidName pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsValidName


/** Sets a property custom data entry.

If \p value is empty, then this removes the given custom data entry. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetCustomData(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfPropertySpec_SetCustomData pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetCustomData


/** Sets a asset info entry for this property.

If \p value is empty, then this removes the given asset info entry.

\sa GetAssetInfo() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetAssetInfo(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfPropertySpec_SetAssetInfo pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetAssetInfo


/** Returns the displayGroup string for this property spec.

The default value for displayGroup is empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetDisplayGroup(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPropertySpec_GetDisplayGroup pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetDisplayGroup


/** Sets the displayGroup string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetDisplayGroup(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPropertySpec_SetDisplayGroup pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetDisplayGroup


/** Returns the displayName string for this property spec.

The default value for displayName is empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetDisplayName(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPropertySpec_GetDisplayName pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetDisplayName


/** Sets the displayName string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetDisplayName(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPropertySpec_SetDisplayName pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetDisplayName


/** Returns the documentation string for this property spec.

The default value for documentation is empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetDocumentation(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPropertySpec_GetDocumentation pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetDocumentation


/** Sets the documentation string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetDocumentation(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPropertySpec_SetDocumentation pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetDocumentation


/** Returns whether this property spec will be hidden in browsers.

The default value for hidden is false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetHidden(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPropertySpec_GetHidden pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetHidden


/** Sets whether this property spec will be hidden in browsers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetHidden(
    pxr_SdfPropertySpec_t * this_
    , _Bool value);
#define pxr_SdfPropertySpec_SetHidden pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetHidden


/** Returns the prefix string for this property spec.

The default value for prefix is "". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetPrefix(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPropertySpec_GetPrefix pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetPrefix


/** Sets the prefix string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetPrefix(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPropertySpec_SetPrefix pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetPrefix


/** Returns the suffix string for this property spec.

The default value for suffix is "". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetSuffix(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPropertySpec_GetSuffix pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetSuffix


/** Sets the suffix string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetSuffix(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPropertySpec_SetSuffix pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetSuffix


/** Returns the property's symmetric peer.

The default value for the symmetric peer is an empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetSymmetricPeer(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPropertySpec_GetSymmetricPeer pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetSymmetricPeer


/** Sets the property's symmetric peer.

If \p peerName is empty, then this removes any symmetric peer for the
given property. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetSymmetricPeer(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * peerName);
#define pxr_SdfPropertySpec_SetSymmetricPeer pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetSymmetricPeer


/** Sets a property symmetry argument.

If \p value is empty, then this removes the argument with the given
\p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetSymmetryArgument(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfPropertySpec_SetSymmetryArgument pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetSymmetryArgument


/** Returns the property's symmetry function.

The default value for the symmetry function is an empty token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetSymmetryFunction(
    pxr_SdfPropertySpec_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfPropertySpec_GetSymmetryFunction pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetSymmetryFunction


/** Sets the property's symmetry function.

If \p functionName is empty, then this removes any symmetry function
for the given property. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetSymmetryFunction(
    pxr_SdfPropertySpec_t * this_
    , pxr_TfToken_t const * functionName);
#define pxr_SdfPropertySpec_SetSymmetryFunction pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetSymmetryFunction


/** Returns the TfType representing the value type this property holds. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetValueType(
    pxr_SdfPropertySpec_t const * this_
    , pxr_TfType_t * * return_);
#define pxr_SdfPropertySpec_GetValueType pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetValueType


/** Returns the name of the value type that this property holds.

Returns the typename used to represent the types of value held by
this attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetTypeName(
    pxr_SdfPropertySpec_t const * this_
    , pxr_SdfValueTypeName_t * return_);
#define pxr_SdfPropertySpec_GetTypeName pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetTypeName


/** Sets the attribute's default value.

Returns true if successful, false otherwise.  Fails if \p defaultValue
has wrong type. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetDefaultValue(
    pxr_SdfPropertySpec_t * this_
    , _Bool * return_
    , pxr_VtValue_t const * defaultValue);
#define pxr_SdfPropertySpec_SetDefaultValue pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetDefaultValue


/** Returns true if a default value is set for this attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasDefaultValue(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPropertySpec_HasDefaultValue pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasDefaultValue


/** Clear the attribute's default value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ClearDefaultValue(
    pxr_SdfPropertySpec_t * this_);
#define pxr_SdfPropertySpec_ClearDefaultValue pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ClearDefaultValue


/** Returns the comment string for this property spec.

The default value for comment is "". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetComment(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPropertySpec_GetComment pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetComment


/** Sets the comment string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetComment(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPropertySpec_SetComment pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetComment


/** Returns true if this spec declares a custom property */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsCustom(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPropertySpec_IsCustom pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsCustom


/** Sets whether this spec declares a custom property */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetCustom(
    pxr_SdfPropertySpec_t * this_
    , _Bool custom);
#define pxr_SdfPropertySpec_SetCustom pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetCustom


/** Returns true if this PropertySpec has no significant data other than
just what is necessary for instantiation.

For example, "double foo" has only required fields, but "double foo = 3"
has more than just what is required.

This is similar to IsInert except that IsInert will always return false 
even for properties that have only required fields; PropertySpecs are 
never considered inert because even a spec with only required fields 
will cause instantiation of on-demand properties. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasOnlyRequiredFields(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPropertySpec_HasOnlyRequiredFields pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasOnlyRequiredFields


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec__assign(
    pxr_SdfPropertySpec_t * this_
    , pxr_SdfPropertySpec_t * * return_
    , pxr_SdfPropertySpec_t const * rhs);
#define pxr_SdfPropertySpec__assign pxrInternal_v0_21__pxrReserved____SdfPropertySpec__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_dtor(
    pxr_SdfPropertySpec_t * this_);
#define pxr_SdfPropertySpec_dtor pxrInternal_v0_21__pxrReserved____SdfPropertySpec_dtor


#ifdef __cplusplus
}
#endif
