#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____NdrParserPlugin_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____NdrParserPlugin_dtor(this_: *mut pxr_NdrParserPlugin_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrParserPlugin_GetSourceType(this_: *const pxr_NdrParserPlugin_t, return_: *mut *const pxr_TfToken_t) -> Exception;


} // extern "C"
