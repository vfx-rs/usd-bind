#include "pxr/usd/pcp/pcp_compose_site_private.h"

#include "pxr/usd/pcp/pcp_node_private.h"
#include "std_map_private.h"
#include "std_string_private.h"
#include "std_vector_private.h"
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteHasPrimSpecs(
    _Bool * return_
    , pxr_PcpNodeRef_t const * node)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::PcpComposeSiteHasPrimSpecs(to_cpp_ref(node));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteHasSymmetry(
    _Bool * return_
    , pxr_PcpNodeRef_t const * node)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::PcpComposeSiteHasSymmetry(to_cpp_ref(node));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteInherits(
    pxr_PcpNodeRef_t const * node
    , std_SdfPathVector_t * result)
{
    try {
        pxrInternal_v0_21__pxrReserved__::PcpComposeSiteInherits(to_cpp_ref(node), to_cpp(result));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteSpecializes(
    pxr_PcpNodeRef_t const * node
    , std_SdfPathVector_t * result)
{
    try {
        pxrInternal_v0_21__pxrReserved__::PcpComposeSiteSpecializes(to_cpp_ref(node), to_cpp(result));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteVariantSets(
    pxr_PcpNodeRef_t const * node
    , std_vector_string_t * result)
{
    try {
        pxrInternal_v0_21__pxrReserved__::PcpComposeSiteVariantSets(to_cpp_ref(node), to_cpp(result));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteVariantSelection(
    _Bool * return_
    , pxr_PcpNodeRef_t const * node
    , std_string_t const * vsetName
    , std_string_t * result)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::PcpComposeSiteVariantSelection(to_cpp_ref(node), to_cpp_ref(vsetName), to_cpp(result));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteVariantSelections(
    pxr_PcpNodeRef_t const * node
    , std_map_string_string_t * result)
{
    try {
        pxrInternal_v0_21__pxrReserved__::PcpComposeSiteVariantSelections(to_cpp_ref(node), to_cpp(result));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

