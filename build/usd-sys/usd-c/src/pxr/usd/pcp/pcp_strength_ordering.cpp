#include "pxr/usd/pcp/pcp_strength_ordering_private.h"

#include "pxr/usd/pcp/pcp_node_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpCompareSiblingNodeStrength(
    int * return_
    , pxr_PcpNodeRef_t const * a
    , pxr_PcpNodeRef_t const * b)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::PcpCompareSiblingNodeStrength(to_cpp_ref(a), to_cpp_ref(b));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpCompareNodeStrength(
    int * return_
    , pxr_PcpNodeRef_t const * a
    , pxr_PcpNodeRef_t const * b)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::PcpCompareNodeStrength(to_cpp_ref(a), to_cpp_ref(b));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

