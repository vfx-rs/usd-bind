#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArDefaultResolver_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____ArDefaultResolver_ctor(this_: *mut *mut pxr_ArDefaultResolver_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArDefaultResolver_dtor(this_: *mut pxr_ArDefaultResolver_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArDefaultResolver_SetDefaultSearchPath(search_path: *const std_vector_string_t) -> Exception;


} // extern "C"
