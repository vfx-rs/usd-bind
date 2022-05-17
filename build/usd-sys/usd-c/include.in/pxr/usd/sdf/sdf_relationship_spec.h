#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

/** \class SdfRelationshipSpec

A property that contains a reference to one or more SdfPrimSpec instances.

A relationship may refer to one or more target prims or attributes.
All targets of a single relationship are considered to be playing the same
role. Note that \c role does not imply that the target prims or attributes
are of the same \c type.

Relationships may be annotated with relational attributes.
Relational attributes are named SdfAttributeSpec objects containing
values that describe the relationship.  For example, point weights are
commonly expressed as relational attributes. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_t pxr_SdfRelationshipSpec_t;


/** Returns true if this object is invalid or expired. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsDormant(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfRelationshipSpec_IsDormant pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsDormant


/** Returns the layer that this object belongs to. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetLayer(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_SdfRelationshipSpec_GetLayer pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetLayer


/** Returns the scene path of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetPath(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfRelationshipSpec_GetPath pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetPath


/** Returns whether this object's layer can be edited. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_PermissionToEdit(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfRelationshipSpec_PermissionToEdit pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_PermissionToEdit


/** Returns this metadata key's displayGroup. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetMetaDataDisplayGroup(
    pxr_SdfRelationshipSpec_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfRelationshipSpec_GetMetaDataDisplayGroup pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetMetaDataDisplayGroup


#ifdef __cplusplus
}
#endif
