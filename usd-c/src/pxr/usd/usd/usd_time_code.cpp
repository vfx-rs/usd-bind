#include "pxr/usd/usd/usd_time_code_private.h"

#include "pxr/usd/sdf/sdf_time_code_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdTimeCode_sizeof()
{
        return sizeof(pxrInternal_v0_20__pxrReserved__::UsdTimeCode);
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdTimeCode_alignof()
{
        return alignof(pxrInternal_v0_20__pxrReserved__::UsdTimeCode);
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdTimeCode_ctor(
    pxr_UsdTimeCode_t * this_
    , double t)
{
        new (this_) pxrInternal_v0_20__pxrReserved__::UsdTimeCode(t);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdTimeCode_from_SdfTimeCode(
    pxr_UsdTimeCode_t * this_
    , pxr_SdfTimeCode_t const * timeCode)
{
        new (this_) pxrInternal_v0_20__pxrReserved__::UsdTimeCode(to_cpp_ref(timeCode));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdTimeCode_EarliestTime(
    pxr_UsdTimeCode_t * return_)
{
    try {
        to_c_copy(return_, pxrInternal_v0_20__pxrReserved__::UsdTimeCode::EarliestTime());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdTimeCode_Default(
    pxr_UsdTimeCode_t * return_)
{
    try {
        to_c_copy(return_, pxrInternal_v0_20__pxrReserved__::UsdTimeCode::Default());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdTimeCode_SafeStep(
    double * return_
    , double maxValue
    , double maxCompression)
{
    try {
        *(return_) = pxrInternal_v0_20__pxrReserved__::UsdTimeCode::SafeStep(maxValue, maxCompression);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdTimeCode_IsEarliestTime(
    pxr_UsdTimeCode_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsEarliestTime();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdTimeCode_IsDefault(
    pxr_UsdTimeCode_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsDefault();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdTimeCode_IsNumeric(
    pxr_UsdTimeCode_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsNumeric();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdTimeCode_GetValue(
    pxr_UsdTimeCode_t const * this_
    , double * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetValue();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdTimeCode_copy(
    pxr_UsdTimeCode_t * this_
    , pxr_UsdTimeCode_t const * rhs)
{
    try {
        new (this_) pxrInternal_v0_20__pxrReserved__::UsdTimeCode(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdTimeCode_dtor(
    pxr_UsdTimeCode_t * this_)
{
        (to_cpp(this_)) -> pxrInternal_v0_20__pxrReserved__::UsdTimeCode::~UsdTimeCode();
        return 0;
}

