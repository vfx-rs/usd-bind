#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____ArResolverContext_t_s pxrInternal_v0_21__pxrReserved____ArResolverContext_t;
typedef pxrInternal_v0_21__pxrReserved____ArResolverContext_t pxr_ArResolverContext_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____ArResolvedPath_t_s pxrInternal_v0_21__pxrReserved____ArResolvedPath_t;
typedef pxrInternal_v0_21__pxrReserved____ArResolvedPath_t pxr_ArResolvedPath_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \class ArResolver

Interface for the asset resolution system. An asset resolver is 
responsible for resolving asset information (including the asset's
physical path) from a logical path.

See \ref ar_implementing_resolver for information on how to customize
asset resolution behavior by implementing a subclass of ArResolver.
Clients may use #ArGetResolver to access the configured asset resolver. */
typedef struct pxrInternal_v0_21__pxrReserved____ArResolver_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArResolver_t;
typedef pxrInternal_v0_21__pxrReserved____ArResolver_t pxr_ArResolver_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_dtor(
    pxr_ArResolver_t * this_);
#define pxr_ArResolver_dtor pxrInternal_v0_21__pxrReserved____ArResolver_dtor


/** Returns an identifier for the asset specified by \p assetPath.
If \p anchorAssetPath is not empty, it is the resolved asset path
that \p assetPath should be anchored to if it is a relative path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CreateIdentifier(
    pxr_ArResolver_t const * this_
    , std_string_t * * return_
    , std_string_t const * assetPath
    , pxr_ArResolvedPath_t const * anchorAssetPath);
#define pxr_ArResolver_CreateIdentifier pxrInternal_v0_21__pxrReserved____ArResolver_CreateIdentifier


/** Returns an identifier for a new asset specified by \p assetPath.
If \p anchorAssetPath is not empty, it is the resolved asset path
that \p assetPath should be anchored to if it is a relative path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CreateIdentifierForNewAsset(
    pxr_ArResolver_t const * this_
    , std_string_t * * return_
    , std_string_t const * assetPath
    , pxr_ArResolvedPath_t const * anchorAssetPath);
#define pxr_ArResolver_CreateIdentifierForNewAsset pxrInternal_v0_21__pxrReserved____ArResolver_CreateIdentifierForNewAsset


/** Returns the resolved path for the asset identified by the given \p
assetPath if it exists. If the asset does not exist, returns an empty
ArResolvedPath. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_Resolve(
    pxr_ArResolver_t const * this_
    , pxr_ArResolvedPath_t * * return_
    , std_string_t const * assetPath);
#define pxr_ArResolver_Resolve pxrInternal_v0_21__pxrReserved____ArResolver_Resolve


/** Returns the resolved path for the given \p assetPath that may be used
to create a new asset. If such a path cannot be computed for
\p assetPath, returns an empty ArResolvedPath.

Note that an asset might or might not already exist at the returned
resolved path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_ResolveForNewAsset(
    pxr_ArResolver_t const * this_
    , pxr_ArResolvedPath_t * * return_
    , std_string_t const * assetPath);
#define pxr_ArResolver_ResolveForNewAsset pxrInternal_v0_21__pxrReserved____ArResolver_ResolveForNewAsset


/** Binds the given context to this resolver.

Clients should generally use ArResolverContextBinder instead of calling
this function directly.

\see ArResolverContextBinder */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_BindContext(
    pxr_ArResolver_t * this_
    , pxr_ArResolverContext_t const * context
    , pxr_VtValue_t * bindingData);
#define pxr_ArResolver_BindContext pxrInternal_v0_21__pxrReserved____ArResolver_BindContext


/** Unbind the given context from this resolver.

Clients should generally use ArResolverContextBinder instead of calling
this function directly.

\see ArResolverContextBinder */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_UnbindContext(
    pxr_ArResolver_t * this_
    , pxr_ArResolverContext_t const * context
    , pxr_VtValue_t * bindingData);
#define pxr_ArResolver_UnbindContext pxrInternal_v0_21__pxrReserved____ArResolver_UnbindContext


/** Return an ArResolverContext that may be bound to this resolver
to resolve assets when no other context is explicitly specified.

The returned ArResolverContext will contain the default context 
returned by the primary resolver and all URI resolvers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CreateDefaultContext(
    pxr_ArResolver_t const * this_
    , pxr_ArResolverContext_t * * return_);
#define pxr_ArResolver_CreateDefaultContext pxrInternal_v0_21__pxrReserved____ArResolver_CreateDefaultContext


/** Return an ArResolverContext that may be bound to this resolver
to resolve the asset located at \p assetPath or referenced by
that asset when no other context is explicitly specified.

The returned ArResolverContext will contain the default context 
for \p assetPath returned by the primary resolver and all URI resolvers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CreateDefaultContextForAsset(
    pxr_ArResolver_t const * this_
    , pxr_ArResolverContext_t * * return_
    , std_string_t const * assetPath);
#define pxr_ArResolver_CreateDefaultContextForAsset pxrInternal_v0_21__pxrReserved____ArResolver_CreateDefaultContextForAsset


/** Return an ArResolverContext created from the primary ArResolver
implementation using the given \p contextStr. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CreateContextFromString(
    pxr_ArResolver_t const * this_
    , pxr_ArResolverContext_t * * return_
    , std_string_t const * contextStr);
#define pxr_ArResolver_CreateContextFromString pxrInternal_v0_21__pxrReserved____ArResolver_CreateContextFromString


/** Return an ArResolverContext created from the ArResolver registered
for the given \p uriScheme using the given \p contextStr.

An empty \p uriScheme indicates the primary resolver and is
equivalent to CreateContextFromString(string).

If no resolver is registered for \p uriScheme, returns an empty
ArResolverContext. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CreateContextFromString_1(
    pxr_ArResolver_t const * this_
    , pxr_ArResolverContext_t * * return_
    , std_string_t const * uriScheme
    , std_string_t const * contextStr);
#define pxr_ArResolver_CreateContextFromString_1 pxrInternal_v0_21__pxrReserved____ArResolver_CreateContextFromString_1


/** Refresh any caches associated with the given context. If doing so
would invalidate asset paths that had previously been resolved,
an ArNotice::ResolverChanged notice will be sent to inform clients
of this. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_RefreshContext(
    pxr_ArResolver_t * this_
    , pxr_ArResolverContext_t const * context);
#define pxr_ArResolver_RefreshContext pxrInternal_v0_21__pxrReserved____ArResolver_RefreshContext


/** Returns the asset resolver context currently bound in this thread.

\see ArResolver::BindContext, ArResolver::UnbindContext */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_GetCurrentContext(
    pxr_ArResolver_t const * this_
    , pxr_ArResolverContext_t * * return_);
#define pxr_ArResolver_GetCurrentContext pxrInternal_v0_21__pxrReserved____ArResolver_GetCurrentContext


/** Returns true if \p assetPath is a context-dependent path, false
otherwise.

A context-dependent path may result in different resolved paths
depending on what asset resolver context is bound when Resolve
is called. Assets located at the same context-dependent path may not
be the same since those assets may have been loaded from different
resolved paths. In this case, the assets' resolved paths must be
consulted to determine if they are the same. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_IsContextDependentPath(
    pxr_ArResolver_t const * this_
    , _Bool * return_
    , std_string_t const * assetPath);
#define pxr_ArResolver_IsContextDependentPath pxrInternal_v0_21__pxrReserved____ArResolver_IsContextDependentPath


/** Returns the file extension for the given \p assetPath. The returned
extension does not include a "." at the beginning. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_GetExtension(
    pxr_ArResolver_t const * this_
    , std_string_t * * return_
    , std_string_t const * assetPath);
#define pxr_ArResolver_GetExtension pxrInternal_v0_21__pxrReserved____ArResolver_GetExtension


/** Returns true if an asset may be written to the given \p resolvedPath,
false otherwise. If this function returns false and \p whyNot is not
\c nullptr, it may be filled with an explanation. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CanWriteAssetToPath(
    pxr_ArResolver_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * resolvedPath
    , std_string_t * whyNot);
#define pxr_ArResolver_CanWriteAssetToPath pxrInternal_v0_21__pxrReserved____ArResolver_CanWriteAssetToPath


/** Mark the start of a resolution caching scope. 

Clients should generally use ArResolverScopedCache instead of calling
this function directly.

Resolvers may fill \p cacheScopeData with arbitrary data. Clients may
also pass in a \p cacheScopeData populated by an earlier call to
BeginCacheScope to allow the resolver access to that information.

\see ArResolverScopedCache */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_BeginCacheScope(
    pxr_ArResolver_t * this_
    , pxr_VtValue_t * cacheScopeData);
#define pxr_ArResolver_BeginCacheScope pxrInternal_v0_21__pxrReserved____ArResolver_BeginCacheScope


/** Mark the end of a resolution caching scope.

Clients should generally use ArResolverScopedCache instead of calling
this function directly.

\p cacheScopeData should contain the data that was populated by the
previous corresponding call to BeginCacheScope.

\see ArResolverScopedCache */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_EndCacheScope(
    pxr_ArResolver_t * this_
    , pxr_VtValue_t * cacheScopeData);
#define pxr_ArResolver_EndCacheScope pxrInternal_v0_21__pxrReserved____ArResolver_EndCacheScope


/** \deprecated
Returns true if the given path is a repository path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_IsRepositoryPath(
    pxr_ArResolver_t const * this_
    , _Bool * return_
    , std_string_t const * path);
#define pxr_ArResolver_IsRepositoryPath pxrInternal_v0_21__pxrReserved____ArResolver_IsRepositoryPath


#ifdef __cplusplus
}
#endif
