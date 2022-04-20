#include "pxr/usd/sdf/sdf_payload_private.h"

#include "pxr/usd/sdf/sdf_layer_offset_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_ctor(
    pxr_SdfPayload_t * * this_
    , std_string_t const * assetPath
    , pxr_SdfPath_t const * primPath
    , pxr_SdfLayerOffset_t const * layerOffset)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPayload(to_cpp_ref(assetPath), to_cpp_ref(primPath), to_cpp_ref(layerOffset)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_GetAssetPath(
    pxr_SdfPayload_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetAssetPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_SetAssetPath(
    pxr_SdfPayload_t * this_
    , std_string_t const * assetPath)
{
    try {
        (to_cpp(this_)) -> SetAssetPath(to_cpp_ref(assetPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_GetPrimPath(
    pxr_SdfPayload_t const * this_
    , pxr_SdfPath_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetPrimPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_SetPrimPath(
    pxr_SdfPayload_t * this_
    , pxr_SdfPath_t const * primPath)
{
    try {
        (to_cpp(this_)) -> SetPrimPath(to_cpp_ref(primPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_GetLayerOffset(
    pxr_SdfPayload_t const * this_
    , pxr_SdfLayerOffset_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetLayerOffset());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_SetLayerOffset(
    pxr_SdfPayload_t * this_
    , pxr_SdfLayerOffset_t const * layerOffset)
{
    try {
        (to_cpp(this_)) -> SetLayerOffset(to_cpp_ref(layerOffset));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload__eq(
    pxr_SdfPayload_t const * this_
    , _Bool * return_
    , pxr_SdfPayload_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_operator_(
    pxr_SdfPayload_t const * this_
    , _Bool * return_
    , pxr_SdfPayload_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_copy(
    pxr_SdfPayload_t * * this_
    , pxr_SdfPayload_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPayload(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload__assign(
    pxr_SdfPayload_t * this_
    , pxr_SdfPayload_t * * return_
    , pxr_SdfPayload_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayload_dtor(
    pxr_SdfPayload_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

