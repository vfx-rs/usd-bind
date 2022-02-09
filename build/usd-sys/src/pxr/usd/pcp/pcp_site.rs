#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpSite_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpSite__Hash_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpSiteStr_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_ctor(this_: *mut *mut pxr_PcpLayerStackSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__eq(this_: *const pxr_PcpLayerStackSite_t, return_: *mut bool, rhs: *const pxr_PcpLayerStackSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_operator_(this_: *const pxr_PcpLayerStackSite_t, return_: *mut bool, rhs: *const pxr_PcpLayerStackSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_copy(this_: *mut *mut pxr_PcpLayerStackSite_t, rhs: *const pxr_PcpLayerStackSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__assign(this_: *mut pxr_PcpLayerStackSite_t, return_: *mut *mut pxr_PcpLayerStackSite_t, rhs: *const pxr_PcpLayerStackSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_dtor(this_: *mut pxr_PcpLayerStackSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash__op_call(this_: *const pxr_PcpLayerStackSite_Hash_t, return_: *mut usize, rhs: *const pxr_PcpLayerStackSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_ctor(this_: *mut *mut pxr_PcpLayerStackSite_Hash_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_copy(this_: *mut *mut pxr_PcpLayerStackSite_Hash_t, rhs: *const pxr_PcpLayerStackSite_Hash_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_dtor(this_: *mut pxr_PcpLayerStackSite_Hash_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSite_ctor(this_: *mut *mut pxr_PcpSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSite_ctor_1(this_: *mut *mut pxr_PcpSite_t, _param0: *const pxr_PcpLayerStackIdentifier_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSite_ctor_2(this_: *mut *mut pxr_PcpSite_t, _param0: *const pxr_SdfLayerHandle_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSite_ctor_3(this_: *mut *mut pxr_PcpSite_t, rhs: *const pxr_PcpLayerStackSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSite__eq(this_: *const pxr_PcpSite_t, return_: *mut bool, rhs: *const pxr_PcpSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSite_operator_(this_: *const pxr_PcpSite_t, return_: *mut bool, rhs: *const pxr_PcpSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSite__assign(this_: *mut pxr_PcpSite_t, return_: *mut *mut pxr_PcpSite_t, rhs: *const pxr_PcpSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSite_copy(this_: *mut *mut pxr_PcpSite_t, rhs: *const pxr_PcpSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSite__Hash__op_call(this_: *const pxr_PcpSite_Hash_t, return_: *mut usize, rhs: *const pxr_PcpSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSite__Hash_ctor(this_: *mut *mut pxr_PcpSite_Hash_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSite__Hash_copy(this_: *mut *mut pxr_PcpSite_Hash_t, rhs: *const pxr_PcpSite_Hash_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSite__Hash_dtor(this_: *mut pxr_PcpSite_Hash_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor(this_: *mut *mut pxr_PcpSiteStr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_1(this_: *mut *mut pxr_PcpSiteStr_t, _param0: *const pxr_PcpLayerStackIdentifierStr_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_2(this_: *mut *mut pxr_PcpSiteStr_t, _param0: *const pxr_PcpLayerStackIdentifier_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_3(this_: *mut *mut pxr_PcpSiteStr_t, _param0: *const pxr_SdfLayerHandle_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_4(this_: *mut *mut pxr_PcpSiteStr_t, rhs: *const pxr_PcpLayerStackSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_5(this_: *mut *mut pxr_PcpSiteStr_t, rhs: *const pxr_PcpSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSiteStr__eq(this_: *const pxr_PcpSiteStr_t, return_: *mut bool, rhs: *const pxr_PcpSiteStr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSiteStr_operator_(this_: *const pxr_PcpSiteStr_t, return_: *mut bool, rhs: *const pxr_PcpSiteStr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSiteStr_copy(this_: *mut *mut pxr_PcpSiteStr_t, rhs: *const pxr_PcpSiteStr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash__op_call(this_: *const pxr_PcpSiteStr_Hash_t, return_: *mut usize, rhs: *const pxr_PcpSiteStr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_ctor(this_: *mut *mut pxr_PcpSiteStr_Hash_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_copy(this_: *mut *mut pxr_PcpSiteStr_Hash_t, rhs: *const pxr_PcpSiteStr_Hash_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_dtor(this_: *mut pxr_PcpSiteStr_Hash_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___hash_value_2(return_: *mut usize, site: *const pxr_PcpSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___hash_value_3(return_: *mut usize, site: *const pxr_PcpSiteStr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___hash_value_4(return_: *mut usize, site: *const pxr_PcpLayerStackSite_t) -> Exception;


} // extern "C"
