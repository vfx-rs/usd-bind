#include "pxr/base/tf/c-type_private.h"

#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfType_ctor(
    pxr_TfType_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::TfType());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfType_GetUnknownType(
    pxr_TfType_t const * * return_)
{
    try {
        to_c(return_, pxrInternal_v0_20__pxrReserved__::TfType::GetUnknownType());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfType_IsA(
    pxr_TfType_t const * this_
    , _Bool * return_
    , pxr_TfType_t queryType)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsA(to_cpp_ref(&(queryType)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfType_IsUnknown(
    pxr_TfType_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsUnknown();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfType_IsRoot(
    pxr_TfType_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsRoot();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfType_IsEnumType(
    pxr_TfType_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsEnumType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfType_IsPlainOldDataType(
    pxr_TfType_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsPlainOldDataType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfType_GetSizeof(
    pxr_TfType_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetSizeof();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfType_copy(
    pxr_TfType_t * * this_
    , pxr_TfType_t const * rhs)
{
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::TfType(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfType_dtor(
    pxr_TfType_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

