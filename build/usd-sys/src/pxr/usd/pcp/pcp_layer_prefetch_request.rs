#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest_copy(this_: *mut *mut pxr_PcpLayerPrefetchRequest_t, rhs: *const pxr_PcpLayerPrefetchRequest_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest__assign(this_: *mut pxr_PcpLayerPrefetchRequest_t, return_: *mut *mut pxr_PcpLayerPrefetchRequest_t, rhs: *const pxr_PcpLayerPrefetchRequest_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest_dtor(this_: *mut pxr_PcpLayerPrefetchRequest_t) -> Exception;


} // extern "C"
