#include "pxr/usd/pcp/pcp_arc_private.h"

#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpArc_ctor(
    pxr_PcpArc_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpArc());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline int &PxpArc_get_siblingNumAtOrigin_impl(::pxrInternal_v0_21__pxrReserved__::PcpArc &self)  {
    return self.siblingNumAtOrigin;
}


USD_CPPMM_API unsigned int PxpArc_get_siblingNumAtOrigin(
    int * * return_
    , pxr_PcpArc_t * self)
{
    try {
        *(return_) = &(PxpArc_get_siblingNumAtOrigin_impl(to_cpp_ref(self)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline int &PxpArc_get_namespaceDepth_impl(::pxrInternal_v0_21__pxrReserved__::PcpArc &self)  {
    return self.namespaceDepth;
}


USD_CPPMM_API unsigned int PxpArc_get_namespaceDepth(
    int * * return_
    , pxr_PcpArc_t * self)
{
    try {
        *(return_) = &(PxpArc_get_namespaceDepth_impl(to_cpp_ref(self)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

