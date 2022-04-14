#include "pxr/usd/sdf/sdf_path_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_ctor(
    pxr_SdfPathAncestorsRange_t * * this_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_GetPath(
    pxr_SdfPathAncestorsRange_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_begin(
    pxr_SdfPathAncestorsRange_t const * this_
    , pxr_SdfPathAncestorsRange_iterator_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_end(
    pxr_SdfPathAncestorsRange_t const * this_
    , pxr_SdfPathAncestorsRange_iterator_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_ctor(
    pxr_SdfPathAncestorsRange_iterator_t * * this_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_ctor_1(
    pxr_SdfPathAncestorsRange_iterator_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__op_inc(
    pxr_SdfPathAncestorsRange_iterator_t * this_
    , pxr_SdfPathAncestorsRange_iterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__op_mul(
    pxr_SdfPathAncestorsRange_iterator_t const * this_
    , pxr_SdfPath_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator*());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_operator__(
    pxr_SdfPathAncestorsRange_iterator_t const * this_
    , pxr_SdfPath_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator->());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__eq(
    pxr_SdfPathAncestorsRange_iterator_t const * this_
    , _Bool * return_
    , pxr_SdfPathAncestorsRange_iterator_t const * o)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(o));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__ne(
    pxr_SdfPathAncestorsRange_iterator_t const * this_
    , _Bool * return_
    , pxr_SdfPathAncestorsRange_iterator_t const * o)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(o));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_copy(
    pxr_SdfPathAncestorsRange_iterator_t * * this_
    , pxr_SdfPathAncestorsRange_iterator_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_dtor(
    pxr_SdfPathAncestorsRange_iterator_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_EmptyPath(
    pxr_SdfPath_t const * * return_)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::SdfPath::EmptyPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AbsoluteRootPath(
    pxr_SdfPath_t const * * return_)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::SdfPath::AbsoluteRootPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ReflexiveRelativePath(
    pxr_SdfPath_t const * * return_)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::SdfPath::ReflexiveRelativePath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ctor(
    pxr_SdfPath_t * * this_)
{
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPath());
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_from_string(
    pxr_SdfPath_t * * this_
    , std_string_t const * path)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetPathElementCount(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsolutePath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsoluteRootPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsoluteRootOrPrimPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsRootPrimPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsPropertyPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimPropertyPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsNamespacedPropertyPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimVariantSelectionPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimOrPrimVariantSelectionPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ContainsPrimVariantSelection(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ContainsPropertyElements(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ContainsTargetPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsRelationalAttributePath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsTargetPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsMapperPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsMapperArgPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsExpressionPath(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsEmpty(
    pxr_SdfPath_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> IsEmpty();
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetToken(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetText(
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_copy(
    pxr_SdfPath_t * * this_
    , pxr_SdfPath_t const * rhs)
{
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPath(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_dtor(
    pxr_SdfPath_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

