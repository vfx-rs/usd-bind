#pragma once
#include "usd-api-export.h"

#include <pxr/base/tf/tf_token.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \class KindRegistry

A singleton that holds known kinds and information about them.  See
\ref mainpage_kind "Kind Overview" for a description of why kind exists,
what the builtin registered kinds are, and how to extend the core kinds.

\section kind_threadsafety KindRegistry Threadsafty

KindRegistry serves performance-critical clients that operate under the
stl threading model, and therefore itself follows that model in order
to avoid locking during HasKind() and IsA() queries. 

To make this robust, KindRegistry exposes no means to mutate the registry.
All extensions must be accomplished via plugInfo.json files, which are
consumed once during the registry initialization (See \ref kind_extensions ) */
typedef struct pxrInternal_v0_21__pxrReserved____KindRegistry_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____KindRegistry_t;
typedef pxrInternal_v0_21__pxrReserved____KindRegistry_t pxr_KindRegistry_t;


/** Return the single \c KindRegistry instance. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____KindRegistry_GetInstance(
    pxr_KindRegistry_t * * return_);
#define pxr_KindRegistry_GetInstance pxrInternal_v0_21__pxrReserved____KindRegistry_GetInstance


/** Test whether \a kind is known to the registry. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____KindRegistry_HasKind(
    _Bool * return_
    , pxr_TfToken_t const * kind);
#define pxr_KindRegistry_HasKind pxrInternal_v0_21__pxrReserved____KindRegistry_HasKind


/** Return the base kind of the given kind.
If there is no base, the result will be an empty token.
Issues a coding error if \a kind is unknown to the registry. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____KindRegistry_GetBaseKind(
    pxr_TfToken_t * return_
    , pxr_TfToken_t const * kind);
#define pxr_KindRegistry_GetBaseKind pxrInternal_v0_21__pxrReserved____KindRegistry_GetBaseKind


/** Test whether \a derivedKind is the same as \a baseKind or
has it as a base kind (either directly or indirectly).

It is \em not required that \a derivedKind or \a baseKind
be known to the registry: if they are unknown but equal,
IsA will return \c true; otherwise if either is unknown, we
will simply return false.

Therefore this method will not raise any errors. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____KindRegistry_IsA(
    _Bool * return_
    , pxr_TfToken_t const * derivedKind
    , pxr_TfToken_t const * baseKind);
#define pxr_KindRegistry_IsA pxrInternal_v0_21__pxrReserved____KindRegistry_IsA


#ifdef __cplusplus
}
#endif
