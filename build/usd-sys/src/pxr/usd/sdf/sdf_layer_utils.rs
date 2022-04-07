#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;



extern "C" {

pub fn pxrInternal_v0_21__pxrReserved___SdfComputeAssetPathRelativeToLayer(return_: *mut *mut std_string_t, anchor: *const pxr_SdfLayerHandle_t, asset_path: *const std_string_t) -> Exception;


} // extern "C"
