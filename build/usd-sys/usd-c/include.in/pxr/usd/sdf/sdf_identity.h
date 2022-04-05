#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

/** \class Sdf_Identity

Identifies the logical object behind an SdfSpec.

This is simply the layer the spec belongs to and the path to the spec. */
typedef struct pxrInternal_v0_21__pxrReserved____Sdf_Identity_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____Sdf_Identity_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_Identity_t pxr_Sdf_Identity_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_t pxr_Sdf_IdentityRegistry_t;


/** Returns the layer that this identity refers to. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_Identity_GetLayer(
    pxr_Sdf_Identity_t const * this_
    , pxr_SdfLayerHandle_t const * * return_);
#define pxr_Sdf_Identity_GetLayer pxrInternal_v0_21__pxrReserved____Sdf_Identity_GetLayer


/** Returns the path that this identity refers to. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_Identity_GetPath(
    pxr_Sdf_Identity_t const * this_
    , pxr_SdfPath_t const * * return_);
#define pxr_Sdf_Identity_GetPath pxrInternal_v0_21__pxrReserved____Sdf_Identity_GetPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_ctor(
    pxr_Sdf_IdentityRegistry_t * * this_
    , pxr_SdfLayerHandle_t const * layer);
#define pxr_Sdf_IdentityRegistry_ctor pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_dtor(
    pxr_Sdf_IdentityRegistry_t * this_);
#define pxr_Sdf_IdentityRegistry_dtor pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_dtor


/** Returns the layer that owns this registry. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_GetLayer(
    pxr_Sdf_IdentityRegistry_t const * this_
    , pxr_SdfLayerHandle_t const * * return_);
#define pxr_Sdf_IdentityRegistry_GetLayer pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_GetLayer


/** Update identity in response to a namespace edit. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_MoveIdentity(
    pxr_Sdf_IdentityRegistry_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath);
#define pxr_Sdf_IdentityRegistry_MoveIdentity pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_MoveIdentity


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___intrusive_ptr_add_ref(
    pxr_Sdf_Identity_t * rhs);
#define pxr_intrusive_ptr_add_ref pxrInternal_v0_21__pxrReserved___intrusive_ptr_add_ref


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___intrusive_ptr_release(
    pxr_Sdf_Identity_t * rhs);
#define pxr_intrusive_ptr_release pxrInternal_v0_21__pxrReserved___intrusive_ptr_release


#ifdef __cplusplus
}
#endif
