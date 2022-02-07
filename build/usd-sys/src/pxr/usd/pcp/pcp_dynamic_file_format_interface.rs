#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_dtor(this_: *mut pxr_PcpDynamicFileFormatInterface_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_ComposeFieldsForFileFormatArguments(this_: *const pxr_PcpDynamicFileFormatInterface_t, asset_path: *const std_string_t, context: *const pxr_PcpDynamicFileFormatContext_t, args: *mut std_map_string_string_t, dependency_context_data: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface_CanFieldChangeAffectFileFormatArguments(this_: *const pxr_PcpDynamicFileFormatInterface_t, return_: *mut bool, field: *const pxr_TfToken_t, old_value: *const pxr_VtValue_t, new_value: *const pxr_VtValue_t, dependency_context_data: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatInterface__assign(this_: *mut pxr_PcpDynamicFileFormatInterface_t, return_: *mut *mut pxr_PcpDynamicFileFormatInterface_t, rhs: *const pxr_PcpDynamicFileFormatInterface_t) -> Exception;


} // extern "C"
