#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C, align(8))]
#[derive(Copy, Clone, Debug, Hash)]
pub struct pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_t {
    pub d: *mut c_ulong,
    pub size: usize,
}


impl pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxrInternal_v0_21__pxrReserved____SdfValueTypeName_sizeof(),
                pxrInternal_v0_21__pxrReserved____SdfValueTypeName_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_ctor(this_: *mut pxr_SdfTupleDimensions_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_new_1d(this_: *mut pxr_SdfTupleDimensions_t, m: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_new_2d(this_: *mut pxr_SdfTupleDimensions_t, m: usize, n: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTupleDimensions__eq(this_: *const pxr_SdfTupleDimensions_t, return_: *mut bool, rhs: *const pxr_SdfTupleDimensions_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_sizeof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_alignof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_ctor(this_: *mut pxr_SdfValueTypeName_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetAsToken(this_: *const pxr_SdfValueTypeName_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetType(this_: *const pxr_SdfValueTypeName_t, return_: *mut *const pxr_TfType_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetCPPTypeName(this_: *const pxr_SdfValueTypeName_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetRole(this_: *const pxr_SdfValueTypeName_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetScalarType(this_: *const pxr_SdfValueTypeName_t, return_: *mut pxr_SdfValueTypeName_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetArrayType(this_: *const pxr_SdfValueTypeName_t, return_: *mut pxr_SdfValueTypeName_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_IsScalar(this_: *const pxr_SdfValueTypeName_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_IsArray(this_: *const pxr_SdfValueTypeName_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetDimensions(this_: *const pxr_SdfValueTypeName_t, return_: *mut pxr_SdfTupleDimensions_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName__eq(this_: *const pxr_SdfValueTypeName_t, return_: *mut bool, rhs: *const pxr_SdfValueTypeName_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_eq_token(this_: *const pxr_SdfValueTypeName_t, return_: *mut bool, rhs: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetHash(this_: *const pxr_SdfValueTypeName_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfValueTypeName_operatorbool(this_: *const pxr_SdfValueTypeName_t, return_: *mut bool) -> Exception;


} // extern "C"
