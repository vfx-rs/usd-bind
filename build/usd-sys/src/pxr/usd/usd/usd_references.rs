#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____UsdReferences_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____UsdReferences_AddReference(this_: *mut pxr_UsdReferences_t, return_: *mut bool, identifier: *const std_string_t, prim_path: *const pxr_SdfPath_t, layer_offset: *const pxr_SdfLayerOffset_t, position: pxr_UsdListPosition) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdReferences_RemoveReference(this_: *mut pxr_UsdReferences_t, return_: *mut bool, ref_: *const pxr_SdfReference_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdReferences_ClearReferences(this_: *mut pxr_UsdReferences_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdReferences_copy(this_: *mut *mut pxr_UsdReferences_t, rhs: *const pxr_UsdReferences_t) -> Exception;


} // extern "C"
