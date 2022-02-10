#include "pxr/usd/sdf/sdf_layer_offset_private.h"

#include "pxr/usd/sdf/sdf_time_code_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_ctor(
    pxr_SdfLayerOffset_t * * this_
    , double offset
    , double scale)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfLayerOffset(offset, scale));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetOffset(
    pxr_SdfLayerOffset_t const * this_
    , double * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetOffset();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetScale(
    pxr_SdfLayerOffset_t const * this_
    , double * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetScale();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_SetOffset(
    pxr_SdfLayerOffset_t * this_
    , double newOffset)
{
    try {
        (to_cpp(this_)) -> SetOffset(newOffset);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_SetScale(
    pxr_SdfLayerOffset_t * this_
    , double newScale)
{
    try {
        (to_cpp(this_)) -> SetScale(newScale);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_IsIdentity(
    pxr_SdfLayerOffset_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsIdentity();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_IsValid(
    pxr_SdfLayerOffset_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetInverse(
    pxr_SdfLayerOffset_t const * this_
    , pxr_SdfLayerOffset_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetInverse());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetHash(
    pxr_SdfLayerOffset_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset__eq(
    pxr_SdfLayerOffset_t const * this_
    , _Bool * return_
    , pxr_SdfLayerOffset_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_operator_(
    pxr_SdfLayerOffset_t const * this_
    , _Bool * return_
    , pxr_SdfLayerOffset_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset__op_mul(
    pxr_SdfLayerOffset_t const * this_
    , pxr_SdfLayerOffset_t * * return_
    , pxr_SdfLayerOffset_t const * rhs)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset__op_mul_1(
    pxr_SdfLayerOffset_t const * this_
    , double * return_
    , double rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator*(rhs);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset__op_mul_2(
    pxr_SdfLayerOffset_t const * this_
    , pxr_SdfTimeCode_t * return_
    , pxr_SdfTimeCode_t const * rhs)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset__Hash__op_call(
    pxr_SdfLayerOffset_Hash_t const * this_
    , size_t * return_
    , pxr_SdfLayerOffset_t const * offset)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(offset));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

