#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t_s pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t pxr_SdfLayerOffset_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \class PcpMapFunction

A function that maps values from one namespace (and time domain) to
another. It represents the transformation that an arc such as a reference
arc applies as it incorporates values across the arc.

Take the example of a reference arc, where a source path
\</Model\> is referenced as a target path, \</Model_1\>.
The source path \</Model\> is the source of the opinions;
the target path \</Model_1\> is where they are incorporated in the scene.
Values in the model that refer to paths relative to \</Model\> must be
transformed to be relative to \</Model_1\> instead.
The PcpMapFunction for the arc provides this service.

Map functions have a specific \em domain, or set of values they can
operate on.  Any values outside the domain cannot be mapped.
The domain precisely tracks what areas of namespace can be
referred to across various forms of arcs.

Map functions can be chained to represent a series of map
operations applied in sequence.  The map function represent the
cumulative effect as efficiently as possible.  For example, in
the case of a chained reference from \</Model\> to \</Model\>
to \</Model\> to \</Model_1\>, this is effectively the same as
a mapping directly from \</Model\> to \</Model_1\>.  Representing
the cumulative effect of arcs in this way is important for
handling larger scenes efficiently.

Map functions can be \em inverted. Formally, map functions are
bijections (one-to-one and onto), which ensures that they can
be inverted.  Put differently, no information is lost by applying
a map function to set of values within its domain; they retain
their distinct identities and can always be mapped back.

One analogy that may or may not be helpful:
In the same way a geometric transform maps a model's points in its
rest space into the world coordinates for a particular instance,
a PcpMapFunction maps values about a referenced model into the
composed scene for a particular instance of that model. But rather
than translating and rotating points, the map function shifts the
values in namespace (and time). */
typedef struct pxrInternal_v0_21__pxrReserved____PcpMapFunction_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpMapFunction_t;
typedef pxrInternal_v0_21__pxrReserved____PcpMapFunction_t pxr_PcpMapFunction_t;


/** Construct a null function. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_ctor(
    pxr_PcpMapFunction_t * * this_);
#define pxr_PcpMapFunction_ctor pxrInternal_v0_21__pxrReserved____PcpMapFunction_ctor


/** Construct an identity map function. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_Identity(
    pxr_PcpMapFunction_t const * * return_);
#define pxr_PcpMapFunction_Identity pxrInternal_v0_21__pxrReserved____PcpMapFunction_Identity


/** Swap the contents of this map function with \p map. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_Swap(
    pxr_PcpMapFunction_t * this_
    , pxr_PcpMapFunction_t * map);
#define pxr_PcpMapFunction_Swap pxrInternal_v0_21__pxrReserved____PcpMapFunction_Swap


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_swap(
    pxr_PcpMapFunction_t * this_
    , pxr_PcpMapFunction_t * map);
#define pxr_PcpMapFunction_swap pxrInternal_v0_21__pxrReserved____PcpMapFunction_swap


/** Equality. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction__eq(
    pxr_PcpMapFunction_t const * this_
    , _Bool * return_
    , pxr_PcpMapFunction_t const * map);
#define pxr_PcpMapFunction__eq pxrInternal_v0_21__pxrReserved____PcpMapFunction__eq


/** Inequality. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction__ne(
    pxr_PcpMapFunction_t const * this_
    , _Bool * return_
    , pxr_PcpMapFunction_t const * map);
#define pxr_PcpMapFunction__ne pxrInternal_v0_21__pxrReserved____PcpMapFunction__ne


/** Return true if this map function is the null function.
For a null function, MapSourceToTarget() always returns an empty path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_IsNull(
    pxr_PcpMapFunction_t const * this_
    , _Bool * return_);
#define pxr_PcpMapFunction_IsNull pxrInternal_v0_21__pxrReserved____PcpMapFunction_IsNull


/** Return true if the map function is the identity function.
For identity, MapSourceToTarget() always returns the path unchanged. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_IsIdentity(
    pxr_PcpMapFunction_t const * this_
    , _Bool * return_);
#define pxr_PcpMapFunction_IsIdentity pxrInternal_v0_21__pxrReserved____PcpMapFunction_IsIdentity


/** Return true if the map function maps the absolute root path to the
absolute root path, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_HasRootIdentity(
    pxr_PcpMapFunction_t const * this_
    , _Bool * return_);
#define pxr_PcpMapFunction_HasRootIdentity pxrInternal_v0_21__pxrReserved____PcpMapFunction_HasRootIdentity


/** Map a path in the source namespace to the target.
If the path is not in the domain, returns an empty path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_MapSourceToTarget(
    pxr_PcpMapFunction_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_PcpMapFunction_MapSourceToTarget pxrInternal_v0_21__pxrReserved____PcpMapFunction_MapSourceToTarget


/** Map a path in the target namespace to the source.
If the path is not in the co-domain, returns an empty path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_MapTargetToSource(
    pxr_PcpMapFunction_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_PcpMapFunction_MapTargetToSource pxrInternal_v0_21__pxrReserved____PcpMapFunction_MapTargetToSource


/** Compose this map over the given map function.
The result will represent the application of f followed by
the application of this function. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_Compose(
    pxr_PcpMapFunction_t const * this_
    , pxr_PcpMapFunction_t * * return_
    , pxr_PcpMapFunction_t const * f);
#define pxr_PcpMapFunction_Compose pxrInternal_v0_21__pxrReserved____PcpMapFunction_Compose


/** Compose this map function over a hypothetical map function that has an
identity path mapping and \p offset.  This is equivalent to building
such a map function and invoking Compose(), but is faster. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_ComposeOffset(
    pxr_PcpMapFunction_t const * this_
    , pxr_PcpMapFunction_t * * return_
    , pxr_SdfLayerOffset_t const * newOffset);
#define pxr_PcpMapFunction_ComposeOffset pxrInternal_v0_21__pxrReserved____PcpMapFunction_ComposeOffset


/** Return the inverse of this map function.
This returns a true inverse \p inv: for any path p in this function's
domain that it maps to p', inv(p') -> p. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_GetInverse(
    pxr_PcpMapFunction_t const * this_
    , pxr_PcpMapFunction_t * * return_);
#define pxr_PcpMapFunction_GetInverse pxrInternal_v0_21__pxrReserved____PcpMapFunction_GetInverse


/** The time offset of the mapping. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_GetTimeOffset(
    pxr_PcpMapFunction_t const * this_
    , pxr_SdfLayerOffset_t const * * return_);
#define pxr_PcpMapFunction_GetTimeOffset pxrInternal_v0_21__pxrReserved____PcpMapFunction_GetTimeOffset


/** Returns a string representation of this mapping for debugging
purposes. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_GetString(
    pxr_PcpMapFunction_t const * this_
    , std_string_t * * return_);
#define pxr_PcpMapFunction_GetString pxrInternal_v0_21__pxrReserved____PcpMapFunction_GetString


/** Return a size_t hash for this map function. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_Hash(
    pxr_PcpMapFunction_t const * this_
    , size_t * return_);
#define pxr_PcpMapFunction_Hash pxrInternal_v0_21__pxrReserved____PcpMapFunction_Hash


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_copy(
    pxr_PcpMapFunction_t * * this_
    , pxr_PcpMapFunction_t const * rhs);
#define pxr_PcpMapFunction_copy pxrInternal_v0_21__pxrReserved____PcpMapFunction_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction__assign(
    pxr_PcpMapFunction_t * this_
    , pxr_PcpMapFunction_t * * return_
    , pxr_PcpMapFunction_t const * rhs);
#define pxr_PcpMapFunction__assign pxrInternal_v0_21__pxrReserved____PcpMapFunction__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_dtor(
    pxr_PcpMapFunction_t * this_);
#define pxr_PcpMapFunction_dtor pxrInternal_v0_21__pxrReserved____PcpMapFunction_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_1(
    size_t * return_
    , pxr_PcpMapFunction_t const * x);
#define pxr_hash_value_1 pxrInternal_v0_21__pxrReserved___hash_value_1


#ifdef __cplusplus
}
#endif
