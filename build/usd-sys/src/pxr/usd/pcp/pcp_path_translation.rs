#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;



extern "C" {

pub fn pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromRootToNodeUsingFunction(return_: *mut *mut pxr_SdfPath_t, map_to_root: *const pxr_PcpMapFunction_t, path_in_root_namespace: *const pxr_SdfPath_t, path_was_translated: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromNodeToRootUsingFunction(return_: *mut *mut pxr_SdfPath_t, map_to_root: *const pxr_PcpMapFunction_t, path_in_node_namespace: *const pxr_SdfPath_t, path_was_translated: *mut bool) -> Exception;


} // extern "C"
