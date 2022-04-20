#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtDictionary_t_s pxrInternal_v0_21__pxrReserved____VtDictionary_t;
typedef pxrInternal_v0_21__pxrReserved____VtDictionary_t pxr_VtDictionary_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t_s pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t pxr_SdfLayerOffset_t;

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


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_dtor(
    pxr_SdfReference_t * this_);
#define pxr_SdfReference_dtor pxrInternal_v0_21__pxrReserved____SdfReference_dtor


#ifdef __cplusplus
}
#endif
