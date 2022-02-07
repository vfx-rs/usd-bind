#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpInstanceKey_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpInstanceKey_ctor(this_: *mut *mut pxr_PcpInstanceKey_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpInstanceKey_ctor_1(this_: *mut *mut pxr_PcpInstanceKey_t, prim_index: *const pxr_PcpPrimIndex_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpInstanceKey__eq(this_: *const pxr_PcpInstanceKey_t, return_: *mut bool, rhs: *const pxr_PcpInstanceKey_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpInstanceKey__ne(this_: *const pxr_PcpInstanceKey_t, return_: *mut bool, rhs: *const pxr_PcpInstanceKey_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpInstanceKey_GetString(this_: *const pxr_PcpInstanceKey_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpInstanceKey_copy(this_: *mut *mut pxr_PcpInstanceKey_t, rhs: *const pxr_PcpInstanceKey_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpInstanceKey__assign(this_: *mut pxr_PcpInstanceKey_t, return_: *mut *mut pxr_PcpInstanceKey_t, rhs: *const pxr_PcpInstanceKey_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpInstanceKey_dtor(this_: *mut pxr_PcpInstanceKey_t) -> Exception;


} // extern "C"
