#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


impl pxrInternal_v0_21__pxrReserved____SdfTimeCode_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxrInternal_v0_21__pxrReserved____SdfTimeCode_sizeof(),
                pxrInternal_v0_21__pxrReserved____SdfTimeCode_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode_sizeof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode_alignof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode_ctor(this_: *mut pxr_SdfTimeCode_t, time: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode__eq(this_: *const pxr_SdfTimeCode_t, return_: *mut bool, rhs: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode__ne(this_: *const pxr_SdfTimeCode_t, return_: *mut bool, rhs: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode_op_lt(this_: *const pxr_SdfTimeCode_t, return_: *mut bool, rhs: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode_op_gt(this_: *const pxr_SdfTimeCode_t, return_: *mut bool, rhs: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode_op_le(this_: *const pxr_SdfTimeCode_t, return_: *mut bool, rhs: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode_op_ge(this_: *const pxr_SdfTimeCode_t, return_: *mut bool, rhs: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode__op_mul(this_: *const pxr_SdfTimeCode_t, return_: *mut pxr_SdfTimeCode_t, rhs: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode__op_div(this_: *const pxr_SdfTimeCode_t, return_: *mut pxr_SdfTimeCode_t, rhs: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode__op_add(this_: *const pxr_SdfTimeCode_t, return_: *mut pxr_SdfTimeCode_t, rhs: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode__op_sub(this_: *const pxr_SdfTimeCode_t, return_: *mut pxr_SdfTimeCode_t, rhs: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode_GetHash(this_: *const pxr_SdfTimeCode_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode_GetValue(this_: *const pxr_SdfTimeCode_t, return_: *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode_copy(this_: *mut pxr_SdfTimeCode_t, rhs: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfTimeCode_dtor(this_: *mut pxr_SdfTimeCode_t) -> Exception;


} // extern "C"
