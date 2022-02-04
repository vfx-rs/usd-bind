#include "pxr/usd/pcp/pcp_compose_site_private.h"

#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_copy(
    pxr_PcpSourceArcInfo_t * * this_
    , pxr_PcpSourceArcInfo_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo__assign(
    pxr_PcpSourceArcInfo_t * this_
    , pxr_PcpSourceArcInfo_t * * return_
    , pxr_PcpSourceArcInfo_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_dtor(
    pxr_PcpSourceArcInfo_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

