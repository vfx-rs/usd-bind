#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArTimestamp_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____ArTimestamp_ctor(this_: *mut *mut pxr_ArTimestamp_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArTimestamp_ctor_1(this_: *mut *mut pxr_ArTimestamp_t, time: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArTimestamp_IsValid(this_: *const pxr_ArTimestamp_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArTimestamp_GetTime(this_: *const pxr_ArTimestamp_t, return_: *mut c_double) -> Exception;


} // extern "C"
