#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_t {
    _unused: [u8; 0],
}

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__Result_e(pub u32);
pub const pxr_SdfNamespaceEditDetail_Result_Error: pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__Result_e = pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__Result_e(0);
pub const pxr_SdfNamespaceEditDetail_Result_Unbatched: pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__Result_e = pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__Result_e(1);
pub const pxr_SdfNamespaceEditDetail_Result_Okay: pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__Result_e = pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__Result_e(2);


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_ctor(this_: *mut *mut pxr_SdfNamespaceEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_ctor_1(this_: *mut *mut pxr_SdfNamespaceEdit_t, current_path_: *const pxr_SdfPath_t, new_path_: *const pxr_SdfPath_t, index_: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Remove(return_: *mut *mut pxr_SdfNamespaceEdit_t, current_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Rename(return_: *mut *mut pxr_SdfNamespaceEdit_t, current_path: *const pxr_SdfPath_t, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Reorder(return_: *mut *mut pxr_SdfNamespaceEdit_t, current_path: *const pxr_SdfPath_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Reparent(return_: *mut *mut pxr_SdfNamespaceEdit_t, current_path: *const pxr_SdfPath_t, new_parent_path: *const pxr_SdfPath_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_ReparentAndRename(return_: *mut *mut pxr_SdfNamespaceEdit_t, current_path: *const pxr_SdfPath_t, new_parent_path: *const pxr_SdfPath_t, name: *const pxr_TfToken_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit__eq(this_: *const pxr_SdfNamespaceEdit_t, return_: *mut bool, rhs: *const pxr_SdfNamespaceEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_copy(this_: *mut *mut pxr_SdfNamespaceEdit_t, rhs: *const pxr_SdfNamespaceEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_dtor(this_: *mut pxr_SdfNamespaceEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit__assign(this_: *mut pxr_SdfNamespaceEdit_t, return_: *mut *mut pxr_SdfNamespaceEdit_t, rhs: *const pxr_SdfNamespaceEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_ctor(this_: *mut *mut pxr_SdfNamespaceEditDetail_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_ctor_1(this_: *mut *mut pxr_SdfNamespaceEditDetail_t, _param0: pxr_SdfNamespaceEditDetail_Result, edit: *const pxr_SdfNamespaceEdit_t, reason: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__eq(this_: *const pxr_SdfNamespaceEditDetail_t, return_: *mut bool, rhs: *const pxr_SdfNamespaceEditDetail_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_copy(this_: *mut *mut pxr_SdfNamespaceEditDetail_t, rhs: *const pxr_SdfNamespaceEditDetail_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__assign(this_: *mut pxr_SdfNamespaceEditDetail_t, return_: *mut *mut pxr_SdfNamespaceEditDetail_t, rhs: *const pxr_SdfNamespaceEditDetail_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_dtor(this_: *mut pxr_SdfNamespaceEditDetail_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_ctor(this_: *mut *mut pxr_SdfBatchNamespaceEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_copy(this_: *mut *mut pxr_SdfBatchNamespaceEdit_t, rhs: *const pxr_SdfBatchNamespaceEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_dtor(this_: *mut pxr_SdfBatchNamespaceEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit__assign(this_: *mut pxr_SdfBatchNamespaceEdit_t, return_: *mut *mut pxr_SdfBatchNamespaceEdit_t, rhs: *const pxr_SdfBatchNamespaceEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_Add(this_: *mut pxr_SdfBatchNamespaceEdit_t, edit: *const pxr_SdfNamespaceEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_Add_1(this_: *mut pxr_SdfBatchNamespaceEdit_t, current_path: *const pxr_SdfPath_t, new_path: *const pxr_SdfPath_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___CombineResult(return_: *mut pxr_SdfNamespaceEditDetail_Result, lhs: pxr_SdfNamespaceEditDetail_Result, rhs: pxr_SdfNamespaceEditDetail_Result) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___CombineError(return_: *mut pxr_SdfNamespaceEditDetail_Result, rhs: pxr_SdfNamespaceEditDetail_Result) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___CombineUnbatched(return_: *mut pxr_SdfNamespaceEditDetail_Result, other: pxr_SdfNamespaceEditDetail_Result) -> Exception;


} // extern "C"
