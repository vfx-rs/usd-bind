#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

/** \class ArResolverScopedCache

Helper object for managing asset resolver cache scopes.

A scoped resolution cache indicates to the resolver that results of
calls to Resolve should be cached for a certain scope. This is
important for performance and also for consistency -- it ensures 
that repeated calls to Resolve with the same parameters will
return the same result.

\see \ref ArResolver_scopedCache "Scoped Resolution Cache" */
typedef struct pxrInternal_v0_21__pxrReserved____ArResolverScopedCache_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArResolverScopedCache_t;
typedef pxrInternal_v0_21__pxrReserved____ArResolverScopedCache_t pxr_ArResolverScopedCache_t;


#ifdef __cplusplus
}
#endif
