#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__CacheSite_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__LayerStackSite_t {
    _unused: [u8; 0],
}

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e(pub u32);
pub const pxr_PcpNamespaceEdits_EditType_EditPath: pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e = pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e(0);
pub const pxr_PcpNamespaceEdits_EditType_EditInherit: pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e = pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e(1);
pub const pxr_PcpNamespaceEdits_EditType_EditSpecializes: pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e = pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e(2);
pub const pxr_PcpNamespaceEdits_EditType_EditReference: pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e = pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e(3);
pub const pxr_PcpNamespaceEdits_EditType_EditPayload: pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e = pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e(4);
pub const pxr_PcpNamespaceEdits_EditType_EditRelocate: pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e = pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__EditType_e(5);


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_Swap(this_: *mut pxr_PcpNamespaceEdits_t, rhs: *mut pxr_PcpNamespaceEdits_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_copy(this_: *mut *mut pxr_PcpNamespaceEdits_t, rhs: *const pxr_PcpNamespaceEdits_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__assign(this_: *mut pxr_PcpNamespaceEdits_t, return_: *mut *mut pxr_PcpNamespaceEdits_t, rhs: *const pxr_PcpNamespaceEdits_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_dtor(this_: *mut pxr_PcpNamespaceEdits_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__LayerStackSite_copy(this_: *mut *mut pxr_PcpNamespaceEdits_LayerStackSite_t, rhs: *const pxr_PcpNamespaceEdits_LayerStackSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__LayerStackSite__assign(this_: *mut pxr_PcpNamespaceEdits_LayerStackSite_t, return_: *mut *mut pxr_PcpNamespaceEdits_LayerStackSite_t, rhs: *const pxr_PcpNamespaceEdits_LayerStackSite_t) -> Exception;


} // extern "C"
