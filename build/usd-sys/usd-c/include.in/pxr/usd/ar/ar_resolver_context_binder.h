#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____ArResolver_t_s pxrInternal_v0_21__pxrReserved____ArResolver_t;
typedef pxrInternal_v0_21__pxrReserved____ArResolver_t pxr_ArResolver_t;
typedef struct pxrInternal_v0_21__pxrReserved____ArResolverContext_t_s pxrInternal_v0_21__pxrReserved____ArResolverContext_t;
typedef pxrInternal_v0_21__pxrReserved____ArResolverContext_t pxr_ArResolverContext_t;

/** \class ArResolverContextBinder

Helper object for managing the binding and unbinding of 
ArResolverContext objects with the asset resolver.

\see \ref ArResolver_context "Asset Resolver Context Operations" */
typedef struct pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_t;
typedef pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_t pxr_ArResolverContextBinder_t;


/** Bind the given \p context with the asset resolver.

Calls ArResolver::BindContext on the configured asset resolver
and saves the bindingData populated by that function. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_ctor(
    pxr_ArResolverContextBinder_t * * this_
    , pxr_ArResolverContext_t const * context);
#define pxr_ArResolverContextBinder_ctor pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_ctor


/** Bind the given \p context to the given \p assetResolver.

Calls ArResolver::BindContext on the given \p assetResolver
and saves the bindingData populated by that function. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_ctor_1(
    pxr_ArResolverContextBinder_t * * this_
    , pxr_ArResolver_t * assetResolver
    , pxr_ArResolverContext_t const * context);
#define pxr_ArResolverContextBinder_ctor_1 pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_ctor_1


/** Unbinds the context specified in the constructor of this
object from the asset resolver.

Calls ArResolver::UnbindContext on the asset resolver that was
bound to originally, passing the saved bindingData to that function. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_dtor(
    pxr_ArResolverContextBinder_t * this_);
#define pxr_ArResolverContextBinder_dtor pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_dtor


#ifdef __cplusplus
}
#endif
