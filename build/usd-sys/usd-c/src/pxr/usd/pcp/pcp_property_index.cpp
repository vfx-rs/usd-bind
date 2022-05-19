#include "pxr/usd/pcp/pcp_property_index_private.h"

#include "pxr/usd/pcp/pcp_cache_private.h"
#include "pxr/usd/pcp/pcp_prim_index_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_ctor(
    pxr_PcpPropertyIndex_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_copy(
    pxr_PcpPropertyIndex_t * * this_
    , pxr_PcpPropertyIndex_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_Swap(
    pxr_PcpPropertyIndex_t * this_
    , pxr_PcpPropertyIndex_t * index)
{
    try {
        (to_cpp(this_)) -> Swap(to_cpp_ref(index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_IsEmpty(
    pxr_PcpPropertyIndex_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_GetNumLocalSpecs(
    pxr_PcpPropertyIndex_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetNumLocalSpecs();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_dtor(
    pxr_PcpPropertyIndex_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Pcp_PropertyInfo_ctor(
    pxr_Pcp_PropertyInfo_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Pcp_PropertyInfo__assign(
    pxr_Pcp_PropertyInfo_t * this_
    , pxr_Pcp_PropertyInfo_t * * return_
    , pxr_Pcp_PropertyInfo_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

