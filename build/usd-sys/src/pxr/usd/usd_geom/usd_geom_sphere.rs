#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____UsdGeomSphere_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsConcrete(this_: *const pxr_UsdGeomSphere_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsTyped(this_: *const pxr_UsdGeomSphere_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsAPISchema(this_: *const pxr_UsdGeomSphere_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsAppliedAPISchema(this_: *const pxr_UsdGeomSphere_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsMultipleApplyAPISchema(this_: *const pxr_UsdGeomSphere_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomSphere_Define(return_: *mut *mut pxr_UsdGeomSphere_t, stage: *const pxr_UsdStagePtr_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomSphere_copy(this_: *mut *mut pxr_UsdGeomSphere_t, rhs: *const pxr_UsdGeomSphere_t) -> Exception;


} // extern "C"
