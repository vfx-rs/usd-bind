#include "pxr/usd/sdf/sdf_path_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "std_string_private.h"
#include "std_vector_private.h"
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetString(
    pxr_SdfPath_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetString());
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetPrefixes(
    pxr_SdfPath_t const * this_
    , std_SdfPathVector_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPrefixes());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetPrefixes_1(
    pxr_SdfPath_t const * this_
    , std_SdfPathVector_t * prefixes)
{
    try {
        (to_cpp(this_)) -> GetPrefixes(to_cpp(prefixes));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetName(
    pxr_SdfPath_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetNameToken(
    pxr_SdfPath_t const * this_
    , pxr_TfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetNameToken());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetElementString(
    pxr_SdfPath_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetElementString());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetElementToken(
    pxr_SdfPath_t const * this_
    , pxr_TfToken_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetElementToken());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ReplaceName(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_TfToken_t const * newName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> ReplaceName(to_cpp_ref(newName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetTargetPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetTargetPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetAllTargetPathsRecursively(
    pxr_SdfPath_t const * this_
    , std_SdfPathVector_t * result)
{
    try {
        (to_cpp(this_)) -> GetAllTargetPathsRecursively(to_cpp(result));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_HasPrefix(
    pxr_SdfPath_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * prefix)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasPrefix(to_cpp_ref(prefix));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetParentPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetParentPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetPrimPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPrimPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetPrimOrPrimVariantSelectionPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPrimOrPrimVariantSelectionPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetAbsoluteRootOrPrimPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetAbsoluteRootOrPrimPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_StripAllVariantSelections(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> StripAllVariantSelections());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * newSuffix)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> AppendPath(to_cpp_ref(newSuffix)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendChild(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_TfToken_t const * childName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> AppendChild(to_cpp_ref(childName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendProperty(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_TfToken_t const * propName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> AppendProperty(to_cpp_ref(propName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendVariantSelection(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , std_string_t const * variantSet
    , std_string_t const * variant)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> AppendVariantSelection(to_cpp_ref(variantSet), to_cpp_ref(variant)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendTarget(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * targetPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> AppendTarget(to_cpp_ref(targetPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendRelationalAttribute(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_TfToken_t const * attrName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> AppendRelationalAttribute(to_cpp_ref(attrName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ReplaceTargetPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * newTargetPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> ReplaceTargetPath(to_cpp_ref(newTargetPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendMapper(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * targetPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> AppendMapper(to_cpp_ref(targetPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendMapperArg(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_TfToken_t const * argName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> AppendMapperArg(to_cpp_ref(argName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendExpression(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> AppendExpression());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendElementString(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , std_string_t const * element)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> AppendElementString(to_cpp_ref(element)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendElementToken(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_TfToken_t const * elementTok)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> AppendElementToken(to_cpp_ref(elementTok)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ReplacePrefix(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * oldPrefix
    , pxr_SdfPath_t const * newPrefix
    , _Bool fixTargetPaths)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> ReplacePrefix(to_cpp_ref(oldPrefix), to_cpp_ref(newPrefix), fixTargetPaths));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetCommonPrefix(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetCommonPrefix(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_MakeAbsolutePath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * anchor)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> MakeAbsolutePath(to_cpp_ref(anchor)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_MakeRelativePath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * anchor)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> MakeRelativePath(to_cpp_ref(anchor)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfPath::IsValidIdentifier(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsValidNamespacedIdentifier(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfPath::IsValidNamespacedIdentifier(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_TokenizeIdentifier(
    std_vector_string_t * * return_
    , std_string_t const * name)
{
    try {
        new (*(return_)) std::vector<std::string>(std::move(pxrInternal_v0_21__pxrReserved__::SdfPath::TokenizeIdentifier(to_cpp_ref(name))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_JoinIdentifier(
    std_string_t * * return_
    , std_vector_string_t const * names)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfPath::JoinIdentifier(to_cpp_ref(names)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_JoinIdentifier_1(
    std_string_t * * return_
    , std_string_t const * lhs
    , std_string_t const * rhs)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfPath::JoinIdentifier(to_cpp_ref(lhs), to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_JoinIdentifier_2(
    std_string_t * * return_
    , pxr_TfToken_t const * lhs
    , pxr_TfToken_t const * rhs)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfPath::JoinIdentifier(to_cpp_ref(lhs), to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_StripNamespace(
    std_string_t * * return_
    , std_string_t const * name)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfPath::StripNamespace(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_StripNamespace_1(
    pxr_TfToken_t * return_
    , pxr_TfToken_t const * name)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfPath::StripNamespace(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsValidPathString(
    _Bool * return_
    , std_string_t const * pathString
    , std_string_t * errMsg)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfPath::IsValidPathString(to_cpp_ref(pathString), to_cpp(errMsg));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath__eq(
    pxr_SdfPath_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_operator_(
    pxr_SdfPath_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetHash(
    pxr_SdfPath_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetHash();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetConciseRelativePaths(
    std_SdfPathVector_t * * return_
    , std_SdfPathVector_t const * paths)
{
    try {
        new (*(return_)) std::vector<pxr::SdfPath>(std::move(pxrInternal_v0_21__pxrReserved__::SdfPath::GetConciseRelativePaths(to_cpp_ref(paths))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_RemoveDescendentPaths(
    std_SdfPathVector_t * paths)
{
    try {
        pxrInternal_v0_21__pxrReserved__::SdfPath::RemoveDescendentPaths(to_cpp(paths));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_RemoveAncestorPaths(
    std_SdfPathVector_t * paths)
{
    try {
        pxrInternal_v0_21__pxrReserved__::SdfPath::RemoveAncestorPaths(to_cpp(paths));
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_op_assign(
    pxr_SdfPath_t * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_dtor(
    pxr_SdfPath_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath__Hash__op_call(
    pxr_SdfPath_Hash_t const * this_
    , size_t * return_
    , pxr_SdfPath_t const * path)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(path));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath__Hash_ctor(
    pxr_SdfPath_Hash_t * * this_)
{
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPath::Hash());
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath__Hash_copy(
    pxr_SdfPath_Hash_t * * this_
    , pxr_SdfPath_Hash_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPath::Hash(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath__Hash_dtor(
    pxr_SdfPath_Hash_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath__FastLessThan__op_call(
    pxr_SdfPath_FastLessThan_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * a
    , pxr_SdfPath_t const * b)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(a), to_cpp_ref(b));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

