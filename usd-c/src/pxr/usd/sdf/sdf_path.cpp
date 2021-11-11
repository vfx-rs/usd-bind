#include "pxr/usd/sdf/sdf_path_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_EmptyPath(
    pxr_SdfPath_t const * * return_)
{
    try {
        to_c(return_, pxrInternal_v0_20__pxrReserved__::SdfPath::EmptyPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_AbsoluteRootPath(
    pxr_SdfPath_t const * * return_)
{
    try {
        to_c(return_, pxrInternal_v0_20__pxrReserved__::SdfPath::AbsoluteRootPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_ReflexiveRelativePath(
    pxr_SdfPath_t const * * return_)
{
    try {
        to_c(return_, pxrInternal_v0_20__pxrReserved__::SdfPath::ReflexiveRelativePath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_ctor(
    pxr_SdfPath_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::SdfPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_from_string(
    pxr_SdfPath_t * * this_
    , std_string_t const * path)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::SdfPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_GetPathElementCount(
    pxr_SdfPath_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetPathElementCount();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsAbsolutePath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsAbsolutePath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsAbsoluteRootPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsAbsoluteRootPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsPrimPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsAbsoluteRootOrPrimPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsAbsoluteRootOrPrimPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsRootPrimPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsRootPrimPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsPropertyPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsPropertyPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimPropertyPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsPrimPropertyPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsNamespacedPropertyPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsNamespacedPropertyPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimVariantSelectionPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsPrimVariantSelectionPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsPrimOrPrimVariantSelectionPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsPrimOrPrimVariantSelectionPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_ContainsPrimVariantSelection(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ContainsPrimVariantSelection();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_ContainsPropertyElements(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ContainsPropertyElements();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_ContainsTargetPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ContainsTargetPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsRelationalAttributePath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsRelationalAttributePath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsTargetPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsTargetPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsMapperPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsMapperPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsMapperArgPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsMapperArgPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsExpressionPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsExpressionPath();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_IsEmpty(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> IsEmpty();
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_GetToken(
    pxr_SdfPath_t const * this_
    , pxr_TfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetToken());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_GetText(
    pxr_SdfPath_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetText();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_copy(
    pxr_SdfPath_t * * this_
    , pxr_SdfPath_t const * rhs)
{
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::SdfPath(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfPath_dtor(
    pxr_SdfPath_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

