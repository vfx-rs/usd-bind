#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;

/** \class ArDefaultResolver

Default asset resolution implementation used when no plugin
implementation is provided.

In order to resolve assets specified by relative paths, this resolver
implements a simple "search path" scheme. The resolver will anchor the
relative path to a series of directories and return the first absolute
path where the asset exists.

The first directory will always be the current working directory. The
resolver will then examine the directories specified via the following
mechanisms (in order):

   - The currently-bound ArDefaultResolverContext for the calling thread
   - ArDefaultResolver::SetDefaultSearchPath
   - The environment variable PXR_AR_DEFAULT_SEARCH_PATH. This is
     expected to be a list of directories delimited by the platform's 
     standard path separator.

ArDefaultResolver supports creating an ArDefaultResolverContext via
ArResolver::CreateContextFromString by passing a list of directories
delimited by the platform's standard path separator. */
typedef struct pxrInternal_v0_21__pxrReserved____ArDefaultResolver_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArDefaultResolver_t;
typedef pxrInternal_v0_21__pxrReserved____ArDefaultResolver_t pxr_ArDefaultResolver_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolver_ctor(
    pxr_ArDefaultResolver_t * * this_);
#define pxr_ArDefaultResolver_ctor pxrInternal_v0_21__pxrReserved____ArDefaultResolver_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolver_dtor(
    pxr_ArDefaultResolver_t * this_);
#define pxr_ArDefaultResolver_dtor pxrInternal_v0_21__pxrReserved____ArDefaultResolver_dtor


/** Set the default search path that will be used during asset
resolution. This must be called before the first call
to \ref ArGetResolver.
The specified paths will be searched *in addition to, and before*
paths specified via the environment variable PXR_AR_DEFAULT_SEARCH_PATH */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolver_SetDefaultSearchPath(
    std_vector_string_t const * searchPath);
#define pxr_ArDefaultResolver_SetDefaultSearchPath pxrInternal_v0_21__pxrReserved____ArDefaultResolver_SetDefaultSearchPath


#ifdef __cplusplus
}
#endif
