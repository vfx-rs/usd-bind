#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

/** \enum UsdListPosition

Specifies a position to add items to lists.  Used by some Add()
methods in the USD API that manipulate lists, such as AddReference(). */
enum pxrInternal_v0_21__pxrReserved____UsdListPosition_e {
    pxr_UsdListPosition_UsdListPositionFrontOfPrependList = 0,
    pxr_UsdListPosition_UsdListPositionBackOfPrependList = 1,
    pxr_UsdListPosition_UsdListPositionFrontOfAppendList = 2,
    pxr_UsdListPosition_UsdListPositionBackOfAppendList = 3,
};
typedef unsigned int pxr_UsdListPosition;
/** \enum UsdLoadPolicy

Controls UsdStage::Load() and UsdPrim::Load() behavior regarding whether or
not descendant prims are loaded. */
enum pxrInternal_v0_21__pxrReserved____UsdLoadPolicy_e {
    pxr_UsdLoadPolicy_UsdLoadWithDescendants = 0,
    pxr_UsdLoadPolicy_UsdLoadWithoutDescendants = 1,
};
typedef unsigned int pxr_UsdLoadPolicy;

#ifdef __cplusplus
}
#endif
