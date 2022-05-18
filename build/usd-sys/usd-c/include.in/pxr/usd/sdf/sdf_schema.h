#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfType_t_s pxrInternal_v0_21__pxrReserved____TfType_t;
typedef pxrInternal_v0_21__pxrReserved____TfType_t pxr_TfType_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfReference_t_s pxrInternal_v0_21__pxrReserved____SdfReference_t;
typedef pxrInternal_v0_21__pxrReserved____SdfReference_t pxr_SdfReference_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t_s pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t;
typedef pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t pxr_SdfValueTypeName_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPayload_t_s pxrInternal_v0_21__pxrReserved____SdfPayload_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPayload_t pxr_SdfPayload_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfAllowed_t_s pxrInternal_v0_21__pxrReserved____SdfAllowed_t;
typedef pxrInternal_v0_21__pxrReserved____SdfAllowed_t pxr_SdfAllowed_t;

/** \class SdfSchemaBase

Generic class that provides information about scene description fields
but doesn't actually provide any fields. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t pxr_SdfSchemaBase_t;

/** \class FieldDefinition

Class defining various attributes for a field. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_t pxr_SdfSchemaBase_FieldDefinition_t;

/** \class SpecDefinition

Class representing fields and other information for a spec type. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_t pxr_SdfSchemaBase_SpecDefinition_t;

/** \class SdfSchema

Class that provides information about the various scene description 
fields. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchema_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfSchema_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchema_t pxr_SdfSchema_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_EnableNotification2(
    pxr_SdfSchemaBase_t const * this_);
#define pxr_SdfSchemaBase_EnableNotification2 pxrInternal_v0_21__pxrReserved____SdfSchemaBase_EnableNotification2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_GetUniqueIdentifier(
    pxr_SdfSchemaBase_t const * this_
    , void const * * return_);
#define pxr_SdfSchemaBase_GetUniqueIdentifier pxrInternal_v0_21__pxrReserved____SdfSchemaBase_GetUniqueIdentifier


/** Returns the field definition for the given field. 
Returns NULL if no definition exists for given field. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_GetFieldDefinition(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfSchemaBase_FieldDefinition_t const * * return_
    , pxr_TfToken_t const * fieldKey);
#define pxr_SdfSchemaBase_GetFieldDefinition pxrInternal_v0_21__pxrReserved____SdfSchemaBase_GetFieldDefinition


/** Return whether the specified field has been registered. Also
optionally return the fallback value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsRegistered(
    pxr_SdfSchemaBase_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * fieldKey
    , pxr_VtValue_t * fallback);
#define pxr_SdfSchemaBase_IsRegistered pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsRegistered


/** Returns whether the given field is a 'children' field -- that is, it
indexes certain children beneath the owning spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_HoldsChildren(
    pxr_SdfSchemaBase_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * fieldKey);
#define pxr_SdfSchemaBase_HoldsChildren pxrInternal_v0_21__pxrReserved____SdfSchemaBase_HoldsChildren


/** Return the fallback value for the specified \p fieldKey or the
empty value if \p fieldKey is not registered. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_GetFallback(
    pxr_SdfSchemaBase_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * fieldKey);
#define pxr_SdfSchemaBase_GetFallback pxrInternal_v0_21__pxrReserved____SdfSchemaBase_GetFallback


/** Return true if \p fieldName is a required field name for at least one
spec type, return false otherwise.  The main use of this function is to
quickly rule out field names that aren't required (and thus don't need
special handling). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsRequiredFieldName(
    pxr_SdfSchemaBase_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * fieldName);
#define pxr_SdfSchemaBase_IsRequiredFieldName pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsRequiredFieldName


/** Specific validation functions for various fields. These are internally
registered as validators for the associated field, but can also be
used directly.
@{ */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidAttributeConnectionPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfSchemaBase_IsValidAttributeConnectionPath pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidAttributeConnectionPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidIdentifier(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * name);
#define pxr_SdfSchemaBase_IsValidIdentifier pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidNamespacedIdentifier(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * name);
#define pxr_SdfSchemaBase_IsValidNamespacedIdentifier pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidNamespacedIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidInheritPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfSchemaBase_IsValidInheritPath pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidInheritPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidPayload(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPayload_t const * payload);
#define pxr_SdfSchemaBase_IsValidPayload pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidPayload


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidReference(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfReference_t const * ref);
#define pxr_SdfSchemaBase_IsValidReference pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidReference


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidRelationshipTargetPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfSchemaBase_IsValidRelationshipTargetPath pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidRelationshipTargetPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidRelocatesPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfSchemaBase_IsValidRelocatesPath pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidRelocatesPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidSpecializesPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfSchemaBase_IsValidSpecializesPath pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidSpecializesPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidSubLayer(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * sublayer);
#define pxr_SdfSchemaBase_IsValidSubLayer pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidSubLayer


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidVariantIdentifier(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * name);
#define pxr_SdfSchemaBase_IsValidVariantIdentifier pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidVariantIdentifier


/** Given a value, check if it is a valid value type.
This function only checks that the type of the value is valid
for this schema. It does not imply that the value is valid for
a particular field -- the field's validation function must be
used for that. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidValue(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfAllowed_t * * return_
    , pxr_VtValue_t const * value);
#define pxr_SdfSchemaBase_IsValidValue pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidValue


/** Return the type name object for the given type name token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_TfToken_t const * typeName);
#define pxr_SdfSchemaBase_FindType pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType


/** \overload */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_1(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , char const * typeName);
#define pxr_SdfSchemaBase_FindType_1 pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_1


/** \overload */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_2(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , std_string_t const * typeName);
#define pxr_SdfSchemaBase_FindType_2 pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_2


/** Return the type name object for the given type and optional role. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_3(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_TfType_t const * type
    , pxr_TfToken_t const * role);
#define pxr_SdfSchemaBase_FindType_3 pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_3


/** Return the type name object for the value's type and optional role. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_4(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_VtValue_t const * value
    , pxr_TfToken_t const * role);
#define pxr_SdfSchemaBase_FindType_4 pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_4


/** Return the type name object for the given type name string if it
exists otherwise create a temporary type name object.  Clients
should not normally need to call this. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindOrCreateType(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_TfToken_t const * typeName);
#define pxr_SdfSchemaBase_FindOrCreateType pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindOrCreateType


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_ctor(
    pxr_SdfSchemaBase_FieldDefinition_t * * this_
    , pxr_SdfSchemaBase_t const * schema
    , pxr_TfToken_t const * name
    , pxr_VtValue_t const * fallbackValue);
#define pxr_SdfSchemaBase_FieldDefinition_ctor pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_GetName(
    pxr_SdfSchemaBase_FieldDefinition_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_SdfSchemaBase_FieldDefinition_GetName pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_GetName


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_GetFallbackValue(
    pxr_SdfSchemaBase_FieldDefinition_t const * this_
    , pxr_VtValue_t const * * return_);
#define pxr_SdfSchemaBase_FieldDefinition_GetFallbackValue pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_GetFallbackValue


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_IsPlugin(
    pxr_SdfSchemaBase_FieldDefinition_t const * this_
    , _Bool * return_);
#define pxr_SdfSchemaBase_FieldDefinition_IsPlugin pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_IsPlugin


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_IsReadOnly(
    pxr_SdfSchemaBase_FieldDefinition_t const * this_
    , _Bool * return_);
#define pxr_SdfSchemaBase_FieldDefinition_IsReadOnly pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_IsReadOnly


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_HoldsChildren(
    pxr_SdfSchemaBase_FieldDefinition_t const * this_
    , _Bool * return_);
#define pxr_SdfSchemaBase_FieldDefinition_HoldsChildren pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_HoldsChildren


/** Functions for setting field attributes during registration.
@{ */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_FallbackValue(
    pxr_SdfSchemaBase_FieldDefinition_t * this_
    , pxr_SdfSchemaBase_FieldDefinition_t * * return_
    , pxr_VtValue_t const * v);
#define pxr_SdfSchemaBase_FieldDefinition_FallbackValue pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_FallbackValue


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_Plugin(
    pxr_SdfSchemaBase_FieldDefinition_t * this_
    , pxr_SdfSchemaBase_FieldDefinition_t * * return_);
#define pxr_SdfSchemaBase_FieldDefinition_Plugin pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_Plugin


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_Children(
    pxr_SdfSchemaBase_FieldDefinition_t * this_
    , pxr_SdfSchemaBase_FieldDefinition_t * * return_);
#define pxr_SdfSchemaBase_FieldDefinition_Children pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_Children


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_ReadOnly(
    pxr_SdfSchemaBase_FieldDefinition_t * this_
    , pxr_SdfSchemaBase_FieldDefinition_t * * return_);
#define pxr_SdfSchemaBase_FieldDefinition_ReadOnly pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_ReadOnly


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_copy(
    pxr_SdfSchemaBase_FieldDefinition_t * * this_
    , pxr_SdfSchemaBase_FieldDefinition_t const * rhs);
#define pxr_SdfSchemaBase_FieldDefinition_copy pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_dtor(
    pxr_SdfSchemaBase_FieldDefinition_t * this_);
#define pxr_SdfSchemaBase_FieldDefinition_dtor pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_dtor


/** Returns whether the given field is valid for this spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_IsValidField(
    pxr_SdfSchemaBase_SpecDefinition_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfSchemaBase_SpecDefinition_IsValidField pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_IsValidField


/** Returns whether the given field is metadata for this spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_IsMetadataField(
    pxr_SdfSchemaBase_SpecDefinition_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfSchemaBase_SpecDefinition_IsMetadataField pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_IsMetadataField


/** Returns the display group for this metadata field.  Returns the
empty token if this field is not a metadata field or if this
metadata field has no display group. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_GetMetadataFieldDisplayGroup(
    pxr_SdfSchemaBase_SpecDefinition_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfSchemaBase_SpecDefinition_GetMetadataFieldDisplayGroup pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_GetMetadataFieldDisplayGroup


/** Returns whether the given field is required for this spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_IsRequiredField(
    pxr_SdfSchemaBase_SpecDefinition_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfSchemaBase_SpecDefinition_IsRequiredField pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_IsRequiredField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_copy(
    pxr_SdfSchemaBase_SpecDefinition_t * * this_
    , pxr_SdfSchemaBase_SpecDefinition_t const * rhs);
#define pxr_SdfSchemaBase_SpecDefinition_copy pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition__assign(
    pxr_SdfSchemaBase_SpecDefinition_t * this_
    , pxr_SdfSchemaBase_SpecDefinition_t * * return_
    , pxr_SdfSchemaBase_SpecDefinition_t const * rhs);
#define pxr_SdfSchemaBase_SpecDefinition__assign pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_dtor(
    pxr_SdfSchemaBase_SpecDefinition_t * this_);
#define pxr_SdfSchemaBase_SpecDefinition_dtor pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_EnableNotification2(
    pxr_SdfSchema_t const * this_);
#define pxr_SdfSchema_EnableNotification2 pxrInternal_v0_21__pxrReserved____SdfSchema_EnableNotification2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_GetUniqueIdentifier(
    pxr_SdfSchema_t const * this_
    , void const * * return_);
#define pxr_SdfSchema_GetUniqueIdentifier pxrInternal_v0_21__pxrReserved____SdfSchema_GetUniqueIdentifier


/** Returns the field definition for the given field. 
Returns NULL if no definition exists for given field. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_GetFieldDefinition(
    pxr_SdfSchema_t const * this_
    , pxr_SdfSchemaBase_FieldDefinition_t const * * return_
    , pxr_TfToken_t const * fieldKey);
#define pxr_SdfSchema_GetFieldDefinition pxrInternal_v0_21__pxrReserved____SdfSchema_GetFieldDefinition


/** Return whether the specified field has been registered. Also
optionally return the fallback value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsRegistered(
    pxr_SdfSchema_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * fieldKey
    , pxr_VtValue_t * fallback);
#define pxr_SdfSchema_IsRegistered pxrInternal_v0_21__pxrReserved____SdfSchema_IsRegistered


/** Returns whether the given field is a 'children' field -- that is, it
indexes certain children beneath the owning spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_HoldsChildren(
    pxr_SdfSchema_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * fieldKey);
#define pxr_SdfSchema_HoldsChildren pxrInternal_v0_21__pxrReserved____SdfSchema_HoldsChildren


/** Return the fallback value for the specified \p fieldKey or the
empty value if \p fieldKey is not registered. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_GetFallback(
    pxr_SdfSchema_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * fieldKey);
#define pxr_SdfSchema_GetFallback pxrInternal_v0_21__pxrReserved____SdfSchema_GetFallback


/** Return true if \p fieldName is a required field name for at least one
spec type, return false otherwise.  The main use of this function is to
quickly rule out field names that aren't required (and thus don't need
special handling). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsRequiredFieldName(
    pxr_SdfSchema_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * fieldName);
#define pxr_SdfSchema_IsRequiredFieldName pxrInternal_v0_21__pxrReserved____SdfSchema_IsRequiredFieldName


/** Specific validation functions for various fields. These are internally
registered as validators for the associated field, but can also be
used directly.
@{ */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidAttributeConnectionPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfSchema_IsValidAttributeConnectionPath pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidAttributeConnectionPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidIdentifier(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * name);
#define pxr_SdfSchema_IsValidIdentifier pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidNamespacedIdentifier(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * name);
#define pxr_SdfSchema_IsValidNamespacedIdentifier pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidNamespacedIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidInheritPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfSchema_IsValidInheritPath pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidInheritPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidPayload(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPayload_t const * payload);
#define pxr_SdfSchema_IsValidPayload pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidPayload


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidReference(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfReference_t const * ref);
#define pxr_SdfSchema_IsValidReference pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidReference


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidRelationshipTargetPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfSchema_IsValidRelationshipTargetPath pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidRelationshipTargetPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidRelocatesPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfSchema_IsValidRelocatesPath pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidRelocatesPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidSpecializesPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfSchema_IsValidSpecializesPath pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidSpecializesPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidSubLayer(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * sublayer);
#define pxr_SdfSchema_IsValidSubLayer pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidSubLayer


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidVariantIdentifier(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * name);
#define pxr_SdfSchema_IsValidVariantIdentifier pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidVariantIdentifier


/** Given a value, check if it is a valid value type.
This function only checks that the type of the value is valid
for this schema. It does not imply that the value is valid for
a particular field -- the field's validation function must be
used for that. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidValue(
    pxr_SdfSchema_t const * this_
    , pxr_SdfAllowed_t * * return_
    , pxr_VtValue_t const * value);
#define pxr_SdfSchema_IsValidValue pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidValue


/** Return the type name object for the given type name token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_FindType(
    pxr_SdfSchema_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_TfToken_t const * typeName);
#define pxr_SdfSchema_FindType pxrInternal_v0_21__pxrReserved____SdfSchema_FindType


/** \overload */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_FindType_1(
    pxr_SdfSchema_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , char const * typeName);
#define pxr_SdfSchema_FindType_1 pxrInternal_v0_21__pxrReserved____SdfSchema_FindType_1


/** \overload */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_FindType_2(
    pxr_SdfSchema_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , std_string_t const * typeName);
#define pxr_SdfSchema_FindType_2 pxrInternal_v0_21__pxrReserved____SdfSchema_FindType_2


/** Return the type name object for the given type and optional role. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_FindType_3(
    pxr_SdfSchema_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_TfType_t const * type
    , pxr_TfToken_t const * role);
#define pxr_SdfSchema_FindType_3 pxrInternal_v0_21__pxrReserved____SdfSchema_FindType_3


/** Return the type name object for the value's type and optional role. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_FindType_4(
    pxr_SdfSchema_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_VtValue_t const * value
    , pxr_TfToken_t const * role);
#define pxr_SdfSchema_FindType_4 pxrInternal_v0_21__pxrReserved____SdfSchema_FindType_4


/** Return the type name object for the given type name string if it
exists otherwise create a temporary type name object.  Clients
should not normally need to call this. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_FindOrCreateType(
    pxr_SdfSchema_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_TfToken_t const * typeName);
#define pxr_SdfSchema_FindOrCreateType pxrInternal_v0_21__pxrReserved____SdfSchema_FindOrCreateType


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_GetInstance(
    pxr_SdfSchema_t const * * return_);
#define pxr_SdfSchema_GetInstance pxrInternal_v0_21__pxrReserved____SdfSchema_GetInstance


#ifdef __cplusplus
}
#endif
