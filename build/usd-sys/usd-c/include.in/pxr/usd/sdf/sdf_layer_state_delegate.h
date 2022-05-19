#pragma once
#include "usd-api-export.h"

#include <pxr/usd/sdf/sdf_types.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

/** \class SdfLayerStateDelegateBase

Maintains authoring state information for an associated layer. 

For example, layers rely on a state delegate to determine whether or
not they have been dirtied by authoring operations.

A layer's state delegate is invoked on every authoring operation on
that layer. The delegate may keep track of these operations for various
purposes. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_t pxr_SdfLayerStateDelegateBase_t;

/** \class SdfSimpleLayerStateDelegate
A layer state delegate that simply records whether any changes have
been made to a layer. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_t pxr_SdfSimpleLayerStateDelegate_t;


/** Return the current reference count of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_GetCurrentCount(
    pxr_SdfLayerStateDelegateBase_t const * this_
    , size_t * return_);
#define pxr_SdfLayerStateDelegateBase_GetCurrentCount pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_GetCurrentCount


/** Return true if only one \c TfRefPtr points to this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_IsUnique(
    pxr_SdfLayerStateDelegateBase_t const * this_
    , _Bool * return_);
#define pxr_SdfLayerStateDelegateBase_IsUnique pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_IsUnique


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetShouldInvokeUniqueChangedListener(
    pxr_SdfLayerStateDelegateBase_t * this_
    , _Bool shouldCall);
#define pxr_SdfLayerStateDelegateBase_SetShouldInvokeUniqueChangedListener pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetShouldInvokeUniqueChangedListener


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_EnableNotification2(
    pxr_SdfLayerStateDelegateBase_t const * this_);
#define pxr_SdfLayerStateDelegateBase_EnableNotification2 pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_EnableNotification2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_GetUniqueIdentifier(
    pxr_SdfLayerStateDelegateBase_t const * this_
    , void const * * return_);
#define pxr_SdfLayerStateDelegateBase_GetUniqueIdentifier pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_GetUniqueIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_dtor(
    pxr_SdfLayerStateDelegateBase_t * this_);
#define pxr_SdfLayerStateDelegateBase_dtor pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_IsDirty(
    pxr_SdfLayerStateDelegateBase_t * this_
    , _Bool * return_);
#define pxr_SdfLayerStateDelegateBase_IsDirty pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_IsDirty


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetField(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * field
    , pxr_VtValue_t const * value
    , pxr_VtValue_t const * oldValue);
#define pxr_SdfLayerStateDelegateBase_SetField pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetFieldDictValueByKey(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * field
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t const * value
    , pxr_VtValue_t const * oldValue);
#define pxr_SdfLayerStateDelegateBase_SetFieldDictValueByKey pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetFieldDictValueByKey


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetTimeSample(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * path
    , double time
    , pxr_VtValue_t const * value);
#define pxr_SdfLayerStateDelegateBase_SetTimeSample pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetTimeSample


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_CreateSpec(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * path
    , pxr_SdfSpecType specType
    , _Bool inert);
#define pxr_SdfLayerStateDelegateBase_CreateSpec pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_CreateSpec


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_DeleteSpec(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * path
    , _Bool inert);
#define pxr_SdfLayerStateDelegateBase_DeleteSpec pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_DeleteSpec


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_MoveSpec(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath);
#define pxr_SdfLayerStateDelegateBase_MoveSpec pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_MoveSpec


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PushChild(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_TfToken_t const * value);
#define pxr_SdfLayerStateDelegateBase_PushChild pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PushChild


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PushChild_1(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_SdfPath_t const * value);
#define pxr_SdfLayerStateDelegateBase_PushChild_1 pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PushChild_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PopChild(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_TfToken_t const * oldValue);
#define pxr_SdfLayerStateDelegateBase_PopChild pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PopChild


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PopChild_1(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_SdfPath_t const * oldValue);
#define pxr_SdfLayerStateDelegateBase_PopChild_1 pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PopChild_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase__assign(
    pxr_SdfLayerStateDelegateBase_t * this_
    , pxr_SdfLayerStateDelegateBase_t * * return_
    , pxr_SdfLayerStateDelegateBase_t const * rhs);
#define pxr_SdfLayerStateDelegateBase__assign pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase__assign


/** Return the current reference count of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_GetCurrentCount(
    pxr_SdfSimpleLayerStateDelegate_t const * this_
    , size_t * return_);
#define pxr_SdfSimpleLayerStateDelegate_GetCurrentCount pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_GetCurrentCount


/** Return true if only one \c TfRefPtr points to this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_IsUnique(
    pxr_SdfSimpleLayerStateDelegate_t const * this_
    , _Bool * return_);
#define pxr_SdfSimpleLayerStateDelegate_IsUnique pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_IsUnique


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetShouldInvokeUniqueChangedListener(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , _Bool shouldCall);
#define pxr_SdfSimpleLayerStateDelegate_SetShouldInvokeUniqueChangedListener pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetShouldInvokeUniqueChangedListener


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_EnableNotification2(
    pxr_SdfSimpleLayerStateDelegate_t const * this_);
#define pxr_SdfSimpleLayerStateDelegate_EnableNotification2 pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_EnableNotification2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_GetUniqueIdentifier(
    pxr_SdfSimpleLayerStateDelegate_t const * this_
    , void const * * return_);
#define pxr_SdfSimpleLayerStateDelegate_GetUniqueIdentifier pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_GetUniqueIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_IsDirty(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , _Bool * return_);
#define pxr_SdfSimpleLayerStateDelegate_IsDirty pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_IsDirty


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetField(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * field
    , pxr_VtValue_t const * value
    , pxr_VtValue_t const * oldValue);
#define pxr_SdfSimpleLayerStateDelegate_SetField pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetFieldDictValueByKey(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * field
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t const * value
    , pxr_VtValue_t const * oldValue);
#define pxr_SdfSimpleLayerStateDelegate_SetFieldDictValueByKey pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetFieldDictValueByKey


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetTimeSample(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * path
    , double time
    , pxr_VtValue_t const * value);
#define pxr_SdfSimpleLayerStateDelegate_SetTimeSample pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetTimeSample


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_CreateSpec(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * path
    , pxr_SdfSpecType specType
    , _Bool inert);
#define pxr_SdfSimpleLayerStateDelegate_CreateSpec pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_CreateSpec


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_DeleteSpec(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * path
    , _Bool inert);
#define pxr_SdfSimpleLayerStateDelegate_DeleteSpec pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_DeleteSpec


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_MoveSpec(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath);
#define pxr_SdfSimpleLayerStateDelegate_MoveSpec pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_MoveSpec


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PushChild(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_TfToken_t const * value);
#define pxr_SdfSimpleLayerStateDelegate_PushChild pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PushChild


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PushChild_1(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_SdfPath_t const * value);
#define pxr_SdfSimpleLayerStateDelegate_PushChild_1 pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PushChild_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PopChild(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_TfToken_t const * oldValue);
#define pxr_SdfSimpleLayerStateDelegate_PopChild pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PopChild


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PopChild_1(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * field
    , pxr_SdfPath_t const * oldValue);
#define pxr_SdfSimpleLayerStateDelegate_PopChild_1 pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PopChild_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_copy(
    pxr_SdfSimpleLayerStateDelegate_t * * this_
    , pxr_SdfSimpleLayerStateDelegate_t const * rhs);
#define pxr_SdfSimpleLayerStateDelegate_copy pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate__assign(
    pxr_SdfSimpleLayerStateDelegate_t * this_
    , pxr_SdfSimpleLayerStateDelegate_t * * return_
    , pxr_SdfSimpleLayerStateDelegate_t const * rhs);
#define pxr_SdfSimpleLayerStateDelegate__assign pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_dtor(
    pxr_SdfSimpleLayerStateDelegate_t * this_);
#define pxr_SdfSimpleLayerStateDelegate_dtor pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_dtor


#ifdef __cplusplus
}
#endif
