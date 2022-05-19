#pragma once
#include "usd-api-export.h"

#include <pxr/usd/sdf/sdf_types.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____PcpSite_t_s pxrInternal_v0_21__pxrReserved____PcpSite_t;
typedef pxrInternal_v0_21__pxrReserved____PcpSite_t pxr_PcpSite_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_t_s pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_t pxr_PcpPropertyIndex_t;

/** \class PcpTargetIndex

A PcpTargetIndex represents the results of indexing the target
paths of a relationship or attribute.  Note that this is just
the result; it does not retain all of the input arguments used
in computing the index, such as the owning property. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpTargetIndex_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpTargetIndex_t;
typedef pxrInternal_v0_21__pxrReserved____PcpTargetIndex_t pxr_PcpTargetIndex_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpTargetIndex_copy(
    pxr_PcpTargetIndex_t * * this_
    , pxr_PcpTargetIndex_t const * rhs);
#define pxr_PcpTargetIndex_copy pxrInternal_v0_21__pxrReserved____PcpTargetIndex_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpTargetIndex__assign(
    pxr_PcpTargetIndex_t * this_
    , pxr_PcpTargetIndex_t * * return_
    , pxr_PcpTargetIndex_t const * rhs);
#define pxr_PcpTargetIndex__assign pxrInternal_v0_21__pxrReserved____PcpTargetIndex__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpTargetIndex_dtor(
    pxr_PcpTargetIndex_t * this_);
#define pxr_PcpTargetIndex_dtor pxrInternal_v0_21__pxrReserved____PcpTargetIndex_dtor


#ifdef __cplusplus
}
#endif
