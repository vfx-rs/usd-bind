#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfLayerTree_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetCurrentCount(this_: *const pxr_SdfLayerTree_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerTree_IsUnique(this_: *const pxr_SdfLayerTree_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerTree_SetShouldInvokeUniqueChangedListener(this_: *mut pxr_SdfLayerTree_t, should_call: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerTree_EnableNotification2(this_: *const pxr_SdfLayerTree_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetUniqueIdentifier(this_: *const pxr_SdfLayerTree_t, return_: *mut *const c_void) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetLayer(this_: *const pxr_SdfLayerTree_t, return_: *mut *const pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetOffset(this_: *const pxr_SdfLayerTree_t, return_: *mut *const pxr_SdfLayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerTree_dtor(this_: *mut pxr_SdfLayerTree_t) -> Exception;


} // extern "C"
