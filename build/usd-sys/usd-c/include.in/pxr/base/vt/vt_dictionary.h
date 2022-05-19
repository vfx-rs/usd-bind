#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

/** \class VtDictionary

A map with string keys and VtValue values.

VtDictionary converts to and from a python dictionary as long
as each element contains either
  - another VtDictionary  (converts to a nested dictionary)
  - std::vector<VtValue>  (converts to a nested list)
  - VtValue with one of the supported Vt Types.

For a list of functions that can manipulate VtDictionary objects, see the  
\link group_vtdict_functions VtDictionary Functions \endlink group page . */
typedef struct pxrInternal_v0_21__pxrReserved____VtDictionary_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtDictionary_t;
typedef pxrInternal_v0_21__pxrReserved____VtDictionary_t pxr_VtDictionary_t;


/** Creates an empty \p VtDictionary. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtDictionary_ctor(
    pxr_VtDictionary_t * * this_);
#define pxr_VtDictionary_ctor pxrInternal_v0_21__pxrReserved____VtDictionary_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtDictionary_dtor(
    pxr_VtDictionary_t * this_);
#define pxr_VtDictionary_dtor pxrInternal_v0_21__pxrReserved____VtDictionary_dtor


#ifdef __cplusplus
}
#endif
