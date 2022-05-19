#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____KindRegistry_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____KindRegistry_GetInstance(return_: *mut *mut pxr_KindRegistry_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____KindRegistry_HasKind(return_: *mut bool, kind: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____KindRegistry_GetBaseKind(return_: *mut pxr_TfToken_t, kind: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____KindRegistry_IsA(return_: *mut bool, derived_kind: *const pxr_TfToken_t, base_kind: *const pxr_TfToken_t) -> Exception;


} // extern "C"
