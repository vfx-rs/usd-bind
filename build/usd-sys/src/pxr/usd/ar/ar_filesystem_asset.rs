#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_GetSize(this_: *const pxr_ArFilesystemAsset_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_Read(this_: *const pxr_ArFilesystemAsset_t, return_: *mut usize, buffer: *mut c_void, count: usize, offset: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArFilesystemAsset_dtor(this_: *mut pxr_ArFilesystemAsset_t) -> Exception;


} // extern "C"
