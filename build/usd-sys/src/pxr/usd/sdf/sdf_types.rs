#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfValueBlock_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_t {
    _unused: [u8; 0],
}

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____SdfSpecType_e(pub u32);
pub const pxr_SdfSpecType_SdfSpecTypeUnknown: pxrInternal_v0_21__pxrReserved____SdfSpecType_e = pxrInternal_v0_21__pxrReserved____SdfSpecType_e(0);
pub const pxr_SdfSpecType_SdfSpecTypeAttribute: pxrInternal_v0_21__pxrReserved____SdfSpecType_e = pxrInternal_v0_21__pxrReserved____SdfSpecType_e(1);
pub const pxr_SdfSpecType_SdfSpecTypeConnection: pxrInternal_v0_21__pxrReserved____SdfSpecType_e = pxrInternal_v0_21__pxrReserved____SdfSpecType_e(2);
pub const pxr_SdfSpecType_SdfSpecTypeExpression: pxrInternal_v0_21__pxrReserved____SdfSpecType_e = pxrInternal_v0_21__pxrReserved____SdfSpecType_e(3);
pub const pxr_SdfSpecType_SdfSpecTypeMapper: pxrInternal_v0_21__pxrReserved____SdfSpecType_e = pxrInternal_v0_21__pxrReserved____SdfSpecType_e(4);
pub const pxr_SdfSpecType_SdfSpecTypeMapperArg: pxrInternal_v0_21__pxrReserved____SdfSpecType_e = pxrInternal_v0_21__pxrReserved____SdfSpecType_e(5);
pub const pxr_SdfSpecType_SdfSpecTypePrim: pxrInternal_v0_21__pxrReserved____SdfSpecType_e = pxrInternal_v0_21__pxrReserved____SdfSpecType_e(6);
pub const pxr_SdfSpecType_SdfSpecTypePseudoRoot: pxrInternal_v0_21__pxrReserved____SdfSpecType_e = pxrInternal_v0_21__pxrReserved____SdfSpecType_e(7);
pub const pxr_SdfSpecType_SdfSpecTypeRelationship: pxrInternal_v0_21__pxrReserved____SdfSpecType_e = pxrInternal_v0_21__pxrReserved____SdfSpecType_e(8);
pub const pxr_SdfSpecType_SdfSpecTypeRelationshipTarget: pxrInternal_v0_21__pxrReserved____SdfSpecType_e = pxrInternal_v0_21__pxrReserved____SdfSpecType_e(9);
pub const pxr_SdfSpecType_SdfSpecTypeVariant: pxrInternal_v0_21__pxrReserved____SdfSpecType_e = pxrInternal_v0_21__pxrReserved____SdfSpecType_e(10);
pub const pxr_SdfSpecType_SdfSpecTypeVariantSet: pxrInternal_v0_21__pxrReserved____SdfSpecType_e = pxrInternal_v0_21__pxrReserved____SdfSpecType_e(11);
pub const pxr_SdfSpecType_SdfNumSpecTypes: pxrInternal_v0_21__pxrReserved____SdfSpecType_e = pxrInternal_v0_21__pxrReserved____SdfSpecType_e(12);

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____SdfSpecifier_e(pub u32);
pub const pxr_SdfSpecifier_SdfSpecifierDef: pxrInternal_v0_21__pxrReserved____SdfSpecifier_e = pxrInternal_v0_21__pxrReserved____SdfSpecifier_e(0);
pub const pxr_SdfSpecifier_SdfSpecifierOver: pxrInternal_v0_21__pxrReserved____SdfSpecifier_e = pxrInternal_v0_21__pxrReserved____SdfSpecifier_e(1);
pub const pxr_SdfSpecifier_SdfSpecifierClass: pxrInternal_v0_21__pxrReserved____SdfSpecifier_e = pxrInternal_v0_21__pxrReserved____SdfSpecifier_e(2);
pub const pxr_SdfSpecifier_SdfNumSpecifiers: pxrInternal_v0_21__pxrReserved____SdfSpecifier_e = pxrInternal_v0_21__pxrReserved____SdfSpecifier_e(3);

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPermission_e(pub u32);
pub const pxr_SdfPermission_SdfPermissionPublic: pxrInternal_v0_21__pxrReserved____SdfPermission_e = pxrInternal_v0_21__pxrReserved____SdfPermission_e(0);
pub const pxr_SdfPermission_SdfPermissionPrivate: pxrInternal_v0_21__pxrReserved____SdfPermission_e = pxrInternal_v0_21__pxrReserved____SdfPermission_e(1);
pub const pxr_SdfPermission_SdfNumPermissions: pxrInternal_v0_21__pxrReserved____SdfPermission_e = pxrInternal_v0_21__pxrReserved____SdfPermission_e(2);

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____SdfVariability_e(pub u32);
pub const pxr_SdfVariability_SdfVariabilityVarying: pxrInternal_v0_21__pxrReserved____SdfVariability_e = pxrInternal_v0_21__pxrReserved____SdfVariability_e(0);
pub const pxr_SdfVariability_SdfVariabilityUniform: pxrInternal_v0_21__pxrReserved____SdfVariability_e = pxrInternal_v0_21__pxrReserved____SdfVariability_e(1);
pub const pxr_SdfVariability_SdfNumVariabilities: pxrInternal_v0_21__pxrReserved____SdfVariability_e = pxrInternal_v0_21__pxrReserved____SdfVariability_e(2);

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____SdfAuthoringError_e(pub u32);
pub const pxr_SdfAuthoringError_SdfAuthoringErrorUnrecognizedFields: pxrInternal_v0_21__pxrReserved____SdfAuthoringError_e = pxrInternal_v0_21__pxrReserved____SdfAuthoringError_e(0);
pub const pxr_SdfAuthoringError_SdfAuthoringErrorUnrecognizedSpecType: pxrInternal_v0_21__pxrReserved____SdfAuthoringError_e = pxrInternal_v0_21__pxrReserved____SdfAuthoringError_e(1);


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_ctor(this_: *mut *mut pxr_SdfUnregisteredValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_ctor_1(this_: *mut *mut pxr_SdfUnregisteredValue_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_ctor_2(this_: *mut *mut pxr_SdfUnregisteredValue_t, value: *const pxr_VtDictionary_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_GetValue(this_: *const pxr_SdfUnregisteredValue_t, return_: *mut *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue__eq(this_: *const pxr_SdfUnregisteredValue_t, return_: *mut bool, other: *const pxr_SdfUnregisteredValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_copy(this_: *mut *mut pxr_SdfUnregisteredValue_t, rhs: *const pxr_SdfUnregisteredValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue__assign(this_: *mut pxr_SdfUnregisteredValue_t, return_: *mut *mut pxr_SdfUnregisteredValue_t, rhs: *const pxr_SdfUnregisteredValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_dtor(this_: *mut pxr_SdfUnregisteredValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_dtor(this_: *mut pxr_Sdf_ValueTypeNamesType_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_GetSerializationName(this_: *const pxr_Sdf_ValueTypeNamesType_t, return_: *mut pxr_TfToken_t, rhs: *const pxr_SdfValueTypeName_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_GetSerializationName_1(this_: *const pxr_Sdf_ValueTypeNamesType_t, return_: *mut pxr_TfToken_t, rhs: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_ValueTypeNamesType_GetSerializationName_2(this_: *const pxr_Sdf_ValueTypeNamesType_t, return_: *mut pxr_TfToken_t, rhs: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueBlock__eq(this_: *const pxr_SdfValueBlock_t, return_: *mut bool, block: *const pxr_SdfValueBlock_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueBlock__ne(this_: *const pxr_SdfValueBlock_t, return_: *mut bool, block: *const pxr_SdfValueBlock_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_ctor(this_: *mut *mut pxr_SdfHumanReadableValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_ctor_1(this_: *mut *mut pxr_SdfHumanReadableValue_t, text: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue__eq(this_: *const pxr_SdfHumanReadableValue_t, return_: *mut bool, other: *const pxr_SdfHumanReadableValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue__ne(this_: *const pxr_SdfHumanReadableValue_t, return_: *mut bool, other: *const pxr_SdfHumanReadableValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_GetText(this_: *const pxr_SdfHumanReadableValue_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_copy(this_: *mut *mut pxr_SdfHumanReadableValue_t, rhs: *const pxr_SdfHumanReadableValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue__assign(this_: *mut pxr_SdfHumanReadableValue_t, return_: *mut *mut pxr_SdfHumanReadableValue_t, rhs: *const pxr_SdfHumanReadableValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_dtor(this_: *mut pxr_SdfHumanReadableValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___SdfIsDefiningSpecifier(return_: *mut bool, spec: pxr_SdfSpecifier) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___SdfValueHasValidType(return_: *mut bool, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___SdfGetTypeForValueTypeName(return_: *mut *mut pxr_TfType_t, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___SdfGetValueTypeNameForValue(return_: *mut pxr_SdfValueTypeName_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___SdfGetRoleNameForValueTypeName(return_: *mut pxr_TfToken_t, type_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___SdfConvertToValidMetadataDictionary(return_: *mut bool, dict: *mut pxr_VtDictionary_t, err_msg: *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___hash_value_8(return_: *mut usize, hrval: *const pxr_SdfHumanReadableValue_t) -> Exception;


} // extern "C"
