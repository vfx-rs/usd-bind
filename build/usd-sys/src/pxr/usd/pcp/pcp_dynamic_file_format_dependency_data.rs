#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_ctor(this_: *mut *mut pxr_PcpDynamicFileFormatDependencyData_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_copy(this_: *mut *mut pxr_PcpDynamicFileFormatDependencyData_t, rhs: *const pxr_PcpDynamicFileFormatDependencyData_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData__assign(this_: *mut pxr_PcpDynamicFileFormatDependencyData_t, return_: *mut *mut pxr_PcpDynamicFileFormatDependencyData_t, rhs: *const pxr_PcpDynamicFileFormatDependencyData_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_Swap(this_: *mut pxr_PcpDynamicFileFormatDependencyData_t, rhs: *mut pxr_PcpDynamicFileFormatDependencyData_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_swap(this_: *mut pxr_PcpDynamicFileFormatDependencyData_t, rhs: *mut pxr_PcpDynamicFileFormatDependencyData_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_IsEmpty(this_: *const pxr_PcpDynamicFileFormatDependencyData_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_CanFieldChangeAffectFileFormatArguments(this_: *const pxr_PcpDynamicFileFormatDependencyData_t, return_: *mut bool, field_name: *const pxr_TfToken_t, old_value: *const pxr_VtValue_t, new_value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_dtor(this_: *mut pxr_PcpDynamicFileFormatDependencyData_t) -> Exception;


} // extern "C"
