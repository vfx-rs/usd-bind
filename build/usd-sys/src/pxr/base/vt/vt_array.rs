#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray__Bool__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_int32_t__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_int64_t__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_float__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_double__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____VtArray__Bool__ctor(this_: *mut *mut pxr_VtArrayBool_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray__Bool__dtor(this_: *mut pxr_VtArrayBool_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray__Bool__data_mut(this_: *mut pxr_VtArrayBool_t, return_: *mut *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray__Bool__data_const(this_: *const pxr_VtArrayBool_t, return_: *mut *const bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray__Bool__push_back(this_: *mut pxr_VtArrayBool_t, elem: *const bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray__Bool__size(this_: *const pxr_VtArrayBool_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray__Bool__reserve(this_: *mut pxr_VtArrayBool_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray__Bool__index_mut(this_: *mut pxr_VtArrayBool_t, return_: *mut *mut bool, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray__Bool__index(this_: *const pxr_VtArrayBool_t, return_: *mut *const bool, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__ctor(this_: *mut *mut pxr_VtArrayU8_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__dtor(this_: *mut pxr_VtArrayU8_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__data_mut(this_: *mut pxr_VtArrayU8_t, return_: *mut *mut c_uchar) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__data_const(this_: *const pxr_VtArrayU8_t, return_: *mut *const c_uchar) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__push_back(this_: *mut pxr_VtArrayU8_t, elem: *const c_uchar) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__size(this_: *const pxr_VtArrayU8_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__reserve(this_: *mut pxr_VtArrayU8_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__index_mut(this_: *mut pxr_VtArrayU8_t, return_: *mut *mut c_uchar, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__index(this_: *const pxr_VtArrayU8_t, return_: *mut *const c_uchar, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__ctor(this_: *mut *mut pxr_VtArrayU32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__dtor(this_: *mut pxr_VtArrayU32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__data_mut(this_: *mut pxr_VtArrayU32_t, return_: *mut *mut c_uint) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__data_const(this_: *const pxr_VtArrayU32_t, return_: *mut *const c_uint) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__push_back(this_: *mut pxr_VtArrayU32_t, elem: *const c_uint) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__size(this_: *const pxr_VtArrayU32_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__reserve(this_: *mut pxr_VtArrayU32_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__index_mut(this_: *mut pxr_VtArrayU32_t, return_: *mut *mut c_uint, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__index(this_: *const pxr_VtArrayU32_t, return_: *mut *const c_uint, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__ctor(this_: *mut *mut pxr_VtArrayU64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__dtor(this_: *mut pxr_VtArrayU64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__data_mut(this_: *mut pxr_VtArrayU64_t, return_: *mut *mut c_ulong) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__data_const(this_: *const pxr_VtArrayU64_t, return_: *mut *const c_ulong) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__push_back(this_: *mut pxr_VtArrayU64_t, elem: *const c_ulong) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__size(this_: *const pxr_VtArrayU64_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__reserve(this_: *mut pxr_VtArrayU64_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__index_mut(this_: *mut pxr_VtArrayU64_t, return_: *mut *mut c_ulong, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__index(this_: *const pxr_VtArrayU64_t, return_: *mut *const c_ulong, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int32_t__ctor(this_: *mut *mut pxr_VtArrayI32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int32_t__dtor(this_: *mut pxr_VtArrayI32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int32_t__data_mut(this_: *mut pxr_VtArrayI32_t, return_: *mut *mut c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int32_t__data_const(this_: *const pxr_VtArrayI32_t, return_: *mut *const c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int32_t__push_back(this_: *mut pxr_VtArrayI32_t, elem: *const c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int32_t__size(this_: *const pxr_VtArrayI32_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int32_t__reserve(this_: *mut pxr_VtArrayI32_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int32_t__index_mut(this_: *mut pxr_VtArrayI32_t, return_: *mut *mut c_int, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int32_t__index(this_: *const pxr_VtArrayI32_t, return_: *mut *const c_int, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int64_t__ctor(this_: *mut *mut pxr_VtArrayI64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int64_t__dtor(this_: *mut pxr_VtArrayI64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int64_t__data_mut(this_: *mut pxr_VtArrayI64_t, return_: *mut *mut c_long) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int64_t__data_const(this_: *const pxr_VtArrayI64_t, return_: *mut *const c_long) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int64_t__push_back(this_: *mut pxr_VtArrayI64_t, elem: *const c_long) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int64_t__size(this_: *const pxr_VtArrayI64_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int64_t__reserve(this_: *mut pxr_VtArrayI64_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int64_t__index_mut(this_: *mut pxr_VtArrayI64_t, return_: *mut *mut c_long, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_int64_t__index(this_: *const pxr_VtArrayI64_t, return_: *mut *const c_long, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_float__ctor(this_: *mut *mut pxr_VtArrayF32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_float__dtor(this_: *mut pxr_VtArrayF32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_float__data_mut(this_: *mut pxr_VtArrayF32_t, return_: *mut *mut c_float) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_float__data_const(this_: *const pxr_VtArrayF32_t, return_: *mut *const c_float) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_float__push_back(this_: *mut pxr_VtArrayF32_t, elem: *const c_float) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_float__size(this_: *const pxr_VtArrayF32_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_float__reserve(this_: *mut pxr_VtArrayF32_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_float__index_mut(this_: *mut pxr_VtArrayF32_t, return_: *mut *mut c_float, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_float__index(this_: *const pxr_VtArrayF32_t, return_: *mut *const c_float, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_double__ctor(this_: *mut *mut pxr_VtArrayF64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_double__dtor(this_: *mut pxr_VtArrayF64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_double__data_mut(this_: *mut pxr_VtArrayF64_t, return_: *mut *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_double__data_const(this_: *const pxr_VtArrayF64_t, return_: *mut *const c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_double__push_back(this_: *mut pxr_VtArrayF64_t, elem: *const c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_double__size(this_: *const pxr_VtArrayF64_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_double__reserve(this_: *mut pxr_VtArrayF64_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_double__index_mut(this_: *mut pxr_VtArrayF64_t, return_: *mut *mut c_double, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_double__index(this_: *const pxr_VtArrayF64_t, return_: *mut *const c_double, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__ctor(this_: *mut *mut pxr_VtArrayTfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__dtor(this_: *mut pxr_VtArrayTfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__data_mut(this_: *mut pxr_VtArrayTfToken_t, return_: *mut *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__data_const(this_: *const pxr_VtArrayTfToken_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__push_back(this_: *mut pxr_VtArrayTfToken_t, elem: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__size(this_: *const pxr_VtArrayTfToken_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__reserve(this_: *mut pxr_VtArrayTfToken_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__index_mut(this_: *mut pxr_VtArrayTfToken_t, return_: *mut *mut pxr_TfToken_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__index(this_: *const pxr_VtArrayTfToken_t, return_: *mut *const pxr_TfToken_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__ctor(this_: *mut *mut pxr_VtArrayGfVec2i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__dtor(this_: *mut pxr_VtArrayGfVec2i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__data_mut(this_: *mut pxr_VtArrayGfVec2i_t, return_: *mut *mut pxr_GfVec2i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__data_const(this_: *const pxr_VtArrayGfVec2i_t, return_: *mut *const pxr_GfVec2i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__push_back(this_: *mut pxr_VtArrayGfVec2i_t, elem: *const pxr_GfVec2i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__size(this_: *const pxr_VtArrayGfVec2i_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__reserve(this_: *mut pxr_VtArrayGfVec2i_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__index_mut(this_: *mut pxr_VtArrayGfVec2i_t, return_: *mut *mut pxr_GfVec2i_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__index(this_: *const pxr_VtArrayGfVec2i_t, return_: *mut *const pxr_GfVec2i_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__ctor(this_: *mut *mut pxr_VtArrayGfVec3i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__dtor(this_: *mut pxr_VtArrayGfVec3i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__data_mut(this_: *mut pxr_VtArrayGfVec3i_t, return_: *mut *mut pxr_GfVec3i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__data_const(this_: *const pxr_VtArrayGfVec3i_t, return_: *mut *const pxr_GfVec3i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__push_back(this_: *mut pxr_VtArrayGfVec3i_t, elem: *const pxr_GfVec3i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__size(this_: *const pxr_VtArrayGfVec3i_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__reserve(this_: *mut pxr_VtArrayGfVec3i_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__index_mut(this_: *mut pxr_VtArrayGfVec3i_t, return_: *mut *mut pxr_GfVec3i_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__index(this_: *const pxr_VtArrayGfVec3i_t, return_: *mut *const pxr_GfVec3i_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__ctor(this_: *mut *mut pxr_VtArrayGfVec4i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__dtor(this_: *mut pxr_VtArrayGfVec4i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__data_mut(this_: *mut pxr_VtArrayGfVec4i_t, return_: *mut *mut pxr_GfVec4i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__data_const(this_: *const pxr_VtArrayGfVec4i_t, return_: *mut *const pxr_GfVec4i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__push_back(this_: *mut pxr_VtArrayGfVec4i_t, elem: *const pxr_GfVec4i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__size(this_: *const pxr_VtArrayGfVec4i_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__reserve(this_: *mut pxr_VtArrayGfVec4i_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__index_mut(this_: *mut pxr_VtArrayGfVec4i_t, return_: *mut *mut pxr_GfVec4i_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__index(this_: *const pxr_VtArrayGfVec4i_t, return_: *mut *const pxr_GfVec4i_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__ctor(this_: *mut *mut pxr_VtArrayGfVec2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__dtor(this_: *mut pxr_VtArrayGfVec2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__data_mut(this_: *mut pxr_VtArrayGfVec2f_t, return_: *mut *mut pxr_GfVec2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__data_const(this_: *const pxr_VtArrayGfVec2f_t, return_: *mut *const pxr_GfVec2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__push_back(this_: *mut pxr_VtArrayGfVec2f_t, elem: *const pxr_GfVec2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__size(this_: *const pxr_VtArrayGfVec2f_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__reserve(this_: *mut pxr_VtArrayGfVec2f_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__index_mut(this_: *mut pxr_VtArrayGfVec2f_t, return_: *mut *mut pxr_GfVec2f_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__index(this_: *const pxr_VtArrayGfVec2f_t, return_: *mut *const pxr_GfVec2f_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__ctor(this_: *mut *mut pxr_VtArrayGfVec3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__dtor(this_: *mut pxr_VtArrayGfVec3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__data_mut(this_: *mut pxr_VtArrayGfVec3f_t, return_: *mut *mut pxr_GfVec3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__data_const(this_: *const pxr_VtArrayGfVec3f_t, return_: *mut *const pxr_GfVec3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__push_back(this_: *mut pxr_VtArrayGfVec3f_t, elem: *const pxr_GfVec3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__size(this_: *const pxr_VtArrayGfVec3f_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__reserve(this_: *mut pxr_VtArrayGfVec3f_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__index_mut(this_: *mut pxr_VtArrayGfVec3f_t, return_: *mut *mut pxr_GfVec3f_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__index(this_: *const pxr_VtArrayGfVec3f_t, return_: *mut *const pxr_GfVec3f_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__ctor(this_: *mut *mut pxr_VtArrayGfVec4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__dtor(this_: *mut pxr_VtArrayGfVec4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__data_mut(this_: *mut pxr_VtArrayGfVec4f_t, return_: *mut *mut pxr_GfVec4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__data_const(this_: *const pxr_VtArrayGfVec4f_t, return_: *mut *const pxr_GfVec4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__push_back(this_: *mut pxr_VtArrayGfVec4f_t, elem: *const pxr_GfVec4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__size(this_: *const pxr_VtArrayGfVec4f_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__reserve(this_: *mut pxr_VtArrayGfVec4f_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__index_mut(this_: *mut pxr_VtArrayGfVec4f_t, return_: *mut *mut pxr_GfVec4f_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__index(this_: *const pxr_VtArrayGfVec4f_t, return_: *mut *const pxr_GfVec4f_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__ctor(this_: *mut *mut pxr_VtArrayGfVec2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__dtor(this_: *mut pxr_VtArrayGfVec2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__data_mut(this_: *mut pxr_VtArrayGfVec2d_t, return_: *mut *mut pxr_GfVec2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__data_const(this_: *const pxr_VtArrayGfVec2d_t, return_: *mut *const pxr_GfVec2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__push_back(this_: *mut pxr_VtArrayGfVec2d_t, elem: *const pxr_GfVec2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__size(this_: *const pxr_VtArrayGfVec2d_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__reserve(this_: *mut pxr_VtArrayGfVec2d_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__index_mut(this_: *mut pxr_VtArrayGfVec2d_t, return_: *mut *mut pxr_GfVec2d_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__index(this_: *const pxr_VtArrayGfVec2d_t, return_: *mut *const pxr_GfVec2d_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__ctor(this_: *mut *mut pxr_VtArrayGfVec3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__dtor(this_: *mut pxr_VtArrayGfVec3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__data_mut(this_: *mut pxr_VtArrayGfVec3d_t, return_: *mut *mut pxr_GfVec3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__data_const(this_: *const pxr_VtArrayGfVec3d_t, return_: *mut *const pxr_GfVec3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__push_back(this_: *mut pxr_VtArrayGfVec3d_t, elem: *const pxr_GfVec3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__size(this_: *const pxr_VtArrayGfVec3d_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__reserve(this_: *mut pxr_VtArrayGfVec3d_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__index_mut(this_: *mut pxr_VtArrayGfVec3d_t, return_: *mut *mut pxr_GfVec3d_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__index(this_: *const pxr_VtArrayGfVec3d_t, return_: *mut *const pxr_GfVec3d_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__ctor(this_: *mut *mut pxr_VtArrayGfVec4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__dtor(this_: *mut pxr_VtArrayGfVec4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__data_mut(this_: *mut pxr_VtArrayGfVec4d_t, return_: *mut *mut pxr_GfVec4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__data_const(this_: *const pxr_VtArrayGfVec4d_t, return_: *mut *const pxr_GfVec4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__push_back(this_: *mut pxr_VtArrayGfVec4d_t, elem: *const pxr_GfVec4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__size(this_: *const pxr_VtArrayGfVec4d_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__reserve(this_: *mut pxr_VtArrayGfVec4d_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__index_mut(this_: *mut pxr_VtArrayGfVec4d_t, return_: *mut *mut pxr_GfVec4d_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__index(this_: *const pxr_VtArrayGfVec4d_t, return_: *mut *const pxr_GfVec4d_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__ctor(this_: *mut *mut pxr_VtArrayGfQuatf_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__dtor(this_: *mut pxr_VtArrayGfQuatf_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__data_mut(this_: *mut pxr_VtArrayGfQuatf_t, return_: *mut *mut pxr_GfQuatf_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__data_const(this_: *const pxr_VtArrayGfQuatf_t, return_: *mut *const pxr_GfQuatf_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__push_back(this_: *mut pxr_VtArrayGfQuatf_t, elem: *const pxr_GfQuatf_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__size(this_: *const pxr_VtArrayGfQuatf_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__reserve(this_: *mut pxr_VtArrayGfQuatf_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__index_mut(this_: *mut pxr_VtArrayGfQuatf_t, return_: *mut *mut pxr_GfQuatf_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__index(this_: *const pxr_VtArrayGfQuatf_t, return_: *mut *const pxr_GfQuatf_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__ctor(this_: *mut *mut pxr_VtArrayGfQuatd_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__dtor(this_: *mut pxr_VtArrayGfQuatd_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__data_mut(this_: *mut pxr_VtArrayGfQuatd_t, return_: *mut *mut pxr_GfQuatd_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__data_const(this_: *const pxr_VtArrayGfQuatd_t, return_: *mut *const pxr_GfQuatd_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__push_back(this_: *mut pxr_VtArrayGfQuatd_t, elem: *const pxr_GfQuatd_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__size(this_: *const pxr_VtArrayGfQuatd_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__reserve(this_: *mut pxr_VtArrayGfQuatd_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__index_mut(this_: *mut pxr_VtArrayGfQuatd_t, return_: *mut *mut pxr_GfQuatd_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__index(this_: *const pxr_VtArrayGfQuatd_t, return_: *mut *const pxr_GfQuatd_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__ctor(this_: *mut *mut pxr_VtArrayGfMatrix2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__dtor(this_: *mut pxr_VtArrayGfMatrix2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__data_mut(this_: *mut pxr_VtArrayGfMatrix2f_t, return_: *mut *mut pxr_GfMatrix2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__data_const(this_: *const pxr_VtArrayGfMatrix2f_t, return_: *mut *const pxr_GfMatrix2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__push_back(this_: *mut pxr_VtArrayGfMatrix2f_t, elem: *const pxr_GfMatrix2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__size(this_: *const pxr_VtArrayGfMatrix2f_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__reserve(this_: *mut pxr_VtArrayGfMatrix2f_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__index_mut(this_: *mut pxr_VtArrayGfMatrix2f_t, return_: *mut *mut pxr_GfMatrix2f_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__index(this_: *const pxr_VtArrayGfMatrix2f_t, return_: *mut *const pxr_GfMatrix2f_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__ctor(this_: *mut *mut pxr_VtArrayGfMatrix3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__dtor(this_: *mut pxr_VtArrayGfMatrix3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__data_mut(this_: *mut pxr_VtArrayGfMatrix3f_t, return_: *mut *mut pxr_GfMatrix3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__data_const(this_: *const pxr_VtArrayGfMatrix3f_t, return_: *mut *const pxr_GfMatrix3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__push_back(this_: *mut pxr_VtArrayGfMatrix3f_t, elem: *const pxr_GfMatrix3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__size(this_: *const pxr_VtArrayGfMatrix3f_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__reserve(this_: *mut pxr_VtArrayGfMatrix3f_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__index_mut(this_: *mut pxr_VtArrayGfMatrix3f_t, return_: *mut *mut pxr_GfMatrix3f_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__index(this_: *const pxr_VtArrayGfMatrix3f_t, return_: *mut *const pxr_GfMatrix3f_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__ctor(this_: *mut *mut pxr_VtArrayGfMatrix4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__dtor(this_: *mut pxr_VtArrayGfMatrix4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__data_mut(this_: *mut pxr_VtArrayGfMatrix4f_t, return_: *mut *mut pxr_GfMatrix4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__data_const(this_: *const pxr_VtArrayGfMatrix4f_t, return_: *mut *const pxr_GfMatrix4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__push_back(this_: *mut pxr_VtArrayGfMatrix4f_t, elem: *const pxr_GfMatrix4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__size(this_: *const pxr_VtArrayGfMatrix4f_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__reserve(this_: *mut pxr_VtArrayGfMatrix4f_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__index_mut(this_: *mut pxr_VtArrayGfMatrix4f_t, return_: *mut *mut pxr_GfMatrix4f_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__index(this_: *const pxr_VtArrayGfMatrix4f_t, return_: *mut *const pxr_GfMatrix4f_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__ctor(this_: *mut *mut pxr_VtArrayGfMatrix2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__dtor(this_: *mut pxr_VtArrayGfMatrix2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__data_mut(this_: *mut pxr_VtArrayGfMatrix2d_t, return_: *mut *mut pxr_GfMatrix2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__data_const(this_: *const pxr_VtArrayGfMatrix2d_t, return_: *mut *const pxr_GfMatrix2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__push_back(this_: *mut pxr_VtArrayGfMatrix2d_t, elem: *const pxr_GfMatrix2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__size(this_: *const pxr_VtArrayGfMatrix2d_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__reserve(this_: *mut pxr_VtArrayGfMatrix2d_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__index_mut(this_: *mut pxr_VtArrayGfMatrix2d_t, return_: *mut *mut pxr_GfMatrix2d_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__index(this_: *const pxr_VtArrayGfMatrix2d_t, return_: *mut *const pxr_GfMatrix2d_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__ctor(this_: *mut *mut pxr_VtArrayGfMatrix3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__dtor(this_: *mut pxr_VtArrayGfMatrix3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__data_mut(this_: *mut pxr_VtArrayGfMatrix3d_t, return_: *mut *mut pxr_GfMatrix3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__data_const(this_: *const pxr_VtArrayGfMatrix3d_t, return_: *mut *const pxr_GfMatrix3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__push_back(this_: *mut pxr_VtArrayGfMatrix3d_t, elem: *const pxr_GfMatrix3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__size(this_: *const pxr_VtArrayGfMatrix3d_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__reserve(this_: *mut pxr_VtArrayGfMatrix3d_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__index_mut(this_: *mut pxr_VtArrayGfMatrix3d_t, return_: *mut *mut pxr_GfMatrix3d_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__index(this_: *const pxr_VtArrayGfMatrix3d_t, return_: *mut *const pxr_GfMatrix3d_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__ctor(this_: *mut *mut pxr_VtArrayGfMatrix4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__dtor(this_: *mut pxr_VtArrayGfMatrix4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__data_mut(this_: *mut pxr_VtArrayGfMatrix4d_t, return_: *mut *mut pxr_GfMatrix4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__data_const(this_: *const pxr_VtArrayGfMatrix4d_t, return_: *mut *const pxr_GfMatrix4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__push_back(this_: *mut pxr_VtArrayGfMatrix4d_t, elem: *const pxr_GfMatrix4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__size(this_: *const pxr_VtArrayGfMatrix4d_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__reserve(this_: *mut pxr_VtArrayGfMatrix4d_t, num: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__index_mut(this_: *mut pxr_VtArrayGfMatrix4d_t, return_: *mut *mut pxr_GfMatrix4d_t, index: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__index(this_: *const pxr_VtArrayGfMatrix4d_t, return_: *mut *const pxr_GfMatrix4d_t, index: usize) -> Exception;


} // extern "C"
