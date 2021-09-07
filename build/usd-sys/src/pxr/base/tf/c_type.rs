#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_20__pxrReserved____TfType_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_20__pxrReserved____TfType_ctor(this_: *mut *mut pxr_TfType_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____TfType_GetUnknownType(return_: *mut *const pxr_TfType_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____TfType_IsA(this_: *const pxr_TfType_t, return_: *mut bool, query_type: pxr_TfType_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____TfType_IsUnknown(this_: *const pxr_TfType_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____TfType_IsRoot(this_: *const pxr_TfType_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____TfType_IsEnumType(this_: *const pxr_TfType_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____TfType_IsPlainOldDataType(this_: *const pxr_TfType_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____TfType_GetSizeof(this_: *const pxr_TfType_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____TfType_copy(this_: *mut *mut pxr_TfType_t, rhs: *const pxr_TfType_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____TfType_dtor(this_: *mut pxr_TfType_t) -> Exception;


} // extern "C"
