#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArPackageResolver_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____ArPackageResolver_dtor(this_: *mut pxr_ArPackageResolver_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArPackageResolver_Resolve(this_: *mut pxr_ArPackageResolver_t, return_: *mut *mut std_string_t, resolved_package_path: *const std_string_t, packaged_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArPackageResolver_BeginCacheScope(this_: *mut pxr_ArPackageResolver_t, cache_scope_data: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArPackageResolver_EndCacheScope(this_: *mut pxr_ArPackageResolver_t, cache_scope_data: *mut pxr_VtValue_t) -> Exception;


} // extern "C"
