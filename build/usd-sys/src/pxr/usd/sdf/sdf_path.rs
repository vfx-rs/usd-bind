#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPath_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_ctor(this_: *mut *mut pxr_SdfPathAncestorsRange_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_GetPath(this_: *const pxr_SdfPathAncestorsRange_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_begin(this_: *const pxr_SdfPathAncestorsRange_t, return_: *mut *mut pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_end(this_: *const pxr_SdfPathAncestorsRange_t, return_: *mut *mut pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_ctor(this_: *mut *mut pxr_SdfPathAncestorsRange_iterator_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_ctor_1(this_: *mut *mut pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__op_inc(this_: *mut pxr_SdfPathAncestorsRange_iterator_t, return_: *mut *mut pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__op_mul(this_: *const pxr_SdfPathAncestorsRange_iterator_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_operator__(this_: *const pxr_SdfPathAncestorsRange_iterator_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__eq(this_: *const pxr_SdfPathAncestorsRange_iterator_t, return_: *mut bool, o: *const pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__ne(this_: *const pxr_SdfPathAncestorsRange_iterator_t, return_: *mut bool, o: *const pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_copy(this_: *mut *mut pxr_SdfPathAncestorsRange_iterator_t, rhs: *const pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_dtor(this_: *mut pxr_SdfPathAncestorsRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_EmptyPath(return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_AbsoluteRootPath(return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_ReflexiveRelativePath(return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_ctor(this_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_from_string(this_: *mut *mut pxr_SdfPath_t, path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetPathElementCount(this_: *const pxr_SdfPath_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsolutePath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsoluteRootPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsoluteRootOrPrimPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsRootPrimPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsPropertyPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimPropertyPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsNamespacedPropertyPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimVariantSelectionPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimOrPrimVariantSelectionPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_ContainsPrimVariantSelection(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_ContainsPropertyElements(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_ContainsTargetPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsRelationalAttributePath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsTargetPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsMapperPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsMapperArgPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsExpressionPath(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_IsEmpty(this_: *const pxr_SdfPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetToken(this_: *const pxr_SdfPath_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_GetText(this_: *const pxr_SdfPath_t, return_: *mut *const c_char) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_copy(this_: *mut *mut pxr_SdfPath_t, rhs: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPath_dtor(this_: *mut pxr_SdfPath_t) -> Exception;


} // extern "C"
