#include "pxr/usd/sdf/sdf_children_policies_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_string_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy::GetParentPath(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy::GetFieldValue(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy::IsValidIdentifier(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy::GetChildPath(to_cpp_ref(parentPath), to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy::GetChildrenToken(to_cpp_ref(parentPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy::GetParentPath(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy::GetFieldValue(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy::IsValidIdentifier(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy::GetChildPath(to_cpp_ref(parentPath), to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy::GetChildrenToken(to_cpp_ref(parentPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy::GetParentPath(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy::GetFieldValue(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy::IsValidIdentifier(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy::GetChildPath(to_cpp_ref(parentPath), to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy::GetChildrenToken(to_cpp_ref(parentPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy::GetParentPath(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy::GetFieldValue(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy::IsValidIdentifier(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy::GetChildPath(to_cpp_ref(parentPath), to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy::GetChildrenToken(to_cpp_ref(parentPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy::GetParentPath(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy::GetFieldValue(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy::IsValidIdentifier(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy::GetChildPath(to_cpp_ref(parentPath), to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy::GetChildrenToken(to_cpp_ref(parentPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy::GetParentPath(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy::GetFieldValue(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy::IsValidIdentifier(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy::GetChildPath(to_cpp_ref(parentPath), to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy::GetChildrenToken(to_cpp_ref(parentPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy::GetParentPath(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy::GetFieldValue(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy::IsValidIdentifier(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy::GetChildPath(to_cpp_ref(parentPath), to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy::GetChildrenToken(to_cpp_ref(parentPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy::GetParentPath(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetFieldValue(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy::GetFieldValue(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy::IsValidIdentifier(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetChildPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * parentPath
    , pxr_TfToken_t const * key)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy::GetChildPath(to_cpp_ref(parentPath), to_cpp_ref(key)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy::GetChildrenToken(to_cpp_ref(parentPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy::GetParentPath(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy::IsValidIdentifier(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy::GetChildrenToken(to_cpp_ref(parentPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy::GetParentPath(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy::IsValidIdentifier(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy::GetChildrenToken(to_cpp_ref(parentPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_GetParentPath(
    pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * childPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy::GetParentPath(to_cpp_ref(childPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy::IsValidIdentifier(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_GetChildrenToken(
    pxr_TfToken_t * return_
    , pxr_SdfPath_t const * parentPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy::GetChildrenToken(to_cpp_ref(parentPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

