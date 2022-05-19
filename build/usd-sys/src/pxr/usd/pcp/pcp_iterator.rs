#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpNodeIterator_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpPrimIterator_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeIterator__op_inc(this_: *mut pxr_PcpNodeIterator_t, return_: *mut *mut pxr_PcpNodeIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeIterator__op_dec(this_: *mut pxr_PcpNodeIterator_t, return_: *mut *mut pxr_PcpNodeIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeIterator__op_dec_1(this_: *mut pxr_PcpNodeIterator_t, return_: *mut *mut pxr_PcpNodeIterator_t, rhs: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeIterator_ctor(this_: *mut *mut pxr_PcpNodeIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeIterator_copy(this_: *mut *mut pxr_PcpNodeIterator_t, rhs: *const pxr_PcpNodeIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeIterator_dtor(this_: *mut pxr_PcpNodeIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeIterator__assign(this_: *mut pxr_PcpNodeIterator_t, return_: *mut *mut pxr_PcpNodeIterator_t, rhs: *const pxr_PcpNodeIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_base(this_: *const pxr_PcpNodeReverseIterator_t, return_: *mut *const pxr_PcpNodeIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_ctor(this_: *mut *mut pxr_PcpNodeReverseIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_ctor_1(this_: *mut *mut pxr_PcpNodeReverseIterator_t, iter: *const pxr_PcpNodeIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_copy(this_: *mut *mut pxr_PcpNodeReverseIterator_t, rhs: *const pxr_PcpNodeReverseIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_dtor(this_: *mut pxr_PcpNodeReverseIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIterator__op_inc(this_: *mut pxr_PcpPrimIterator_t, return_: *mut *mut pxr_PcpPrimIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIterator__op_dec(this_: *mut pxr_PcpPrimIterator_t, return_: *mut *mut pxr_PcpPrimIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIterator__op_dec_1(this_: *mut pxr_PcpPrimIterator_t, return_: *mut *mut pxr_PcpPrimIterator_t, rhs: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIterator_ctor(this_: *mut *mut pxr_PcpPrimIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIterator_ctor_1(this_: *mut *mut pxr_PcpPrimIterator_t, prim_index: *const pxr_PcpPrimIndex_t, pos: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIterator_GetNode(this_: *const pxr_PcpPrimIterator_t, return_: *mut *mut pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIterator_copy(this_: *mut *mut pxr_PcpPrimIterator_t, rhs: *const pxr_PcpPrimIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIterator_dtor(this_: *mut pxr_PcpPrimIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIterator__assign(this_: *mut pxr_PcpPrimIterator_t, return_: *mut *mut pxr_PcpPrimIterator_t, rhs: *const pxr_PcpPrimIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_base(this_: *const pxr_PcpPrimReverseIterator_t, return_: *mut *const pxr_PcpPrimIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_ctor(this_: *mut *mut pxr_PcpPrimReverseIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_ctor_1(this_: *mut *mut pxr_PcpPrimReverseIterator_t, iter: *const pxr_PcpPrimIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_GetNode(this_: *const pxr_PcpPrimReverseIterator_t, return_: *mut *mut pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_copy(this_: *mut *mut pxr_PcpPrimReverseIterator_t, rhs: *const pxr_PcpPrimReverseIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_dtor(this_: *mut pxr_PcpPrimReverseIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__op_inc(this_: *mut pxr_PcpPropertyIterator_t, return_: *mut *mut pxr_PcpPropertyIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__op_dec(this_: *mut pxr_PcpPropertyIterator_t, return_: *mut *mut pxr_PcpPropertyIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__op_dec_1(this_: *mut pxr_PcpPropertyIterator_t, return_: *mut *mut pxr_PcpPropertyIterator_t, rhs: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_ctor(this_: *mut *mut pxr_PcpPropertyIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_ctor_1(this_: *mut *mut pxr_PcpPropertyIterator_t, index: *const pxr_PcpPropertyIndex_t, pos: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_GetNode(this_: *const pxr_PcpPropertyIterator_t, return_: *mut *mut pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_IsLocal(this_: *const pxr_PcpPropertyIterator_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_copy(this_: *mut *mut pxr_PcpPropertyIterator_t, rhs: *const pxr_PcpPropertyIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_dtor(this_: *mut pxr_PcpPropertyIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__assign(this_: *mut pxr_PcpPropertyIterator_t, return_: *mut *mut pxr_PcpPropertyIterator_t, rhs: *const pxr_PcpPropertyIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_base(this_: *const pxr_PcpPropertyReverseIterator_t, return_: *mut *const pxr_PcpPropertyIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_ctor(this_: *mut *mut pxr_PcpPropertyReverseIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_ctor_1(this_: *mut *mut pxr_PcpPropertyReverseIterator_t, iter: *const pxr_PcpPropertyIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_GetNode(this_: *const pxr_PcpPropertyReverseIterator_t, return_: *mut *mut pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_IsLocal(this_: *const pxr_PcpPropertyReverseIterator_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_copy(this_: *mut *mut pxr_PcpPropertyReverseIterator_t, rhs: *const pxr_PcpPropertyReverseIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_dtor(this_: *mut pxr_PcpPropertyReverseIterator_t) -> Exception;


} // extern "C"
