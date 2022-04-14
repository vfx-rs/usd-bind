#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \class ArPackageResolver

Interface for resolving assets within package assets. A package resolver
is responsible for processing particular package asset formats and
resolving information about assets stored within that package.

Each package resolver is associated with particular file formats and is 
invoked by asset resolution when handling package-relative paths involving 
those formats. ArPackageResolver instances are only used internally by Ar
and are not directly exposed to clients.

\section ar_implementing_package_resolver Implementing a Package Resolver

To implement a package resolver, users must create a plugin containing a
subclass of ArPackageResolver and register it with the plugin system
so that it can be discovered and instantiated at runtime.

- Implement an ArPackageResolver subclass
\code{.cpp}
class CustomPackageResolver : public ArPackageResolver {
   // ...
}
\endcode

- In its implementation, register the ArPackageResolver subclass using
  #AR_DEFINE_PACKAGE_RESOLVER
\code{.cpp}
# custom resolver's .cpp file
AR_DEFINE_PACKAGE_RESOLVER(CustomPackageResolver, ArPackageResolver);
\endcode

- Declare the ArPackageResolver subclass in the plugin's plugInfo.json file.
  Note that the entry for the subclass must declare the file format it
  handles in the 'extensions' metadata.
\code{.json}
# plugInfo.json
{
    "Plugins": [
        {
            "Info": {
                "Types" : {
                    "CustomPackageResolver" : {
                        "bases": [ "ArPackageResolver" ],
                        "extensions": [ "pack" ]
                    }
                }
            },
            ... 
        },
        ...
    ]

}
\endcode */
typedef struct pxrInternal_v0_21__pxrReserved____ArPackageResolver_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArPackageResolver_t;
typedef pxrInternal_v0_21__pxrReserved____ArPackageResolver_t pxr_ArPackageResolver_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArPackageResolver_dtor(
    pxr_ArPackageResolver_t * this_);
#define pxr_ArPackageResolver_dtor pxrInternal_v0_21__pxrReserved____ArPackageResolver_dtor


/** Returns the resolved path for the asset located at \p packagedPath 
in the package specified by \p resolvedPackagePath if it exists. 
If the asset does not exist in the package, returns an empty string.

When ArResolver::Resolve is invoked on a package-relative path, the
path will be parsed into the outermost package path, and the inner
packaged path. The outermost package path will be resolved by the
primary resolver. ArPackageResolver::Resolve will then be called on
the corresponding package resolver with that resolved path and the
inner packaged path. If the inner packaged path is itself a 
package-relative path, this process recurses until all paths have been
resolved.

\see ArResolver::Resolve */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArPackageResolver_Resolve(
    pxr_ArPackageResolver_t * this_
    , std_string_t * * return_
    , std_string_t const * resolvedPackagePath
    , std_string_t const * packagedPath);
#define pxr_ArPackageResolver_Resolve pxrInternal_v0_21__pxrReserved____ArPackageResolver_Resolve


/** Mark the start of a resolution caching scope.

\see ArResolver::BeginCacheScope */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArPackageResolver_BeginCacheScope(
    pxr_ArPackageResolver_t * this_
    , pxr_VtValue_t * cacheScopeData);
#define pxr_ArPackageResolver_BeginCacheScope pxrInternal_v0_21__pxrReserved____ArPackageResolver_BeginCacheScope


/** Mark the end of a resolution caching scope.

\see ArResolver::EndCacheScope */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArPackageResolver_EndCacheScope(
    pxr_ArPackageResolver_t * this_
    , pxr_VtValue_t * cacheScopeData);
#define pxr_ArPackageResolver_EndCacheScope pxrInternal_v0_21__pxrReserved____ArPackageResolver_EndCacheScope


#ifdef __cplusplus
}
#endif
