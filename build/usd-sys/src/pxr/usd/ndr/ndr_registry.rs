#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____NdrRegistry_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____NdrRegistry_GetSearchURIs(this_: *const pxr_NdrRegistry_t, return_: *mut *mut std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrRegistry_GetNodeNames(this_: *const pxr_NdrRegistry_t, return_: *mut *mut std_vector_string_t, family: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrRegistry_GetNodeByIdentifierAndType(this_: *mut pxr_NdrRegistry_t, return_: *mut *const pxr_NdrNode_t, identifier: *const pxr_TfToken_t, source_type: *const pxr_TfToken_t) -> Exception;


} // extern "C"
