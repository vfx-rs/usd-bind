#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice__Base_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__Base_Send(this_: *const pxr_SdfNotice_Base_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__Base_dtor(this_: *mut pxr_SdfNotice_Base_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__Base_copy(this_: *mut *mut pxr_SdfNotice_Base_t, rhs: *const pxr_SdfNotice_Base_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__Base__assign(this_: *mut pxr_SdfNotice_Base_t, return_: *mut *mut pxr_SdfNotice_Base_t, rhs: *const pxr_SdfNotice_Base_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__Base_ctor(this_: *mut *mut pxr_SdfNotice_Base_t) -> Exception;


} // extern "C"
