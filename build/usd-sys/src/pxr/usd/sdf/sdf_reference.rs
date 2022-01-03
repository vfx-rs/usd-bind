#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfReference_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_ctor(this_: *mut *mut pxr_SdfReference_t, asset_path: *const std_string_t, prim_path: *const pxr_SdfPath_t, layer_offset: *const pxr_SdfLayerOffset_t, custom_data: *const pxr_VtDictionary_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfReference_dtor(this_: *mut pxr_SdfReference_t) -> Exception;


} // extern "C"
