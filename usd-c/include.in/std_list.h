#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_20__pxrReserved____TfError_t_s pxrInternal_v0_20__pxrReserved____TfError_t;
typedef pxrInternal_v0_20__pxrReserved____TfError_t pxr_TfError_t;

typedef struct pxr__TfDiagnosticMgr__ErrorList_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxr__TfDiagnosticMgr__ErrorList_t;
typedef pxr__TfDiagnosticMgr__ErrorList_t std_TfDiagnosticMgr_ErrorList_t;

typedef struct pxr__TfDiagnosticMgr__ErrorIterator_t_s {
    char data[%SIZEpxr::TfDiagnosticMgr::ErrorIterator%];
} USD_CPPMM_ALIGN(%ALIGNpxr::TfDiagnosticMgr::ErrorIterator%) pxr__TfDiagnosticMgr__ErrorIterator_t;
typedef pxr__TfDiagnosticMgr__ErrorIterator_t std_TfDiagnosticMgr_ErrorIterator_t;


USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorList_ctor(
    std_TfDiagnosticMgr_ErrorList_t * * this_);
#define std_TfDiagnosticMgr_ErrorList_ctor pxr__TfDiagnosticMgr__ErrorList_ctor


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorIterator_sizeof();
#define std_TfDiagnosticMgr_ErrorIterator_sizeof pxr__TfDiagnosticMgr__ErrorIterator_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorIterator_alignof();
#define std_TfDiagnosticMgr_ErrorIterator_alignof pxr__TfDiagnosticMgr__ErrorIterator_alignof


USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorIterator_op_inc(
    std_TfDiagnosticMgr_ErrorIterator_t * this_
    , std_TfDiagnosticMgr_ErrorIterator_t * * return_);
#define std_TfDiagnosticMgr_ErrorIterator_op_inc pxr__TfDiagnosticMgr__ErrorIterator_op_inc


USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorIterator_ctor(
    std_TfDiagnosticMgr_ErrorIterator_t * this_
    , std_TfDiagnosticMgr_ErrorIterator_t const * iterator);
#define std_TfDiagnosticMgr_ErrorIterator_ctor pxr__TfDiagnosticMgr__ErrorIterator_ctor


USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorIterator_deref(
    std_TfDiagnosticMgr_ErrorIterator_t const * this_
    , pxr_TfError_t const * * return_);
#define std_TfDiagnosticMgr_ErrorIterator_deref pxr__TfDiagnosticMgr__ErrorIterator_deref


USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorIterator_deref_mut(
    std_TfDiagnosticMgr_ErrorIterator_t * this_
    , pxr_TfError_t * * return_);
#define std_TfDiagnosticMgr_ErrorIterator_deref_mut pxr__TfDiagnosticMgr__ErrorIterator_deref_mut


USD_CPPMM_API unsigned int op_equals_std__list_pxr__TfError___iterator(
    _Bool * return_
    , std_TfDiagnosticMgr_ErrorIterator_t const * lhs
    , std_TfDiagnosticMgr_ErrorIterator_t const * rhs);

#ifdef __cplusplus
}
#endif
