#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

/** \enum SdfListOpType

Enum for specifying one of the list editing operation types. */
enum pxrInternal_v0_21__pxrReserved____SdfListOpType_e {
    pxr_SdfListOpType_SdfListOpTypeExplicit = 0,
    pxr_SdfListOpType_SdfListOpTypeAdded = 1,
    pxr_SdfListOpType_SdfListOpTypeDeleted = 2,
    pxr_SdfListOpType_SdfListOpTypeOrdered = 3,
    pxr_SdfListOpType_SdfListOpTypePrepended = 4,
    pxr_SdfListOpType_SdfListOpTypeAppended = 5,
};
typedef unsigned int pxr_SdfListOpType;

#ifdef __cplusplus
}
#endif
