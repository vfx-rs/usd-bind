#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfSchema_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_EnableNotification2(this_: *const pxr_SdfSchemaBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_GetUniqueIdentifier(this_: *const pxr_SdfSchemaBase_t, return_: *mut *const c_void) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_GetFieldDefinition(this_: *const pxr_SdfSchemaBase_t, return_: *mut *const pxr_SdfSchemaBase_FieldDefinition_t, field_key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsRegistered(this_: *const pxr_SdfSchemaBase_t, return_: *mut bool, field_key: *const pxr_TfToken_t, fallback: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_HoldsChildren(this_: *const pxr_SdfSchemaBase_t, return_: *mut bool, field_key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_GetFallback(this_: *const pxr_SdfSchemaBase_t, return_: *mut *const pxr_VtValue_t, field_key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsRequiredFieldName(this_: *const pxr_SdfSchemaBase_t, return_: *mut bool, field_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidAttributeConnectionPath(return_: *mut *mut pxr_SdfAllowed_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidIdentifier(return_: *mut *mut pxr_SdfAllowed_t, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidNamespacedIdentifier(return_: *mut *mut pxr_SdfAllowed_t, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidInheritPath(return_: *mut *mut pxr_SdfAllowed_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidPayload(return_: *mut *mut pxr_SdfAllowed_t, payload: *const pxr_SdfPayload_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidReference(return_: *mut *mut pxr_SdfAllowed_t, ref_: *const pxr_SdfReference_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidRelationshipTargetPath(return_: *mut *mut pxr_SdfAllowed_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidRelocatesPath(return_: *mut *mut pxr_SdfAllowed_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidSpecializesPath(return_: *mut *mut pxr_SdfAllowed_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidSubLayer(return_: *mut *mut pxr_SdfAllowed_t, sublayer: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidVariantIdentifier(return_: *mut *mut pxr_SdfAllowed_t, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_IsValidValue(this_: *const pxr_SdfSchemaBase_t, return_: *mut *mut pxr_SdfAllowed_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType(this_: *const pxr_SdfSchemaBase_t, return_: *mut pxr_SdfValueTypeName_t, type_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_1(this_: *const pxr_SdfSchemaBase_t, return_: *mut pxr_SdfValueTypeName_t, type_name: *const c_char) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_2(this_: *const pxr_SdfSchemaBase_t, return_: *mut pxr_SdfValueTypeName_t, type_name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_3(this_: *const pxr_SdfSchemaBase_t, return_: *mut pxr_SdfValueTypeName_t, type_: *const pxr_TfType_t, role: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindType_4(this_: *const pxr_SdfSchemaBase_t, return_: *mut pxr_SdfValueTypeName_t, value: *const pxr_VtValue_t, role: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase_FindOrCreateType(this_: *const pxr_SdfSchemaBase_t, return_: *mut pxr_SdfValueTypeName_t, type_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_ctor(this_: *mut *mut pxr_SdfSchemaBase_FieldDefinition_t, schema: *const pxr_SdfSchemaBase_t, name: *const pxr_TfToken_t, fallback_value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_GetName(this_: *const pxr_SdfSchemaBase_FieldDefinition_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_GetFallbackValue(this_: *const pxr_SdfSchemaBase_FieldDefinition_t, return_: *mut *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_IsPlugin(this_: *const pxr_SdfSchemaBase_FieldDefinition_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_IsReadOnly(this_: *const pxr_SdfSchemaBase_FieldDefinition_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_HoldsChildren(this_: *const pxr_SdfSchemaBase_FieldDefinition_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_FallbackValue(this_: *mut pxr_SdfSchemaBase_FieldDefinition_t, return_: *mut *mut pxr_SdfSchemaBase_FieldDefinition_t, v: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_Plugin(this_: *mut pxr_SdfSchemaBase_FieldDefinition_t, return_: *mut *mut pxr_SdfSchemaBase_FieldDefinition_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_Children(this_: *mut pxr_SdfSchemaBase_FieldDefinition_t, return_: *mut *mut pxr_SdfSchemaBase_FieldDefinition_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_ReadOnly(this_: *mut pxr_SdfSchemaBase_FieldDefinition_t, return_: *mut *mut pxr_SdfSchemaBase_FieldDefinition_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_copy(this_: *mut *mut pxr_SdfSchemaBase_FieldDefinition_t, rhs: *const pxr_SdfSchemaBase_FieldDefinition_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_dtor(this_: *mut pxr_SdfSchemaBase_FieldDefinition_t) -> Exception;


} // extern "C"
