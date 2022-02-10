#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfLayerOffset__Hash_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_ctor(this_: *mut *mut pxr_SdfLayerOffset_t, offset: c_double, scale: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetOffset(this_: *const pxr_SdfLayerOffset_t, return_: *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetScale(this_: *const pxr_SdfLayerOffset_t, return_: *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_SetOffset(this_: *mut pxr_SdfLayerOffset_t, new_offset: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_SetScale(this_: *mut pxr_SdfLayerOffset_t, new_scale: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_IsIdentity(this_: *const pxr_SdfLayerOffset_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_IsValid(this_: *const pxr_SdfLayerOffset_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetInverse(this_: *const pxr_SdfLayerOffset_t, return_: *mut *mut pxr_SdfLayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetHash(this_: *const pxr_SdfLayerOffset_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset__eq(this_: *const pxr_SdfLayerOffset_t, return_: *mut bool, rhs: *const pxr_SdfLayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_operator_(this_: *const pxr_SdfLayerOffset_t, return_: *mut bool, rhs: *const pxr_SdfLayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset__op_mul(this_: *const pxr_SdfLayerOffset_t, return_: *mut *mut pxr_SdfLayerOffset_t, rhs: *const pxr_SdfLayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset__op_mul_1(this_: *const pxr_SdfLayerOffset_t, return_: *mut c_double, rhs: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset__op_mul_2(this_: *const pxr_SdfLayerOffset_t, return_: *mut pxr_SdfTimeCode_t, rhs: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset__Hash__op_call(this_: *const pxr_SdfLayerOffset_Hash_t, return_: *mut usize, offset: *const pxr_SdfLayerOffset_t) -> Exception;


} // extern "C"
