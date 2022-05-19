#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_Identity_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____Sdf_Identity_GetLayer(this_: *const pxr_Sdf_Identity_t, return_: *mut *const pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_Identity_GetPath(this_: *const pxr_Sdf_Identity_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_ctor(this_: *mut *mut pxr_Sdf_IdentityRegistry_t, layer: *const pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_dtor(this_: *mut pxr_Sdf_IdentityRegistry_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_GetLayer(this_: *const pxr_Sdf_IdentityRegistry_t, return_: *mut *const pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Sdf_IdentityRegistry_MoveIdentity(this_: *mut pxr_Sdf_IdentityRegistry_t, old_path: *const pxr_SdfPath_t, new_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___intrusive_ptr_add_ref(rhs: *mut pxr_Sdf_Identity_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___intrusive_ptr_release(rhs: *mut pxr_Sdf_Identity_t) -> Exception;


} // extern "C"
