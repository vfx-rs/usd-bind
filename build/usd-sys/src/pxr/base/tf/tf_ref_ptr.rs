#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__copy(this_: *mut *mut pxr_UsdStageRefPtr_t, p: *const pxr_UsdStageRefPtr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__dtor(this_: *mut pxr_UsdStageRefPtr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__deref(this_: *const pxr_UsdStageRefPtr_t, return_: *mut *mut pxr_UsdStage_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__is_null(this_: *const pxr_UsdStageRefPtr_t, return_: *mut bool) -> Exception;


} // extern "C"
