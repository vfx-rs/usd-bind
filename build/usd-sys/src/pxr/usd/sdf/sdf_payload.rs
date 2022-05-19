#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPayload_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfPayload_ctor(this_: *mut *mut pxr_SdfPayload_t, asset_path: *const std_string_t, prim_path: *const pxr_SdfPath_t, layer_offset: *const pxr_SdfLayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPayload_GetAssetPath(this_: *const pxr_SdfPayload_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPayload_SetAssetPath(this_: *mut pxr_SdfPayload_t, asset_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPayload_GetPrimPath(this_: *const pxr_SdfPayload_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPayload_SetPrimPath(this_: *mut pxr_SdfPayload_t, prim_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPayload_GetLayerOffset(this_: *const pxr_SdfPayload_t, return_: *mut *const pxr_SdfLayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPayload_SetLayerOffset(this_: *mut pxr_SdfPayload_t, layer_offset: *const pxr_SdfLayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPayload__eq(this_: *const pxr_SdfPayload_t, return_: *mut bool, rhs: *const pxr_SdfPayload_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPayload_operator_(this_: *const pxr_SdfPayload_t, return_: *mut bool, rhs: *const pxr_SdfPayload_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPayload_copy(this_: *mut *mut pxr_SdfPayload_t, rhs: *const pxr_SdfPayload_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPayload__assign(this_: *mut pxr_SdfPayload_t, return_: *mut *mut pxr_SdfPayload_t, rhs: *const pxr_SdfPayload_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPayload_dtor(this_: *mut pxr_SdfPayload_t) -> Exception;


} // extern "C"
