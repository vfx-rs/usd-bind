#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArWritableAsset_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____ArWritableAsset_dtor(this_: *mut pxr_ArWritableAsset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArWritableAsset_Close(this_: *mut pxr_ArWritableAsset_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArWritableAsset_Write(this_: *mut pxr_ArWritableAsset_t, return_: *mut usize, buffer: *const c_void, count: usize, offset: usize) -> Exception;


} // extern "C"
