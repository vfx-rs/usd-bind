#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_GetInstance(return_: *mut *mut pxr_TfDiagnosticMgr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_SetQuiet(this_: *mut pxr_TfDiagnosticMgr_t, quiet: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_GetErrorBegin(this_: *mut pxr_TfDiagnosticMgr_t, return_: *mut std_TfDiagnosticMgr_ErrorIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_GetErrorEnd(this_: *mut pxr_TfDiagnosticMgr_t, return_: *mut std_TfDiagnosticMgr_ErrorIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_EraseError(this_: *mut pxr_TfDiagnosticMgr_t, return_: *mut std_TfDiagnosticMgr_ErrorIterator_t, i: std_TfDiagnosticMgr_ErrorIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfDiagnosticMgr_EraseRange(this_: *mut pxr_TfDiagnosticMgr_t, return_: *mut std_TfDiagnosticMgr_ErrorIterator_t, first: std_TfDiagnosticMgr_ErrorIterator_t, last: std_TfDiagnosticMgr_ErrorIterator_t) -> Exception;


} // extern "C"
