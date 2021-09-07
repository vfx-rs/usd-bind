#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct std__string_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn std__string_ctor(this_: *mut *mut std_string_t) -> Exception;

pub fn std__string_copy(this_: *mut *mut std_string_t, rhs: *const std_string_t) -> Exception;

pub fn std__string_dtor(this_: *mut std_string_t) -> Exception;

pub fn std__string_assign(this_: *mut std_string_t, return_: *mut *mut std_string_t, s: *const c_char, count: usize) -> Exception;

pub fn std__string_c_str(this_: *const std_string_t, return_: *mut *const c_char) -> Exception;


} // extern "C"
