#include "pxr/usd/usd/usd_prim_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "pxr/usd/usd/usd_attribute_private.h"
#include "std_vector_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_IsValid(
    pxr_UsdPrim_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetStage(
    pxr_UsdPrim_t const * this_
    , pxr_UsdStagePtr_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetStage());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetPath(
    pxr_UsdPrim_t const * this_
    , pxr_SdfPath_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetPrimPath(
    pxr_UsdPrim_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetPrim(
    pxr_UsdPrim_t const * this_
    , pxr_UsdPrim_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPrim());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetName(
    pxr_UsdPrim_t const * this_
    , pxr_TfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_IsHidden(
    pxr_UsdPrim_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsHidden();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_SetHidden(
    pxr_UsdPrim_t const * this_
    , _Bool * return_
    , _Bool hidden)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetHidden(hidden);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_ClearHidden(
    pxr_UsdPrim_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ClearHidden();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_HasAuthoredHidden(
    pxr_UsdPrim_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasAuthoredHidden();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_ctor(
    pxr_UsdPrim_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::UsdPrim());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetTypeName(
    pxr_UsdPrim_t const * this_
    , pxr_TfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetTypeName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetAttributeAtPath(
    pxr_UsdPrim_t const * this_
    , pxr_UsdAttribute_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetAttributeAtPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetAttributes(
    pxr_UsdPrim_t const * this_
    , std_UsdAttributeVector_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetAttributes());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetAuthoredAttributes(
    pxr_UsdPrim_t const * this_
    , std_UsdAttributeVector_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetAuthoredAttributes());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_GetAttribute(
    pxr_UsdPrim_t const * this_
    , pxr_UsdAttribute_t * * return_
    , pxr_TfToken_t const * attrName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetAttribute(to_cpp_ref(attrName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_HasAttribute(
    pxr_UsdPrim_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * attrName)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasAttribute(to_cpp_ref(attrName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_copy(
    pxr_UsdPrim_t * * this_
    , pxr_UsdPrim_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::UsdPrim(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrim_dtor(
    pxr_UsdPrim_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

