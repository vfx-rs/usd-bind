#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpArc_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpArc_ctor(this_: *mut *mut pxr_PcpArc_t) -> Exception;

pub fn PxpArc_get_mapToParent(return_: *mut *mut pxr_PcpMapExpression_t, self_: *mut pxr_PcpArc_t) -> Exception;

pub fn PxpArc_get_siblingNumAtOrigin(return_: *mut *mut c_int, self_: *mut pxr_PcpArc_t) -> Exception;

pub fn PxpArc_get_namespaceDepth(return_: *mut *mut c_int, self_: *mut pxr_PcpArc_t) -> Exception;


} // extern "C"
