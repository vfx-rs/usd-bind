#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfLayer_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetCurrentCount(this_: *const pxr_SdfLayer_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_IsUnique(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_dtor(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_IsAnonymous(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_IsAnonymousLayerIdentifier(return_: *mut bool, identifier: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetDisplayNameFromIdentifier(return_: *mut *mut std_string_t, identifier: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_Save(this_: *const pxr_SdfLayer_t, return_: *mut bool, force: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetDisplayName(this_: *const pxr_SdfLayer_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetRealPath(this_: *const pxr_SdfLayer_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetFileExtension(this_: *const pxr_SdfLayer_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetVersion(this_: *const pxr_SdfLayer_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetRepositoryPath(this_: *const pxr_SdfLayer_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetAssetName(this_: *const pxr_SdfLayer_t, return_: *mut *const std_string_t) -> Exception;


} // extern "C"
