#include "pxr/usd/pcp/pcp_arc_private.h"

#include "pxr/usd/pcp/pcp_map_expression_private.h"
#include "pxr/usd/pcp/pcp_node_private.h"
#include "pxr/usd/pcp/pcp_types_private.h"
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

inline ::pxrInternal_v0_21__pxrReserved__::PcpArcType &PxpArc_get_type_impl(::pxrInternal_v0_21__pxrReserved__::PcpArc &self)  {
    return self.type;
}


USD_CPPMM_API unsigned int PxpArc_get_type(
    pxr_PcpArcType * * return_
    , pxr_PcpArc_t * self)
{
    try {
        to_c(return_, PxpArc_get_type_impl(to_cpp_ref(self)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline ::pxrInternal_v0_21__pxrReserved__::PcpNodeRef &PxpArc_get_parent_impl(::pxrInternal_v0_21__pxrReserved__::PcpArc &self)  {
    return self.parent;
}


USD_CPPMM_API unsigned int PxpArc_get_parent(
    pxr_PcpNodeRef_t * * return_
    , pxr_PcpArc_t * self)
{
    try {
        to_c(return_, PxpArc_get_parent_impl(to_cpp_ref(self)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline ::pxrInternal_v0_21__pxrReserved__::PcpMapExpression &PxpArc_get_mapToParent_impl(::pxrInternal_v0_21__pxrReserved__::PcpArc &self)  {
    return self.mapToParent;
}


USD_CPPMM_API unsigned int PxpArc_get_mapToParent(
    pxr_PcpMapExpression_t * * return_
    , pxr_PcpArc_t * self)
{
    try {
        to_c(return_, PxpArc_get_mapToParent_impl(to_cpp_ref(self)));
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

