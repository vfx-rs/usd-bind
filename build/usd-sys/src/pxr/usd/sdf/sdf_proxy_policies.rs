#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNameKeyPolicy_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNameTokenKeyPolicy_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfNameKeyPolicy_Canonicalize(return_: *mut *const std_string_t, x: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNameKeyPolicy_Canonicalize_1(return_: *mut *const std_vector_string_t, x: *const std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNameTokenKeyPolicy_Canonicalize(return_: *mut *const pxr_TfToken_t, x: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_ctor(this_: *mut *mut pxr_SdfPathKeyPolicy_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_Canonicalize(this_: *const pxr_SdfPathKeyPolicy_t, return_: *mut *mut pxr_SdfPath_t, x: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_Canonicalize_1(this_: *const pxr_SdfPathKeyPolicy_t, return_: *mut *mut std_SdfPathVector_t, x: *const std_SdfPathVector_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy__assign(this_: *mut pxr_SdfPathKeyPolicy_t, return_: *mut *mut pxr_SdfPathKeyPolicy_t, rhs: *const pxr_SdfPathKeyPolicy_t) -> Exception;


} // extern "C"
