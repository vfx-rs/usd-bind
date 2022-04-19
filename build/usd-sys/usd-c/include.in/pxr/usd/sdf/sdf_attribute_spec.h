#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__t pxr_VtArrayTfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t_s pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t;
typedef pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t pxr_SdfValueTypeName_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfType_t_s pxrInternal_v0_21__pxrReserved____TfType_t;
typedef pxrInternal_v0_21__pxrReserved____TfType_t pxr_TfType_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;

/** \class SdfAttributeSpec

A subclass of SdfPropertySpec that holds typed data.

Attributes are typed data containers that can optionally hold any
and all of the following:
\li A single default value.
\li An array of knot values describing how the value varies over time.
\li A dictionary of posed values, indexed by name.

The values contained in an attribute must all be of the same type.  In the
Python API the \c typeName property holds the attribute type.  In the C++
API, you can get the attribute type using the GetTypeName() method.  In
addition, all values, including all knot values, must be the same shape.
For information on shapes, see the VtShape class reference in the C++
documentation. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_t pxr_SdfAttributeSpec_t;


/** Returns true if this object is invalid or expired. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsDormant(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfAttributeSpec_IsDormant pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsDormant


/** Returns the layer that this object belongs to. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetLayer(
    pxr_SdfAttributeSpec_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_SdfAttributeSpec_GetLayer pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetLayer


/** Returns the scene path of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetPath(
    pxr_SdfAttributeSpec_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfAttributeSpec_GetPath pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetPath


/** Returns whether this object's layer can be edited. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_PermissionToEdit(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfAttributeSpec_PermissionToEdit pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_PermissionToEdit


/** Returns this metadata key's displayGroup. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetMetaDataDisplayGroup(
    pxr_SdfAttributeSpec_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfAttributeSpec_GetMetaDataDisplayGroup pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetMetaDataDisplayGroup


/** Sets the value for the given metadata key.

It is an error to pass a value that is not the correct type for
that given key.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetInfo(
    pxr_SdfAttributeSpec_t * this_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * value);
#define pxr_SdfAttributeSpec_SetInfo pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetInfo


/** Sets the value for \p entryKey to \p value within the dictionary 
       with the given metadata key \p dictionaryKey */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetInfoDictionaryValue(
    pxr_SdfAttributeSpec_t * this_
    , pxr_TfToken_t const * dictionaryKey
    , pxr_TfToken_t const * entryKey
    , pxr_VtValue_t const * value);
#define pxr_SdfAttributeSpec_SetInfoDictionaryValue pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetInfoDictionaryValue


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasInfo(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfAttributeSpec_HasInfo pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasInfo


/** Clears the value for scene spec info with the given \a key.

After calling this, HasInfo() will return \b false.
To make HasInfo() return \b true just set a value for that
scene spec info.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearInfo(
    pxr_SdfAttributeSpec_t * this_
    , pxr_TfToken_t const * key);
#define pxr_SdfAttributeSpec_ClearInfo pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearInfo


/** Returns the data type for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetTypeForInfo(
    pxr_SdfAttributeSpec_t const * this_
    , pxr_TfType_t * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfAttributeSpec_GetTypeForInfo pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetTypeForInfo


/** Returns the fallback for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetFallbackForInfo(
    pxr_SdfAttributeSpec_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfAttributeSpec_GetFallbackForInfo pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetFallbackForInfo


/** Returns whether this object has no significant data.

"Significant" here means that the object contributes opinions to
a scene. If this spec has any child scenegraph objects (e.g.,
prim or property spec), it will be considered significant even if
those child objects are not.
However, if \p ignoreChildren is \c true, these child objects
will be ignored.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsInert(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_
    , _Bool ignoreChildren);
#define pxr_SdfAttributeSpec_IsInert pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsInert


/** Returns \c true if the spec has a non-empty value with field
name \p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasField(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfAttributeSpec_HasField pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetField(
    pxr_SdfAttributeSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfAttributeSpec_SetField pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetField


/** Clears a field. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearField(
    pxr_SdfAttributeSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfAttributeSpec_ClearField pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearField


/** Returns the property's name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetName(
    pxr_SdfAttributeSpec_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfAttributeSpec_GetName pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetName


/** Returns the property's name, as a token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetNameToken(
    pxr_SdfAttributeSpec_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfAttributeSpec_GetNameToken pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetNameToken


/** Returns true if setting the property spec's name to \p newName
will succeed.

Returns false if it won't, and sets \p whyNot with a string
describing why not. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_CanSetName(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_
    , std_string_t const * newName
    , std_string_t * whyNot);
#define pxr_SdfAttributeSpec_CanSetName pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_CanSetName


/** Sets the property's name.

A Prim's properties must be unique by name. Setting the
name to the same name as an existing property is an error.

Setting \p validate to false, will skip validation of the newName
(that is, CanSetName will not be called). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetName(
    pxr_SdfAttributeSpec_t * this_
    , _Bool * return_
    , std_string_t const * newName
    , _Bool validate);
#define pxr_SdfAttributeSpec_SetName pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetName


/** Returns true if the given name is considered a valid name for a
property.  A valid name is not empty, and does not use invalid
characters (such as '/', '[', or '.'). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsValidName(
    _Bool * return_
    , std_string_t const * name);
#define pxr_SdfAttributeSpec_IsValidName pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsValidName


/** Sets a property custom data entry.

If \p value is empty, then this removes the given custom data entry. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetCustomData(
    pxr_SdfAttributeSpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfAttributeSpec_SetCustomData pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetCustomData


/** Sets a asset info entry for this property.

If \p value is empty, then this removes the given asset info entry.

\sa GetAssetInfo() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetAssetInfo(
    pxr_SdfAttributeSpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfAttributeSpec_SetAssetInfo pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetAssetInfo


/** Returns the displayGroup string for this property spec.

The default value for displayGroup is empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetDisplayGroup(
    pxr_SdfAttributeSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfAttributeSpec_GetDisplayGroup pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetDisplayGroup


/** Sets the displayGroup string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDisplayGroup(
    pxr_SdfAttributeSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfAttributeSpec_SetDisplayGroup pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDisplayGroup


/** Returns the displayName string for this property spec.

The default value for displayName is empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetDisplayName(
    pxr_SdfAttributeSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfAttributeSpec_GetDisplayName pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetDisplayName


/** Sets the displayName string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDisplayName(
    pxr_SdfAttributeSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfAttributeSpec_SetDisplayName pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDisplayName


/** Returns the documentation string for this property spec.

The default value for documentation is empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetDocumentation(
    pxr_SdfAttributeSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfAttributeSpec_GetDocumentation pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetDocumentation


/** Sets the documentation string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDocumentation(
    pxr_SdfAttributeSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfAttributeSpec_SetDocumentation pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDocumentation


/** Returns whether this property spec will be hidden in browsers.

The default value for hidden is false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetHidden(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfAttributeSpec_GetHidden pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetHidden


/** Sets whether this property spec will be hidden in browsers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetHidden(
    pxr_SdfAttributeSpec_t * this_
    , _Bool value);
#define pxr_SdfAttributeSpec_SetHidden pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetHidden


/** Returns the prefix string for this property spec.

The default value for prefix is "". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetPrefix(
    pxr_SdfAttributeSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfAttributeSpec_GetPrefix pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetPrefix


/** Sets the prefix string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetPrefix(
    pxr_SdfAttributeSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfAttributeSpec_SetPrefix pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetPrefix


/** Returns the suffix string for this property spec.

The default value for suffix is "". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSuffix(
    pxr_SdfAttributeSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfAttributeSpec_GetSuffix pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSuffix


/** Sets the suffix string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSuffix(
    pxr_SdfAttributeSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfAttributeSpec_SetSuffix pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSuffix


/** Returns the property's symmetric peer.

The default value for the symmetric peer is an empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSymmetricPeer(
    pxr_SdfAttributeSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfAttributeSpec_GetSymmetricPeer pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSymmetricPeer


/** Sets the property's symmetric peer.

If \p peerName is empty, then this removes any symmetric peer for the
given property. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSymmetricPeer(
    pxr_SdfAttributeSpec_t * this_
    , std_string_t const * peerName);
#define pxr_SdfAttributeSpec_SetSymmetricPeer pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSymmetricPeer


/** Sets a property symmetry argument.

If \p value is empty, then this removes the argument with the given
\p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSymmetryArgument(
    pxr_SdfAttributeSpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfAttributeSpec_SetSymmetryArgument pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSymmetryArgument


/** Returns the property's symmetry function.

The default value for the symmetry function is an empty token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSymmetryFunction(
    pxr_SdfAttributeSpec_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfAttributeSpec_GetSymmetryFunction pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSymmetryFunction


/** Sets the property's symmetry function.

If \p functionName is empty, then this removes any symmetry function
for the given property. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSymmetryFunction(
    pxr_SdfAttributeSpec_t * this_
    , pxr_TfToken_t const * functionName);
#define pxr_SdfAttributeSpec_SetSymmetryFunction pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSymmetryFunction


/** Returns the TfType representing the value type this property holds. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetValueType(
    pxr_SdfAttributeSpec_t const * this_
    , pxr_TfType_t * * return_);
#define pxr_SdfAttributeSpec_GetValueType pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetValueType


/** Sets the attribute's default value.

Returns true if successful, false otherwise.  Fails if \p defaultValue
has wrong type. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDefaultValue(
    pxr_SdfAttributeSpec_t * this_
    , _Bool * return_
    , pxr_VtValue_t const * defaultValue);
#define pxr_SdfAttributeSpec_SetDefaultValue pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDefaultValue


/** Returns true if a default value is set for this attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasDefaultValue(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfAttributeSpec_HasDefaultValue pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasDefaultValue


/** Clear the attribute's default value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearDefaultValue(
    pxr_SdfAttributeSpec_t * this_);
#define pxr_SdfAttributeSpec_ClearDefaultValue pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearDefaultValue


/** Returns the comment string for this property spec.

The default value for comment is "". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetComment(
    pxr_SdfAttributeSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfAttributeSpec_GetComment pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetComment


/** Sets the comment string for this property spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetComment(
    pxr_SdfAttributeSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfAttributeSpec_SetComment pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetComment


/** Returns true if this spec declares a custom property */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsCustom(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfAttributeSpec_IsCustom pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsCustom


/** Sets whether this spec declares a custom property */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetCustom(
    pxr_SdfAttributeSpec_t * this_
    , _Bool custom);
#define pxr_SdfAttributeSpec_SetCustom pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetCustom


/** Returns true if this PropertySpec has no significant data other than
just what is necessary for instantiation.

For example, "double foo" has only required fields, but "double foo = 3"
has more than just what is required.

This is similar to IsInert except that IsInert will always return false 
even for properties that have only required fields; PropertySpecs are 
never considered inert because even a spec with only required fields 
will cause instantiation of on-demand properties. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasOnlyRequiredFields(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfAttributeSpec_HasOnlyRequiredFields pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasOnlyRequiredFields


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ctor(
    pxr_SdfAttributeSpec_t * * this_);
#define pxr_SdfAttributeSpec_ctor pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_copy(
    pxr_SdfAttributeSpec_t * * this_
    , pxr_SdfAttributeSpec_t const * spec);
#define pxr_SdfAttributeSpec_copy pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_copy


/** Returns \c true if any connection paths are set on this attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasConnectionPaths(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfAttributeSpec_HasConnectionPaths pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasConnectionPaths


/** Clears the connection paths for this attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearConnectionPaths(
    pxr_SdfAttributeSpec_t * this_);
#define pxr_SdfAttributeSpec_ClearConnectionPaths pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearConnectionPaths


/** Sets the allowed tokens metadata for this attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetAllowedTokens(
    pxr_SdfAttributeSpec_t * this_
    , pxr_VtArrayTfToken_t const * allowedTokens);
#define pxr_SdfAttributeSpec_SetAllowedTokens pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetAllowedTokens


/** Returns true if allowed tokens metadata is set for this attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasAllowedTokens(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfAttributeSpec_HasAllowedTokens pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasAllowedTokens


/** Clears the allowed tokens metadata for this attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearAllowedTokens(
    pxr_SdfAttributeSpec_t * this_);
#define pxr_SdfAttributeSpec_ClearAllowedTokens pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearAllowedTokens


/** Returns true if a display unit is set for this attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasDisplayUnit(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfAttributeSpec_HasDisplayUnit pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasDisplayUnit


/** Clears the display unit of the attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearDisplayUnit(
    pxr_SdfAttributeSpec_t * this_);
#define pxr_SdfAttributeSpec_ClearDisplayUnit pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearDisplayUnit


/** Returns the color-space in which a color or texture valued attribute 
is authored. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetColorSpace(
    pxr_SdfAttributeSpec_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfAttributeSpec_GetColorSpace pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetColorSpace


/** Sets the color-space in which a color or texture valued attribute is 
authored. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetColorSpace(
    pxr_SdfAttributeSpec_t * this_
    , pxr_TfToken_t const * colorSpace);
#define pxr_SdfAttributeSpec_SetColorSpace pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetColorSpace


/** Returns true if this attribute has a colorSpace value authored. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasColorSpace(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfAttributeSpec_HasColorSpace pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasColorSpace


/** Clears the colorSpace metadata value set on this attribute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearColorSpace(
    pxr_SdfAttributeSpec_t * this_);
#define pxr_SdfAttributeSpec_ClearColorSpace pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearColorSpace


/** Returns the roleName for this attribute's typeName.

If the typeName has no roleName, return empty token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetRoleName(
    pxr_SdfAttributeSpec_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfAttributeSpec_GetRoleName pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetRoleName


#ifdef __cplusplus
}
#endif
