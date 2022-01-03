#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


impl pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxrInternal_v0_21__pxrReserved____SdfLayerOffset_sizeof(),
                pxrInternal_v0_21__pxrReserved____SdfLayerOffset_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_sizeof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_alignof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_ctor(this_: *mut pxr_SdfLayerOffset_t, offset: c_double, scale: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerOffset_copy(this_: *mut pxr_SdfLayerOffset_t, rhs: *const pxr_SdfLayerOffset_t) -> Exception;


} // extern "C"
