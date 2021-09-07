#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_20__pxrReserved____UsdPrimRange_t {
    _unused: [u8; 0],
}

impl pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_sizeof(),
                pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_alignof(),
            ).unwrap()
        }
    }
}


impl pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_sizeof(),
                pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_ctor(this_: *mut *mut pxr_UsdPrimRange_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_ctor_1(this_: *mut *mut pxr_UsdPrimRange_t, start: *const pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_ctor_2(this_: *mut *mut pxr_UsdPrimRange_t, start: *const pxr_UsdPrim_t, predicate: *const pxr_Usd_PrimFlagsPredicate_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_PreAndPostVisit(return_: *mut *mut pxr_UsdPrimRange_t, start: *const pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_PreAndPostVisit_1(return_: *mut *mut pxr_UsdPrimRange_t, start: *const pxr_UsdPrim_t, predicate: *const pxr_Usd_PrimFlagsPredicate_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_AllPrims(return_: *mut *mut pxr_UsdPrimRange_t, start: *const pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_AllPrimsPreAndPostVisit(return_: *mut *mut pxr_UsdPrimRange_t, start: *const pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_begin(this_: *const pxr_UsdPrimRange_t, return_: *mut pxr_UsdPrimRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_cbegin(this_: *const pxr_UsdPrimRange_t, return_: *mut pxr_UsdPrimRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_front(this_: *const pxr_UsdPrimRange_t, return_: *mut *mut pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_end(this_: *const pxr_UsdPrimRange_t, return_: *mut pxr_UsdPrimRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_cend(this_: *const pxr_UsdPrimRange_t, return_: *mut pxr_UsdPrimRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_increment_begin(this_: *mut pxr_UsdPrimRange_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_set_begin(this_: *mut pxr_UsdPrimRange_t, new_begin: *const pxr_UsdPrimRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_empty(this_: *const pxr_UsdPrimRange_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_operatorbool(this_: *const pxr_UsdPrimRange_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__eq(this_: *const pxr_UsdPrimRange_t, return_: *mut bool, other: *const pxr_UsdPrimRange_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__ne(this_: *const pxr_UsdPrimRange_t, return_: *mut bool, other: *const pxr_UsdPrimRange_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_copy(this_: *mut *mut pxr_UsdPrimRange_t, rhs: *const pxr_UsdPrimRange_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange_dtor(this_: *mut pxr_UsdPrimRange_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_sizeof() -> usize;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_alignof() -> usize;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_deref(this_: *const pxr_UsdPrimRange_iterator_t, return_: *mut *mut pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__op_inc(this_: *mut pxr_UsdPrimRange_iterator_t, return_: *mut *mut pxr_UsdPrimRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_ctor(this_: *mut pxr_UsdPrimRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_ctor_1(this_: *mut pxr_UsdPrimRange_iterator_t, e: pxr_UsdPrimRange_EndSentinel_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_IsPostVisit(this_: *const pxr_UsdPrimRange_iterator_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_PruneChildren(this_: *mut pxr_UsdPrimRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__eq(this_: *const pxr_UsdPrimRange_iterator_t, return_: *mut bool, other: *const pxr_UsdPrimRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__eq_1(this_: *const pxr_UsdPrimRange_iterator_t, return_: *mut bool, other: *const pxr_UsdPrimRange_EndSentinel_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__ne(this_: *const pxr_UsdPrimRange_iterator_t, return_: *mut bool, other: *const pxr_UsdPrimRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__ne_1(this_: *const pxr_UsdPrimRange_iterator_t, return_: *mut bool, other: *const pxr_UsdPrimRange_EndSentinel_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_copy(this_: *mut pxr_UsdPrimRange_iterator_t, rhs: *const pxr_UsdPrimRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_dtor(this_: *mut pxr_UsdPrimRange_iterator_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_sizeof() -> usize;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_alignof() -> usize;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_copy(this_: *mut pxr_UsdPrimRange_EndSentinel_t, rhs: *const pxr_UsdPrimRange_EndSentinel_t) -> Exception;

pub fn pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_dtor(this_: *mut pxr_UsdPrimRange_EndSentinel_t) -> Exception;


} // extern "C"
