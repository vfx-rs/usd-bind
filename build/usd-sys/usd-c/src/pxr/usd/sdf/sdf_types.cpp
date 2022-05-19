#include "pxr/usd/sdf/sdf_types_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_type_private.h"
#include "pxr/base/vt/vt_dictionary_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_value_type_name_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_ctor(
    pxr_SdfUnregisteredValue_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_ctor_1(
    pxr_SdfUnregisteredValue_t * * this_
    , std_string_t const * value)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_ctor_2(
    pxr_SdfUnregisteredValue_t * * this_
    , pxr_VtDictionary_t const * value)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_GetValue(
    pxr_SdfUnregisteredValue_t const * this_
    , pxr_VtValue_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetValue());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue__eq(
    pxr_SdfUnregisteredValue_t const * this_
    , _Bool * return_
    , pxr_SdfUnregisteredValue_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_copy(
    pxr_SdfUnregisteredValue_t * * this_
    , pxr_SdfUnregisteredValue_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue__assign(
    pxr_SdfUnregisteredValue_t * this_
    , pxr_SdfUnregisteredValue_t * * return_
    , pxr_SdfUnregisteredValue_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_dtor(
    pxr_SdfUnregisteredValue_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_dtor(
    pxr_Sdf_ValueTypeNamesType_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_GetSerializationName(
    pxr_Sdf_ValueTypeNamesType_t const * this_
    , pxr_TfToken_t * return_
    , pxr_SdfValueTypeName_t const * rhs)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSerializationName(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_GetSerializationName_1(
    pxr_Sdf_ValueTypeNamesType_t const * this_
    , pxr_TfToken_t * return_
    , pxr_VtValue_t const * rhs)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSerializationName(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_GetSerializationName_2(
    pxr_Sdf_ValueTypeNamesType_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * rhs)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSerializationName(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueBlock__eq(
    pxr_SdfValueBlock_t const * this_
    , _Bool * return_
    , pxr_SdfValueBlock_t const * block)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(block));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueBlock__ne(
    pxr_SdfValueBlock_t const * this_
    , _Bool * return_
    , pxr_SdfValueBlock_t const * block)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(block));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_ctor(
    pxr_SdfHumanReadableValue_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_ctor_1(
    pxr_SdfHumanReadableValue_t * * this_
    , std_string_t const * text)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue(to_cpp_ref(text)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue__eq(
    pxr_SdfHumanReadableValue_t const * this_
    , _Bool * return_
    , pxr_SdfHumanReadableValue_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue__ne(
    pxr_SdfHumanReadableValue_t const * this_
    , _Bool * return_
    , pxr_SdfHumanReadableValue_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_GetText(
    pxr_SdfHumanReadableValue_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetText());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_copy(
    pxr_SdfHumanReadableValue_t * * this_
    , pxr_SdfHumanReadableValue_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue__assign(
    pxr_SdfHumanReadableValue_t * this_
    , pxr_SdfHumanReadableValue_t * * return_
    , pxr_SdfHumanReadableValue_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_dtor(
    pxr_SdfHumanReadableValue_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfIsDefiningSpecifier(
    _Bool * return_
    , pxr_SdfSpecifier spec)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfIsDefiningSpecifier(pxr_SdfSpecifier_to_cpp_ref(&(spec)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfValueHasValidType(
    _Bool * return_
    , pxr_VtValue_t const * value)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfValueHasValidType(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfGetTypeForValueTypeName(
    pxr_TfType_t * * return_
    , pxr_TfToken_t const * name)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfGetTypeForValueTypeName(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfGetValueTypeNameForValue(
    pxr_SdfValueTypeName_t * return_
    , pxr_VtValue_t const * value)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfGetValueTypeNameForValue(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfGetRoleNameForValueTypeName(
    pxr_TfToken_t * return_
    , pxr_TfToken_t const * typeName)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfGetRoleNameForValueTypeName(to_cpp_ref(typeName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfConvertToValidMetadataDictionary(
    _Bool * return_
    , pxr_VtDictionary_t * dict
    , std_string_t * errMsg)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfConvertToValidMetadataDictionary(to_cpp(dict), to_cpp(errMsg));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_8(
    size_t * return_
    , pxr_SdfHumanReadableValue_t const * hrval)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::hash_value(to_cpp_ref(hrval));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

