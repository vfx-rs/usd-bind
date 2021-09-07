#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_20__pxrReserved____UsdStage_t {
    _unused: [u8; 0],
}

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_20__pxrReserved____UsdStage__InitialLoadSet_e(pub u32);
pub const pxr_UsdStage_InitialLoadSet_LoadAll: pxrInternal_v0_20__pxrReserved____UsdStage__InitialLoadSet_e = pxrInternal_v0_20__pxrReserved____UsdStage__InitialLoadSet_e(0);
pub const pxr_UsdStage_InitialLoadSet_LoadNone: pxrInternal_v0_20__pxrReserved____UsdStage__InitialLoadSet_e = pxrInternal_v0_20__pxrReserved____UsdStage__InitialLoadSet_e(1);


extern "C" {

pub fn pxrInternal_v0_20__pxrReserved____UsdStage_CreateNew(return_: *mut *mut pxr_UsdStageRefPtr_t, identifier: *const std_string_t, load: pxr_UsdStage_InitialLoadSet) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdStage_Open(return_: *mut *mut pxr_UsdStageRefPtr_t, file_path: *const std_string_t, load: pxr_UsdStage_InitialLoadSet) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdStage_GetDefaultPrim(this_: *const pxr_UsdStage_t, return_: *mut *mut pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdStage_HasDefaultPrim(this_: *const pxr_UsdStage_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdStage_Traverse(this_: *mut pxr_UsdStage_t, return_: *mut *mut pxr_UsdPrimRange_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdStage_GetSessionLayer(this_: *const pxr_UsdStage_t, return_: *mut *mut pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdStage_GetRootLayer(this_: *const pxr_UsdStage_t, return_: *mut *mut pxr_SdfLayerHandle_t) -> Exception;


} // extern "C"
