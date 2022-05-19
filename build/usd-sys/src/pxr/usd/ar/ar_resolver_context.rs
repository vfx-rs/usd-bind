#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArResolverContext_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____ArResolverContext_ctor(this_: *mut *mut pxr_ArResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolverContext_IsEmpty(this_: *const pxr_ArResolverContext_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolverContext_GetDebugString(this_: *const pxr_ArResolverContext_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolverContext__eq(this_: *const pxr_ArResolverContext_t, return_: *mut bool, rhs: *const pxr_ArResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolverContext__ne(this_: *const pxr_ArResolverContext_t, return_: *mut bool, rhs: *const pxr_ArResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolverContext_lt(this_: *const pxr_ArResolverContext_t, return_: *mut bool, rhs: *const pxr_ArResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolverContext_copy(this_: *mut *mut pxr_ArResolverContext_t, rhs: *const pxr_ArResolverContext_t) -> Exception;


} // extern "C"
