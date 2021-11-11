#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \class SdfAssetPath

Contains an asset path and an optional resolved path.  Asset paths may
contain non-control UTF-8 encoded characters.  Specifically, U+0000..U+001F
(C0 controls), U+007F (delete), and U+0080..U+009F (C1 controls) are
disallowed.  Attempts to construct asset paths with such characters will
issue a TfError and produce the default-constructed empty asset path. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfAssetPath_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfAssetPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfAssetPath_t pxr_SdfAssetPath_t;


/** Construct an empty asset path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAssetPath_ctor(
    pxr_SdfAssetPath_t * * this_);
#define pxr_SdfAssetPath_ctor pxrInternal_v0_21__pxrReserved____SdfAssetPath_ctor


/** Construct an asset path with \p path and no associated resolved path.

If the passed \p path is not valid UTF-8 or contains C0 or C1 control
characters, raise a TfError and return the default-constructed empty
asset path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAssetPath_from_path(
    pxr_SdfAssetPath_t * * this_
    , std_string_t const * path);
#define pxr_SdfAssetPath_from_path pxrInternal_v0_21__pxrReserved____SdfAssetPath_from_path


/** Construct an asset path with \p path and an associated \p resolvedPath.

If either the passed \path or \p resolvedPath are not valid UTF-8 or
either contain C0 or C1 control characters, raise a TfError and return
the default-constructed empty asset path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAssetPath_from_resolved_path(
    pxr_SdfAssetPath_t * * this_
    , std_string_t const * path
    , std_string_t const * resolvedPath);
#define pxr_SdfAssetPath_from_resolved_path pxrInternal_v0_21__pxrReserved____SdfAssetPath_from_resolved_path


/** Equality, including the resolved path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAssetPath__eq(
    pxr_SdfAssetPath_t const * this_
    , _Bool * return_
    , pxr_SdfAssetPath_t const * rhs);
#define pxr_SdfAssetPath__eq pxrInternal_v0_21__pxrReserved____SdfAssetPath__eq


/** Ordering first by asset path, then by resolved path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAssetPath_op_lt(
    pxr_SdfAssetPath_t const * this_
    , _Bool * return_
    , pxr_SdfAssetPath_t const * rhs);
#define pxr_SdfAssetPath_op_lt pxrInternal_v0_21__pxrReserved____SdfAssetPath_op_lt


/** Hash function */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAssetPath_GetHash(
    pxr_SdfAssetPath_t const * this_
    , size_t * return_);
#define pxr_SdfAssetPath_GetHash pxrInternal_v0_21__pxrReserved____SdfAssetPath_GetHash


/** Return the asset path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAssetPath_GetAssetPath(
    pxr_SdfAssetPath_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfAssetPath_GetAssetPath pxrInternal_v0_21__pxrReserved____SdfAssetPath_GetAssetPath


/** Return the resolved asset path, if any.

Note that SdfAssetPath carries a resolved path only if its creator
passed one to the constructor.  SdfAssetPath never performs resolution
itself. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAssetPath_GetResolvedPath(
    pxr_SdfAssetPath_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfAssetPath_GetResolvedPath pxrInternal_v0_21__pxrReserved____SdfAssetPath_GetResolvedPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAssetPath_copy(
    pxr_SdfAssetPath_t * * this_
    , pxr_SdfAssetPath_t const * rhs);
#define pxr_SdfAssetPath_copy pxrInternal_v0_21__pxrReserved____SdfAssetPath_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAssetPath__assign(
    pxr_SdfAssetPath_t * this_
    , pxr_SdfAssetPath_t * * return_
    , pxr_SdfAssetPath_t const * rhs);
#define pxr_SdfAssetPath__assign pxrInternal_v0_21__pxrReserved____SdfAssetPath__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAssetPath_dtor(
    pxr_SdfAssetPath_t * this_);
#define pxr_SdfAssetPath_dtor pxrInternal_v0_21__pxrReserved____SdfAssetPath_dtor


#ifdef __cplusplus
}
#endif
