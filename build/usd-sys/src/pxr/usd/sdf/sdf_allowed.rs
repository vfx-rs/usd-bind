#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfAllowed_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor(this_: *mut *mut pxr_SdfAllowed_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_1(this_: *mut *mut pxr_SdfAllowed_t, x: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_2(this_: *mut *mut pxr_SdfAllowed_t, why_not: *const c_char) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_3(this_: *mut *mut pxr_SdfAllowed_t, why_not: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_4(this_: *mut *mut pxr_SdfAllowed_t, condition: bool, why_not: *const c_char) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_5(this_: *mut *mut pxr_SdfAllowed_t, condition: bool, why_not: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAllowed_dtor(this_: *mut pxr_SdfAllowed_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAllowed__neg(this_: *const pxr_SdfAllowed_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAllowed_GetWhyNot(this_: *const pxr_SdfAllowed_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAllowed_IsAllowed(this_: *const pxr_SdfAllowed_t, return_: *mut bool, why_not: *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAllowed__eq(this_: *const pxr_SdfAllowed_t, return_: *mut bool, other: *const pxr_SdfAllowed_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAllowed_copy(this_: *mut *mut pxr_SdfAllowed_t, rhs: *const pxr_SdfAllowed_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAllowed__assign(this_: *mut pxr_SdfAllowed_t, return_: *mut *mut pxr_SdfAllowed_t, rhs: *const pxr_SdfAllowed_t) -> Exception;


} // extern "C"
