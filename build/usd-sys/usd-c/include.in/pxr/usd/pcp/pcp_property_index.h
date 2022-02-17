#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpCache_t_s pxrInternal_v0_21__pxrReserved____PcpCache_t;
typedef pxrInternal_v0_21__pxrReserved____PcpCache_t pxr_PcpCache_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpPrimIndex_t_s pxrInternal_v0_21__pxrReserved____PcpPrimIndex_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPrimIndex_t pxr_PcpPrimIndex_t;

/** \class PcpPropertyIndex

PcpPropertyIndex is an index of all sites in scene description that
contribute opinions to a specific property, under composition
semantics. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_t pxr_PcpPropertyIndex_t;

/** \class Pcp_PropertyInfo

Private helper structure containing information about a property in the 
property stack. */
typedef struct pxrInternal_v0_21__pxrReserved____Pcp_PropertyInfo_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____Pcp_PropertyInfo_t;
typedef pxrInternal_v0_21__pxrReserved____Pcp_PropertyInfo_t pxr_Pcp_PropertyInfo_t;


/** Construct an empty property index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_ctor(
    pxr_PcpPropertyIndex_t * * this_);
#define pxr_PcpPropertyIndex_ctor pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_ctor


/** Copy-construct a property index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_copy(
    pxr_PcpPropertyIndex_t * * this_
    , pxr_PcpPropertyIndex_t const * rhs);
#define pxr_PcpPropertyIndex_copy pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_copy


/** Swap the contents of this property index with \p index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_Swap(
    pxr_PcpPropertyIndex_t * this_
    , pxr_PcpPropertyIndex_t * index);
#define pxr_PcpPropertyIndex_Swap pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_Swap


/** Returns true if this property index contains no opinions, false
otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_IsEmpty(
    pxr_PcpPropertyIndex_t const * this_
    , _Bool * return_);
#define pxr_PcpPropertyIndex_IsEmpty pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_IsEmpty


/** Returns the number of local properties in this prim index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_GetNumLocalSpecs(
    pxr_PcpPropertyIndex_t const * this_
    , size_t * return_);
#define pxr_PcpPropertyIndex_GetNumLocalSpecs pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_GetNumLocalSpecs


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_dtor(
    pxr_PcpPropertyIndex_t * this_);
#define pxr_PcpPropertyIndex_dtor pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Pcp_PropertyInfo_ctor(
    pxr_Pcp_PropertyInfo_t * * this_);
#define pxr_Pcp_PropertyInfo_ctor pxrInternal_v0_21__pxrReserved____Pcp_PropertyInfo_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Pcp_PropertyInfo__assign(
    pxr_Pcp_PropertyInfo_t * this_
    , pxr_Pcp_PropertyInfo_t * * return_
    , pxr_Pcp_PropertyInfo_t const * rhs);
#define pxr_Pcp_PropertyInfo__assign pxrInternal_v0_21__pxrReserved____Pcp_PropertyInfo__assign


#ifdef __cplusplus
}
#endif
