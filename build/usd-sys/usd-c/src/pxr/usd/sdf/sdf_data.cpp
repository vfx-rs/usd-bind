#include "pxr/usd/sdf/sdf_data_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_abstract_data_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_GetCurrentCount(
    pxr_SdfData_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetCurrentCount();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_IsUnique(
    pxr_SdfData_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsUnique();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_SetShouldInvokeUniqueChangedListener(
    pxr_SdfData_t * this_
    , _Bool shouldCall)
{
    try {
        (to_cpp(this_)) -> SetShouldInvokeUniqueChangedListener(shouldCall);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_EnableNotification2(
    pxr_SdfData_t const * this_)
{
    try {
        (to_cpp(this_)) -> EnableNotification2();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_GetUniqueIdentifier(
    pxr_SdfData_t const * this_
    , void const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetUniqueIdentifier();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_StreamsData(
    pxr_SdfData_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> StreamsData();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_IsEmpty(
    pxr_SdfData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_HasSpec(
    pxr_SdfData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasSpec(to_cpp_ref(path));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_EraseSpec(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path)
{
    try {
        (to_cpp(this_)) -> EraseSpec(to_cpp_ref(path));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_MoveSpec(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath)
{
    try {
        (to_cpp(this_)) -> MoveSpec(to_cpp_ref(oldPath), to_cpp_ref(newPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_VisitSpecs(
    pxr_SdfData_t const * this_
    , pxr_SdfAbstractDataSpecVisitor_t * visitor)
{
    try {
        (to_cpp(this_)) -> VisitSpecs(to_cpp(visitor));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_Has(
    pxr_SdfData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_VtValue_t * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> Has(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_Set(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_VtValue_t const * value)
{
    try {
        (to_cpp(this_)) -> Set(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_Erase(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName)
{
    try {
        (to_cpp(this_)) -> Erase(to_cpp_ref(path), to_cpp_ref(fieldName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_HasDictKey(
    pxr_SdfData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasDictKey(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp_ref(keyPath), to_cpp(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_SetDictValueByKey(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t const * value)
{
    try {
        (to_cpp(this_)) -> SetDictValueByKey(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp_ref(keyPath), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_EraseDictValueByKey(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath)
{
    try {
        (to_cpp(this_)) -> EraseDictValueByKey(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp_ref(keyPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_GetBracketingTimeSamples(
    pxr_SdfData_t const * this_
    , _Bool * return_
    , double time
    , double * tLower
    , double * tUpper)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetBracketingTimeSamples(time, tLower, tUpper);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_GetNumTimeSamplesForPath(
    pxr_SdfData_t const * this_
    , size_t * return_
    , pxr_SdfPath_t const * path)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetNumTimeSamplesForPath(to_cpp_ref(path));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_GetBracketingTimeSamplesForPath(
    pxr_SdfData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , double time
    , double * tLower
    , double * tUpper)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetBracketingTimeSamplesForPath(to_cpp_ref(path), time, tLower, tUpper);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_QueryTimeSample(
    pxr_SdfData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , double time
    , pxr_VtValue_t * optionalValue)
{
    try {
        *(return_) = (to_cpp(this_)) -> QueryTimeSample(to_cpp_ref(path), time, to_cpp(optionalValue));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_SetTimeSample(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path
    , double time
    , pxr_VtValue_t const * value)
{
    try {
        (to_cpp(this_)) -> SetTimeSample(to_cpp_ref(path), time, to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_EraseTimeSample(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path
    , double time)
{
    try {
        (to_cpp(this_)) -> EraseTimeSample(to_cpp_ref(path), time);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_ctor(
    pxr_SdfData_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfData());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_dtor(
    pxr_SdfData_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_copy(
    pxr_SdfData_t * * this_
    , pxr_SdfData_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfData(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData__assign(
    pxr_SdfData_t * this_
    , pxr_SdfData_t * * return_
    , pxr_SdfData_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

