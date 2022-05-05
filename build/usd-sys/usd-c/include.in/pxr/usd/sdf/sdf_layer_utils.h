#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;

/** Returns the path to the asset specified by \p assetPath, using the
\p anchor layer to anchor the path if it is relative.  If the result of
anchoring \p assetPath to \p anchor's path cannot be resolved and
\p assetPath is a search path, \p assetPath will be returned.  If
\p assetPath is not relative, \p assetPath will be returned.  Otherwise,
the anchored path will be returned.

Note that if \p anchor is an anonymous layer, we will always return
the untouched \p assetPath. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfComputeAssetPathRelativeToLayer(
    std_string_t * * return_
    , pxr_SdfLayerHandle_t const * anchor
    , std_string_t const * assetPath);
#define pxr_SdfComputeAssetPathRelativeToLayer pxrInternal_v0_21__pxrReserved___SdfComputeAssetPathRelativeToLayer


#ifdef __cplusplus
}
#endif
