#include "pxr/usd/sdf/sdf_property_spec_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_type_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "pxr/usd/sdf/sdf_schema_private.h"
#include "pxr/usd/sdf/sdf_spec_private.h"
#include "pxr/usd/sdf/sdf_types_private.h"
#include "pxr/usd/sdf/sdf_value_type_name_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetSchema(
    pxr_SdfPropertySpec_t const * this_
    , pxr_SdfSchemaBase_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetSchema());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetSpecType(
    pxr_SdfPropertySpec_t const * this_
    , pxr_SdfSpecType * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSpecType());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsDormant(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsDormant();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetLayer(
    pxr_SdfPropertySpec_t const * this_
    , pxr_SdfLayerHandle_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetLayer());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetPath(
    pxr_SdfPropertySpec_t const * this_
    , pxr_SdfPath_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_PermissionToEdit(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> PermissionToEdit();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetMetaDataDisplayGroup(
    pxr_SdfPropertySpec_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * key)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetMetaDataDisplayGroup(to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetInfo(
    pxr_SdfPropertySpec_t * this_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * value)
{
    try {
        (to_cpp(this_)) -> SetInfo(to_cpp_ref(key), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetInfoDictionaryValue(
    pxr_SdfPropertySpec_t * this_
    , pxr_TfToken_t const * dictionaryKey
    , pxr_TfToken_t const * entryKey
    , pxr_VtValue_t const * value)
{
    try {
        (to_cpp(this_)) -> SetInfoDictionaryValue(to_cpp_ref(dictionaryKey), to_cpp_ref(entryKey), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasInfo(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasInfo(to_cpp_ref(key));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ClearInfo(
    pxr_SdfPropertySpec_t * this_
    , pxr_TfToken_t const * key)
{
    try {
        (to_cpp(this_)) -> ClearInfo(to_cpp_ref(key));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetTypeForInfo(
    pxr_SdfPropertySpec_t const * this_
    , pxr_TfType_t * * return_
    , pxr_TfToken_t const * key)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetTypeForInfo(to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetFallbackForInfo(
    pxr_SdfPropertySpec_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * key)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetFallbackForInfo(to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsInert(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_
    , _Bool ignoreChildren)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsInert(ignoreChildren);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasField(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasField(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetField(
    pxr_SdfPropertySpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name
    , pxr_VtValue_t const * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetField<pxrInternal_v0_21__pxrReserved__::VtValue>(to_cpp_ref(name), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ClearField(
    pxr_SdfPropertySpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name)
{
    try {
        *(return_) = (to_cpp(this_)) -> ClearField(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec__eq(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_
    , pxr_SdfSpec_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_operator_(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_
    , pxr_SdfSpec_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ctor(
    pxr_SdfPropertySpec_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPropertySpec());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_copy(
    pxr_SdfPropertySpec_t * * this_
    , pxr_SdfPropertySpec_t const * spec)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPropertySpec(to_cpp_ref(spec)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetName(
    pxr_SdfPropertySpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetNameToken(
    pxr_SdfPropertySpec_t const * this_
    , pxr_TfToken_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetNameToken());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_CanSetName(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_
    , std_string_t const * newName
    , std_string_t * whyNot)
{
    try {
        *(return_) = (to_cpp(this_)) -> CanSetName(to_cpp_ref(newName), to_cpp(whyNot));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetName(
    pxr_SdfPropertySpec_t * this_
    , _Bool * return_
    , std_string_t const * newName
    , _Bool validate)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetName(to_cpp_ref(newName), validate);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsValidName(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfPropertySpec::IsValidName(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetCustomData(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value)
{
    try {
        (to_cpp(this_)) -> SetCustomData(to_cpp_ref(name), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetAssetInfo(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value)
{
    try {
        (to_cpp(this_)) -> SetAssetInfo(to_cpp_ref(name), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetDisplayGroup(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetDisplayGroup());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetDisplayGroup(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * value)
{
    try {
        (to_cpp(this_)) -> SetDisplayGroup(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetDisplayName(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetDisplayName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetDisplayName(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * value)
{
    try {
        (to_cpp(this_)) -> SetDisplayName(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetDocumentation(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetDocumentation());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetDocumentation(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * value)
{
    try {
        (to_cpp(this_)) -> SetDocumentation(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetHidden(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetHidden();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetHidden(
    pxr_SdfPropertySpec_t * this_
    , _Bool value)
{
    try {
        (to_cpp(this_)) -> SetHidden(value);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetPermission(
    pxr_SdfPropertySpec_t const * this_
    , pxr_SdfPermission * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPermission());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetPermission(
    pxr_SdfPropertySpec_t * this_
    , pxr_SdfPermission value)
{
    try {
        (to_cpp(this_)) -> SetPermission(pxr_SdfPermission_to_cpp_ref(&(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetPrefix(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPrefix());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetPrefix(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * value)
{
    try {
        (to_cpp(this_)) -> SetPrefix(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetSuffix(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSuffix());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetSuffix(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * value)
{
    try {
        (to_cpp(this_)) -> SetSuffix(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetSymmetricPeer(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSymmetricPeer());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetSymmetricPeer(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * peerName)
{
    try {
        (to_cpp(this_)) -> SetSymmetricPeer(to_cpp_ref(peerName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetSymmetryArgument(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * name
    , pxr_VtValue_t const * value)
{
    try {
        (to_cpp(this_)) -> SetSymmetryArgument(to_cpp_ref(name), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetSymmetryFunction(
    pxr_SdfPropertySpec_t const * this_
    , pxr_TfToken_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSymmetryFunction());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetSymmetryFunction(
    pxr_SdfPropertySpec_t * this_
    , pxr_TfToken_t const * functionName)
{
    try {
        (to_cpp(this_)) -> SetSymmetryFunction(to_cpp_ref(functionName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetValueType(
    pxr_SdfPropertySpec_t const * this_
    , pxr_TfType_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetValueType());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetTypeName(
    pxr_SdfPropertySpec_t const * this_
    , pxr_SdfValueTypeName_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetTypeName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetDefaultValue(
    pxr_SdfPropertySpec_t * this_
    , _Bool * return_
    , pxr_VtValue_t const * defaultValue)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetDefaultValue(to_cpp_ref(defaultValue));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasDefaultValue(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasDefaultValue();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ClearDefaultValue(
    pxr_SdfPropertySpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearDefaultValue();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetComment(
    pxr_SdfPropertySpec_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetComment());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetComment(
    pxr_SdfPropertySpec_t * this_
    , std_string_t const * value)
{
    try {
        (to_cpp(this_)) -> SetComment(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsCustom(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsCustom();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetCustom(
    pxr_SdfPropertySpec_t * this_
    , _Bool custom)
{
    try {
        (to_cpp(this_)) -> SetCustom(custom);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetVariability(
    pxr_SdfPropertySpec_t const * this_
    , pxr_SdfVariability * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetVariability());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasOnlyRequiredFields(
    pxr_SdfPropertySpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasOnlyRequiredFields();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec__assign(
    pxr_SdfPropertySpec_t * this_
    , pxr_SdfPropertySpec_t * * return_
    , pxr_SdfPropertySpec_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPropertySpec_dtor(
    pxr_SdfPropertySpec_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

