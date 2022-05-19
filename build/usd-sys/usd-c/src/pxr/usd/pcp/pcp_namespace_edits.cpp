#include "pxr/usd/pcp/pcp_namespace_edits_private.h"

#include "pxr/usd/pcp/pcp_cache_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_Swap(
    pxr_PcpNamespaceEdits_t * this_
    , pxr_PcpNamespaceEdits_t * rhs)
{
    try {
        (to_cpp(this_)) -> Swap(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_copy(
    pxr_PcpNamespaceEdits_t * * this_
    , pxr_PcpNamespaceEdits_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__assign(
    pxr_PcpNamespaceEdits_t * this_
    , pxr_PcpNamespaceEdits_t * * return_
    , pxr_PcpNamespaceEdits_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_dtor(
    pxr_PcpNamespaceEdits_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__LayerStackSite_copy(
    pxr_PcpNamespaceEdits_LayerStackSite_t * * this_
    , pxr_PcpNamespaceEdits_LayerStackSite_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__LayerStackSite__assign(
    pxr_PcpNamespaceEdits_LayerStackSite_t * this_
    , pxr_PcpNamespaceEdits_LayerStackSite_t * * return_
    , pxr_PcpNamespaceEdits_LayerStackSite_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

