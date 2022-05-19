#pragma once
#include "usd-api-export.h"

#include <pxr/usd/sdf/sdf_types.h>
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
typedef struct pxrInternal_v0_21__pxrReserved____SdfSpec_t_s pxrInternal_v0_21__pxrReserved____SdfSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSpec_t pxr_SdfSpec_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t_s pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t pxr_SdfSchemaBase_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

/** \class SdfVariantSetSpec 

Represents a coherent set of alternate representations for part of a
scene.

An SdfPrimSpec object may contain one or more named SdfVariantSetSpec
objects that define variations on the prim.

An SdfVariantSetSpec object contains one or more named SdfVariantSpec
objects. It may also define the name of one of its variants to be used by
default. 

When a prim references another prim, the referencing prim may specify
one of the variants from each of the variant sets of the target prim.
The chosen variant from each set (or the default variant from those sets
that the referencing prim does not explicitly specify) is composited 
over the target prim, and then the referencing prim is composited over 
the result. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_t pxr_SdfVariantSetSpec_t;


/** Returns the SdfSchemaBase for the layer that owns this spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetSchema(
    pxr_SdfVariantSetSpec_t const * this_
    , pxr_SdfSchemaBase_t const * * return_);
#define pxr_SdfVariantSetSpec_GetSchema pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetSchema


/** Returns the SdfSpecType specifying the spec type this object
represents. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetSpecType(
    pxr_SdfVariantSetSpec_t const * this_
    , pxr_SdfSpecType * return_);
#define pxr_SdfVariantSetSpec_GetSpecType pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetSpecType


/** Returns true if this object is invalid or expired. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_IsDormant(
    pxr_SdfVariantSetSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfVariantSetSpec_IsDormant pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_IsDormant


/** Returns the layer that this object belongs to. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetLayer(
    pxr_SdfVariantSetSpec_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_SdfVariantSetSpec_GetLayer pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetLayer


/** Returns the scene path of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetPath(
    pxr_SdfVariantSetSpec_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfVariantSetSpec_GetPath pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetPath


/** Returns whether this object's layer can be edited. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_PermissionToEdit(
    pxr_SdfVariantSetSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfVariantSetSpec_PermissionToEdit pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_PermissionToEdit


/** Returns this metadata key's displayGroup. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetMetaDataDisplayGroup(
    pxr_SdfVariantSetSpec_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfVariantSetSpec_GetMetaDataDisplayGroup pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetMetaDataDisplayGroup


/** Sets the value for the given metadata key.

It is an error to pass a value that is not the correct type for
that given key.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_SetInfo(
    pxr_SdfVariantSetSpec_t * this_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * value);
#define pxr_SdfVariantSetSpec_SetInfo pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_SetInfo


/** Sets the value for \p entryKey to \p value within the dictionary 
       with the given metadata key \p dictionaryKey */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_SetInfoDictionaryValue(
    pxr_SdfVariantSetSpec_t * this_
    , pxr_TfToken_t const * dictionaryKey
    , pxr_TfToken_t const * entryKey
    , pxr_VtValue_t const * value);
#define pxr_SdfVariantSetSpec_SetInfoDictionaryValue pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_SetInfoDictionaryValue


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_HasInfo(
    pxr_SdfVariantSetSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfVariantSetSpec_HasInfo pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_HasInfo


/** Clears the value for scene spec info with the given \a key.

After calling this, HasInfo() will return \b false.
To make HasInfo() return \b true just set a value for that
scene spec info.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_ClearInfo(
    pxr_SdfVariantSetSpec_t * this_
    , pxr_TfToken_t const * key);
#define pxr_SdfVariantSetSpec_ClearInfo pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_ClearInfo


/** Returns the data type for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetTypeForInfo(
    pxr_SdfVariantSetSpec_t const * this_
    , pxr_TfType_t * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfVariantSetSpec_GetTypeForInfo pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetTypeForInfo


/** Returns the fallback for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetFallbackForInfo(
    pxr_SdfVariantSetSpec_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfVariantSetSpec_GetFallbackForInfo pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetFallbackForInfo


/** Returns whether this object has no significant data.

"Significant" here means that the object contributes opinions to
a scene. If this spec has any child scenegraph objects (e.g.,
prim or property spec), it will be considered significant even if
those child objects are not.
However, if \p ignoreChildren is \c true, these child objects
will be ignored.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_IsInert(
    pxr_SdfVariantSetSpec_t const * this_
    , _Bool * return_
    , _Bool ignoreChildren);
#define pxr_SdfVariantSetSpec_IsInert pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_IsInert


/** Returns \c true if the spec has a non-empty value with field
name \p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_HasField(
    pxr_SdfVariantSetSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfVariantSetSpec_HasField pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_HasField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_SetField(
    pxr_SdfVariantSetSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfVariantSetSpec_SetField pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_SetField


/** Clears a field. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_ClearField(
    pxr_SdfVariantSetSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfVariantSetSpec_ClearField pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_ClearField


/** \name Comparison operators
@{ */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec__eq(
    pxr_SdfVariantSetSpec_t const * this_
    , _Bool * return_
    , pxr_SdfSpec_t const * rhs);
#define pxr_SdfVariantSetSpec__eq pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_operator_(
    pxr_SdfVariantSetSpec_t const * this_
    , _Bool * return_
    , pxr_SdfSpec_t const * rhs);
#define pxr_SdfVariantSetSpec_operator_ pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_operator_


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_ctor(
    pxr_SdfVariantSetSpec_t * * this_);
#define pxr_SdfVariantSetSpec_ctor pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_copy(
    pxr_SdfVariantSetSpec_t * * this_
    , pxr_SdfVariantSetSpec_t const * spec);
#define pxr_SdfVariantSetSpec_copy pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_copy


/** Returns the name of this variant set. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetName(
    pxr_SdfVariantSetSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfVariantSetSpec_GetName pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetName


/** Returns the name of this variant set. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetNameToken(
    pxr_SdfVariantSetSpec_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfVariantSetSpec_GetNameToken pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetNameToken


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec__assign(
    pxr_SdfVariantSetSpec_t * this_
    , pxr_SdfVariantSetSpec_t * * return_
    , pxr_SdfVariantSetSpec_t const * rhs);
#define pxr_SdfVariantSetSpec__assign pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_dtor(
    pxr_SdfVariantSetSpec_t * this_);
#define pxr_SdfVariantSetSpec_dtor pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_dtor


#ifdef __cplusplus
}
#endif
