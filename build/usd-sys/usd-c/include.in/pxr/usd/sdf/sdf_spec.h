#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfType_t_s pxrInternal_v0_21__pxrReserved____TfType_t;
typedef pxrInternal_v0_21__pxrReserved____TfType_t pxr_TfType_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t_s pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t pxr_SdfSchemaBase_t;

/** \class SdfSpec

Base class for all Sdf spec classes. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfSpec_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSpec_t pxr_SdfSpec_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_ctor(
    pxr_SdfSpec_t * * this_);
#define pxr_SdfSpec_ctor pxrInternal_v0_21__pxrReserved____SdfSpec_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_copy(
    pxr_SdfSpec_t * * this_
    , pxr_SdfSpec_t const * spec);
#define pxr_SdfSpec_copy pxrInternal_v0_21__pxrReserved____SdfSpec_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec__assign(
    pxr_SdfSpec_t * this_
    , pxr_SdfSpec_t * * return_
    , pxr_SdfSpec_t const * other);
#define pxr_SdfSpec__assign pxrInternal_v0_21__pxrReserved____SdfSpec__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_dtor(
    pxr_SdfSpec_t * this_);
#define pxr_SdfSpec_dtor pxrInternal_v0_21__pxrReserved____SdfSpec_dtor


/** Returns the SdfSchemaBase for the layer that owns this spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_GetSchema(
    pxr_SdfSpec_t const * this_
    , pxr_SdfSchemaBase_t const * * return_);
#define pxr_SdfSpec_GetSchema pxrInternal_v0_21__pxrReserved____SdfSpec_GetSchema


/** Returns true if this object is invalid or expired. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_IsDormant(
    pxr_SdfSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfSpec_IsDormant pxrInternal_v0_21__pxrReserved____SdfSpec_IsDormant


/** Returns the layer that this object belongs to. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_GetLayer(
    pxr_SdfSpec_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_SdfSpec_GetLayer pxrInternal_v0_21__pxrReserved____SdfSpec_GetLayer


/** Returns the scene path of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_GetPath(
    pxr_SdfSpec_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfSpec_GetPath pxrInternal_v0_21__pxrReserved____SdfSpec_GetPath


/** Returns whether this object's layer can be edited. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_PermissionToEdit(
    pxr_SdfSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfSpec_PermissionToEdit pxrInternal_v0_21__pxrReserved____SdfSpec_PermissionToEdit


/** Returns this metadata key's displayGroup. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_GetMetaDataDisplayGroup(
    pxr_SdfSpec_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfSpec_GetMetaDataDisplayGroup pxrInternal_v0_21__pxrReserved____SdfSpec_GetMetaDataDisplayGroup


/** Sets the value for the given metadata key.

It is an error to pass a value that is not the correct type for
that given key.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_SetInfo(
    pxr_SdfSpec_t * this_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * value);
#define pxr_SdfSpec_SetInfo pxrInternal_v0_21__pxrReserved____SdfSpec_SetInfo


/** Sets the value for \p entryKey to \p value within the dictionary 
       with the given metadata key \p dictionaryKey */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_SetInfoDictionaryValue(
    pxr_SdfSpec_t * this_
    , pxr_TfToken_t const * dictionaryKey
    , pxr_TfToken_t const * entryKey
    , pxr_VtValue_t const * value);
#define pxr_SdfSpec_SetInfoDictionaryValue pxrInternal_v0_21__pxrReserved____SdfSpec_SetInfoDictionaryValue


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_HasInfo(
    pxr_SdfSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfSpec_HasInfo pxrInternal_v0_21__pxrReserved____SdfSpec_HasInfo


/** Clears the value for scene spec info with the given \a key.

After calling this, HasInfo() will return \b false.
To make HasInfo() return \b true just set a value for that
scene spec info.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_ClearInfo(
    pxr_SdfSpec_t * this_
    , pxr_TfToken_t const * key);
#define pxr_SdfSpec_ClearInfo pxrInternal_v0_21__pxrReserved____SdfSpec_ClearInfo


/** Returns the data type for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_GetTypeForInfo(
    pxr_SdfSpec_t const * this_
    , pxr_TfType_t * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfSpec_GetTypeForInfo pxrInternal_v0_21__pxrReserved____SdfSpec_GetTypeForInfo


/** Returns the fallback for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_GetFallbackForInfo(
    pxr_SdfSpec_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfSpec_GetFallbackForInfo pxrInternal_v0_21__pxrReserved____SdfSpec_GetFallbackForInfo


/** Returns whether this object has no significant data.

"Significant" here means that the object contributes opinions to
a scene. If this spec has any child scenegraph objects (e.g.,
prim or property spec), it will be considered significant even if
those child objects are not.
However, if \p ignoreChildren is \c true, these child objects
will be ignored.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_IsInert(
    pxr_SdfSpec_t const * this_
    , _Bool * return_
    , _Bool ignoreChildren);
#define pxr_SdfSpec_IsInert pxrInternal_v0_21__pxrReserved____SdfSpec_IsInert


/** Returns \c true if the spec has a non-empty value with field
name \p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_HasField(
    pxr_SdfSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfSpec_HasField pxrInternal_v0_21__pxrReserved____SdfSpec_HasField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_SetField(
    pxr_SdfSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfSpec_SetField pxrInternal_v0_21__pxrReserved____SdfSpec_SetField


/** Clears a field. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_ClearField(
    pxr_SdfSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfSpec_ClearField pxrInternal_v0_21__pxrReserved____SdfSpec_ClearField


/** \name Comparison operators
@{ */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec__eq(
    pxr_SdfSpec_t const * this_
    , _Bool * return_
    , pxr_SdfSpec_t const * rhs);
#define pxr_SdfSpec__eq pxrInternal_v0_21__pxrReserved____SdfSpec__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSpec_operator_(
    pxr_SdfSpec_t const * this_
    , _Bool * return_
    , pxr_SdfSpec_t const * rhs);
#define pxr_SdfSpec_operator_ pxrInternal_v0_21__pxrReserved____SdfSpec_operator_


#ifdef __cplusplus
}
#endif
