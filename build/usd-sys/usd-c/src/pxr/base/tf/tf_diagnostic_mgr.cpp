#include "pxr/base/tf/tf_diagnostic_mgr_private.h"

#include "std_list_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_GetInstance(
    pxr_TfDiagnosticMgr_t * * return_)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::TfDiagnosticMgr::GetInstance());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_SetQuiet(
    pxr_TfDiagnosticMgr_t * this_
    , _Bool quiet)
{
    try {
        (to_cpp(this_)) -> SetQuiet(quiet);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_GetErrorBegin(
    pxr_TfDiagnosticMgr_t * this_
    , std_TfDiagnosticMgr_ErrorIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetErrorBegin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_GetErrorEnd(
    pxr_TfDiagnosticMgr_t * this_
    , std_TfDiagnosticMgr_ErrorIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetErrorEnd());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_EraseError(
    pxr_TfDiagnosticMgr_t * this_
    , std_TfDiagnosticMgr_ErrorIterator_t * return_
    , std_TfDiagnosticMgr_ErrorIterator_t i)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> EraseError(to_cpp_ref(&(i))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_EraseRange(
    pxr_TfDiagnosticMgr_t * this_
    , std_TfDiagnosticMgr_ErrorIterator_t * return_
    , std_TfDiagnosticMgr_ErrorIterator_t first
    , std_TfDiagnosticMgr_ErrorIterator_t last)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> EraseRange(to_cpp_ref(&(first)), to_cpp_ref(&(last))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

