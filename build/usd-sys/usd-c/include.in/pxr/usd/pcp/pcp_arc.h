#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

/** \class PcpArc

Represents an arc connecting two nodes in the prim index. 
The arc is owned by a node (source) and points to its parent node (target) 
in the index. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpArc_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpArc_t;
typedef pxrInternal_v0_21__pxrReserved____PcpArc_t pxr_PcpArc_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpArc_ctor(
    pxr_PcpArc_t * * this_);
#define pxr_PcpArc_ctor pxrInternal_v0_21__pxrReserved____PcpArc_ctor


USD_CPPMM_API unsigned int PxpArc_get_siblingNumAtOrigin(
    int * * return_
    , pxr_PcpArc_t * self);

USD_CPPMM_API unsigned int PxpArc_get_namespaceDepth(
    int * * return_
    , pxr_PcpArc_t * self);

#ifdef __cplusplus
}
#endif
