#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \struct PcpSourceArcInfo

Information about the source of the target of an arc.
All arcs have a layer that the arc comes from. References and payloads
have a resolved layer offset and authored asset path as well. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_t;
typedef pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_t pxr_PcpSourceArcInfo_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_copy(
    pxr_PcpSourceArcInfo_t * * this_
    , pxr_PcpSourceArcInfo_t const * rhs);
#define pxr_PcpSourceArcInfo_copy pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo__assign(
    pxr_PcpSourceArcInfo_t * this_
    , pxr_PcpSourceArcInfo_t * * return_
    , pxr_PcpSourceArcInfo_t const * rhs);
#define pxr_PcpSourceArcInfo__assign pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_dtor(
    pxr_PcpSourceArcInfo_t * this_);
#define pxr_PcpSourceArcInfo_dtor pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_dtor


#ifdef __cplusplus
}
#endif
