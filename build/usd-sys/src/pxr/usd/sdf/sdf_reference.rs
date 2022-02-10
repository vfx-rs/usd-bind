#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfReference_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfReference__IdentityEqual_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfReference__IdentityLessThan_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_ctor(this_: *mut *mut pxr_SdfReference_t, asset_path: *const std_string_t, prim_path: *const pxr_SdfPath_t, layer_offset: *const pxr_SdfLayerOffset_t, custom_data: *const pxr_VtDictionary_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_GetAssetPath(this_: *const pxr_SdfReference_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_SetAssetPath(this_: *mut pxr_SdfReference_t, asset_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_GetPrimPath(this_: *const pxr_SdfReference_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_SetPrimPath(this_: *mut pxr_SdfReference_t, prim_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_GetLayerOffset(this_: *const pxr_SdfReference_t, return_: *mut *const pxr_SdfLayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_SetLayerOffset(this_: *mut pxr_SdfReference_t, layer_offset: *const pxr_SdfLayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_GetCustomData(this_: *const pxr_SdfReference_t, return_: *mut *const pxr_VtDictionary_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_SetCustomData(this_: *mut pxr_SdfReference_t, custom_data: *const pxr_VtDictionary_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_SetCustomData_1(this_: *mut pxr_SdfReference_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_SwapCustomData(this_: *mut pxr_SdfReference_t, custom_data: *mut pxr_VtDictionary_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_IsInternal(this_: *const pxr_SdfReference_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference__eq(this_: *const pxr_SdfReference_t, return_: *mut bool, rhs: *const pxr_SdfReference_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_operator_(this_: *const pxr_SdfReference_t, return_: *mut bool, rhs: *const pxr_SdfReference_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_copy(this_: *mut *mut pxr_SdfReference_t, rhs: *const pxr_SdfReference_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference__assign(this_: *mut pxr_SdfReference_t, return_: *mut *mut pxr_SdfReference_t, rhs: *const pxr_SdfReference_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_dtor(this_: *mut pxr_SdfReference_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference__IdentityEqual__op_call(this_: *const pxr_SdfReference_IdentityEqual_t, return_: *mut bool, lhs: *const pxr_SdfReference_t, rhs: *const pxr_SdfReference_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference__IdentityLessThan__op_call(this_: *const pxr_SdfReference_IdentityLessThan_t, return_: *mut bool, lhs: *const pxr_SdfReference_t, rhs: *const pxr_SdfReference_t) -> Exception;


} // extern "C"
