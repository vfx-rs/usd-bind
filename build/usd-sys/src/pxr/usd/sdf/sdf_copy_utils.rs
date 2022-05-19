#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit__eq(this_: *const pxr_SdfCopySpecsValueEdit_t, return_: *mut bool, rhs: *const pxr_SdfCopySpecsValueEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit__ne(this_: *const pxr_SdfCopySpecsValueEdit_t, return_: *mut bool, rhs: *const pxr_SdfCopySpecsValueEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit_copy(this_: *mut *mut pxr_SdfCopySpecsValueEdit_t, rhs: *const pxr_SdfCopySpecsValueEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit__assign(this_: *mut pxr_SdfCopySpecsValueEdit_t, return_: *mut *mut pxr_SdfCopySpecsValueEdit_t, rhs: *const pxr_SdfCopySpecsValueEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___SdfCopySpec(return_: *mut bool, src_layer: *const pxr_SdfLayerHandle_t, src_path: *const pxr_SdfPath_t, dst_layer: *const pxr_SdfLayerHandle_t, dst_path: *const pxr_SdfPath_t) -> Exception;


} // extern "C"
