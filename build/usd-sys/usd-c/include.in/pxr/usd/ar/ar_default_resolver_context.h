#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;

/** \class ArDefaultResolverContext

Resolver context object that specifies a search path to use during
asset resolution. This object is intended for use with the default
ArDefaultResolver asset resolution implementation; see documentation for
that class for more details on the search path resolution algorithm.

Example usage:
\code
ArDefaultResolverContext ctx({"/Local/Models", "/Installed/Models"});
{
    // Bind the context object:
    ArResolverContextBinder binder(ctx);

   // While the context is bound, all calls to ArResolver::Resolve
   // (assuming ArDefaultResolver is the underlying implementation being
   // used) will include the specified paths during resolution.
   std::string resolvedPath = resolver.Resolve("ModelName/File.txt")
}

// Once the context is no longer bound (due to the ArResolverContextBinder
// going out of scope), its search path no longer factors into asset
// resolution.
\endcode */
typedef struct pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_t;
typedef pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_t pxr_ArDefaultResolverContext_t;


/** Default construct a context with no search path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_ctor(
    pxr_ArDefaultResolverContext_t * * this_);
#define pxr_ArDefaultResolverContext_ctor pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_ctor


/** Construct a context with the given \p searchPath.
Elements in \p searchPath should be absolute paths. If they are not,
they will be anchored to the current working directory. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_ctor_1(
    pxr_ArDefaultResolverContext_t * * this_
    , std_vector_string_t const * searchPath);
#define pxr_ArDefaultResolverContext_ctor_1 pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_operator_(
    pxr_ArDefaultResolverContext_t const * this_
    , _Bool * return_
    , pxr_ArDefaultResolverContext_t const * rhs);
#define pxr_ArDefaultResolverContext_operator_ pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_operator_


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext__eq(
    pxr_ArDefaultResolverContext_t const * this_
    , _Bool * return_
    , pxr_ArDefaultResolverContext_t const * rhs);
#define pxr_ArDefaultResolverContext__eq pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext__ne(
    pxr_ArDefaultResolverContext_t const * this_
    , _Bool * return_
    , pxr_ArDefaultResolverContext_t const * rhs);
#define pxr_ArDefaultResolverContext__ne pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext__ne


/** Return this context's search path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_GetSearchPath(
    pxr_ArDefaultResolverContext_t const * this_
    , std_vector_string_t const * * return_);
#define pxr_ArDefaultResolverContext_GetSearchPath pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_GetSearchPath


/** Return a string representation of this context for debugging. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_GetAsString(
    pxr_ArDefaultResolverContext_t const * this_
    , std_string_t * * return_);
#define pxr_ArDefaultResolverContext_GetAsString pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_GetAsString


#ifdef __cplusplus
}
#endif
