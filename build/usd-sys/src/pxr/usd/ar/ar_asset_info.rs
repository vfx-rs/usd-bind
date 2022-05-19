#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArAssetInfo_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn ArAssetInfo_get_version(return_: *mut *mut std_string_t, self_: *mut pxr_ArAssetInfo_t) -> Exception;

pub fn ArAssetInfo_get_assetName(return_: *mut *mut std_string_t, self_: *mut pxr_ArAssetInfo_t) -> Exception;

pub fn ArAssetInfo_get_repoPath(return_: *mut *mut std_string_t, self_: *mut pxr_ArAssetInfo_t) -> Exception;


} // extern "C"
