#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfSite_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfSite_ctor(this_: *mut *mut pxr_SdfSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSite_ctor_1(this_: *mut *mut pxr_SdfSite_t, layer_: *const pxr_SdfLayerHandle_t, path_: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSite__eq(this_: *const pxr_SdfSite_t, return_: *mut bool, other: *const pxr_SdfSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSite_operator_(this_: *const pxr_SdfSite_t, return_: *mut bool, other: *const pxr_SdfSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSite_operatorbool(this_: *const pxr_SdfSite_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSite_copy(this_: *mut *mut pxr_SdfSite_t, rhs: *const pxr_SdfSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSite__assign(this_: *mut pxr_SdfSite_t, return_: *mut *mut pxr_SdfSite_t, rhs: *const pxr_SdfSite_t) -> Exception;


} // extern "C"
