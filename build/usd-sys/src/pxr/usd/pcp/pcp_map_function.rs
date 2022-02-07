#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpMapFunction_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_ctor(this_: *mut *mut pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_Identity(return_: *mut *const pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_Swap(this_: *mut pxr_PcpMapFunction_t, map: *mut pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_swap(this_: *mut pxr_PcpMapFunction_t, map: *mut pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction__eq(this_: *const pxr_PcpMapFunction_t, return_: *mut bool, map: *const pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction__ne(this_: *const pxr_PcpMapFunction_t, return_: *mut bool, map: *const pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_IsNull(this_: *const pxr_PcpMapFunction_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_IsIdentity(this_: *const pxr_PcpMapFunction_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_HasRootIdentity(this_: *const pxr_PcpMapFunction_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_MapSourceToTarget(this_: *const pxr_PcpMapFunction_t, return_: *mut *mut pxr_SdfPath_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_MapTargetToSource(this_: *const pxr_PcpMapFunction_t, return_: *mut *mut pxr_SdfPath_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_Compose(this_: *const pxr_PcpMapFunction_t, return_: *mut *mut pxr_PcpMapFunction_t, f: *const pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_ComposeOffset(this_: *const pxr_PcpMapFunction_t, return_: *mut *mut pxr_PcpMapFunction_t, new_offset: *const pxr_SdfLayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_GetInverse(this_: *const pxr_PcpMapFunction_t, return_: *mut *mut pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_GetTimeOffset(this_: *const pxr_PcpMapFunction_t, return_: *mut *const pxr_SdfLayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_GetString(this_: *const pxr_PcpMapFunction_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_Hash(this_: *const pxr_PcpMapFunction_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_copy(this_: *mut *mut pxr_PcpMapFunction_t, rhs: *const pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction__assign(this_: *mut pxr_PcpMapFunction_t, return_: *mut *mut pxr_PcpMapFunction_t, rhs: *const pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpMapFunction_dtor(this_: *mut pxr_PcpMapFunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___hash_value(return_: *mut usize, x: *const pxr_PcpMapFunction_t) -> Exception;


} // extern "C"
