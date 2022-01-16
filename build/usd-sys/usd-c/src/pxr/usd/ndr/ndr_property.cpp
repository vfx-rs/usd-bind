#include "pxr/usd/ndr/ndr_property_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "std_string_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_dtor(
    pxr_NdrProperty_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_GetName(
    pxr_NdrProperty_t const * this_
    , pxr_TfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_GetType(
    pxr_NdrProperty_t const * this_
    , pxr_TfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetType());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_GetDefaultValue(
    pxr_NdrProperty_t const * this_
    , pxr_VtValue_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetDefaultValue());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_IsOutput(
    pxr_NdrProperty_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsOutput();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_IsArray(
    pxr_NdrProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_IsDynamicArray(
    pxr_NdrProperty_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsDynamicArray();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_GetArraySize(
    pxr_NdrProperty_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetArraySize();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_GetInfoString(
    pxr_NdrProperty_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetInfoString());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_IsConnectable(
    pxr_NdrProperty_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsConnectable();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_CanConnectTo(
    pxr_NdrProperty_t const * this_
    , _Bool * return_
    , pxr_NdrProperty_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> CanConnectTo(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_GetDefaultValueAsSdfType(
    pxr_NdrProperty_t const * this_
    , pxr_VtValue_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetDefaultValueAsSdfType());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

