#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Pcp_PropertyInfo_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_ctor(this_: *mut *mut pxr_PcpPropertyIndex_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_copy(this_: *mut *mut pxr_PcpPropertyIndex_t, rhs: *const pxr_PcpPropertyIndex_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_Swap(this_: *mut pxr_PcpPropertyIndex_t, index: *mut pxr_PcpPropertyIndex_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_IsEmpty(this_: *const pxr_PcpPropertyIndex_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_GetNumLocalSpecs(this_: *const pxr_PcpPropertyIndex_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_dtor(this_: *mut pxr_PcpPropertyIndex_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Pcp_PropertyInfo_ctor(this_: *mut *mut pxr_Pcp_PropertyInfo_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Pcp_PropertyInfo__assign(this_: *mut pxr_Pcp_PropertyInfo_t, return_: *mut *mut pxr_Pcp_PropertyInfo_t, rhs: *const pxr_Pcp_PropertyInfo_t) -> Exception;


} // extern "C"
