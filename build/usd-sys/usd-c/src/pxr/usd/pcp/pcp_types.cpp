#include "pxr/usd/pcp/pcp_types_private.h"

#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Pcp_SdSiteRef__eq(
    pxr_Pcp_SdSiteRef_t const * this_
    , _Bool * return_
    , pxr_Pcp_SdSiteRef_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Pcp_SdSiteRef_operator_(
    pxr_Pcp_SdSiteRef_t const * this_
    , _Bool * return_
    , pxr_Pcp_SdSiteRef_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Pcp_CompressedSdSite_ctor(
    pxr_Pcp_CompressedSdSite_t * * this_
    , size_t nodeIndex_
    , size_t layerIndex_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite(nodeIndex_, layerIndex_));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpIsInheritArc(
    _Bool * return_
    , pxr_PcpArcType arcType)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::PcpIsInheritArc(pxr_PcpArcType_to_cpp_ref(&(arcType)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpIsSpecializeArc(
    _Bool * return_
    , pxr_PcpArcType arcType)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::PcpIsSpecializeArc(pxr_PcpArcType_to_cpp_ref(&(arcType)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpIsClassBasedArc(
    _Bool * return_
    , pxr_PcpArcType arcType)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::PcpIsClassBasedArc(pxr_PcpArcType_to_cpp_ref(&(arcType)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

