#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsDormant(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetLayer(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *mut pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetPath(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_PermissionToEdit(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetMetaDataDisplayGroup(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut pxr_TfToken_t, key: *const pxr_TfToken_t) -> Exception;


} // extern "C"
