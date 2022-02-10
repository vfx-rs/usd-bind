#include "pxr/usd/sdf/sdf_reference_private.h"

#include "pxr/base/vt/vt_dictionary_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_layer_offset_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_ctor(
    pxr_SdfReference_t * * this_
    , std_string_t const * assetPath
    , pxr_SdfPath_t const * primPath
    , pxr_SdfLayerOffset_t const * layerOffset
    , pxr_VtDictionary_t const * customData)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfReference(to_cpp_ref(assetPath), to_cpp_ref(primPath), to_cpp_ref(layerOffset), to_cpp_ref(customData)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_GetAssetPath(
    pxr_SdfReference_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_SetAssetPath(
    pxr_SdfReference_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_GetPrimPath(
    pxr_SdfReference_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_SetPrimPath(
    pxr_SdfReference_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_GetLayerOffset(
    pxr_SdfReference_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_SetLayerOffset(
    pxr_SdfReference_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_GetCustomData(
    pxr_SdfReference_t const * this_
    , pxr_VtDictionary_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetCustomData());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_SetCustomData(
    pxr_SdfReference_t * this_
    , pxr_VtDictionary_t const * customData)
{
    try {
        (to_cpp(this_)) -> SetCustomData(to_cpp_ref(customData));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_SetCustomData_1(
    pxr_SdfReference_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value)
{
    try {
        (to_cpp(this_)) -> SetCustomData(to_cpp_ref(name), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_SwapCustomData(
    pxr_SdfReference_t * this_
    , pxr_VtDictionary_t * customData)
{
    try {
        (to_cpp(this_)) -> SwapCustomData(to_cpp_ref(customData));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_IsInternal(
    pxr_SdfReference_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsInternal();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference__eq(
    pxr_SdfReference_t const * this_
    , _Bool * return_
    , pxr_SdfReference_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_operator_(
    pxr_SdfReference_t const * this_
    , _Bool * return_
    , pxr_SdfReference_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_copy(
    pxr_SdfReference_t * * this_
    , pxr_SdfReference_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfReference(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference__assign(
    pxr_SdfReference_t * this_
    , pxr_SdfReference_t * * return_
    , pxr_SdfReference_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference_dtor(
    pxr_SdfReference_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference__IdentityEqual__op_call(
    pxr_SdfReference_IdentityEqual_t const * this_
    , _Bool * return_
    , pxr_SdfReference_t const * lhs
    , pxr_SdfReference_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(lhs), to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReference__IdentityLessThan__op_call(
    pxr_SdfReference_IdentityLessThan_t const * this_
    , _Bool * return_
    , pxr_SdfReference_t const * lhs
    , pxr_SdfReference_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(lhs), to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

