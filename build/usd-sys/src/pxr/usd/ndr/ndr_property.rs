#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____NdrProperty_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____NdrProperty_dtor(this_: *mut pxr_NdrProperty_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrProperty_GetName(this_: *const pxr_NdrProperty_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrProperty_GetType(this_: *const pxr_NdrProperty_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrProperty_GetDefaultValue(this_: *const pxr_NdrProperty_t, return_: *mut *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrProperty_IsOutput(this_: *const pxr_NdrProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrProperty_IsArray(this_: *const pxr_NdrProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrProperty_IsDynamicArray(this_: *const pxr_NdrProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrProperty_GetArraySize(this_: *const pxr_NdrProperty_t, return_: *mut c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrProperty_GetInfoString(this_: *const pxr_NdrProperty_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrProperty_IsConnectable(this_: *const pxr_NdrProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrProperty_CanConnectTo(this_: *const pxr_NdrProperty_t, return_: *mut bool, other: *const pxr_NdrProperty_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrProperty_GetDefaultValueAsSdfType(this_: *const pxr_NdrProperty_t, return_: *mut *const pxr_VtValue_t) -> Exception;


} // extern "C"
