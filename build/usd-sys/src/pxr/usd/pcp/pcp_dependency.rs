#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpDependency_t {
    _unused: [u8; 0],
}

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____PcpDependencyType_e(pub u32);
pub const pxr_PcpDependencyType_PcpDependencyTypeNone: pxrInternal_v0_21__pxrReserved____PcpDependencyType_e = pxrInternal_v0_21__pxrReserved____PcpDependencyType_e(0);
pub const pxr_PcpDependencyType_PcpDependencyTypeRoot: pxrInternal_v0_21__pxrReserved____PcpDependencyType_e = pxrInternal_v0_21__pxrReserved____PcpDependencyType_e(1);
pub const pxr_PcpDependencyType_PcpDependencyTypePurelyDirect: pxrInternal_v0_21__pxrReserved____PcpDependencyType_e = pxrInternal_v0_21__pxrReserved____PcpDependencyType_e(2);
pub const pxr_PcpDependencyType_PcpDependencyTypePartlyDirect: pxrInternal_v0_21__pxrReserved____PcpDependencyType_e = pxrInternal_v0_21__pxrReserved____PcpDependencyType_e(4);
pub const pxr_PcpDependencyType_PcpDependencyTypeDirect: pxrInternal_v0_21__pxrReserved____PcpDependencyType_e = pxrInternal_v0_21__pxrReserved____PcpDependencyType_e(6);
pub const pxr_PcpDependencyType_PcpDependencyTypeAncestral: pxrInternal_v0_21__pxrReserved____PcpDependencyType_e = pxrInternal_v0_21__pxrReserved____PcpDependencyType_e(8);
pub const pxr_PcpDependencyType_PcpDependencyTypeVirtual: pxrInternal_v0_21__pxrReserved____PcpDependencyType_e = pxrInternal_v0_21__pxrReserved____PcpDependencyType_e(16);
pub const pxr_PcpDependencyType_PcpDependencyTypeNonVirtual: pxrInternal_v0_21__pxrReserved____PcpDependencyType_e = pxrInternal_v0_21__pxrReserved____PcpDependencyType_e(32);
pub const pxr_PcpDependencyType_PcpDependencyTypeAnyNonVirtual: pxrInternal_v0_21__pxrReserved____PcpDependencyType_e = pxrInternal_v0_21__pxrReserved____PcpDependencyType_e(47);
pub const pxr_PcpDependencyType_PcpDependencyTypeAnyIncludingVirtual: pxrInternal_v0_21__pxrReserved____PcpDependencyType_e = pxrInternal_v0_21__pxrReserved____PcpDependencyType_e(63);


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpDependency__eq(this_: *const pxr_PcpDependency_t, return_: *mut bool, rhs: *const pxr_PcpDependency_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpDependency__ne(this_: *const pxr_PcpDependency_t, return_: *mut bool, rhs: *const pxr_PcpDependency_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpDependencyFlagsToString(return_: *mut *mut std_string_t, flags: c_uint) -> Exception;


} // extern "C"
