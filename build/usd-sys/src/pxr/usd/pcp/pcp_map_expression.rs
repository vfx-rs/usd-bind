#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpMapExpression_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_Evaluate(this_: *const pxr_PcpMapExpression_t, return_: *mut *const pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_ctor(this_: *mut *mut pxr_PcpMapExpression_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_Swap(this_: *mut pxr_PcpMapExpression_t, other: *mut pxr_PcpMapExpression_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_IsNull(this_: *const pxr_PcpMapExpression_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_Identity(return_: *mut *mut pxr_PcpMapExpression_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_Constant(return_: *mut *mut pxr_PcpMapExpression_t, const_value: *const pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_Compose(this_: *const pxr_PcpMapExpression_t, return_: *mut *mut pxr_PcpMapExpression_t, f: *const pxr_PcpMapExpression_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_Inverse(this_: *const pxr_PcpMapExpression_t, return_: *mut *mut pxr_PcpMapExpression_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_AddRootIdentity(this_: *const pxr_PcpMapExpression_t, return_: *mut *mut pxr_PcpMapExpression_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_IsConstantIdentity(this_: *const pxr_PcpMapExpression_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_IsIdentity(this_: *const pxr_PcpMapExpression_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_MapSourceToTarget(this_: *const pxr_PcpMapExpression_t, return_: *mut *mut pxr_SdfPath_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_MapTargetToSource(this_: *const pxr_PcpMapExpression_t, return_: *mut *mut pxr_SdfPath_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_GetTimeOffset(this_: *const pxr_PcpMapExpression_t, return_: *mut *const pxr_SdfLayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_GetString(this_: *const pxr_PcpMapExpression_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_copy(this_: *mut *mut pxr_PcpMapExpression_t, rhs: *const pxr_PcpMapExpression_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression__assign(this_: *mut pxr_PcpMapExpression_t, return_: *mut *mut pxr_PcpMapExpression_t, rhs: *const pxr_PcpMapExpression_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression_dtor(this_: *mut pxr_PcpMapExpression_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_dtor(this_: *mut pxr_PcpMapExpression_Variable_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_GetValue(this_: *const pxr_PcpMapExpression_Variable_t, return_: *mut *const pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_GetExpression(this_: *const pxr_PcpMapExpression_Variable_t, return_: *mut *mut pxr_PcpMapExpression_t) -> Exception;


} // extern "C"
