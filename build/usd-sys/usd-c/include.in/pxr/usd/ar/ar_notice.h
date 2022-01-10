#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \class ArNotice */
typedef struct pxrInternal_v0_21__pxrReserved____ArNotice_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____ArNotice_t;
typedef pxrInternal_v0_21__pxrReserved____ArNotice_t pxr_ArNotice_t;

/** \class ResolverNotice
Base class for all ArResolver-related notices. */
typedef struct pxrInternal_v0_21__pxrReserved____ArNotice__ResolverNotice_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArNotice__ResolverNotice_t;
typedef pxrInternal_v0_21__pxrReserved____ArNotice__ResolverNotice_t pxr_ArNotice_ResolverNotice_t;

/** \class ResolverChanged
Notice sent when asset paths may resolve to a different path than
before due to a change in the resolver. */
typedef struct pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_t;
typedef pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_t pxr_ArNotice_ResolverChanged_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArNotice__ResolverNotice_dtor(
    pxr_ArNotice_ResolverNotice_t * this_);
#define pxr_ArNotice_ResolverNotice_dtor pxrInternal_v0_21__pxrReserved____ArNotice__ResolverNotice_dtor


/** Create a notice indicating that the results of asset resolution
might have changed, regardless of what ArResolverContext object
is bound. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_ctor(
    pxr_ArNotice_ResolverChanged_t * * this_);
#define pxr_ArNotice_ResolverChanged_ctor pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_dtor(
    pxr_ArNotice_ResolverChanged_t * this_);
#define pxr_ArNotice_ResolverChanged_dtor pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_dtor


#ifdef __cplusplus
}
#endif
