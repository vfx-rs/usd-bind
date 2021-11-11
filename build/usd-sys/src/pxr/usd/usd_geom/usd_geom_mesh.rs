#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____UsdGeomMesh_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsConcrete(this_: *const pxr_UsdGeomMesh_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsTyped(this_: *const pxr_UsdGeomMesh_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsAPISchema(this_: *const pxr_UsdGeomMesh_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsAppliedAPISchema(this_: *const pxr_UsdGeomMesh_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsMultipleApplyAPISchema(this_: *const pxr_UsdGeomMesh_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomMesh_GetPrim(this_: *const pxr_UsdGeomMesh_t, return_: *mut *mut pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomMesh_GetPath(this_: *const pxr_UsdGeomMesh_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomMesh_ComputeLocalToWorldTransform(this_: *const pxr_UsdGeomMesh_t, return_: *mut pxr_GfMatrix4d_t, time: *const pxr_UsdTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomMesh_from_prim(this_: *mut *mut pxr_UsdGeomMesh_t, prim: *const pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomMesh_dtor(this_: *mut pxr_UsdGeomMesh_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomMesh_copy(this_: *mut *mut pxr_UsdGeomMesh_t, rhs: *const pxr_UsdGeomMesh_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdGeomMesh__assign(this_: *mut pxr_UsdGeomMesh_t, return_: *mut *mut pxr_UsdGeomMesh_t, rhs: *const pxr_UsdGeomMesh_t) -> Exception;


} // extern "C"
