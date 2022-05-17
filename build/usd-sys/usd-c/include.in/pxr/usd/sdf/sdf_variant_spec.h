#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t_s pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t pxr_SdfSchemaBase_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfType_t_s pxrInternal_v0_21__pxrReserved____TfType_t;
typedef pxrInternal_v0_21__pxrReserved____TfType_t pxr_TfType_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

/** \class SdfVariantSpec 

Represents a single variant in a variant set.

A variant contains a prim.  This prim is the root prim of the variant.

SdfVariantSpecs are value objects.  This means they are immutable 
once created and they are passed by copy-in APIs.  To change a variant 
spec, you make a new one and replace the existing one. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfVariantSpec_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfVariantSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfVariantSpec_t pxr_SdfVariantSpec_t;


/** Returns the SdfSchemaBase for the layer that owns this spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetSchema(
    pxr_SdfVariantSpec_t const * this_
    , pxr_SdfSchemaBase_t const * * return_);
#define pxr_SdfVariantSpec_GetSchema pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetSchema


/** Returns true if this object is invalid or expired. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_IsDormant(
    pxr_SdfVariantSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfVariantSpec_IsDormant pxrInternal_v0_21__pxrReserved____SdfVariantSpec_IsDormant


/** Returns the layer that this object belongs to. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetLayer(
    pxr_SdfVariantSpec_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_SdfVariantSpec_GetLayer pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetLayer


/** Returns the scene path of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetPath(
    pxr_SdfVariantSpec_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfVariantSpec_GetPath pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetPath


/** Returns whether this object's layer can be edited. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_PermissionToEdit(
    pxr_SdfVariantSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfVariantSpec_PermissionToEdit pxrInternal_v0_21__pxrReserved____SdfVariantSpec_PermissionToEdit


/** Sets the value for the given metadata key.

It is an error to pass a value that is not the correct type for
that given key.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_SetInfo(
    pxr_SdfVariantSpec_t * this_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * value);
#define pxr_SdfVariantSpec_SetInfo pxrInternal_v0_21__pxrReserved____SdfVariantSpec_SetInfo


/** Sets the value for \p entryKey to \p value within the dictionary 
       with the given metadata key \p dictionaryKey */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_SetInfoDictionaryValue(
    pxr_SdfVariantSpec_t * this_
    , pxr_TfToken_t const * dictionaryKey
    , pxr_TfToken_t const * entryKey
    , pxr_VtValue_t const * value);
#define pxr_SdfVariantSpec_SetInfoDictionaryValue pxrInternal_v0_21__pxrReserved____SdfVariantSpec_SetInfoDictionaryValue


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_HasInfo(
    pxr_SdfVariantSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfVariantSpec_HasInfo pxrInternal_v0_21__pxrReserved____SdfVariantSpec_HasInfo


/** Clears the value for scene spec info with the given \a key.

After calling this, HasInfo() will return \b false.
To make HasInfo() return \b true just set a value for that
scene spec info.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_ClearInfo(
    pxr_SdfVariantSpec_t * this_
    , pxr_TfToken_t const * key);
#define pxr_SdfVariantSpec_ClearInfo pxrInternal_v0_21__pxrReserved____SdfVariantSpec_ClearInfo


/** Returns the data type for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetTypeForInfo(
    pxr_SdfVariantSpec_t const * this_
    , pxr_TfType_t * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfVariantSpec_GetTypeForInfo pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetTypeForInfo


/** Returns the fallback for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetFallbackForInfo(
    pxr_SdfVariantSpec_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfVariantSpec_GetFallbackForInfo pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetFallbackForInfo


/** Returns whether this object has no significant data.

"Significant" here means that the object contributes opinions to
a scene. If this spec has any child scenegraph objects (e.g.,
prim or property spec), it will be considered significant even if
those child objects are not.
However, if \p ignoreChildren is \c true, these child objects
will be ignored.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_IsInert(
    pxr_SdfVariantSpec_t const * this_
    , _Bool * return_
    , _Bool ignoreChildren);
#define pxr_SdfVariantSpec_IsInert pxrInternal_v0_21__pxrReserved____SdfVariantSpec_IsInert


/** Returns \c true if the spec has a non-empty value with field
name \p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_HasField(
    pxr_SdfVariantSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfVariantSpec_HasField pxrInternal_v0_21__pxrReserved____SdfVariantSpec_HasField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_SetField(
    pxr_SdfVariantSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfVariantSpec_SetField pxrInternal_v0_21__pxrReserved____SdfVariantSpec_SetField


/** Clears a field. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_ClearField(
    pxr_SdfVariantSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfVariantSpec_ClearField pxrInternal_v0_21__pxrReserved____SdfVariantSpec_ClearField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_ctor(
    pxr_SdfVariantSpec_t * * this_);
#define pxr_SdfVariantSpec_ctor pxrInternal_v0_21__pxrReserved____SdfVariantSpec_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_copy(
    pxr_SdfVariantSpec_t * * this_
    , pxr_SdfVariantSpec_t const * spec);
#define pxr_SdfVariantSpec_copy pxrInternal_v0_21__pxrReserved____SdfVariantSpec_copy


/** Returns the name of this variant. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetName(
    pxr_SdfVariantSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfVariantSpec_GetName pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetName


/** Returns list of variant names for the given variant set. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetVariantNames(
    pxr_SdfVariantSpec_t const * this_
    , std_vector_string_t * * return_
    , std_string_t const * name);
#define pxr_SdfVariantSpec_GetVariantNames pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetVariantNames


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec__assign(
    pxr_SdfVariantSpec_t * this_
    , pxr_SdfVariantSpec_t * * return_
    , pxr_SdfVariantSpec_t const * rhs);
#define pxr_SdfVariantSpec__assign pxrInternal_v0_21__pxrReserved____SdfVariantSpec__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSpec_dtor(
    pxr_SdfVariantSpec_t * this_);
#define pxr_SdfVariantSpec_dtor pxrInternal_v0_21__pxrReserved____SdfVariantSpec_dtor


#ifdef __cplusplus
}
#endif
