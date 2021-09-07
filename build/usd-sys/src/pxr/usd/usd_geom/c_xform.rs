#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_20__pxrReserved____UsdGeomXform_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsConcrete(this_: *const pxr_UsdGeomXform_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsTyped(this_: *const pxr_UsdGeomXform_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsAPISchema(this_: *const pxr_UsdGeomXform_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsAppliedAPISchema(this_: *const pxr_UsdGeomXform_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsMultipleApplyAPISchema(this_: *const pxr_UsdGeomXform_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdGeomXform_GetPrim(this_: *const pxr_UsdGeomXform_t, return_: *mut *mut pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdGeomXform_GetPath(this_: *const pxr_UsdGeomXform_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdGeomXform_Define(return_: *mut *mut pxr_UsdGeomXform_t, stage: *const pxr_UsdStagePtr_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdGeomXform_copy(this_: *mut *mut pxr_UsdGeomXform_t, rhs: *const pxr_UsdGeomXform_t) -> Exception;


} // extern "C"
