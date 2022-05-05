#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;



extern "C" {

pub fn pxrInternal_v0_21__pxrReserved___SdfHasField(return_: *mut bool, site: *const pxr_SdfSite_t, field: *const pxr_TfToken_t) -> Exception;


} // extern "C"
