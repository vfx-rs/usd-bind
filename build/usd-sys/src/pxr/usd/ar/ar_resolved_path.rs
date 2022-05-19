#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArResolvedPath_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____ArResolvedPath_ctor(this_: *mut *mut pxr_ArResolvedPath_t, resolved_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolvedPath_ctor_1(this_: *mut *mut pxr_ArResolvedPath_t, resolved_path: *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolvedPath_ctor_2(this_: *mut *mut pxr_ArResolvedPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolvedPath_copy(this_: *mut *mut pxr_ArResolvedPath_t, rhs: *const pxr_ArResolvedPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolvedPath_move(this_: *mut *mut pxr_ArResolvedPath_t, rhs: *mut pxr_ArResolvedPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolvedPath_GetHash(this_: *const pxr_ArResolvedPath_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolvedPath_IsEmpty(this_: *const pxr_ArResolvedPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolvedPath_empty(this_: *const pxr_ArResolvedPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolvedPath_GetPathString(this_: *const pxr_ArResolvedPath_t, return_: *mut *const std_string_t) -> Exception;


} // extern "C"
