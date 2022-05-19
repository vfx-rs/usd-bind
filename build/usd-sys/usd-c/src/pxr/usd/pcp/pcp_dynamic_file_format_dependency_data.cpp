#include "pxr/usd/pcp/pcp_dynamic_file_format_dependency_data_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_ctor(
    pxr_PcpDynamicFileFormatDependencyData_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_copy(
    pxr_PcpDynamicFileFormatDependencyData_t * * this_
    , pxr_PcpDynamicFileFormatDependencyData_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData__assign(
    pxr_PcpDynamicFileFormatDependencyData_t * this_
    , pxr_PcpDynamicFileFormatDependencyData_t * * return_
    , pxr_PcpDynamicFileFormatDependencyData_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_Swap(
    pxr_PcpDynamicFileFormatDependencyData_t * this_
    , pxr_PcpDynamicFileFormatDependencyData_t * rhs)
{
    try {
        (to_cpp(this_)) -> Swap(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_swap(
    pxr_PcpDynamicFileFormatDependencyData_t * this_
    , pxr_PcpDynamicFileFormatDependencyData_t * rhs)
{
    try {
        (to_cpp(this_)) -> swap(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_IsEmpty(
    pxr_PcpDynamicFileFormatDependencyData_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsEmpty();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_CanFieldChangeAffectFileFormatArguments(
    pxr_PcpDynamicFileFormatDependencyData_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * fieldName
    , pxr_VtValue_t const * oldValue
    , pxr_VtValue_t const * newValue)
{
    try {
        *(return_) = (to_cpp(this_)) -> CanFieldChangeAffectFileFormatArguments(to_cpp_ref(fieldName), to_cpp_ref(oldValue), to_cpp_ref(newValue));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_dtor(
    pxr_PcpDynamicFileFormatDependencyData_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

