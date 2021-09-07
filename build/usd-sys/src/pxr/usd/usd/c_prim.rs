#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_20__pxrReserved____UsdPrim_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_20__pxrReserved____UsdPrim_IsValid(this_: *const pxr_UsdPrim_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrim_GetStage(this_: *const pxr_UsdPrim_t, return_: *mut *mut pxr_UsdStagePtr_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrim_GetPath(this_: *const pxr_UsdPrim_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrim_GetPrimPath(this_: *const pxr_UsdPrim_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrim_GetPrim(this_: *const pxr_UsdPrim_t, return_: *mut *mut pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrim_GetName(this_: *const pxr_UsdPrim_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrim_ctor(this_: *mut *mut pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrim_GetTypeName(this_: *const pxr_UsdPrim_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrim_copy(this_: *mut *mut pxr_UsdPrim_t, rhs: *const pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrim_dtor(this_: *mut pxr_UsdPrim_t) -> Exception;


} // extern "C"
