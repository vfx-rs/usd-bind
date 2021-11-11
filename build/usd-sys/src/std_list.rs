#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxr__TfDiagnosticMgr__ErrorList_t {
    _unused: [u8; 0],
}

impl pxr__TfDiagnosticMgr__ErrorIterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxr__TfDiagnosticMgr__ErrorIterator_sizeof(),
                pxr__TfDiagnosticMgr__ErrorIterator_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn pxr__TfDiagnosticMgr__ErrorList_ctor(this_: *mut *mut std_TfDiagnosticMgr_ErrorList_t) -> Exception;

pub fn pxr__TfDiagnosticMgr__ErrorIterator_sizeof() -> usize;

pub fn pxr__TfDiagnosticMgr__ErrorIterator_alignof() -> usize;

pub fn pxr__TfDiagnosticMgr__ErrorIterator_op_inc(this_: *mut std_TfDiagnosticMgr_ErrorIterator_t, return_: *mut *mut std_TfDiagnosticMgr_ErrorIterator_t) -> Exception;

pub fn pxr__TfDiagnosticMgr__ErrorIterator_ctor(this_: *mut std_TfDiagnosticMgr_ErrorIterator_t, iterator: *const std_TfDiagnosticMgr_ErrorIterator_t) -> Exception;

pub fn pxr__TfDiagnosticMgr__ErrorIterator_deref(this_: *const std_TfDiagnosticMgr_ErrorIterator_t, return_: *mut *const pxr_TfError_t) -> Exception;

pub fn pxr__TfDiagnosticMgr__ErrorIterator_deref_mut(this_: *mut std_TfDiagnosticMgr_ErrorIterator_t, return_: *mut *mut pxr_TfError_t) -> Exception;

pub fn op_equals_std__list_pxr__TfError___iterator(return_: *mut bool, lhs: *const std_TfDiagnosticMgr_ErrorIterator_t, rhs: *const std_TfDiagnosticMgr_ErrorIterator_t) -> Exception;


} // extern "C"
