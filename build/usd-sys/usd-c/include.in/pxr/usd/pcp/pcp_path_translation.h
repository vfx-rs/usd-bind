#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpMapFunction_t_s pxrInternal_v0_21__pxrReserved____PcpMapFunction_t;
typedef pxrInternal_v0_21__pxrReserved____PcpMapFunction_t pxr_PcpMapFunction_t;

/** Convenience function like \a PcpTranslatePathFromRootToNode, but
takes a function rather than a node. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromRootToNodeUsingFunction(
    pxr_SdfPath_t * * return_
    , pxr_PcpMapFunction_t const * mapToRoot
    , pxr_SdfPath_t const * pathInRootNamespace
    , _Bool * pathWasTranslated);
#define pxr_PcpTranslatePathFromRootToNodeUsingFunction pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromRootToNodeUsingFunction


/** Convenience function like \a PcpTranslatePathFromNodeToRoot, but
takes a function rather than a node. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromNodeToRootUsingFunction(
    pxr_SdfPath_t * * return_
    , pxr_PcpMapFunction_t const * mapToRoot
    , pxr_SdfPath_t const * pathInNodeNamespace
    , _Bool * pathWasTranslated);
#define pxr_PcpTranslatePathFromNodeToRootUsingFunction pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromNodeToRootUsingFunction


#ifdef __cplusplus
}
#endif
