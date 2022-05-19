#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____PcpNodeRef_t_s pxrInternal_v0_21__pxrReserved____PcpNodeRef_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNodeRef_t pxr_PcpNodeRef_t;

/** Compares the strength of nodes \p a and \p b. These nodes must be siblings; 
it is a coding error if \p a and \p b do not have the same parent node.

Returns -1 if a is stronger than b,
         0 if a is equivalent to b,
         1 if a is weaker than b */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpCompareSiblingNodeStrength(
    int * return_
    , pxr_PcpNodeRef_t const * a
    , pxr_PcpNodeRef_t const * b);
#define pxr_PcpCompareSiblingNodeStrength pxrInternal_v0_21__pxrReserved___PcpCompareSiblingNodeStrength


/** Compares the strength of nodes \p a and \p b. These nodes must be part
of the same graph; it is a coding error if \p a and \p b do not have the
same root node.

Returns -1 if a is stronger than b,
         0 if a is equivalent to b,
         1 if a is weaker than b */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpCompareNodeStrength(
    int * return_
    , pxr_PcpNodeRef_t const * a
    , pxr_PcpNodeRef_t const * b);
#define pxr_PcpCompareNodeStrength pxrInternal_v0_21__pxrReserved___PcpCompareNodeStrength


#ifdef __cplusplus
}
#endif
