#include "pxr/usd/sdf/sdf_value_type_name_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_type_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_ctor(
    pxr_SdfTupleDimensions_t * this_)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::SdfTupleDimensions();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_new_1d(
    pxr_SdfTupleDimensions_t * this_
    , size_t m)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::SdfTupleDimensions(m);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_new_2d(
    pxr_SdfTupleDimensions_t * this_
    , size_t m
    , size_t n)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::SdfTupleDimensions(m, n);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTupleDimensions__eq(
    pxr_SdfTupleDimensions_t const * this_
    , _Bool * return_
    , pxr_SdfTupleDimensions_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_sizeof()
{
        return sizeof(pxrInternal_v0_21__pxrReserved__::SdfValueTypeName);
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_alignof()
{
        return alignof(pxrInternal_v0_21__pxrReserved__::SdfValueTypeName);
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_ctor(
    pxr_SdfValueTypeName_t * this_)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::SdfValueTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetAsToken(
    pxr_SdfValueTypeName_t const * this_
    , pxr_TfToken_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetAsToken());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetType(
    pxr_SdfValueTypeName_t const * this_
    , pxr_TfType_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetType());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetCPPTypeName(
    pxr_SdfValueTypeName_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetCPPTypeName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetRole(
    pxr_SdfValueTypeName_t const * this_
    , pxr_TfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetRole());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetScalarType(
    pxr_SdfValueTypeName_t const * this_
    , pxr_SdfValueTypeName_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetScalarType());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetArrayType(
    pxr_SdfValueTypeName_t const * this_
    , pxr_SdfValueTypeName_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetArrayType());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_IsScalar(
    pxr_SdfValueTypeName_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsScalar();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_IsArray(
    pxr_SdfValueTypeName_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsArray();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetDimensions(
    pxr_SdfValueTypeName_t const * this_
    , pxr_SdfTupleDimensions_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetDimensions());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName__eq(
    pxr_SdfValueTypeName_t const * this_
    , _Bool * return_
    , pxr_SdfValueTypeName_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_eq_token(
    pxr_SdfValueTypeName_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetHash(
    pxr_SdfValueTypeName_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_operatorbool(
    pxr_SdfValueTypeName_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator bool();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

