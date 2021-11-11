#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____UsdGeomLinearUnits_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved___UsdGeomGetStageUpAxis(return_: *mut pxr_TfToken_t, stage: *const pxr_UsdStagePtr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___UsdGeomSetStageUpAxis(return_: *mut bool, stage: *const pxr_UsdStagePtr_t, axis: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___UsdGeomGetFallbackUpAxis(return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___UsdGeomGetStageMetersPerUnit(return_: *mut c_double, stage: *const pxr_UsdStagePtr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___UsdGeomStageHasAuthoredMetersPerUnit(return_: *mut bool, stage: *const pxr_UsdStagePtr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___UsdGeomSetStageMetersPerUnit(return_: *mut bool, stage: *const pxr_UsdStagePtr_t, meters_per_unit: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___UsdGeomLinearUnitsAre(return_: *mut bool, authored_units: c_double, standard_units: c_double, epsilon: c_double) -> Exception;


} // extern "C"
