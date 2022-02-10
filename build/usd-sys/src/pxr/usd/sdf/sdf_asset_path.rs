#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfAssetPath_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfAssetPath__Hash_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfAssetPath_ctor(this_: *mut *mut pxr_SdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAssetPath_from_path(this_: *mut *mut pxr_SdfAssetPath_t, path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAssetPath_from_resolved_path(this_: *mut *mut pxr_SdfAssetPath_t, path: *const std_string_t, resolved_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAssetPath__eq(this_: *const pxr_SdfAssetPath_t, return_: *mut bool, rhs: *const pxr_SdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAssetPath_op_lt(this_: *const pxr_SdfAssetPath_t, return_: *mut bool, rhs: *const pxr_SdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAssetPath_GetHash(this_: *const pxr_SdfAssetPath_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAssetPath_GetAssetPath(this_: *const pxr_SdfAssetPath_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAssetPath_GetResolvedPath(this_: *const pxr_SdfAssetPath_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAssetPath_copy(this_: *mut *mut pxr_SdfAssetPath_t, rhs: *const pxr_SdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAssetPath__assign(this_: *mut pxr_SdfAssetPath_t, return_: *mut *mut pxr_SdfAssetPath_t, rhs: *const pxr_SdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAssetPath_dtor(this_: *mut pxr_SdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAssetPath__Hash__op_call(this_: *const pxr_SdfAssetPath_Hash_t, return_: *mut usize, ap: *const pxr_SdfAssetPath_t) -> Exception;


} // extern "C"
