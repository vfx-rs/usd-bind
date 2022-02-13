#include "pxr/usd/sdf/sdf_abstract_data_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetCurrentCount(
    pxr_SdfAbstractData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_IsUnique(
    pxr_SdfAbstractData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_SetShouldInvokeUniqueChangedListener(
    pxr_SdfAbstractData_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_EnableNotification2(
    pxr_SdfAbstractData_t const * this_)
{
    try {
        (to_cpp(this_)) -> EnableNotification2();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetUniqueIdentifier(
    pxr_SdfAbstractData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_dtor(
    pxr_SdfAbstractData_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_StreamsData(
    pxr_SdfAbstractData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_IsEmpty(
    pxr_SdfAbstractData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_HasSpec(
    pxr_SdfAbstractData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_EraseSpec(
    pxr_SdfAbstractData_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_MoveSpec(
    pxr_SdfAbstractData_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_VisitSpecs(
    pxr_SdfAbstractData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_Has(
    pxr_SdfAbstractData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_SdfAbstractDataValue_t * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> Has(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_Has_1(
    pxr_SdfAbstractData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_Get(
    pxr_SdfAbstractData_t const * this_
    , pxr_VtValue_t * * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> Get(to_cpp_ref(path), to_cpp_ref(fieldName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_Set(
    pxr_SdfAbstractData_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_Set_1(
    pxr_SdfAbstractData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_SdfAbstractDataConstValue_t const * value)
{
    try {
        (to_cpp(this_)) -> Set(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_Erase(
    pxr_SdfAbstractData_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_HasDictKey(
    pxr_SdfAbstractData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath
    , pxr_SdfAbstractDataValue_t * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasDictKey(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp_ref(keyPath), to_cpp(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_HasDictKey_1(
    pxr_SdfAbstractData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetDictValueByKey(
    pxr_SdfAbstractData_t const * this_
    , pxr_VtValue_t * * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetDictValueByKey(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp_ref(keyPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_SetDictValueByKey(
    pxr_SdfAbstractData_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_SetDictValueByKey_1(
    pxr_SdfAbstractData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath
    , pxr_SdfAbstractDataConstValue_t const * value)
{
    try {
        (to_cpp(this_)) -> SetDictValueByKey(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp_ref(keyPath), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_EraseDictValueByKey(
    pxr_SdfAbstractData_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetBracketingTimeSamples(
    pxr_SdfAbstractData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetNumTimeSamplesForPath(
    pxr_SdfAbstractData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetBracketingTimeSamplesForPath(
    pxr_SdfAbstractData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_QueryTimeSample(
    pxr_SdfAbstractData_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_QueryTimeSample_1(
    pxr_SdfAbstractData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , double time
    , pxr_SdfAbstractDataValue_t * optionalValue)
{
    try {
        *(return_) = (to_cpp(this_)) -> QueryTimeSample(to_cpp_ref(path), time, to_cpp(optionalValue));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_SetTimeSample(
    pxr_SdfAbstractData_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_EraseTimeSample(
    pxr_SdfAbstractData_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData__assign(
    pxr_SdfAbstractData_t * this_
    , pxr_SdfAbstractData_t * * return_
    , pxr_SdfAbstractData_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_dtor(
    pxr_SdfAbstractDataSpecVisitor_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_VisitSpec(
    pxr_SdfAbstractDataSpecVisitor_t * this_
    , _Bool * return_
    , pxr_SdfAbstractData_t const * data
    , pxr_SdfPath_t const * path)
{
    try {
        *(return_) = (to_cpp(this_)) -> VisitSpec(to_cpp_ref(data), to_cpp_ref(path));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_Done(
    pxr_SdfAbstractDataSpecVisitor_t * this_
    , pxr_SdfAbstractData_t const * data)
{
    try {
        (to_cpp(this_)) -> Done(to_cpp_ref(data));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor__assign(
    pxr_SdfAbstractDataSpecVisitor_t * this_
    , pxr_SdfAbstractDataSpecVisitor_t * * return_
    , pxr_SdfAbstractDataSpecVisitor_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractDataConstValue_GetValue(
    pxr_SdfAbstractDataConstValue_t const * this_
    , _Bool * return_
    , pxr_VtValue_t * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetValue(to_cpp(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractDataConstValue_IsEqual(
    pxr_SdfAbstractDataConstValue_t const * this_
    , _Bool * return_
    , pxr_VtValue_t const * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsEqual(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractDataConstValue_dtor(
    pxr_SdfAbstractDataConstValue_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractDataValue_StoreValue(
    pxr_SdfAbstractDataValue_t * this_
    , _Bool * return_
    , pxr_VtValue_t const * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> StoreValue(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractDataValue_dtor(
    pxr_SdfAbstractDataValue_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

