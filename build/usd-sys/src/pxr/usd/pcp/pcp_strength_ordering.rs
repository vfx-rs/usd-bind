#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;



extern "C" {

pub fn pxrInternal_v0_21__pxrReserved___PcpCompareSiblingNodeStrength(return_: *mut c_int, a: *const pxr_PcpNodeRef_t, b: *const pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpCompareNodeStrength(return_: *mut c_int, a: *const pxr_PcpNodeRef_t, b: *const pxr_PcpNodeRef_t) -> Exception;


} // extern "C"
