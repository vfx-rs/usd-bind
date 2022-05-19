#include "pxr/usd/pcp/pcp_prim_index_private.h"

#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/pcp/pcp_arc_private.h"
#include "pxr/usd/pcp/pcp_cache_private.h"
#include "pxr/usd/pcp/pcp_node_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_map_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_ctor(
    pxr_PcpPrimIndex_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPrimIndex());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_copy(
    pxr_PcpPrimIndex_t * * this_
    , pxr_PcpPrimIndex_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPrimIndex(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex__assign(
    pxr_PcpPrimIndex_t * this_
    , pxr_PcpPrimIndex_t * * return_
    , pxr_PcpPrimIndex_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_Swap(
    pxr_PcpPrimIndex_t * this_
    , pxr_PcpPrimIndex_t * rhs)
{
    try {
        (to_cpp(this_)) -> Swap(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_swap(
    pxr_PcpPrimIndex_t * this_
    , pxr_PcpPrimIndex_t * rhs)
{
    try {
        (to_cpp(this_)) -> swap(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_IsValid(
    pxr_PcpPrimIndex_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsValid();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetRootNode(
    pxr_PcpPrimIndex_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetPath(
    pxr_PcpPrimIndex_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_HasSpecs(
    pxr_PcpPrimIndex_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_HasAnyPayloads(
    pxr_PcpPrimIndex_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasAnyPayloads();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_IsUsd(
    pxr_PcpPrimIndex_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsUsd();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_IsInstanceable(
    pxr_PcpPrimIndex_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsInstanceable();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetNodeProvidingSpec(
    pxr_PcpPrimIndex_t const * this_
    , pxr_PcpNodeRef_t * * return_
    , pxr_SdfLayerHandle_t const * layer
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetNodeProvidingSpec(to_cpp_ref(layer), to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_PrintStatistics(
    pxr_PcpPrimIndex_t const * this_)
{
    try {
        (to_cpp(this_)) -> PrintStatistics();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_DumpToString(
    pxr_PcpPrimIndex_t const * this_
    , std_string_t * * return_
    , _Bool includeInheritOriginInfo
    , _Bool includeMaps)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> DumpToString(includeInheritOriginInfo, includeMaps));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_DumpToDotGraph(
    pxr_PcpPrimIndex_t const * this_
    , std_string_t const * filename
    , _Bool includeInheritOriginInfo
    , _Bool includeMaps)
{
    try {
        (to_cpp(this_)) -> DumpToDotGraph(to_cpp_ref(filename), includeInheritOriginInfo, includeMaps);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_ComposeAuthoredVariantSelections(
    pxr_PcpPrimIndex_t const * this_
    , std_map_string_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> ComposeAuthoredVariantSelections());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetSelectionAppliedForVariantSet(
    pxr_PcpPrimIndex_t const * this_
    , std_string_t * * return_
    , std_string_t const * variantSet)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSelectionAppliedForVariantSet(to_cpp_ref(variantSet)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndex_dtor(
    pxr_PcpPrimIndex_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_ctor(
    pxr_PcpPrimIndexInputs_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_IsEquivalentTo(
    pxr_PcpPrimIndexInputs_t const * this_
    , _Bool * return_
    , pxr_PcpPrimIndexInputs_t const * params)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsEquivalentTo(to_cpp_ref(params));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_Cache(
    pxr_PcpPrimIndexInputs_t * this_
    , pxr_PcpPrimIndexInputs_t * * return_
    , pxr_PcpCache_t * cache_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Cache(to_cpp(cache_)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_Cull(
    pxr_PcpPrimIndexInputs_t * this_
    , pxr_PcpPrimIndexInputs_t * * return_
    , _Bool doCulling)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Cull(doCulling));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_USD(
    pxr_PcpPrimIndexInputs_t * this_
    , pxr_PcpPrimIndexInputs_t * * return_
    , _Bool doUSD)
{
    try {
        to_c(return_, (to_cpp(this_)) -> USD(doUSD));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_FileFormatTarget(
    pxr_PcpPrimIndexInputs_t * this_
    , pxr_PcpPrimIndexInputs_t * * return_
    , std_string_t const * target)
{
    try {
        to_c(return_, (to_cpp(this_)) -> FileFormatTarget(to_cpp_ref(target)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_copy(
    pxr_PcpPrimIndexInputs_t * * this_
    , pxr_PcpPrimIndexInputs_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs__assign(
    pxr_PcpPrimIndexInputs_t * this_
    , pxr_PcpPrimIndexInputs_t * * return_
    , pxr_PcpPrimIndexInputs_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_dtor(
    pxr_PcpPrimIndexInputs_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_swap(
    pxr_PcpPrimIndexOutputs_t * this_
    , pxr_PcpPrimIndexOutputs_t * r)
{
    try {
        (to_cpp(this_)) -> swap(to_cpp_ref(r));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_copy(
    pxr_PcpPrimIndexOutputs_t * * this_
    , pxr_PcpPrimIndexOutputs_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__assign(
    pxr_PcpPrimIndexOutputs_t * this_
    , pxr_PcpPrimIndexOutputs_t * * return_
    , pxr_PcpPrimIndexOutputs_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_dtor(
    pxr_PcpPrimIndexOutputs_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___swap(
    pxr_PcpPrimIndex_t * l
    , pxr_PcpPrimIndex_t * r)
{
    try {
        pxrInternal_v0_21__pxrReserved__::swap(to_cpp_ref(l), to_cpp_ref(r));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___swap_1(
    pxr_PcpPrimIndexOutputs_t * l
    , pxr_PcpPrimIndexOutputs_t * r)
{
    try {
        pxrInternal_v0_21__pxrReserved__::swap(to_cpp_ref(l), to_cpp_ref(r));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpIsNewDefaultStandinBehaviorEnabled(
    _Bool * return_)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::PcpIsNewDefaultStandinBehaviorEnabled();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___Pcp_RescanForSpecs(
    pxr_PcpPrimIndex_t * index
    , _Bool usd)
{
    try {
        pxrInternal_v0_21__pxrReserved__::Pcp_RescanForSpecs(to_cpp(index), usd);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___Pcp_NeedToRecomputeDueToAssetPathChange(
    _Bool * return_
    , pxr_PcpPrimIndex_t const * index)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::Pcp_NeedToRecomputeDueToAssetPathChange(to_cpp_ref(index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

