#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


impl pxrInternal_v0_21__pxrReserved____GfQuath_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxrInternal_v0_21__pxrReserved____GfQuath_sizeof(),
                pxrInternal_v0_21__pxrReserved____GfQuath_alignof(),
            ).unwrap()
        }
    }
}


impl pxrInternal_v0_21__pxrReserved____GfQuatf_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxrInternal_v0_21__pxrReserved____GfQuatf_sizeof(),
                pxrInternal_v0_21__pxrReserved____GfQuatf_alignof(),
            ).unwrap()
        }
    }
}


impl pxrInternal_v0_21__pxrReserved____GfQuatd_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxrInternal_v0_21__pxrReserved____GfQuatd_sizeof(),
                pxrInternal_v0_21__pxrReserved____GfQuatd_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____GfQuath_sizeof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____GfQuath_alignof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____GfQuatf_sizeof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____GfQuatf_alignof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____GfQuatd_sizeof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____GfQuatd_alignof() -> usize;


} // extern "C"
