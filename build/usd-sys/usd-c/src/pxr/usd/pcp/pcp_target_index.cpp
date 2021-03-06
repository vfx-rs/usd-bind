#include "pxr/usd/pcp/pcp_target_index_private.h"

#include "pxr/usd/pcp/pcp_property_index_private.h"
#include "pxr/usd/pcp/pcp_site_private.h"
#include "pxr/usd/sdf/sdf_types_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpTargetIndex_copy(
    pxr_PcpTargetIndex_t * * this_
    , pxr_PcpTargetIndex_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpTargetIndex(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpTargetIndex__assign(
    pxr_PcpTargetIndex_t * this_
    , pxr_PcpTargetIndex_t * * return_
    , pxr_PcpTargetIndex_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpTargetIndex_dtor(
    pxr_PcpTargetIndex_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

