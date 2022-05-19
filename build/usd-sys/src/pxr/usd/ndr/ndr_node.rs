#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____NdrNode_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____NdrNode_dtor(this_: *mut pxr_NdrNode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrNode_GetIdentifier(this_: *const pxr_NdrNode_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrNode_GetName(this_: *const pxr_NdrNode_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrNode_GetFamily(this_: *const pxr_NdrNode_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrNode_GetContext(this_: *const pxr_NdrNode_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrNode_GetSourceType(this_: *const pxr_NdrNode_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrNode_GetResolvedDefinitionURI(this_: *const pxr_NdrNode_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrNode_GetResolvedImplementationURI(this_: *const pxr_NdrNode_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrNode_GetSourceCode(this_: *const pxr_NdrNode_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrNode_IsValid(this_: *const pxr_NdrNode_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrNode_GetInfoString(this_: *const pxr_NdrNode_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrNode_GetInput(this_: *const pxr_NdrNode_t, return_: *mut *const pxr_NdrProperty_t, input_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrNode_GetOutput(this_: *const pxr_NdrNode_t, return_: *mut *const pxr_NdrProperty_t, output_name: *const pxr_TfToken_t) -> Exception;


} // extern "C"
