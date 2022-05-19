#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Contains hints about layer contents that may be used to accelerate certain
composition operations. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayerHints_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____SdfLayerHints_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerHints_t pxr_SdfLayerHints_t;


/** Default constructed hints provide the most conservative set of values
such that consumers of the hints will act correctly if not optimally. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerHints_ctor(
    pxr_SdfLayerHints_t * * this_);
#define pxr_SdfLayerHints_ctor pxrInternal_v0_21__pxrReserved____SdfLayerHints_ctor


/** Construct hints with specific values.  Using this constructor requires
that all hint fields be specified. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerHints_ctor_1(
    pxr_SdfLayerHints_t * * this_
    , _Bool mightHaveRelocates);
#define pxr_SdfLayerHints_ctor_1 pxrInternal_v0_21__pxrReserved____SdfLayerHints_ctor_1


#ifdef __cplusplus
}
#endif
