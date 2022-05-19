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


/** Begin an asset resolver cache scope. 

Calls ArResolver::BeginCacheScope on the configured asset resolver
and saves the cacheScopeData populated by that function. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverScopedCache_ctor(
    pxr_ArResolverScopedCache_t * * this_);
#define pxr_ArResolverScopedCache_ctor pxrInternal_v0_21__pxrReserved____ArResolverScopedCache_ctor


/** Begin an asset resolver cache scope that shares data
with the given \p parent scope.

Calls ArResolver::BeginCacheScope on the configured asset resolver,
saves the cacheScopeData stored in \p parent and passes that to that
function. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverScopedCache_ctor_1(
    pxr_ArResolverScopedCache_t * * this_
    , pxr_ArResolverScopedCache_t const * parent);
#define pxr_ArResolverScopedCache_ctor_1 pxrInternal_v0_21__pxrReserved____ArResolverScopedCache_ctor_1


/** End an asset resolver cache scope.

Calls ArResolver::EndCacheScope on the configured asset resolver,
passing the saved cacheScopeData to that function. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverScopedCache_dtor(
    pxr_ArResolverScopedCache_t * this_);
#define pxr_ArResolverScopedCache_dtor pxrInternal_v0_21__pxrReserved____ArResolverScopedCache_dtor


#ifdef __cplusplus
}
#endif
