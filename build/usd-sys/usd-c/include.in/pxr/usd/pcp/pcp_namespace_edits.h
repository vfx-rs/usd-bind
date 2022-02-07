#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____PcpCache_t_s pxrInternal_v0_21__pxrReserved____PcpCache_t;
typedef pxrInternal_v0_21__pxrReserved____PcpCache_t pxr_PcpCache_t;

/** Types of namespace edits that a given layer stack site could need
to perform to respond to a namespace edit. */
enum pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e {
    pxr_PcpNamespaceEdits_EditType_EditPath = 0,
    pxr_PcpNamespaceEdits_EditType_EditInherit = 1,
    pxr_PcpNamespaceEdits_EditType_EditSpecializes = 2,
    pxr_PcpNamespaceEdits_EditType_EditReference = 3,
    pxr_PcpNamespaceEdits_EditType_EditPayload = 4,
    pxr_PcpNamespaceEdits_EditType_EditRelocate = 5,
};
typedef unsigned int pxr_PcpNamespaceEdits_EditType;

/** Sites that must respond to a namespace edit. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_t pxr_PcpNamespaceEdits_t;

/** Cache site that must respond to a namespace edit. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__CacheSite_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__CacheSite_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__CacheSite_t pxr_PcpNamespaceEdits_CacheSite_t;

/** Layer stack site that must respond to a namespace edit.  All
of the specs at the site will respond the same way. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__LayerStackSite_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__LayerStackSite_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__LayerStackSite_t pxr_PcpNamespaceEdits_LayerStackSite_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_Swap(
    pxr_PcpNamespaceEdits_t * this_
    , pxr_PcpNamespaceEdits_t * rhs);
#define pxr_PcpNamespaceEdits_Swap pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_Swap


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_copy(
    pxr_PcpNamespaceEdits_t * * this_
    , pxr_PcpNamespaceEdits_t const * rhs);
#define pxr_PcpNamespaceEdits_copy pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__assign(
    pxr_PcpNamespaceEdits_t * this_
    , pxr_PcpNamespaceEdits_t * * return_
    , pxr_PcpNamespaceEdits_t const * rhs);
#define pxr_PcpNamespaceEdits__assign pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_dtor(
    pxr_PcpNamespaceEdits_t * this_);
#define pxr_PcpNamespaceEdits_dtor pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__LayerStackSite_copy(
    pxr_PcpNamespaceEdits_LayerStackSite_t * * this_
    , pxr_PcpNamespaceEdits_LayerStackSite_t const * rhs);
#define pxr_PcpNamespaceEdits_LayerStackSite_copy pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__LayerStackSite_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__LayerStackSite__assign(
    pxr_PcpNamespaceEdits_LayerStackSite_t * this_
    , pxr_PcpNamespaceEdits_LayerStackSite_t * * return_
    , pxr_PcpNamespaceEdits_LayerStackSite_t const * rhs);
#define pxr_PcpNamespaceEdits_LayerStackSite__assign pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__LayerStackSite__assign


#ifdef __cplusplus
}
#endif
