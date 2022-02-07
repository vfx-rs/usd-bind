#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_dtor(this_: *mut pxr_PcpDynamicFileFormatContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatContext_ComposeValue(this_: *const pxr_PcpDynamicFileFormatContext_t, return_: *mut bool, field: *const pxr_TfToken_t, value: *mut pxr_VtValue_t) -> Exception;


} // extern "C"
