#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_ctor(this_: *mut *mut pxr_ArResolverContextBinder_t, context: *const pxr_ArResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_ctor_1(this_: *mut *mut pxr_ArResolverContextBinder_t, asset_resolver: *mut pxr_ArResolver_t, context: *const pxr_ArResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolverContextBinder_dtor(this_: *mut pxr_ArResolverContextBinder_t) -> Exception;


} // extern "C"
