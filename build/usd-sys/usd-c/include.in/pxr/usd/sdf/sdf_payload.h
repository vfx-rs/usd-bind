#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t_s pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t pxr_SdfLayerOffset_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \class SdfPayload

Represents a payload and all its meta data.

A payload represents a prim reference to an external layer.  A payload
is similar to a prim reference (see SdfReference) with the major
difference that payloads are explicitly loaded by the user.

Unloaded payloads represent a boundary that lazy composition and
system behaviors will not traverse across, providing a user-visible
way to manage the working set of the scene. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfPayload_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfPayload_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPayload_t pxr_SdfPayload_t;


/** Create a payload. See SdfAssetPath for what characters are valid in \p
assetPath.  If \p assetPath contains invalid characters, issue an error
and set this payload's asset path to the empty asset path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_ctor(
    pxr_SdfPayload_t * * this_
    , std_string_t const * assetPath
    , pxr_SdfPath_t const * primPath
    , pxr_SdfLayerOffset_t const * layerOffset);
#define pxr_SdfPayload_ctor pxrInternal_v0_21__pxrReserved____SdfPayload_ctor


/** Returns the asset path of the layer that the payload uses. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_GetAssetPath(
    pxr_SdfPayload_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfPayload_GetAssetPath pxrInternal_v0_21__pxrReserved____SdfPayload_GetAssetPath


/** Sets a new asset path for the layer the payload uses.  See SdfAssetPath
for what characters are valid in \p assetPath.  If \p assetPath contains
invalid characters, issue an error and set this payload's asset path to
the empty asset path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_SetAssetPath(
    pxr_SdfPayload_t * this_
    , std_string_t const * assetPath);
#define pxr_SdfPayload_SetAssetPath pxrInternal_v0_21__pxrReserved____SdfPayload_SetAssetPath


/** Returns the scene path of the prim for the payload. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_GetPrimPath(
    pxr_SdfPayload_t const * this_
    , pxr_SdfPath_t const * * return_);
#define pxr_SdfPayload_GetPrimPath pxrInternal_v0_21__pxrReserved____SdfPayload_GetPrimPath


/** Sets a new prim path for the prim that the payload uses. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_SetPrimPath(
    pxr_SdfPayload_t * this_
    , pxr_SdfPath_t const * primPath);
#define pxr_SdfPayload_SetPrimPath pxrInternal_v0_21__pxrReserved____SdfPayload_SetPrimPath


/** Returns the layer offset associated with the payload. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_GetLayerOffset(
    pxr_SdfPayload_t const * this_
    , pxr_SdfLayerOffset_t const * * return_);
#define pxr_SdfPayload_GetLayerOffset pxrInternal_v0_21__pxrReserved____SdfPayload_GetLayerOffset


/** Sets a new layer offset. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_SetLayerOffset(
    pxr_SdfPayload_t * this_
    , pxr_SdfLayerOffset_t const * layerOffset);
#define pxr_SdfPayload_SetLayerOffset pxrInternal_v0_21__pxrReserved____SdfPayload_SetLayerOffset


/** Returns whether this payload equals \a rhs. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload__eq(
    pxr_SdfPayload_t const * this_
    , _Bool * return_
    , pxr_SdfPayload_t const * rhs);
#define pxr_SdfPayload__eq pxrInternal_v0_21__pxrReserved____SdfPayload__eq


/** Returns whether this payload is less than \a rhs.
The meaning of less than is arbitrary but stable. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_operator_(
    pxr_SdfPayload_t const * this_
    , _Bool * return_
    , pxr_SdfPayload_t const * rhs);
#define pxr_SdfPayload_operator_ pxrInternal_v0_21__pxrReserved____SdfPayload_operator_


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_copy(
    pxr_SdfPayload_t * * this_
    , pxr_SdfPayload_t const * rhs);
#define pxr_SdfPayload_copy pxrInternal_v0_21__pxrReserved____SdfPayload_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload__assign(
    pxr_SdfPayload_t * this_
    , pxr_SdfPayload_t * * return_
    , pxr_SdfPayload_t const * rhs);
#define pxr_SdfPayload__assign pxrInternal_v0_21__pxrReserved____SdfPayload__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_dtor(
    pxr_SdfPayload_t * this_);
#define pxr_SdfPayload_dtor pxrInternal_v0_21__pxrReserved____SdfPayload_dtor


#ifdef __cplusplus
}
#endif
