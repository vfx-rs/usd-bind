#include "pxr/usd/sdf/sdf_relationship_spec_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_type_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "pxr/usd/sdf/sdf_value_type_name_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsDormant(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetLayer(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetPath(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_PermissionToEdit(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetMetaDataDisplayGroup(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetInfo(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetInfoDictionaryValue(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasInfo(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearInfo(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetTypeForInfo(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetFallbackForInfo(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsInert(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasField(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetField(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearField(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetName(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetNameToken(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_CanSetName(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetName(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsValidName(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec::IsValidName(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetCustomData(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetAssetInfo(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetDisplayGroup(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDisplayGroup(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetDisplayName(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDisplayName(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetDocumentation(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDocumentation(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetHidden(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetHidden(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetPrefix(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetPrefix(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSuffix(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSuffix(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSymmetricPeer(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSymmetricPeer(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSymmetryArgument(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSymmetryFunction(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSymmetryFunction(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetValueType(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetTypeName(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDefaultValue(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasDefaultValue(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearDefaultValue(
    pxr_SdfRelationshipSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearDefaultValue();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetComment(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetComment(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsCustom(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetCustom(
    pxr_SdfRelationshipSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasOnlyRequiredFields(
    pxr_SdfRelationshipSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ctor(
    pxr_SdfRelationshipSpec_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_copy(
    pxr_SdfRelationshipSpec_t * * this_
    , pxr_SdfRelationshipSpec_t const * spec)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec(to_cpp_ref(spec)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasTargetPathList(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasTargetPathList();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearTargetPathList(
    pxr_SdfRelationshipSpec_t const * this_)
{
    try {
        (to_cpp(this_)) -> ClearTargetPathList();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ReplaceTargetPath(
    pxr_SdfRelationshipSpec_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath)
{
    try {
        (to_cpp(this_)) -> ReplaceTargetPath(to_cpp_ref(oldPath), to_cpp_ref(newPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_RemoveTargetPath(
    pxr_SdfRelationshipSpec_t * this_
    , pxr_SdfPath_t const * path
    , _Bool preserveTargetOrder)
{
    try {
        (to_cpp(this_)) -> RemoveTargetPath(to_cpp_ref(path), preserveTargetOrder);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetNoLoadHint(
    pxr_SdfRelationshipSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetNoLoadHint();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetNoLoadHint(
    pxr_SdfRelationshipSpec_t * this_
    , _Bool noload)
{
    try {
        (to_cpp(this_)) -> SetNoLoadHint(noload);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

