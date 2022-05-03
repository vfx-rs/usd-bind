#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfType_t_s pxrInternal_v0_21__pxrReserved____TfType_t;
typedef pxrInternal_v0_21__pxrReserved____TfType_t pxr_TfType_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;

typedef struct pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_t pxr_SdfPseudoRootSpec_t;


/** Returns true if this object is invalid or expired. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsDormant(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPseudoRootSpec_IsDormant pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsDormant


/** Returns the layer that this object belongs to. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetLayer(
    pxr_SdfPseudoRootSpec_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_SdfPseudoRootSpec_GetLayer pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetLayer


/** Returns the scene path of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetPath(
    pxr_SdfPseudoRootSpec_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfPseudoRootSpec_GetPath pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetPath


/** Returns whether this object's layer can be edited. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_PermissionToEdit(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPseudoRootSpec_PermissionToEdit pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_PermissionToEdit


/** Sets the value for the given metadata key.

It is an error to pass a value that is not the correct type for
that given key.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInfo(
    pxr_SdfPseudoRootSpec_t * this_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * value);
#define pxr_SdfPseudoRootSpec_SetInfo pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInfo


/** Sets the value for \p entryKey to \p value within the dictionary 
       with the given metadata key \p dictionaryKey */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInfoDictionaryValue(
    pxr_SdfPseudoRootSpec_t * this_
    , pxr_TfToken_t const * dictionaryKey
    , pxr_TfToken_t const * entryKey
    , pxr_VtValue_t const * value);
#define pxr_SdfPseudoRootSpec_SetInfoDictionaryValue pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInfoDictionaryValue


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasInfo(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPseudoRootSpec_HasInfo pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasInfo


/** Clears the value for scene spec info with the given \a key.

After calling this, HasInfo() will return \b false.
To make HasInfo() return \b true just set a value for that
scene spec info.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearInfo(
    pxr_SdfPseudoRootSpec_t * this_
    , pxr_TfToken_t const * key);
#define pxr_SdfPseudoRootSpec_ClearInfo pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearInfo


/** Returns the data type for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetTypeForInfo(
    pxr_SdfPseudoRootSpec_t const * this_
    , pxr_TfType_t * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPseudoRootSpec_GetTypeForInfo pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetTypeForInfo


/** Returns the fallback for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetFallbackForInfo(
    pxr_SdfPseudoRootSpec_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPseudoRootSpec_GetFallbackForInfo pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetFallbackForInfo


/** Returns whether this object has no significant data.

"Significant" here means that the object contributes opinions to
a scene. If this spec has any child scenegraph objects (e.g.,
prim or property spec), it will be considered significant even if
those child objects are not.
However, if \p ignoreChildren is \c true, these child objects
will be ignored.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsInert(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_
    , _Bool ignoreChildren);
#define pxr_SdfPseudoRootSpec_IsInert pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsInert


/** Returns \c true if the spec has a non-empty value with field
name \p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasField(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfPseudoRootSpec_HasField pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetField(
    pxr_SdfPseudoRootSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfPseudoRootSpec_SetField pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetField


/** Clears a field. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearField(
    pxr_SdfPseudoRootSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfPseudoRootSpec_ClearField pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearField


#ifdef __cplusplus
}
#endif
