#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

/** \class SdfSchemaBase

Generic class that provides information about scene description fields
but doesn't actually provide any fields. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t pxr_SdfSchemaBase_t;

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


#ifdef __cplusplus
}
#endif
