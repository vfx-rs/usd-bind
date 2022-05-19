#include "pxr/usd/pcp/pcp_layer_prefetch_request_private.h"

#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest_copy(
    pxr_PcpLayerPrefetchRequest_t * * this_
    , pxr_PcpLayerPrefetchRequest_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest__assign(
    pxr_PcpLayerPrefetchRequest_t * this_
    , pxr_PcpLayerPrefetchRequest_t * * return_
    , pxr_PcpLayerPrefetchRequest_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest_dtor(
    pxr_PcpLayerPrefetchRequest_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

