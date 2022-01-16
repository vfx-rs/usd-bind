#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____NdrDiscoveryPluginContext_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____NdrDiscoveryPlugin_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____NdrDiscoveryPluginContext_GetSourceType(this_: *const pxr_NdrDiscoveryPluginContext_t, return_: *mut pxr_TfToken_t, discovery_type: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrDiscoveryPlugin_dtor(this_: *mut pxr_NdrDiscoveryPlugin_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____NdrDiscoveryPlugin_GetSearchURIs(this_: *const pxr_NdrDiscoveryPlugin_t, return_: *mut *const std_vector_string_t) -> Exception;


} // extern "C"
