#include "pxr/usd/usd/usd_attribute_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "pxr/usd/sdf/sdf_value_type_name_private.h"
#include "pxr/usd/usd/usd_common_private.h"
#include "pxr/usd/usd/usd_prim_private.h"
#include "pxr/usd/usd/usd_property_private.h"
#include "pxr/usd/usd/usd_time_code_private.h"
#include "std_string_private.h"
#include "std_vector_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_IsValid(
    pxr_UsdAttribute_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetStage(
    pxr_UsdAttribute_t const * this_
    , pxr_UsdStagePtr_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetStage());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetPath(
    pxr_UsdAttribute_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetPrimPath(
    pxr_UsdAttribute_t const * this_
    , pxr_SdfPath_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetPrimPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetPrim(
    pxr_UsdAttribute_t const * this_
    , pxr_UsdPrim_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPrim());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetName(
    pxr_UsdAttribute_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDescription(
    pxr_UsdAttribute_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetDescription());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetMetadata_value(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetMetadata(to_cpp_ref(key), to_cpp(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetMetadata_value(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetMetadata(to_cpp_ref(key), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearMetadata(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key)
{
    try {
        *(return_) = (to_cpp(this_)) -> ClearMetadata(to_cpp_ref(key));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasMetadata(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasMetadata(to_cpp_ref(key));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredMetadata(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasAuthoredMetadata(to_cpp_ref(key));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetMetadataByDictKey_value(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetMetadataByDictKey(to_cpp_ref(key), to_cpp_ref(keyPath), to_cpp(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetMetadataByDictKey(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t const * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetMetadataByDictKey(to_cpp_ref(key), to_cpp_ref(keyPath), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearMetadataByDictKey(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_TfToken_t const * keyPath)
{
    try {
        *(return_) = (to_cpp(this_)) -> ClearMetadataByDictKey(to_cpp_ref(key), to_cpp_ref(keyPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasMetadataDictKey(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_TfToken_t const * keyPath)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasMetadataDictKey(to_cpp_ref(key), to_cpp_ref(keyPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredMetadataDictKey(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key
    , pxr_TfToken_t const * keyPath)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasAuthoredMetadataDictKey(to_cpp_ref(key), to_cpp_ref(keyPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_IsHidden(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsHidden();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetHidden(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , _Bool hidden)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetHidden(hidden);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearHidden(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ClearHidden();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredHidden(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasAuthoredHidden();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDocumentation(
    pxr_UsdAttribute_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetDocumentation(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , std_string_t const * doc)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetDocumentation(to_cpp_ref(doc));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearDocumentation(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ClearDocumentation();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredDocumentation(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasAuthoredDocumentation();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetNamespaceDelimiter(
    char * return_)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::UsdAttribute::GetNamespaceDelimiter();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetBaseName(
    pxr_UsdAttribute_t const * this_
    , pxr_TfToken_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetBaseName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetNamespace(
    pxr_UsdAttribute_t const * this_
    , pxr_TfToken_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetNamespace());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SplitName(
    pxr_UsdAttribute_t const * this_
    , std_vector_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> SplitName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDisplayGroup(
    pxr_UsdAttribute_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetDisplayGroup(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , std_string_t const * displayGroup)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetDisplayGroup(to_cpp_ref(displayGroup));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearDisplayGroup(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ClearDisplayGroup();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredDisplayGroup(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasAuthoredDisplayGroup();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetNestedDisplayGroups(
    pxr_UsdAttribute_t const * this_
    , std_vector_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetNestedDisplayGroups());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetNestedDisplayGroups(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , std_vector_string_t const * nestedGroups)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetNestedDisplayGroups(to_cpp_ref(nestedGroups));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDisplayName(
    pxr_UsdAttribute_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetDisplayName(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetDisplayName(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearDisplayName(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ClearDisplayName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredDisplayName(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasAuthoredDisplayName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_IsCustom(
    pxr_UsdAttribute_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetCustom(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , _Bool isCustom)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetCustom(isCustom);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_IsDefined(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsDefined();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_IsAuthored(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsAuthored();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_FlattenTo_parent(
    pxr_UsdAttribute_t const * this_
    , pxr_UsdProperty_t * * return_
    , pxr_UsdPrim_t const * parent)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FlattenTo(to_cpp_ref(parent)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_FlattenTo_parent_property(
    pxr_UsdAttribute_t const * this_
    , pxr_UsdProperty_t * * return_
    , pxr_UsdPrim_t const * parent
    , pxr_TfToken_t const * propName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FlattenTo(to_cpp_ref(parent), to_cpp_ref(propName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_FlattenTo_property(
    pxr_UsdAttribute_t const * this_
    , pxr_UsdProperty_t * * return_
    , pxr_UsdProperty_t const * property)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FlattenTo(to_cpp_ref(property)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ctor(
    pxr_UsdAttribute_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::UsdAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetTypeName(
    pxr_UsdAttribute_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetTypeName(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_SdfValueTypeName_t const * typeName)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetTypeName(to_cpp_ref(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetRoleName(
    pxr_UsdAttribute_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasValue(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasValue();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredValue(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasAuthoredValue();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasFallbackValue(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasFallbackValue();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ValueMightBeTimeVarying(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ValueMightBeTimeVarying();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_Get_value(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_VtValue_t * value
    , pxr_UsdTimeCode_t time)
{
    try {
        *(return_) = (to_cpp(this_)) -> Get(to_cpp(value), to_cpp_ref(&(time)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_Set_value(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_VtValue_t const * value
    , pxr_UsdTimeCode_t time)
{
    try {
        *(return_) = (to_cpp(this_)) -> Set(to_cpp_ref(value), to_cpp_ref(&(time)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_AddConnection(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * source
    , pxr_UsdListPosition position)
{
    try {
        *(return_) = (to_cpp(this_)) -> AddConnection(to_cpp_ref(source), pxr_UsdListPosition_to_cpp_ref(&(position)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_RemoveConnection(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * source)
{
    try {
        *(return_) = (to_cpp(this_)) -> RemoveConnection(to_cpp_ref(source));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetConnections(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , std_SdfPathVector_t const * sources)
{
    try {
        *(return_) = (to_cpp(this_)) -> SetConnections(to_cpp_ref(sources));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearConnections(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ClearConnections();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetConnections(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_
    , std_SdfPathVector_t * sources)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetConnections(to_cpp(sources));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredConnections(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasAuthoredConnections();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_GetColorSpace(
    pxr_UsdAttribute_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_SetColorSpace(
    pxr_UsdAttribute_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_HasColorSpace(
    pxr_UsdAttribute_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearColorSpace(
    pxr_UsdAttribute_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ClearColorSpace();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdAttribute_copy(
    pxr_UsdAttribute_t * * this_
    , pxr_UsdAttribute_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::UsdAttribute(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

