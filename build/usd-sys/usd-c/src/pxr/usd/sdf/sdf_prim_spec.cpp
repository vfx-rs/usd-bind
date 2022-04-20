#include "pxr/usd/sdf/sdf_prim_spec_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_type_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/base/vt/vt_dictionary_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_string_private.h"
#include "std_vector_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_IsDormant(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetLayer(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetPath(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_PermissionToEdit(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetMetaDataDisplayGroup(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetInfo(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetInfoDictionaryValue(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasInfo(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearInfo(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetTypeForInfo(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetFallbackForInfo(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_IsInert(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasField(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetField(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearField(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ctor(
    pxr_SdfPrimSpec_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPrimSpec());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_copy(
    pxr_SdfPrimSpec_t * * this_
    , pxr_SdfPrimSpec_t const * spec)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPrimSpec(to_cpp_ref(spec)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetName(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetNameToken(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_CanSetName(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetName(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_IsValidName(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfPrimSpec::IsValidName(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasNameChildrenOrder(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasNameChildrenOrder();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_InsertInNameChildrenOrder(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * name
    , int index)
{
    try {
        (to_cpp(this_)) -> InsertInNameChildrenOrder(to_cpp_ref(name), index);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromNameChildrenOrder(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * name)
{
    try {
        (to_cpp(this_)) -> RemoveFromNameChildrenOrder(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromNameChildrenOrderByIndex(
    pxr_SdfPrimSpec_t * this_
    , int index)
{
    try {
        (to_cpp(this_)) -> RemoveFromNameChildrenOrderByIndex(index);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasPropertyOrder(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasPropertyOrder();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_InsertInPropertyOrder(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * name
    , int index)
{
    try {
        (to_cpp(this_)) -> InsertInPropertyOrder(to_cpp_ref(name), index);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromPropertyOrder(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * name)
{
    try {
        (to_cpp(this_)) -> RemoveFromPropertyOrder(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromPropertyOrderByIndex(
    pxr_SdfPrimSpec_t * this_
    , int index)
{
    try {
        (to_cpp(this_)) -> RemoveFromPropertyOrderByIndex(index);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetTypeName(
    pxr_SdfPrimSpec_t const * this_
    , pxr_TfToken_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetTypeName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetTypeName(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * value)
{
    try {
        (to_cpp(this_)) -> SetTypeName(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetComment(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetComment(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetDocumentation(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetDocumentation(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetActive(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetActive();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetActive(
    pxr_SdfPrimSpec_t * this_
    , _Bool value)
{
    try {
        (to_cpp(this_)) -> SetActive(value);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasActive(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasActive();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearActive(
    pxr_SdfPrimSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearActive();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetHidden(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetHidden(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetKind(
    pxr_SdfPrimSpec_t const * this_
    , pxr_TfToken_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetKind());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetKind(
    pxr_SdfPrimSpec_t * this_
    , pxr_TfToken_t const * value)
{
    try {
        (to_cpp(this_)) -> SetKind(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasKind(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasKind();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearKind(
    pxr_SdfPrimSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearKind();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSymmetryFunction(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSymmetryFunction(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSymmetryArgument(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSymmetricPeer(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSymmetricPeer(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetPrefix(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetPrefix(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSuffix(
    pxr_SdfPrimSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSuffix(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetCustomData(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetAssetInfo(
    pxr_SdfPrimSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetPrefixSubstitutions(
    pxr_SdfPrimSpec_t * this_
    , pxr_VtDictionary_t const * prefixSubstitutions)
{
    try {
        (to_cpp(this_)) -> SetPrefixSubstitutions(to_cpp_ref(prefixSubstitutions));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSuffixSubstitutions(
    pxr_SdfPrimSpec_t * this_
    , pxr_VtDictionary_t const * suffixSubstitutions)
{
    try {
        (to_cpp(this_)) -> SetSuffixSubstitutions(to_cpp_ref(suffixSubstitutions));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetInstanceable(
    pxr_SdfPrimSpec_t * this_
    , _Bool instanceable)
{
    try {
        (to_cpp(this_)) -> SetInstanceable(instanceable);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetInstanceable(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetInstanceable();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasInstanceable(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasInstanceable();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearInstanceable(
    pxr_SdfPrimSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearInstanceable();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasPayloads(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasPayloads();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearPayloadList(
    pxr_SdfPrimSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearPayloadList();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasInheritPaths(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasInheritPaths();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearInheritPathList(
    pxr_SdfPrimSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearInheritPathList();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasSpecializes(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasSpecializes();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearSpecializesList(
    pxr_SdfPrimSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearSpecializesList();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasReferences(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasReferences();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearReferenceList(
    pxr_SdfPrimSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearReferenceList();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasVariantSetNames(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasVariantSetNames();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetVariantNames(
    pxr_SdfPrimSpec_t const * this_
    , std_vector_string_t * * return_
    , std_string_t const * name)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetVariantNames(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveVariantSet(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * name)
{
    try {
        (to_cpp(this_)) -> RemoveVariantSet(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetVariantSelection(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * variantSetName
    , std_string_t const * variantName)
{
    try {
        (to_cpp(this_)) -> SetVariantSelection(to_cpp_ref(variantSetName), to_cpp_ref(variantName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_BlockVariantSelection(
    pxr_SdfPrimSpec_t * this_
    , std_string_t const * variantSetName)
{
    try {
        (to_cpp(this_)) -> BlockVariantSelection(to_cpp_ref(variantSetName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasRelocates(
    pxr_SdfPrimSpec_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasRelocates();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearRelocates(
    pxr_SdfPrimSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearRelocates();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec__assign(
    pxr_SdfPrimSpec_t * this_
    , pxr_SdfPrimSpec_t * * return_
    , pxr_SdfPrimSpec_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPrimSpec_dtor(
    pxr_SdfPrimSpec_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfJustCreatePrimInLayer(
    _Bool * return_
    , pxr_SdfLayerHandle_t const * layer
    , pxr_SdfPath_t const * primPath)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfJustCreatePrimInLayer(to_cpp_ref(layer), to_cpp_ref(primPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

