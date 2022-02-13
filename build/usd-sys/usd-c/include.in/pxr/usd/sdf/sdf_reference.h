#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t_s pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t pxr_SdfLayerOffset_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtDictionary_t_s pxrInternal_v0_21__pxrReserved____VtDictionary_t;
typedef pxrInternal_v0_21__pxrReserved____VtDictionary_t pxr_VtDictionary_t;

/** \class SdfReference

Represents a reference and all its meta data.

A reference is expressed on a prim in a given layer and it identifies a
prim in a layer stack.  All opinions in the namespace hierarchy
under the referenced prim will be composed with the opinions in the
namespace hierarchy under the referencing prim.

The asset path specifies the layer stack being referenced.  If this
asset path is non-empty, this reference is considered an 'external' 
reference to the layer stack rooted at the specified layer.  If this
is empty, this reference is considered an 'internal' reference to the
layer stack containing (but not necessarily rooted at) the layer where
the reference is authored.

The prim path specifies the prim in the referenced layer stack from
which opinions will be composed.  If this prim path is empty, it will
be considered a reference to the default prim specified in the root layer
of the referenced layer stack -- see SdfLayer::GetDefaultPrim.

The meta data for a reference is its layer offset and custom data.  The
layer offset is an affine transformation applied to all anim splines in
the referenced prim's namespace hierarchy, see SdfLayerOffset for details.
Custom data is for use by plugins or other non-tools supplied extensions
that need to be able to store data associated with references. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfReference_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfReference_t;
typedef pxrInternal_v0_21__pxrReserved____SdfReference_t pxr_SdfReference_t;

/** Struct that defines equality of SdfReferences based on their
identity (the asset path and prim path). */
typedef struct pxrInternal_v0_21__pxrReserved____SdfReference__IdentityEqual_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____SdfReference__IdentityEqual_t;
typedef pxrInternal_v0_21__pxrReserved____SdfReference__IdentityEqual_t pxr_SdfReference_IdentityEqual_t;

/** Struct that defines a strict weak ordering of SdfReferences based on
their identity (the asset path and prim path). */
typedef struct pxrInternal_v0_21__pxrReserved____SdfReference__IdentityLessThan_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____SdfReference__IdentityLessThan_t;
typedef pxrInternal_v0_21__pxrReserved____SdfReference__IdentityLessThan_t pxr_SdfReference_IdentityLessThan_t;


/** Creates a reference with all its meta data.  The default reference is an
internal reference to the default prim.  See SdfAssetPath for what
characters are valid in \p assetPath.  If \p assetPath contains invalid
characters, issue an error and set this reference's asset path to the
empty asset path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_ctor(
    pxr_SdfReference_t * * this_
    , std_string_t const * assetPath
    , pxr_SdfPath_t const * primPath
    , pxr_SdfLayerOffset_t const * layerOffset
    , pxr_VtDictionary_t const * customData);
#define pxr_SdfReference_ctor pxrInternal_v0_21__pxrReserved____SdfReference_ctor


/** Returns the asset path to the root layer of the referenced layer
stack.  This will be empty in the case of an internal reference. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_GetAssetPath(
    pxr_SdfReference_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfReference_GetAssetPath pxrInternal_v0_21__pxrReserved____SdfReference_GetAssetPath


/** Sets the asset path for the root layer of the referenced layer stack.
This may be set to an empty string to specify an internal reference.
See SdfAssetPath for what characters are valid in \p assetPath.  If \p
assetPath contains invalid characters, issue an error and set this
reference's asset path to the empty asset path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_SetAssetPath(
    pxr_SdfReference_t * this_
    , std_string_t const * assetPath);
#define pxr_SdfReference_SetAssetPath pxrInternal_v0_21__pxrReserved____SdfReference_SetAssetPath


/** Returns the path of the referenced prim.
This will be empty if the referenced prim is the default prim specified
in the referenced layer stack. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_GetPrimPath(
    pxr_SdfReference_t const * this_
    , pxr_SdfPath_t const * * return_);
#define pxr_SdfReference_GetPrimPath pxrInternal_v0_21__pxrReserved____SdfReference_GetPrimPath


/** Sets the path of the referenced prim.
This may be set to an empty path to specify a reference to the default
prim in the referenced layer stack. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_SetPrimPath(
    pxr_SdfReference_t * this_
    , pxr_SdfPath_t const * primPath);
#define pxr_SdfReference_SetPrimPath pxrInternal_v0_21__pxrReserved____SdfReference_SetPrimPath


/** Returns the layer offset associated with the reference. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_GetLayerOffset(
    pxr_SdfReference_t const * this_
    , pxr_SdfLayerOffset_t const * * return_);
#define pxr_SdfReference_GetLayerOffset pxrInternal_v0_21__pxrReserved____SdfReference_GetLayerOffset


/** Sets a new layer offset. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_SetLayerOffset(
    pxr_SdfReference_t * this_
    , pxr_SdfLayerOffset_t const * layerOffset);
#define pxr_SdfReference_SetLayerOffset pxrInternal_v0_21__pxrReserved____SdfReference_SetLayerOffset


/** Returns the custom data associated with the reference. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_GetCustomData(
    pxr_SdfReference_t const * this_
    , pxr_VtDictionary_t const * * return_);
#define pxr_SdfReference_GetCustomData pxrInternal_v0_21__pxrReserved____SdfReference_GetCustomData


/** Sets the custom data associated with the reference. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_SetCustomData(
    pxr_SdfReference_t * this_
    , pxr_VtDictionary_t const * customData);
#define pxr_SdfReference_SetCustomData pxrInternal_v0_21__pxrReserved____SdfReference_SetCustomData


/** Sets a custom data entry for the reference.

If \a value is empty, then this removes the given custom data entry. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_SetCustomData_1(
    pxr_SdfReference_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfReference_SetCustomData_1 pxrInternal_v0_21__pxrReserved____SdfReference_SetCustomData_1


/** Swaps the custom data dictionary for this reference. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_SwapCustomData(
    pxr_SdfReference_t * this_
    , pxr_VtDictionary_t * customData);
#define pxr_SdfReference_SwapCustomData pxrInternal_v0_21__pxrReserved____SdfReference_SwapCustomData


/** Returns \c true in the case of an internal reference.

An internal reference is a reference with an empty asset path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_IsInternal(
    pxr_SdfReference_t const * this_
    , _Bool * return_);
#define pxr_SdfReference_IsInternal pxrInternal_v0_21__pxrReserved____SdfReference_IsInternal


/** Returns whether this reference equals \a rhs. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference__eq(
    pxr_SdfReference_t const * this_
    , _Bool * return_
    , pxr_SdfReference_t const * rhs);
#define pxr_SdfReference__eq pxrInternal_v0_21__pxrReserved____SdfReference__eq


/** Returns whether this reference is less than \a rhs.  The meaning
of less than is somewhat arbitrary. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_operator_(
    pxr_SdfReference_t const * this_
    , _Bool * return_
    , pxr_SdfReference_t const * rhs);
#define pxr_SdfReference_operator_ pxrInternal_v0_21__pxrReserved____SdfReference_operator_


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_copy(
    pxr_SdfReference_t * * this_
    , pxr_SdfReference_t const * rhs);
#define pxr_SdfReference_copy pxrInternal_v0_21__pxrReserved____SdfReference_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference__assign(
    pxr_SdfReference_t * this_
    , pxr_SdfReference_t * * return_
    , pxr_SdfReference_t const * rhs);
#define pxr_SdfReference__assign pxrInternal_v0_21__pxrReserved____SdfReference__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_dtor(
    pxr_SdfReference_t * this_);
#define pxr_SdfReference_dtor pxrInternal_v0_21__pxrReserved____SdfReference_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference__IdentityEqual__op_call(
    pxr_SdfReference_IdentityEqual_t const * this_
    , _Bool * return_
    , pxr_SdfReference_t const * lhs
    , pxr_SdfReference_t const * rhs);
#define pxr_SdfReference_IdentityEqual__op_call pxrInternal_v0_21__pxrReserved____SdfReference__IdentityEqual__op_call


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference__IdentityLessThan__op_call(
    pxr_SdfReference_IdentityLessThan_t const * this_
    , _Bool * return_
    , pxr_SdfReference_t const * lhs
    , pxr_SdfReference_t const * rhs);
#define pxr_SdfReference_IdentityLessThan__op_call pxrInternal_v0_21__pxrReserved____SdfReference__IdentityLessThan__op_call


#ifdef __cplusplus
}
#endif
