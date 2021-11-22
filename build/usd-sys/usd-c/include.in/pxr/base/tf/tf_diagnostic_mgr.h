#pragma once
#include "usd-api-export.h"

#include <std_list.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \class TfDiagnosticMgr
\ingroup group_tf_Diagnostic

Singleton class through which all errors and diagnostics pass. */
typedef struct pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_t;
typedef pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_t pxr_TfDiagnosticMgr_t;


/** Return the singleton instance. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_GetInstance(
    pxr_TfDiagnosticMgr_t * * return_);
#define pxr_TfDiagnosticMgr_GetInstance pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_GetInstance


/** Set whether errors, warnings and status messages should be printed out
to the terminal. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_SetQuiet(
    pxr_TfDiagnosticMgr_t * this_
    , _Bool quiet);
#define pxr_TfDiagnosticMgr_SetQuiet pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_SetQuiet


/** Return an iterator to the beginning of this thread's error list. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_GetErrorBegin(
    pxr_TfDiagnosticMgr_t * this_
    , std_TfDiagnosticMgr_ErrorIterator_t * return_);
#define pxr_TfDiagnosticMgr_GetErrorBegin pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_GetErrorBegin


/** Return an iterator to the end of this thread's error list. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_GetErrorEnd(
    pxr_TfDiagnosticMgr_t * this_
    , std_TfDiagnosticMgr_ErrorIterator_t * return_);
#define pxr_TfDiagnosticMgr_GetErrorEnd pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_GetErrorEnd


/** Remove error specified by iterator \p i.
\deprecated Use TfErrorMark instead. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_EraseError(
    pxr_TfDiagnosticMgr_t * this_
    , std_TfDiagnosticMgr_ErrorIterator_t * return_
    , std_TfDiagnosticMgr_ErrorIterator_t i);
#define pxr_TfDiagnosticMgr_EraseError pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_EraseError


/** Remove all the errors in [first, last) from this thread's error
stream. This should generally not be invoked directly. Use TfErrorMark
instead. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_EraseRange(
    pxr_TfDiagnosticMgr_t * this_
    , std_TfDiagnosticMgr_ErrorIterator_t * return_
    , std_TfDiagnosticMgr_ErrorIterator_t first
    , std_TfDiagnosticMgr_ErrorIterator_t last);
#define pxr_TfDiagnosticMgr_EraseRange pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_EraseRange


#ifdef __cplusplus
}
#endif
