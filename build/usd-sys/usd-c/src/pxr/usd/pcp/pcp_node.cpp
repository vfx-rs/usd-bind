#include "pxr/usd/pcp/pcp_node_private.h"

#include "pxr/usd/pcp/pcp_arc_private.h"
#include "pxr/usd/pcp/pcp_map_expression_private.h"
#include "pxr/usd/pcp/pcp_site_private.h"
#include "pxr/usd/pcp/pcp_types_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ctor(
    pxr_PcpNodeRef_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeRef());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef__eq(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_
    , pxr_PcpNodeRef_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_operator_(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_
    , pxr_PcpNodeRef_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetUniqueIdentifier(
    pxr_PcpNodeRef_t const * this_
    , void * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetUniqueIdentifier();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetArcType(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpArcType * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetArcType());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetParentNode(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpNodeRef_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetParentNode());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetOriginNode(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpNodeRef_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetOriginNode());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetOriginRootNode(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpNodeRef_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetOriginRootNode());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetRootNode(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpNodeRef_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetRootNode());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetMapToParent(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpMapExpression_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetMapToParent());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetMapToRoot(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpMapExpression_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetMapToRoot());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetSiblingNumAtOrigin(
    pxr_PcpNodeRef_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetSiblingNumAtOrigin();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetNamespaceDepth(
    pxr_PcpNodeRef_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetNamespaceDepth();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetDepthBelowIntroduction(
    pxr_PcpNodeRef_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetDepthBelowIntroduction();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetPathAtIntroduction(
    pxr_PcpNodeRef_t const * this_
    , pxr_SdfPath_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPathAtIntroduction());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetIntroPath(
    pxr_PcpNodeRef_t const * this_
    , pxr_SdfPath_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetIntroPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetSite(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpLayerStackSite_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSite());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetPath(
    pxr_PcpNodeRef_t const * this_
    , pxr_SdfPath_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsRootNode(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsRootNode();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsDueToAncestor(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsDueToAncestor();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetHasSymmetry(
    pxr_PcpNodeRef_t * this_
    , _Bool hasSymmetry)
{
    try {
        (to_cpp(this_)) -> SetHasSymmetry(hasSymmetry);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_HasSymmetry(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasSymmetry();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetInert(
    pxr_PcpNodeRef_t * this_
    , _Bool inert)
{
    try {
        (to_cpp(this_)) -> SetInert(inert);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsInert(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsInert();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetCulled(
    pxr_PcpNodeRef_t * this_
    , _Bool culled)
{
    try {
        (to_cpp(this_)) -> SetCulled(culled);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsCulled(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsCulled();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetRestricted(
    pxr_PcpNodeRef_t * this_
    , _Bool restricted)
{
    try {
        (to_cpp(this_)) -> SetRestricted(restricted);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsRestricted(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsRestricted();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_CanContributeSpecs(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> CanContributeSpecs();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetHasSpecs(
    pxr_PcpNodeRef_t * this_
    , _Bool hasSpecs)
{
    try {
        (to_cpp(this_)) -> SetHasSpecs(hasSpecs);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_HasSpecs(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasSpecs();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetCompressedSdSite(
    pxr_PcpNodeRef_t const * this_
    , pxr_Pcp_CompressedSdSite_t * * return_
    , size_t layerIndex)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetCompressedSdSite(layerIndex));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_copy(
    pxr_PcpNodeRef_t * * this_
    , pxr_PcpNodeRef_t const * rhs)
{
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeRef(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_dtor(
    pxr_PcpNodeRef_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef__assign(
    pxr_PcpNodeRef_t * this_
    , pxr_PcpNodeRef_t * * return_
    , pxr_PcpNodeRef_t const * rhs)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef__Hash__op_call(
    pxr_PcpNodeRef_Hash_t const * this_
    , size_t * return_
    , pxr_PcpNodeRef_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator__op_inc(
    pxr_PcpNodeRef_ChildrenIterator_t * this_
    , pxr_PcpNodeRef_ChildrenIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_ctor(
    pxr_PcpNodeRef_ChildrenIterator_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_ctor_1(
    pxr_PcpNodeRef_ChildrenIterator_t * * this_
    , pxr_PcpNodeRef_t const * node
    , _Bool end)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator(to_cpp_ref(node), end));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator__assign(
    pxr_PcpNodeRef_ChildrenIterator_t * this_
    , pxr_PcpNodeRef_ChildrenIterator_t * * return_
    , pxr_PcpNodeRef_ChildrenIterator_t const * rhs)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_dtor(
    pxr_PcpNodeRef_ChildrenIterator_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_copy(
    pxr_PcpNodeRef_ChildrenIterator_t * * this_
    , pxr_PcpNodeRef_ChildrenIterator_t const * rhs)
{
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator__op_inc(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * this_
    , pxr_PcpNodeRef_ChildrenReverseIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_ctor(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_ctor_1(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * * this_
    , pxr_PcpNodeRef_ChildrenIterator_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_ctor_2(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * * this_
    , pxr_PcpNodeRef_t const * node
    , _Bool end)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator(to_cpp_ref(node), end));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_copy(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * * this_
    , pxr_PcpNodeRef_ChildrenReverseIterator_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_dtor(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value(
    size_t * return_
    , pxr_PcpNodeRef_t const * x)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::hash_value(to_cpp_ref(x));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpNode_GetNonVariantPathElementCount(
    int * return_
    , pxr_SdfPath_t const * path)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::PcpNode_GetNonVariantPathElementCount(to_cpp_ref(path));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

