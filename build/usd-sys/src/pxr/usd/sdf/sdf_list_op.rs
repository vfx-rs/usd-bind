#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____SdfListOpType_e(pub u32);
pub const pxr_SdfListOpType_SdfListOpTypeExplicit: pxrInternal_v0_21__pxrReserved____SdfListOpType_e = pxrInternal_v0_21__pxrReserved____SdfListOpType_e(0);
pub const pxr_SdfListOpType_SdfListOpTypeAdded: pxrInternal_v0_21__pxrReserved____SdfListOpType_e = pxrInternal_v0_21__pxrReserved____SdfListOpType_e(1);
pub const pxr_SdfListOpType_SdfListOpTypeDeleted: pxrInternal_v0_21__pxrReserved____SdfListOpType_e = pxrInternal_v0_21__pxrReserved____SdfListOpType_e(2);
pub const pxr_SdfListOpType_SdfListOpTypeOrdered: pxrInternal_v0_21__pxrReserved____SdfListOpType_e = pxrInternal_v0_21__pxrReserved____SdfListOpType_e(3);
pub const pxr_SdfListOpType_SdfListOpTypePrepended: pxrInternal_v0_21__pxrReserved____SdfListOpType_e = pxrInternal_v0_21__pxrReserved____SdfListOpType_e(4);
pub const pxr_SdfListOpType_SdfListOpTypeAppended: pxrInternal_v0_21__pxrReserved____SdfListOpType_e = pxrInternal_v0_21__pxrReserved____SdfListOpType_e(5);


extern "C" {


} // extern "C"
