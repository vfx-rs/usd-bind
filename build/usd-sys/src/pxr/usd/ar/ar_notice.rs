#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArNotice_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArNotice__ResolverNotice_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____ArNotice__ResolverNotice_dtor(this_: *mut pxr_ArNotice_ResolverNotice_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_ctor(this_: *mut *mut pxr_ArNotice_ResolverChanged_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_dtor(this_: *mut pxr_ArNotice_ResolverChanged_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArNotice__ResolverChanged_AffectsContext(this_: *const pxr_ArNotice_ResolverChanged_t, return_: *mut bool, ctx: *const pxr_ArResolverContext_t) -> Exception;


} // extern "C"
