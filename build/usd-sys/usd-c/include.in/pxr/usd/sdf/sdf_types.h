#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtDictionary_t_s pxrInternal_v0_21__pxrReserved____VtDictionary_t;
typedef pxrInternal_v0_21__pxrReserved____VtDictionary_t pxr_VtDictionary_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfType_t_s pxrInternal_v0_21__pxrReserved____TfType_t;
typedef pxrInternal_v0_21__pxrReserved____TfType_t pxr_TfType_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t_s pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t;
typedef pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t pxr_SdfValueTypeName_t;

/** An enum that specifies the type of an object. Objects
are entities that have fields and are addressable by path. */
enum pxrInternal_v0_21__pxrReserved____SdfSpecType_e {
    pxr_SdfSpecType_SdfSpecTypeUnknown = 0,
    pxr_SdfSpecType_SdfSpecTypeAttribute = 1,
    pxr_SdfSpecType_SdfSpecTypeConnection = 2,
    pxr_SdfSpecType_SdfSpecTypeExpression = 3,
    pxr_SdfSpecType_SdfSpecTypeMapper = 4,
    pxr_SdfSpecType_SdfSpecTypeMapperArg = 5,
    pxr_SdfSpecType_SdfSpecTypePrim = 6,
    pxr_SdfSpecType_SdfSpecTypePseudoRoot = 7,
    pxr_SdfSpecType_SdfSpecTypeRelationship = 8,
    pxr_SdfSpecType_SdfSpecTypeRelationshipTarget = 9,
    pxr_SdfSpecType_SdfSpecTypeVariant = 10,
    pxr_SdfSpecType_SdfSpecTypeVariantSet = 11,
    pxr_SdfSpecType_SdfNumSpecTypes = 12,
};
typedef unsigned int pxr_SdfSpecType;
/** An enum that identifies the possible specifiers for an
SdfPrimSpec. The SdfSpecifier enum is registered as a TfEnum
for converting to and from <c>std::string</c>.

<b>SdfSpecifier:</b>
<ul>
<li><b>SdfSpecifierDef.</b> Defines a concrete prim.
<li><b>SdfSpecifierOver.</b> Overrides an existing prim.
<li><b>SdfSpecifierClass.</b> Defines an abstract prim.
<li><b>SdfNumSpecifiers.</b> The number of specifiers.
</ul> */
enum pxrInternal_v0_21__pxrReserved____SdfSpecifier_e {
    pxr_SdfSpecifier_SdfSpecifierDef = 0,
    pxr_SdfSpecifier_SdfSpecifierOver = 1,
    pxr_SdfSpecifier_SdfSpecifierClass = 2,
    pxr_SdfSpecifier_SdfNumSpecifiers = 3,
};
typedef unsigned int pxr_SdfSpecifier;
/** An enum that defines permission levels.

Permissions control which layers may refer to or express
opinions about a prim.  Opinions expressed about a prim, or
relationships to that prim, by layers that are not allowed
permission to access the prim will be ignored.

<b>SdfPermission:</b>
<ul>
<li><b>SdfPermissionPublic.</b> Public prims can be referred to by
    anything. (Available to any client.)
<li><b>SdfPermissionPrivate.</b> Private prims can be referred to
    only within the local layer stack, and not across references
    or inherits. (Not available to clients.)
<li><b>SdfNumPermission.</b> Internal sentinel value.
</ul> */
enum pxrInternal_v0_21__pxrReserved____SdfPermission_e {
    pxr_SdfPermission_SdfPermissionPublic = 0,
    pxr_SdfPermission_SdfPermissionPrivate = 1,
    pxr_SdfPermission_SdfNumPermissions = 2,
};
typedef unsigned int pxr_SdfPermission;
/** An enum that identifies variability types for attributes.
Variability indicates whether the attribute may vary over time and
value coordinates, and if its value comes through authoring or
or from its owner.

<b>SdfVariability:</b>
<ul>
    <li><b>SdfVariabilityVarying.</b> Varying attributes may be directly 
           authored, animated and affected on by Actions.  They are the 
           most flexible.
    <li><b>SdfVariabilityUniform.</b> Uniform attributes may be authored 
           only with non-animated values (default values).  They cannot 
           be affected by Actions, but they can be connected to other 
           Uniform attributes.
    <li><b>SdNumVariabilities.</b> Internal sentinel value.
</ul> */
enum pxrInternal_v0_21__pxrReserved____SdfVariability_e {
    pxr_SdfVariability_SdfVariabilityVarying = 0,
    pxr_SdfVariability_SdfVariabilityUniform = 1,
    pxr_SdfVariability_SdfNumVariabilities = 2,
};
typedef unsigned int pxr_SdfVariability;
/** An enum for TfError codes related to authoring operations.

<b>SdfAuthoringError:</b>
<ul>
    <li><b>SdfAuthoringErrorUnrecognizedFields.</b> This error is raised if
           SdfLayer::TransferContent, or SdfLayer::SetField API is called
           for layers of differing schema, and fields from the source layer
           are not recognized by the target layer's schema.
    <li><b>SdfAuthoringErrorUnrecognizedSpecType.</b> This error is raised
           in attempts to create specs on layers with spec types that are
           not recognized by the layer's schema.
</ul> */
enum pxrInternal_v0_21__pxrReserved____SdfAuthoringError_e {
    pxr_SdfAuthoringError_SdfAuthoringErrorUnrecognizedFields = 0,
    pxr_SdfAuthoringError_SdfAuthoringErrorUnrecognizedSpecType = 1,
};
typedef unsigned int pxr_SdfAuthoringError;

/** \class SdfUnregisteredValue
Stores a representation of the value for an unregistered metadata
field encountered during text layer parsing. 

This provides the ability to serialize this data to a layer, as
well as limited inspection and editing capabilities (e.g., moving
this data to a different spec or field) even when the data type
of the value isn't known. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_t;
typedef pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_t pxr_SdfUnregisteredValue_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_t pxr_Sdf_ValueTypeNamesType_t;

/** \class SdfValueBlock
A special value type that can be used to explicitly author an
opinion for an attribute's default value or time sample value
that represents having no value. Note that this is different
from not having a value authored.

One could author such a value in two ways.

\code
attribute->SetDefaultValue(VtValue(SdfValueBlock());
...
layer->SetTimeSample(attribute->GetPath(), 101, VtValue(SdfValueBlock()));
\endcode */
typedef struct pxrInternal_v0_21__pxrReserved____SdfValueBlock_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____SdfValueBlock_t;
typedef pxrInternal_v0_21__pxrReserved____SdfValueBlock_t pxr_SdfValueBlock_t;

typedef struct pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_t;
typedef pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_t pxr_SdfHumanReadableValue_t;


/** Wraps an empty VtValue */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_ctor(
    pxr_SdfUnregisteredValue_t * * this_);
#define pxr_SdfUnregisteredValue_ctor pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_ctor


/** Wraps a std::string */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_ctor_1(
    pxr_SdfUnregisteredValue_t * * this_
    , std_string_t const * value);
#define pxr_SdfUnregisteredValue_ctor_1 pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_ctor_1


/** Wraps a VtDictionary */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_ctor_2(
    pxr_SdfUnregisteredValue_t * * this_
    , pxr_VtDictionary_t const * value);
#define pxr_SdfUnregisteredValue_ctor_2 pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_ctor_2


/** Returns the wrapped VtValue specified in the constructor */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_GetValue(
    pxr_SdfUnregisteredValue_t const * this_
    , pxr_VtValue_t const * * return_);
#define pxr_SdfUnregisteredValue_GetValue pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_GetValue


/** Returns true if the wrapped VtValues are equal */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue__eq(
    pxr_SdfUnregisteredValue_t const * this_
    , _Bool * return_
    , pxr_SdfUnregisteredValue_t const * other);
#define pxr_SdfUnregisteredValue__eq pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_copy(
    pxr_SdfUnregisteredValue_t * * this_
    , pxr_SdfUnregisteredValue_t const * rhs);
#define pxr_SdfUnregisteredValue_copy pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue__assign(
    pxr_SdfUnregisteredValue_t * this_
    , pxr_SdfUnregisteredValue_t * * return_
    , pxr_SdfUnregisteredValue_t const * rhs);
#define pxr_SdfUnregisteredValue__assign pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_dtor(
    pxr_SdfUnregisteredValue_t * this_);
#define pxr_SdfUnregisteredValue_dtor pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_dtor(
    pxr_Sdf_ValueTypeNamesType_t * this_);
#define pxr_Sdf_ValueTypeNamesType_dtor pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_GetSerializationName(
    pxr_Sdf_ValueTypeNamesType_t const * this_
    , pxr_TfToken_t * return_
    , pxr_SdfValueTypeName_t const * rhs);
#define pxr_Sdf_ValueTypeNamesType_GetSerializationName pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_GetSerializationName


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_GetSerializationName_1(
    pxr_Sdf_ValueTypeNamesType_t const * this_
    , pxr_TfToken_t * return_
    , pxr_VtValue_t const * rhs);
#define pxr_Sdf_ValueTypeNamesType_GetSerializationName_1 pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_GetSerializationName_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_GetSerializationName_2(
    pxr_Sdf_ValueTypeNamesType_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * rhs);
#define pxr_Sdf_ValueTypeNamesType_GetSerializationName_2 pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_GetSerializationName_2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueBlock__eq(
    pxr_SdfValueBlock_t const * this_
    , _Bool * return_
    , pxr_SdfValueBlock_t const * block);
#define pxr_SdfValueBlock__eq pxrInternal_v0_21__pxrReserved____SdfValueBlock__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueBlock__ne(
    pxr_SdfValueBlock_t const * this_
    , _Bool * return_
    , pxr_SdfValueBlock_t const * block);
#define pxr_SdfValueBlock__ne pxrInternal_v0_21__pxrReserved____SdfValueBlock__ne


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_ctor(
    pxr_SdfHumanReadableValue_t * * this_);
#define pxr_SdfHumanReadableValue_ctor pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_ctor_1(
    pxr_SdfHumanReadableValue_t * * this_
    , std_string_t const * text);
#define pxr_SdfHumanReadableValue_ctor_1 pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue__eq(
    pxr_SdfHumanReadableValue_t const * this_
    , _Bool * return_
    , pxr_SdfHumanReadableValue_t const * other);
#define pxr_SdfHumanReadableValue__eq pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue__ne(
    pxr_SdfHumanReadableValue_t const * this_
    , _Bool * return_
    , pxr_SdfHumanReadableValue_t const * other);
#define pxr_SdfHumanReadableValue__ne pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue__ne


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_GetText(
    pxr_SdfHumanReadableValue_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfHumanReadableValue_GetText pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_GetText


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_copy(
    pxr_SdfHumanReadableValue_t * * this_
    , pxr_SdfHumanReadableValue_t const * rhs);
#define pxr_SdfHumanReadableValue_copy pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue__assign(
    pxr_SdfHumanReadableValue_t * this_
    , pxr_SdfHumanReadableValue_t * * return_
    , pxr_SdfHumanReadableValue_t const * rhs);
#define pxr_SdfHumanReadableValue__assign pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_dtor(
    pxr_SdfHumanReadableValue_t * this_);
#define pxr_SdfHumanReadableValue_dtor pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_dtor


/** Returns true if the specifier defines a prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfIsDefiningSpecifier(
    _Bool * return_
    , pxr_SdfSpecifier spec);
#define pxr_SdfIsDefiningSpecifier pxrInternal_v0_21__pxrReserved___SdfIsDefiningSpecifier


/** Given a value, returns if there is a valid corresponding valueType. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfValueHasValidType(
    _Bool * return_
    , pxr_VtValue_t const * value);
#define pxr_SdfValueHasValidType pxrInternal_v0_21__pxrReserved___SdfValueHasValidType


/** Given an sdf valueType name, produce TfType if the type name specifies a
valid sdf value type. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfGetTypeForValueTypeName(
    pxr_TfType_t * * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfGetTypeForValueTypeName pxrInternal_v0_21__pxrReserved___SdfGetTypeForValueTypeName


/** Given a value, produce the sdf valueType name.  If you provide a value that
does not return true for SdfValueHasValidType, the return value is
unspecified. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfGetValueTypeNameForValue(
    pxr_SdfValueTypeName_t * return_
    , pxr_VtValue_t const * value);
#define pxr_SdfGetValueTypeNameForValue pxrInternal_v0_21__pxrReserved___SdfGetValueTypeNameForValue


/** Return role name for \p typeName.  Return empty token if \p typeName has no
associated role name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfGetRoleNameForValueTypeName(
    pxr_TfToken_t * return_
    , pxr_TfToken_t const * typeName);
#define pxr_SdfGetRoleNameForValueTypeName pxrInternal_v0_21__pxrReserved___SdfGetRoleNameForValueTypeName


/** Convert \p dict to a valid metadata dictionary for scene description.  Valid
metadata dictionaries have values that are any of SDF_VALUE_TYPES (or
VtArrays of those), plus VtDictionary with values of those types (or
similarly nested VtDictionaries).

Certain conversions are performed in an attempt to produce a valid metadata
dictionary.  For example:

Convert std::vector<VtValue> to VtArray<T> where T is the type of the first
element in the vector.  Fail conversion for empty vectors where a concrete
type cannot be inferred.

Convert python sequences to VtArray<T> where T is the type of the first
element in the python sequence, when converted to VtValue, if that T is an
SDF_VALUE_TYPE).  Fail conversion for empty sequences where a concrete type
cannot be inferred.

If any values cannot be converted to valid SDF_VALUE_TYPES, omit those
elements and add a message to \p errMsg indicating which values were
omitted. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfConvertToValidMetadataDictionary(
    _Bool * return_
    , pxr_VtDictionary_t * dict
    , std_string_t * errMsg);
#define pxr_SdfConvertToValidMetadataDictionary pxrInternal_v0_21__pxrReserved___SdfConvertToValidMetadataDictionary


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_8(
    size_t * return_
    , pxr_SdfHumanReadableValue_t const * hrval);
#define pxr_hash_value_8 pxrInternal_v0_21__pxrReserved___hash_value_8


#ifdef __cplusplus
}
#endif
