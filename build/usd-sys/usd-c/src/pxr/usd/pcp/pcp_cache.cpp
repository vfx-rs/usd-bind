#include "pxr/usd/pcp/pcp_cache_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_string_private.h"
#include "std_vector_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_dtor(
    pxr_PcpCache_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsUsd(
    pxr_PcpCache_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_GetFileFormatTarget(
    pxr_PcpCache_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetFileFormatTarget());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsPayloadIncluded(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsPayloadIncluded(to_cpp_ref(path));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_GetMutedLayers(
    pxr_PcpCache_t const * this_
    , std_vector_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetMutedLayers());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsLayerMuted(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , std_string_t const * layerIdentifier)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsLayerMuted(to_cpp_ref(layerIdentifier));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsLayerMuted_1(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , pxr_SdfLayerHandle_t const * anchorLayer
    , std_string_t const * layerIdentifier
    , std_string_t * canonicalMutedLayerIdentifier)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsLayerMuted(to_cpp_ref(anchorLayer), to_cpp_ref(layerIdentifier), to_cpp(canonicalMutedLayerIdentifier));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_GetUsedLayersRevision(
    pxr_PcpCache_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetUsedLayersRevision();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_CanHaveOpinionForSite(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * localPcpSitePath
    , pxr_SdfLayerHandle_t const * layer
    , pxr_SdfPath_t * allowedPathInLayer)
{
    try {
        *(return_) = (to_cpp(this_)) -> CanHaveOpinionForSite(to_cpp_ref(localPcpSitePath), to_cpp_ref(layer), to_cpp(allowedPathInLayer));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_GetInvalidSublayerIdentifiers(
    pxr_PcpCache_t const * this_
    , std_vector_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetInvalidSublayerIdentifiers());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsInvalidSublayerIdentifier(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , std_string_t const * identifier)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsInvalidSublayerIdentifier(to_cpp_ref(identifier));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsInvalidAssetPath(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , std_string_t const * resolvedAssetPath)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsInvalidAssetPath(to_cpp_ref(resolvedAssetPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_HasAnyDynamicFileFormatArgumentDependencies(
    pxr_PcpCache_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasAnyDynamicFileFormatArgumentDependencies();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_IsPossibleDynamicFileFormatArgumentField(
    pxr_PcpCache_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * field)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsPossibleDynamicFileFormatArgumentField(to_cpp_ref(field));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpCache_PrintStatistics(
    pxr_PcpCache_t const * this_)
{
    try {
        (to_cpp(this_)) -> PrintStatistics();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

