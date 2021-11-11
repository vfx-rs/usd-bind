#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


impl pxrInternal_v0_21__pxrReserved____TfToken_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxrInternal_v0_21__pxrReserved____TfToken_sizeof(),
                pxrInternal_v0_21__pxrReserved____TfToken_alignof(),
            ).unwrap()
        }
    }
}


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____TfToken___ImmortalTag_e(pub u32);
pub const pxr_TfToken__ImmortalTag_Immortal: pxrInternal_v0_21__pxrReserved____TfToken___ImmortalTag_e = pxrInternal_v0_21__pxrReserved____TfToken___ImmortalTag_e(0);


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____TfToken_sizeof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_alignof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_ctor(this_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_copy(this_: *mut pxr_TfToken_t, rhs: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_dtor(this_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_from_string(this_: *mut pxr_TfToken_t, s: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_immortal_from_string(this_: *mut pxr_TfToken_t, s: *const std_string_t, _param1: pxr_TfToken__ImmortalTag) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_from_char_ptr(this_: *mut pxr_TfToken_t, s: *const c_char) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_immortal_from_char_ptr(this_: *mut pxr_TfToken_t, s: *const c_char, _param1: pxr_TfToken__ImmortalTag) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_Find(return_: *mut pxr_TfToken_t, s: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_Hash(this_: *const pxr_TfToken_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_size(this_: *const pxr_TfToken_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_GetText(this_: *const pxr_TfToken_t, return_: *mut *const c_char) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_data(this_: *const pxr_TfToken_t, return_: *mut *const c_char) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_GetString(this_: *const pxr_TfToken_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_Swap(this_: *mut pxr_TfToken_t, other: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken__eq(this_: *const pxr_TfToken_t, return_: *mut bool, o: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_eq_c_str(this_: *const pxr_TfToken_t, return_: *mut bool, rhs: *const c_char) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_IsEmpty(this_: *const pxr_TfToken_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfToken_IsImmortal(this_: *const pxr_TfToken_t, return_: *mut bool) -> Exception;


} // extern "C"
