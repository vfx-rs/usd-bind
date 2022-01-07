#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_ctor(this_: *mut *mut pxr_ArDefaultResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_ctor_1(this_: *mut *mut pxr_ArDefaultResolverContext_t, search_path: *const std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_operator_(this_: *const pxr_ArDefaultResolverContext_t, return_: *mut bool, rhs: *const pxr_ArDefaultResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext__eq(this_: *const pxr_ArDefaultResolverContext_t, return_: *mut bool, rhs: *const pxr_ArDefaultResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext__ne(this_: *const pxr_ArDefaultResolverContext_t, return_: *mut bool, rhs: *const pxr_ArDefaultResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_GetSearchPath(this_: *const pxr_ArDefaultResolverContext_t, return_: *mut *const std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArDefaultResolverContext_GetAsString(this_: *const pxr_ArDefaultResolverContext_t, return_: *mut *mut std_string_t) -> Exception;


} // extern "C"
