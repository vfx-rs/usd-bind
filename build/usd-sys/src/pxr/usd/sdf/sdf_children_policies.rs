#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetParentPath(return_: *mut *mut pxr_SdfPath_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetFieldValue(return_: *mut pxr_TfToken_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_IsValidIdentifier(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetChildPath(return_: *mut *mut pxr_SdfPath_t, parent_path: *const pxr_SdfPath_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_PrimChildPolicy_GetChildrenToken(return_: *mut pxr_TfToken_t, parent_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetParentPath(return_: *mut *mut pxr_SdfPath_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetFieldValue(return_: *mut pxr_TfToken_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_IsValidIdentifier(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetChildPath(return_: *mut *mut pxr_SdfPath_t, parent_path: *const pxr_SdfPath_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_PropertyChildPolicy_GetChildrenToken(return_: *mut pxr_TfToken_t, parent_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetParentPath(return_: *mut *mut pxr_SdfPath_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetFieldValue(return_: *mut pxr_TfToken_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_IsValidIdentifier(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetChildPath(return_: *mut *mut pxr_SdfPath_t, parent_path: *const pxr_SdfPath_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_AttributeChildPolicy_GetChildrenToken(return_: *mut pxr_TfToken_t, parent_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetParentPath(return_: *mut *mut pxr_SdfPath_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetFieldValue(return_: *mut pxr_TfToken_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_IsValidIdentifier(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetChildPath(return_: *mut *mut pxr_SdfPath_t, parent_path: *const pxr_SdfPath_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_RelationshipChildPolicy_GetChildrenToken(return_: *mut pxr_TfToken_t, parent_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetParentPath(return_: *mut *mut pxr_SdfPath_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetFieldValue(return_: *mut pxr_TfToken_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_IsValidIdentifier(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetChildPath(return_: *mut *mut pxr_SdfPath_t, parent_path: *const pxr_SdfPath_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_MapperArgChildPolicy_GetChildrenToken(return_: *mut pxr_TfToken_t, parent_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetParentPath(return_: *mut *mut pxr_SdfPath_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetFieldValue(return_: *mut pxr_TfToken_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_IsValidIdentifier(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetChildPath(return_: *mut *mut pxr_SdfPath_t, parent_path: *const pxr_SdfPath_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_ExpressionChildPolicy_GetChildrenToken(return_: *mut pxr_TfToken_t, parent_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetParentPath(return_: *mut *mut pxr_SdfPath_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetFieldValue(return_: *mut pxr_TfToken_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_IsValidIdentifier(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetChildPath(return_: *mut *mut pxr_SdfPath_t, parent_path: *const pxr_SdfPath_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_VariantChildPolicy_GetChildrenToken(return_: *mut pxr_TfToken_t, parent_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetParentPath(return_: *mut *mut pxr_SdfPath_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetFieldValue(return_: *mut pxr_TfToken_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_IsValidIdentifier(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetChildPath(return_: *mut *mut pxr_SdfPath_t, parent_path: *const pxr_SdfPath_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_VariantSetChildPolicy_GetChildrenToken(return_: *mut pxr_TfToken_t, parent_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_GetParentPath(return_: *mut *mut pxr_SdfPath_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_IsValidIdentifier(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_MapperChildPolicy_GetChildrenToken(return_: *mut pxr_TfToken_t, parent_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_GetParentPath(return_: *mut *mut pxr_SdfPath_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_IsValidIdentifier(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_AttributeConnectionChildPolicy_GetChildrenToken(return_: *mut pxr_TfToken_t, parent_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_GetParentPath(return_: *mut *mut pxr_SdfPath_t, child_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_IsValidIdentifier(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_RelationshipTargetChildPolicy_GetChildrenToken(return_: *mut pxr_TfToken_t, parent_path: *const pxr_SdfPath_t) -> Exception;


} // extern "C"
