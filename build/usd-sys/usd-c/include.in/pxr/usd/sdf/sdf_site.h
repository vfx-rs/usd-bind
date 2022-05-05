#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;

/** \class SdfSite

An SdfSite is a simple representation of a location in a layer where 
opinions may possibly be found. It is simply a pair of layer and path
within that layer. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfSite_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfSite_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSite_t pxr_SdfSite_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite_ctor(
    pxr_SdfSite_t * * this_);
#define pxr_SdfSite_ctor pxrInternal_v0_21__pxrReserved____SdfSite_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite_ctor_1(
    pxr_SdfSite_t * * this_
    , pxr_SdfLayerHandle_t const * layer_
    , pxr_SdfPath_t const * path_);
#define pxr_SdfSite_ctor_1 pxrInternal_v0_21__pxrReserved____SdfSite_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite__eq(
    pxr_SdfSite_t const * this_
    , _Bool * return_
    , pxr_SdfSite_t const * other);
#define pxr_SdfSite__eq pxrInternal_v0_21__pxrReserved____SdfSite__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite_operator_(
    pxr_SdfSite_t const * this_
    , _Bool * return_
    , pxr_SdfSite_t const * other);
#define pxr_SdfSite_operator_ pxrInternal_v0_21__pxrReserved____SdfSite_operator_


/** Explicit bool conversion operator. A site object converts to \c true iff 
both the layer and path fields are filled with valid values, \c false
otherwise.
This does NOT imply that there are opinions in the layer at that path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite_operatorbool(
    pxr_SdfSite_t const * this_
    , _Bool * return_);
#define pxr_SdfSite_operatorbool pxrInternal_v0_21__pxrReserved____SdfSite_operatorbool


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite_copy(
    pxr_SdfSite_t * * this_
    , pxr_SdfSite_t const * rhs);
#define pxr_SdfSite_copy pxrInternal_v0_21__pxrReserved____SdfSite_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSite__assign(
    pxr_SdfSite_t * this_
    , pxr_SdfSite_t * * return_
    , pxr_SdfSite_t const * rhs);
#define pxr_SdfSite__assign pxrInternal_v0_21__pxrReserved____SdfSite__assign


#ifdef __cplusplus
}
#endif
