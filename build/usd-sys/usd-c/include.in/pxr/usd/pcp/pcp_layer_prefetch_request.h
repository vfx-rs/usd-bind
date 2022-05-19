#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

/** \class PcpLayerPrefetchRequest

PcpLayerPrefetchRequest represents a request to pre-fetch and retain
a set of layers in memory. It performs the fetch as a parallel
operation using a thread pool. Fetched layers are retained by the
request to keep them alive until the client can decide what to do
with them. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest_t pxr_PcpLayerPrefetchRequest_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest_copy(
    pxr_PcpLayerPrefetchRequest_t * * this_
    , pxr_PcpLayerPrefetchRequest_t const * rhs);
#define pxr_PcpLayerPrefetchRequest_copy pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest__assign(
    pxr_PcpLayerPrefetchRequest_t * this_
    , pxr_PcpLayerPrefetchRequest_t * * return_
    , pxr_PcpLayerPrefetchRequest_t const * rhs);
#define pxr_PcpLayerPrefetchRequest__assign pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest_dtor(
    pxr_PcpLayerPrefetchRequest_t * this_);
#define pxr_PcpLayerPrefetchRequest_dtor pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest_dtor


#ifdef __cplusplus
}
#endif
