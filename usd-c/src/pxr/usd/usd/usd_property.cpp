#include "pxr/usd/usd/usd_property_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "pxr/usd/usd/usd_prim_private.h"
#include "std_string_private.h"
#include "std_vector_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_IsValid(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetStage(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetPath(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetPrimPath(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetPrim(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetName(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetDescription(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetMetadata(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_SetMetadata(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_ClearMetadata(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_HasMetadata(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_HasAuthoredMetadata(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_IsHidden(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_SetHidden(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_ClearHidden(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_HasAuthoredHidden(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetDocumentation(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_SetDocumentation(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_ClearDocumentation(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_HasAuthoredDocumentation(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetNamespaceDelimiter(
    char * return_)
{
    try {
        *(return_) = pxrInternal_v0_20__pxrReserved__::UsdProperty::GetNamespaceDelimiter();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_ctor(
    pxr_UsdProperty_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::UsdProperty());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_copy(
    pxr_UsdProperty_t * * this_
    , pxr_UsdProperty_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::UsdProperty(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetBaseName(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetNamespace(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_SplitName(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetDisplayGroup(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_SetDisplayGroup(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_ClearDisplayGroup(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_HasAuthoredDisplayGroup(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetNestedDisplayGroups(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_SetNestedDisplayGroups(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_GetDisplayName(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_SetDisplayName(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_ClearDisplayName(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_HasAuthoredDisplayName(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_IsCustom(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_SetCustom(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_IsDefined(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_IsAuthored(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_FlattenTo_parent(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_FlattenTo_parent_property(
    pxr_UsdProperty_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdProperty_FlattenTo_property(
    pxr_UsdProperty_t const * this_
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

