#include "pxr/usd/pcp/pcp_changes_private.h"

#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/pcp/pcp_cache_private.h"
#include "pxr/usd/pcp/pcp_site_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackChanges_ctor(
    pxr_PcpLayerStackChanges_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLifeboat_ctor(
    pxr_PcpLifeboat_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpLifeboat());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLifeboat_dtor(
    pxr_PcpLifeboat_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLifeboat_Swap(
    pxr_PcpLifeboat_t * this_
    , pxr_PcpLifeboat_t * other)
{
    try {
        (to_cpp(this_)) -> Swap(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_ctor(
    pxr_PcpChanges_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpChanges());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_dtor(
    pxr_PcpChanges_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidMaybeFixSublayer(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_SdfLayerHandle_t const * layer
    , std_string_t const * assetPath)
{
    try {
        (to_cpp(this_)) -> DidMaybeFixSublayer(to_cpp(cache), to_cpp_ref(layer), to_cpp_ref(assetPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidMaybeFixAsset(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_PcpSite_t const * site
    , pxr_SdfLayerHandle_t const * srcLayer
    , std_string_t const * assetPath)
{
    try {
        (to_cpp(this_)) -> DidMaybeFixAsset(to_cpp(cache), to_cpp_ref(site), to_cpp_ref(srcLayer), to_cpp_ref(assetPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidMuteLayer(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , std_string_t const * layerId)
{
    try {
        (to_cpp(this_)) -> DidMuteLayer(to_cpp(cache), to_cpp_ref(layerId));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidUnmuteLayer(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , std_string_t const * layerId)
{
    try {
        (to_cpp(this_)) -> DidUnmuteLayer(to_cpp(cache), to_cpp_ref(layerId));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeLayers(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache)
{
    try {
        (to_cpp(this_)) -> DidChangeLayers(to_cpp(cache));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeLayerOffsets(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache)
{
    try {
        (to_cpp(this_)) -> DidChangeLayerOffsets(to_cpp(cache));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeSignificantly(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_SdfPath_t const * path)
{
    try {
        (to_cpp(this_)) -> DidChangeSignificantly(to_cpp(cache), to_cpp_ref(path));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeSpecs(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_SdfPath_t const * path
    , pxr_SdfLayerHandle_t const * changedLayer
    , pxr_SdfPath_t const * changedPath)
{
    try {
        (to_cpp(this_)) -> DidChangeSpecs(to_cpp(cache), to_cpp_ref(path), to_cpp_ref(changedLayer), to_cpp_ref(changedPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeSpecStack(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_SdfPath_t const * path)
{
    try {
        (to_cpp(this_)) -> DidChangeSpecStack(to_cpp(cache), to_cpp_ref(path));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeRelocates(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_SdfPath_t const * path)
{
    try {
        (to_cpp(this_)) -> DidChangeRelocates(to_cpp(cache), to_cpp_ref(path));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangePaths(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath)
{
    try {
        (to_cpp(this_)) -> DidChangePaths(to_cpp(cache), to_cpp_ref(oldPath), to_cpp_ref(newPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidDestroyCache(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache)
{
    try {
        (to_cpp(this_)) -> DidDestroyCache(to_cpp(cache));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeAssetResolver(
    pxr_PcpChanges_t * this_
    , pxr_PcpCache_t const * cache)
{
    try {
        (to_cpp(this_)) -> DidChangeAssetResolver(to_cpp(cache));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_Swap(
    pxr_PcpChanges_t * this_
    , pxr_PcpChanges_t * other)
{
    try {
        (to_cpp(this_)) -> Swap(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_IsEmpty(
    pxr_PcpChanges_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsEmpty();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_GetLifeboat(
    pxr_PcpChanges_t const * this_
    , pxr_PcpLifeboat_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetLifeboat());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpChanges_Apply(
    pxr_PcpChanges_t const * this_)
{
    try {
        (to_cpp(this_)) -> Apply();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

