#include "pxr/usd/sdf/sdf_time_code_private.h"

#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode_sizeof()
{
        return sizeof(pxrInternal_v0_20__pxrReserved__::SdfTimeCode);
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode_alignof()
{
        return alignof(pxrInternal_v0_20__pxrReserved__::SdfTimeCode);
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode_ctor(
    pxr_SdfTimeCode_t * this_
    , double time)
{
        new (this_) pxrInternal_v0_20__pxrReserved__::SdfTimeCode(time);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode__eq(
    pxr_SdfTimeCode_t const * this_
    , _Bool * return_
    , pxr_SdfTimeCode_t const * rhs)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode__ne(
    pxr_SdfTimeCode_t const * this_
    , _Bool * return_
    , pxr_SdfTimeCode_t const * rhs)
{
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(rhs));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode_op_lt(
    pxr_SdfTimeCode_t const * this_
    , _Bool * return_
    , pxr_SdfTimeCode_t const * rhs)
{
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode_op_gt(
    pxr_SdfTimeCode_t const * this_
    , _Bool * return_
    , pxr_SdfTimeCode_t const * rhs)
{
        *(return_) = (to_cpp(this_)) -> operator>(to_cpp_ref(rhs));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode_op_le(
    pxr_SdfTimeCode_t const * this_
    , _Bool * return_
    , pxr_SdfTimeCode_t const * rhs)
{
        *(return_) = (to_cpp(this_)) -> operator<=(to_cpp_ref(rhs));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode_op_ge(
    pxr_SdfTimeCode_t const * this_
    , _Bool * return_
    , pxr_SdfTimeCode_t const * rhs)
{
        *(return_) = (to_cpp(this_)) -> operator>=(to_cpp_ref(rhs));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode__op_mul(
    pxr_SdfTimeCode_t const * this_
    , pxr_SdfTimeCode_t * return_
    , pxr_SdfTimeCode_t const * rhs)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode__op_div(
    pxr_SdfTimeCode_t const * this_
    , pxr_SdfTimeCode_t * return_
    , pxr_SdfTimeCode_t const * rhs)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode__op_add(
    pxr_SdfTimeCode_t const * this_
    , pxr_SdfTimeCode_t * return_
    , pxr_SdfTimeCode_t const * rhs)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode__op_sub(
    pxr_SdfTimeCode_t const * this_
    , pxr_SdfTimeCode_t * return_
    , pxr_SdfTimeCode_t const * rhs)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode_GetHash(
    pxr_SdfTimeCode_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode_GetValue(
    pxr_SdfTimeCode_t const * this_
    , double * return_)
{
        *(return_) = (to_cpp(this_)) -> GetValue();
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode_copy(
    pxr_SdfTimeCode_t * this_
    , pxr_SdfTimeCode_t const * rhs)
{
    try {
        new (this_) pxrInternal_v0_20__pxrReserved__::SdfTimeCode(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfTimeCode_dtor(
    pxr_SdfTimeCode_t * this_)
{
        (to_cpp(this_)) -> pxrInternal_v0_20__pxrReserved__::SdfTimeCode::~SdfTimeCode();
        return 0;
}

