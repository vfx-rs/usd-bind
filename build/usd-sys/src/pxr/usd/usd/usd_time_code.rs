#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


impl pxrInternal_v0_21__pxrReserved____UsdTimeCode_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxrInternal_v0_21__pxrReserved____UsdTimeCode_sizeof(),
                pxrInternal_v0_21__pxrReserved____UsdTimeCode_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____UsdTimeCode_sizeof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____UsdTimeCode_alignof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____UsdTimeCode_ctor(this_: *mut pxr_UsdTimeCode_t, t: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdTimeCode_from_SdfTimeCode(this_: *mut pxr_UsdTimeCode_t, time_code: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdTimeCode_EarliestTime(return_: *mut pxr_UsdTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdTimeCode_Default(return_: *mut pxr_UsdTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdTimeCode_SafeStep(return_: *mut c_double, max_value: c_double, max_compression: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdTimeCode_IsEarliestTime(this_: *const pxr_UsdTimeCode_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdTimeCode_IsDefault(this_: *const pxr_UsdTimeCode_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdTimeCode_IsNumeric(this_: *const pxr_UsdTimeCode_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdTimeCode_GetValue(this_: *const pxr_UsdTimeCode_t, return_: *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdTimeCode_copy(this_: *mut pxr_UsdTimeCode_t, rhs: *const pxr_UsdTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdTimeCode_dtor(this_: *mut pxr_UsdTimeCode_t) -> Exception;


} // extern "C"
