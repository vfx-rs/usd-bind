#include "pxr/usd/sdf/sdf_attribute_spec_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_type_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/base/vt/vt_array_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "pxr/usd/sdf/sdf_schema_private.h"
#include "pxr/usd/sdf/sdf_spec_private.h"
#include "pxr/usd/sdf/sdf_value_type_name_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSchema(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsDormant(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetLayer(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetPath(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_PermissionToEdit(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetMetaDataDisplayGroup(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetInfo(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetInfoDictionaryValue(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasInfo(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearInfo(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetTypeForInfo(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetFallbackForInfo(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsInert(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasField(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetField(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearField(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec__eq(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_operator_(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetName(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetNameToken(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_CanSetName(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetName(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsValidName(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec::IsValidName(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetCustomData(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetAssetInfo(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetDisplayGroup(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDisplayGroup(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetDisplayName(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDisplayName(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetDocumentation(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDocumentation(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetHidden(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetHidden(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetPrefix(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetPrefix(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSuffix(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSuffix(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSymmetricPeer(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSymmetricPeer(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSymmetryArgument(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSymmetryFunction(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSymmetryFunction(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetValueType(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDefaultValue(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasDefaultValue(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearDefaultValue(
    pxr_SdfAttributeSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearDefaultValue();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetComment(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetComment(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsCustom(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetCustom(
    pxr_SdfAttributeSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasOnlyRequiredFields(
    pxr_SdfAttributeSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ctor(
    pxr_SdfAttributeSpec_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_copy(
    pxr_SdfAttributeSpec_t * * this_
    , pxr_SdfAttributeSpec_t const * spec)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec(to_cpp_ref(spec)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasConnectionPaths(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasConnectionPaths();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearConnectionPaths(
    pxr_SdfAttributeSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearConnectionPaths();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetAllowedTokens(
    pxr_SdfAttributeSpec_t * this_
    , pxr_VtArrayTfToken_t const * allowedTokens)
{
    try {
        (to_cpp(this_)) -> SetAllowedTokens(to_cpp_ref(allowedTokens));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasAllowedTokens(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasAllowedTokens();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearAllowedTokens(
    pxr_SdfAttributeSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearAllowedTokens();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasDisplayUnit(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasDisplayUnit();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearDisplayUnit(
    pxr_SdfAttributeSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearDisplayUnit();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetColorSpace(
    pxr_SdfAttributeSpec_t const * this_
    , pxr_TfToken_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetColorSpace());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetColorSpace(
    pxr_SdfAttributeSpec_t * this_
    , pxr_TfToken_t const * colorSpace)
{
    try {
        (to_cpp(this_)) -> SetColorSpace(to_cpp_ref(colorSpace));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasColorSpace(
    pxr_SdfAttributeSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasColorSpace();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearColorSpace(
    pxr_SdfAttributeSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearColorSpace();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetRoleName(
    pxr_SdfAttributeSpec_t const * this_
    , pxr_TfToken_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetRoleName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

