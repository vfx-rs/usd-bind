#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct std__vector_std__string__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct std__vector_char__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct std__vector_unsignedchar__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct std__vector_float__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct std__vector_double__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct std__vector_int__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct std__vector_size_t__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct std__vector_pxr__UsdAttribute__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct std__vector_pxr__SdfPath__t {
    _unused: [u8; 0],
}


extern "C" {

pub fn std__vector_std__string__ctor(this_: *mut *mut std_vector_string_t) -> Exception;

pub fn std__vector_std__string__copy(this_: *mut *mut std_vector_string_t, rhs: *const std_vector_string_t) -> Exception;

pub fn std__vector_std__string__dtor(this_: *mut std_vector_string_t) -> Exception;

pub fn std__vector_std__string__size(this_: *const std_vector_string_t, return_: *mut usize) -> Exception;

pub fn std__vector_std__string__resize(this_: *mut std_vector_string_t, count: usize) -> Exception;

pub fn std__vector_std__string__reserve(this_: *mut std_vector_string_t, count: usize) -> Exception;

pub fn std__vector_std__string__index_mut(this_: *mut std_vector_string_t, return_: *mut *mut std_string_t, pos: usize) -> Exception;

pub fn std__vector_std__string__index(this_: *const std_vector_string_t, return_: *mut *const std_string_t, pos: usize) -> Exception;

pub fn std__vector_std__string__data(this_: *mut std_vector_string_t, return_: *mut *mut std_string_t) -> Exception;

pub fn std__vector_std__string__data_const(this_: *const std_vector_string_t, return_: *mut *const std_string_t) -> Exception;

pub fn std__vector_std__string__push_back(this_: *mut std_vector_string_t, value: *const std_string_t) -> Exception;

pub fn std__vector_char__ctor(this_: *mut *mut std_vector_char_t) -> Exception;

pub fn std__vector_char__copy(this_: *mut *mut std_vector_char_t, rhs: *const std_vector_char_t) -> Exception;

pub fn std__vector_char__dtor(this_: *mut std_vector_char_t) -> Exception;

pub fn std__vector_char__size(this_: *const std_vector_char_t, return_: *mut usize) -> Exception;

pub fn std__vector_char__resize(this_: *mut std_vector_char_t, count: usize) -> Exception;

pub fn std__vector_char__reserve(this_: *mut std_vector_char_t, count: usize) -> Exception;

pub fn std__vector_char__index_mut(this_: *mut std_vector_char_t, return_: *mut *mut c_char, pos: usize) -> Exception;

pub fn std__vector_char__index(this_: *const std_vector_char_t, return_: *mut *const c_char, pos: usize) -> Exception;

pub fn std__vector_char__data(this_: *mut std_vector_char_t, return_: *mut *mut c_char) -> Exception;

pub fn std__vector_char__data_const(this_: *const std_vector_char_t, return_: *mut *const c_char) -> Exception;

pub fn std__vector_char__push_back(this_: *mut std_vector_char_t, value: *const c_char) -> Exception;

pub fn std__vector_unsignedchar__ctor(this_: *mut *mut std_vector_uchar_t) -> Exception;

pub fn std__vector_unsignedchar__copy(this_: *mut *mut std_vector_uchar_t, rhs: *const std_vector_uchar_t) -> Exception;

pub fn std__vector_unsignedchar__dtor(this_: *mut std_vector_uchar_t) -> Exception;

pub fn std__vector_unsignedchar__size(this_: *const std_vector_uchar_t, return_: *mut usize) -> Exception;

pub fn std__vector_unsignedchar__resize(this_: *mut std_vector_uchar_t, count: usize) -> Exception;

pub fn std__vector_unsignedchar__reserve(this_: *mut std_vector_uchar_t, count: usize) -> Exception;

pub fn std__vector_unsignedchar__index_mut(this_: *mut std_vector_uchar_t, return_: *mut *mut c_uchar, pos: usize) -> Exception;

pub fn std__vector_unsignedchar__index(this_: *const std_vector_uchar_t, return_: *mut *const c_uchar, pos: usize) -> Exception;

pub fn std__vector_unsignedchar__data(this_: *mut std_vector_uchar_t, return_: *mut *mut c_uchar) -> Exception;

pub fn std__vector_unsignedchar__data_const(this_: *const std_vector_uchar_t, return_: *mut *const c_uchar) -> Exception;

pub fn std__vector_unsignedchar__push_back(this_: *mut std_vector_uchar_t, value: *const c_uchar) -> Exception;

pub fn std__vector_float__ctor(this_: *mut *mut std_vector_float_t) -> Exception;

pub fn std__vector_float__copy(this_: *mut *mut std_vector_float_t, rhs: *const std_vector_float_t) -> Exception;

pub fn std__vector_float__dtor(this_: *mut std_vector_float_t) -> Exception;

pub fn std__vector_float__size(this_: *const std_vector_float_t, return_: *mut usize) -> Exception;

pub fn std__vector_float__resize(this_: *mut std_vector_float_t, count: usize) -> Exception;

pub fn std__vector_float__reserve(this_: *mut std_vector_float_t, count: usize) -> Exception;

pub fn std__vector_float__index_mut(this_: *mut std_vector_float_t, return_: *mut *mut c_float, pos: usize) -> Exception;

pub fn std__vector_float__index(this_: *const std_vector_float_t, return_: *mut *const c_float, pos: usize) -> Exception;

pub fn std__vector_float__data(this_: *mut std_vector_float_t, return_: *mut *mut c_float) -> Exception;

pub fn std__vector_float__data_const(this_: *const std_vector_float_t, return_: *mut *const c_float) -> Exception;

pub fn std__vector_float__push_back(this_: *mut std_vector_float_t, value: *const c_float) -> Exception;

pub fn std__vector_double__ctor(this_: *mut *mut std_vector_double_t) -> Exception;

pub fn std__vector_double__copy(this_: *mut *mut std_vector_double_t, rhs: *const std_vector_double_t) -> Exception;

pub fn std__vector_double__dtor(this_: *mut std_vector_double_t) -> Exception;

pub fn std__vector_double__size(this_: *const std_vector_double_t, return_: *mut usize) -> Exception;

pub fn std__vector_double__resize(this_: *mut std_vector_double_t, count: usize) -> Exception;

pub fn std__vector_double__reserve(this_: *mut std_vector_double_t, count: usize) -> Exception;

pub fn std__vector_double__index_mut(this_: *mut std_vector_double_t, return_: *mut *mut c_double, pos: usize) -> Exception;

pub fn std__vector_double__index(this_: *const std_vector_double_t, return_: *mut *const c_double, pos: usize) -> Exception;

pub fn std__vector_double__data(this_: *mut std_vector_double_t, return_: *mut *mut c_double) -> Exception;

pub fn std__vector_double__data_const(this_: *const std_vector_double_t, return_: *mut *const c_double) -> Exception;

pub fn std__vector_double__push_back(this_: *mut std_vector_double_t, value: *const c_double) -> Exception;

pub fn std__vector_int__ctor(this_: *mut *mut std_vector_int_t) -> Exception;

pub fn std__vector_int__copy(this_: *mut *mut std_vector_int_t, rhs: *const std_vector_int_t) -> Exception;

pub fn std__vector_int__dtor(this_: *mut std_vector_int_t) -> Exception;

pub fn std__vector_int__size(this_: *const std_vector_int_t, return_: *mut usize) -> Exception;

pub fn std__vector_int__resize(this_: *mut std_vector_int_t, count: usize) -> Exception;

pub fn std__vector_int__reserve(this_: *mut std_vector_int_t, count: usize) -> Exception;

pub fn std__vector_int__index_mut(this_: *mut std_vector_int_t, return_: *mut *mut c_int, pos: usize) -> Exception;

pub fn std__vector_int__index(this_: *const std_vector_int_t, return_: *mut *const c_int, pos: usize) -> Exception;

pub fn std__vector_int__data(this_: *mut std_vector_int_t, return_: *mut *mut c_int) -> Exception;

pub fn std__vector_int__data_const(this_: *const std_vector_int_t, return_: *mut *const c_int) -> Exception;

pub fn std__vector_int__push_back(this_: *mut std_vector_int_t, value: *const c_int) -> Exception;

pub fn std__vector_size_t__ctor(this_: *mut *mut std_vector_size_t_t) -> Exception;

pub fn std__vector_size_t__copy(this_: *mut *mut std_vector_size_t_t, rhs: *const std_vector_size_t_t) -> Exception;

pub fn std__vector_size_t__dtor(this_: *mut std_vector_size_t_t) -> Exception;

pub fn std__vector_size_t__size(this_: *const std_vector_size_t_t, return_: *mut usize) -> Exception;

pub fn std__vector_size_t__resize(this_: *mut std_vector_size_t_t, count: usize) -> Exception;

pub fn std__vector_size_t__reserve(this_: *mut std_vector_size_t_t, count: usize) -> Exception;

pub fn std__vector_size_t__index_mut(this_: *mut std_vector_size_t_t, return_: *mut *mut c_ulong, pos: usize) -> Exception;

pub fn std__vector_size_t__index(this_: *const std_vector_size_t_t, return_: *mut *const c_ulong, pos: usize) -> Exception;

pub fn std__vector_size_t__data(this_: *mut std_vector_size_t_t, return_: *mut *mut c_ulong) -> Exception;

pub fn std__vector_size_t__data_const(this_: *const std_vector_size_t_t, return_: *mut *const c_ulong) -> Exception;

pub fn std__vector_size_t__push_back(this_: *mut std_vector_size_t_t, value: *const c_ulong) -> Exception;

pub fn std__vector_pxr__UsdAttribute__ctor(this_: *mut *mut std_UsdAttributeVector_t) -> Exception;

pub fn std__vector_pxr__UsdAttribute__copy(this_: *mut *mut std_UsdAttributeVector_t, rhs: *const std_UsdAttributeVector_t) -> Exception;

pub fn std__vector_pxr__UsdAttribute__dtor(this_: *mut std_UsdAttributeVector_t) -> Exception;

pub fn std__vector_pxr__UsdAttribute__size(this_: *const std_UsdAttributeVector_t, return_: *mut usize) -> Exception;

pub fn std__vector_pxr__UsdAttribute__resize(this_: *mut std_UsdAttributeVector_t, count: usize) -> Exception;

pub fn std__vector_pxr__UsdAttribute__reserve(this_: *mut std_UsdAttributeVector_t, count: usize) -> Exception;

pub fn std__vector_pxr__UsdAttribute__index_mut(this_: *mut std_UsdAttributeVector_t, return_: *mut *mut pxr_UsdAttribute_t, pos: usize) -> Exception;

pub fn std__vector_pxr__UsdAttribute__index(this_: *const std_UsdAttributeVector_t, return_: *mut *const pxr_UsdAttribute_t, pos: usize) -> Exception;

pub fn std__vector_pxr__UsdAttribute__data(this_: *mut std_UsdAttributeVector_t, return_: *mut *mut pxr_UsdAttribute_t) -> Exception;

pub fn std__vector_pxr__UsdAttribute__data_const(this_: *const std_UsdAttributeVector_t, return_: *mut *const pxr_UsdAttribute_t) -> Exception;

pub fn std__vector_pxr__UsdAttribute__push_back(this_: *mut std_UsdAttributeVector_t, value: *const pxr_UsdAttribute_t) -> Exception;

pub fn std__vector_pxr__SdfPath__ctor(this_: *mut *mut std_SdfPathVector_t) -> Exception;

pub fn std__vector_pxr__SdfPath__copy(this_: *mut *mut std_SdfPathVector_t, rhs: *const std_SdfPathVector_t) -> Exception;

pub fn std__vector_pxr__SdfPath__dtor(this_: *mut std_SdfPathVector_t) -> Exception;

pub fn std__vector_pxr__SdfPath__size(this_: *const std_SdfPathVector_t, return_: *mut usize) -> Exception;

pub fn std__vector_pxr__SdfPath__resize(this_: *mut std_SdfPathVector_t, count: usize) -> Exception;

pub fn std__vector_pxr__SdfPath__reserve(this_: *mut std_SdfPathVector_t, count: usize) -> Exception;

pub fn std__vector_pxr__SdfPath__index_mut(this_: *mut std_SdfPathVector_t, return_: *mut *mut pxr_SdfPath_t, pos: usize) -> Exception;

pub fn std__vector_pxr__SdfPath__index(this_: *const std_SdfPathVector_t, return_: *mut *const pxr_SdfPath_t, pos: usize) -> Exception;

pub fn std__vector_pxr__SdfPath__data(this_: *mut std_SdfPathVector_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn std__vector_pxr__SdfPath__data_const(this_: *const std_SdfPathVector_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn std__vector_pxr__SdfPath__push_back(this_: *mut std_SdfPathVector_t, value: *const pxr_SdfPath_t) -> Exception;


} // extern "C"
