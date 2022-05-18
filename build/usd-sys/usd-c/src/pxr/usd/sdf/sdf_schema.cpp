#include "pxr/usd/sdf/sdf_schema_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_type_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_allowed_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "pxr/usd/sdf/sdf_payload_private.h"
#include "pxr/usd/sdf/sdf_reference_private.h"
#include "pxr/usd/sdf/sdf_value_type_name_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_EnableNotification2(
    pxr_SdfSchemaBase_t const * this_)
{
    try {
        (to_cpp(this_)) -> EnableNotification2();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_GetUniqueIdentifier(
    pxr_SdfSchemaBase_t const * this_
    , void const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetUniqueIdentifier();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_GetFieldDefinition(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfSchemaBase_FieldDefinition_t const * * return_
    , pxr_TfToken_t const * fieldKey)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetFieldDefinition(to_cpp_ref(fieldKey)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsRegistered(
    pxr_SdfSchemaBase_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * fieldKey
    , pxr_VtValue_t * fallback)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsRegistered(to_cpp_ref(fieldKey), to_cpp(fallback));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_HoldsChildren(
    pxr_SdfSchemaBase_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * fieldKey)
{
    try {
        *(return_) = (to_cpp(this_)) -> HoldsChildren(to_cpp_ref(fieldKey));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_GetFallback(
    pxr_SdfSchemaBase_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * fieldKey)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetFallback(to_cpp_ref(fieldKey)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsRequiredFieldName(
    pxr_SdfSchemaBase_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * fieldName)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsRequiredFieldName(to_cpp_ref(fieldName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidAttributeConnectionPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::IsValidAttributeConnectionPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidIdentifier(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * name)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::IsValidIdentifier(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidNamespacedIdentifier(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * name)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::IsValidNamespacedIdentifier(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidInheritPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::IsValidInheritPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidPayload(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPayload_t const * payload)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::IsValidPayload(to_cpp_ref(payload)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidReference(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfReference_t const * ref)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::IsValidReference(to_cpp_ref(ref)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidRelationshipTargetPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::IsValidRelationshipTargetPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidRelocatesPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::IsValidRelocatesPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidSpecializesPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::IsValidSpecializesPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidSubLayer(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * sublayer)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::IsValidSubLayer(to_cpp_ref(sublayer)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidVariantIdentifier(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * name)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::IsValidVariantIdentifier(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidValue(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfAllowed_t * * return_
    , pxr_VtValue_t const * value)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> IsValidValue(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_TfToken_t const * typeName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FindType(to_cpp_ref(typeName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_1(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , char const * typeName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FindType(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_2(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , std_string_t const * typeName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FindType(to_cpp_ref(typeName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_3(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_TfType_t const * type
    , pxr_TfToken_t const * role)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FindType(to_cpp_ref(type), to_cpp_ref(role)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_4(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_VtValue_t const * value
    , pxr_TfToken_t const * role)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FindType(to_cpp_ref(value), to_cpp_ref(role)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindOrCreateType(
    pxr_SdfSchemaBase_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_TfToken_t const * typeName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FindOrCreateType(to_cpp_ref(typeName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_ctor(
    pxr_SdfSchemaBase_FieldDefinition_t * * this_
    , pxr_SdfSchemaBase_t const * schema
    , pxr_TfToken_t const * name
    , pxr_VtValue_t const * fallbackValue)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition(to_cpp_ref(schema), to_cpp_ref(name), to_cpp_ref(fallbackValue)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_GetName(
    pxr_SdfSchemaBase_FieldDefinition_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_GetFallbackValue(
    pxr_SdfSchemaBase_FieldDefinition_t const * this_
    , pxr_VtValue_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetFallbackValue());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_IsPlugin(
    pxr_SdfSchemaBase_FieldDefinition_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsPlugin();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_IsReadOnly(
    pxr_SdfSchemaBase_FieldDefinition_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsReadOnly();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_HoldsChildren(
    pxr_SdfSchemaBase_FieldDefinition_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HoldsChildren();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_FallbackValue(
    pxr_SdfSchemaBase_FieldDefinition_t * this_
    , pxr_SdfSchemaBase_FieldDefinition_t * * return_
    , pxr_VtValue_t const * v)
{
    try {
        to_c(return_, (to_cpp(this_)) -> FallbackValue(to_cpp_ref(v)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_Plugin(
    pxr_SdfSchemaBase_FieldDefinition_t * this_
    , pxr_SdfSchemaBase_FieldDefinition_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Plugin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_Children(
    pxr_SdfSchemaBase_FieldDefinition_t * this_
    , pxr_SdfSchemaBase_FieldDefinition_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Children());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_ReadOnly(
    pxr_SdfSchemaBase_FieldDefinition_t * this_
    , pxr_SdfSchemaBase_FieldDefinition_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> ReadOnly());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_copy(
    pxr_SdfSchemaBase_FieldDefinition_t * * this_
    , pxr_SdfSchemaBase_FieldDefinition_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_dtor(
    pxr_SdfSchemaBase_FieldDefinition_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_IsValidField(
    pxr_SdfSchemaBase_SpecDefinition_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsValidField(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_IsMetadataField(
    pxr_SdfSchemaBase_SpecDefinition_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsMetadataField(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_GetMetadataFieldDisplayGroup(
    pxr_SdfSchemaBase_SpecDefinition_t const * this_
    , pxr_TfToken_t * return_
    , pxr_TfToken_t const * name)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetMetadataFieldDisplayGroup(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_IsRequiredField(
    pxr_SdfSchemaBase_SpecDefinition_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsRequiredField(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_copy(
    pxr_SdfSchemaBase_SpecDefinition_t * * this_
    , pxr_SdfSchemaBase_SpecDefinition_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition__assign(
    pxr_SdfSchemaBase_SpecDefinition_t * this_
    , pxr_SdfSchemaBase_SpecDefinition_t * * return_
    , pxr_SdfSchemaBase_SpecDefinition_t const * rhs)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_dtor(
    pxr_SdfSchemaBase_SpecDefinition_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_EnableNotification2(
    pxr_SdfSchema_t const * this_)
{
    try {
        (to_cpp(this_)) -> EnableNotification2();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_GetUniqueIdentifier(
    pxr_SdfSchema_t const * this_
    , void const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetUniqueIdentifier();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_GetFieldDefinition(
    pxr_SdfSchema_t const * this_
    , pxr_SdfSchemaBase_FieldDefinition_t const * * return_
    , pxr_TfToken_t const * fieldKey)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetFieldDefinition(to_cpp_ref(fieldKey)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsRegistered(
    pxr_SdfSchema_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * fieldKey
    , pxr_VtValue_t * fallback)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsRegistered(to_cpp_ref(fieldKey), to_cpp(fallback));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_HoldsChildren(
    pxr_SdfSchema_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * fieldKey)
{
    try {
        *(return_) = (to_cpp(this_)) -> HoldsChildren(to_cpp_ref(fieldKey));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_GetFallback(
    pxr_SdfSchema_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * fieldKey)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetFallback(to_cpp_ref(fieldKey)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsRequiredFieldName(
    pxr_SdfSchema_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * fieldName)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsRequiredFieldName(to_cpp_ref(fieldName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidAttributeConnectionPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchema::IsValidAttributeConnectionPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidIdentifier(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * name)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchema::IsValidIdentifier(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidNamespacedIdentifier(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * name)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchema::IsValidNamespacedIdentifier(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidInheritPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchema::IsValidInheritPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidPayload(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPayload_t const * payload)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchema::IsValidPayload(to_cpp_ref(payload)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidReference(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfReference_t const * ref)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchema::IsValidReference(to_cpp_ref(ref)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidRelationshipTargetPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchema::IsValidRelationshipTargetPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidRelocatesPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchema::IsValidRelocatesPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidSpecializesPath(
    pxr_SdfAllowed_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchema::IsValidSpecializesPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidSubLayer(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * sublayer)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchema::IsValidSubLayer(to_cpp_ref(sublayer)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidVariantIdentifier(
    pxr_SdfAllowed_t * * return_
    , std_string_t const * name)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfSchema::IsValidVariantIdentifier(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_IsValidValue(
    pxr_SdfSchema_t const * this_
    , pxr_SdfAllowed_t * * return_
    , pxr_VtValue_t const * value)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> IsValidValue(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_FindType(
    pxr_SdfSchema_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_TfToken_t const * typeName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FindType(to_cpp_ref(typeName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_FindType_1(
    pxr_SdfSchema_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , char const * typeName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FindType(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_FindType_2(
    pxr_SdfSchema_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , std_string_t const * typeName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FindType(to_cpp_ref(typeName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_FindType_3(
    pxr_SdfSchema_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_TfType_t const * type
    , pxr_TfToken_t const * role)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FindType(to_cpp_ref(type), to_cpp_ref(role)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_FindType_4(
    pxr_SdfSchema_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_VtValue_t const * value
    , pxr_TfToken_t const * role)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FindType(to_cpp_ref(value), to_cpp_ref(role)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_FindOrCreateType(
    pxr_SdfSchema_t const * this_
    , pxr_SdfValueTypeName_t * return_
    , pxr_TfToken_t const * typeName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> FindOrCreateType(to_cpp_ref(typeName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSchema_GetInstance(
    pxr_SdfSchema_t const * * return_)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::SdfSchema::GetInstance());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

