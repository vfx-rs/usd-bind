#include "pxr/usd/sdf/sdf_pseudo_root_spec_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_type_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/base/vt/vt_dictionary_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "pxr/usd/sdf/sdf_schema_private.h"
#include "pxr/usd/sdf/sdf_spec_private.h"
#include "pxr/usd/sdf/sdf_types_private.h"
#include "std_string_private.h"
#include "std_vector_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetSchema(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetSpecType(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsDormant(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetLayer(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetPath(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_PermissionToEdit(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInfo(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInfoDictionaryValue(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasInfo(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearInfo(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetTypeForInfo(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetFallbackForInfo(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsInert(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasField(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetField(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearField(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec__eq(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_operator_(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetName(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_CanSetName(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetName(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsValidName(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec::IsValidName(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasNameChildrenOrder(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_InsertInNameChildrenOrder(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromNameChildrenOrder(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromNameChildrenOrderByIndex(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasPropertyOrder(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_InsertInPropertyOrder(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromPropertyOrder(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromPropertyOrderByIndex(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetTypeName(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetComment(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetComment(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetDocumentation(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetDocumentation(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetActive(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetActive(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasActive(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearActive(
    pxr_SdfPseudoRootSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearActive();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetHidden(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetHidden(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetKind(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasKind(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearKind(
    pxr_SdfPseudoRootSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearKind();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetSymmetryFunction(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetSymmetryArgument(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetSymmetricPeer(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetSymmetricPeer(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetPrefix(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetPrefix(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetSuffix(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetSuffix(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetCustomData(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetAssetInfo(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetSpecifier(
    pxr_SdfPseudoRootSpec_t const * this_
    , pxr_SdfSpecifier * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSpecifier());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetSpecifier(
    pxr_SdfPseudoRootSpec_t * this_
    , pxr_SdfSpecifier value)
{
    try {
        (to_cpp(this_)) -> SetSpecifier(pxr_SdfSpecifier_to_cpp_ref(&(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetPermission(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetPermission(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetPrefixSubstitutions(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetSuffixSubstitutions(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInstanceable(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetInstanceable(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasInstanceable(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearInstanceable(
    pxr_SdfPseudoRootSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearInstanceable();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasPayloads(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearPayloadList(
    pxr_SdfPseudoRootSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearPayloadList();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasInheritPaths(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearInheritPathList(
    pxr_SdfPseudoRootSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearInheritPathList();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasSpecializes(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearSpecializesList(
    pxr_SdfPseudoRootSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearSpecializesList();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasReferences(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearReferenceList(
    pxr_SdfPseudoRootSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearReferenceList();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasVariantSetNames(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetVariantNames(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveVariantSet(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetVariantSelection(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_BlockVariantSelection(
    pxr_SdfPseudoRootSpec_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasRelocates(
    pxr_SdfPseudoRootSpec_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearRelocates(
    pxr_SdfPseudoRootSpec_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearRelocates();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ctor(
    pxr_SdfPseudoRootSpec_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_copy(
    pxr_SdfPseudoRootSpec_t * * this_
    , pxr_SdfPseudoRootSpec_t const * spec)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec(to_cpp_ref(spec)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

