#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__Hash_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__Hash_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_ctor(this_: *mut *mut pxr_PcpLayerStackIdentifier_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_ctor_1(this_: *mut *mut pxr_PcpLayerStackIdentifier_t, root_layer_: *const pxr_SdfLayerHandle_t, session_layer_: *const pxr_SdfLayerHandle_t, path_resolver_context_: *const pxr_ArResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__assign(this_: *mut pxr_PcpLayerStackIdentifier_t, return_: *mut *mut pxr_PcpLayerStackIdentifier_t, rhs: *const pxr_PcpLayerStackIdentifier_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__eq(this_: *const pxr_PcpLayerStackIdentifier_t, return_: *mut bool, rhs: *const pxr_PcpLayerStackIdentifier_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_operator_(this_: *const pxr_PcpLayerStackIdentifier_t, return_: *mut bool, rhs: *const pxr_PcpLayerStackIdentifier_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_GetHash(this_: *const pxr_PcpLayerStackIdentifier_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_copy(this_: *mut *mut pxr_PcpLayerStackIdentifier_t, rhs: *const pxr_PcpLayerStackIdentifier_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__Hash__op_call(this_: *const pxr_PcpLayerStackIdentifier_Hash_t, return_: *mut usize, x: *const pxr_PcpLayerStackIdentifier_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_ctor(this_: *mut *mut pxr_PcpLayerStackIdentifierStr_t, root_layer_id: *const std_string_t, session_layer_id: *const std_string_t, resolver_context: *const pxr_ArResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_ctor_1(this_: *mut *mut pxr_PcpLayerStackIdentifierStr_t, lsid: *const pxr_PcpLayerStackIdentifier_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__eq(this_: *const pxr_PcpLayerStackIdentifierStr_t, return_: *mut bool, rhs: *const pxr_PcpLayerStackIdentifierStr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_operator_(this_: *const pxr_PcpLayerStackIdentifierStr_t, return_: *mut bool, rhs: *const pxr_PcpLayerStackIdentifierStr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_GetHash(this_: *const pxr_PcpLayerStackIdentifierStr_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_copy(this_: *mut *mut pxr_PcpLayerStackIdentifierStr_t, rhs: *const pxr_PcpLayerStackIdentifierStr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__assign(this_: *mut pxr_PcpLayerStackIdentifierStr_t, return_: *mut *mut pxr_PcpLayerStackIdentifierStr_t, rhs: *const pxr_PcpLayerStackIdentifierStr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_dtor(this_: *mut pxr_PcpLayerStackIdentifierStr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__Hash__op_call(this_: *const pxr_PcpLayerStackIdentifierStr_Hash_t, return_: *mut usize, x: *const pxr_PcpLayerStackIdentifierStr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___hash_value_1(return_: *mut usize, x: *const pxr_PcpLayerStackIdentifier_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___hash_value_2(return_: *mut usize, x: *const pxr_PcpLayerStackIdentifierStr_t) -> Exception;


} // extern "C"
