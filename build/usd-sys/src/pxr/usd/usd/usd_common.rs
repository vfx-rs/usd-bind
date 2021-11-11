#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____UsdListPosition_e(pub u32);
pub const pxr_UsdListPosition_UsdListPositionFrontOfPrependList: pxrInternal_v0_21__pxrReserved____UsdListPosition_e = pxrInternal_v0_21__pxrReserved____UsdListPosition_e(0);
pub const pxr_UsdListPosition_UsdListPositionBackOfPrependList: pxrInternal_v0_21__pxrReserved____UsdListPosition_e = pxrInternal_v0_21__pxrReserved____UsdListPosition_e(1);
pub const pxr_UsdListPosition_UsdListPositionFrontOfAppendList: pxrInternal_v0_21__pxrReserved____UsdListPosition_e = pxrInternal_v0_21__pxrReserved____UsdListPosition_e(2);
pub const pxr_UsdListPosition_UsdListPositionBackOfAppendList: pxrInternal_v0_21__pxrReserved____UsdListPosition_e = pxrInternal_v0_21__pxrReserved____UsdListPosition_e(3);

#[repr(u32)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum UsdListPosition {
    FrontOfPrependList = 0,
    BackOfPrependList = 1,
    FrontOfAppendList = 2,
    BackOfAppendList = 3,
}

impl From<pxrInternal_v0_21__pxrReserved____UsdListPosition_e> for UsdListPosition {
    fn from(e: pxrInternal_v0_21__pxrReserved____UsdListPosition_e) -> UsdListPosition {
        match e {
            pxr_UsdListPosition_UsdListPositionFrontOfPrependList => UsdListPosition::FrontOfPrependList,
            pxr_UsdListPosition_UsdListPositionBackOfPrependList => UsdListPosition::BackOfPrependList,
            pxr_UsdListPosition_UsdListPositionFrontOfAppendList => UsdListPosition::FrontOfAppendList,
            pxr_UsdListPosition_UsdListPositionBackOfAppendList => UsdListPosition::BackOfAppendList,
            _ => panic!("Invalid value {:?} for UsdListPosition in conversion", e),
        }
    }
}

impl From<UsdListPosition> for pxrInternal_v0_21__pxrReserved____UsdListPosition_e {
    fn from(e: UsdListPosition) -> pxrInternal_v0_21__pxrReserved____UsdListPosition_e {
        match e {
            UsdListPosition::FrontOfPrependList => pxr_UsdListPosition_UsdListPositionFrontOfPrependList,
            UsdListPosition::BackOfPrependList => pxr_UsdListPosition_UsdListPositionBackOfPrependList,
            UsdListPosition::FrontOfAppendList => pxr_UsdListPosition_UsdListPositionFrontOfAppendList,
            UsdListPosition::BackOfAppendList => pxr_UsdListPosition_UsdListPositionBackOfAppendList,
        }
    }
}

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____UsdLoadPolicy_e(pub u32);
pub const pxr_UsdLoadPolicy_UsdLoadWithDescendants: pxrInternal_v0_21__pxrReserved____UsdLoadPolicy_e = pxrInternal_v0_21__pxrReserved____UsdLoadPolicy_e(0);
pub const pxr_UsdLoadPolicy_UsdLoadWithoutDescendants: pxrInternal_v0_21__pxrReserved____UsdLoadPolicy_e = pxrInternal_v0_21__pxrReserved____UsdLoadPolicy_e(1);

#[repr(u32)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum UsdLoadPolicy {
    WithDescendants = 0,
    WithoutDescendants = 1,
}

impl From<pxrInternal_v0_21__pxrReserved____UsdLoadPolicy_e> for UsdLoadPolicy {
    fn from(e: pxrInternal_v0_21__pxrReserved____UsdLoadPolicy_e) -> UsdLoadPolicy {
        match e {
            pxr_UsdLoadPolicy_UsdLoadWithDescendants => UsdLoadPolicy::WithDescendants,
            pxr_UsdLoadPolicy_UsdLoadWithoutDescendants => UsdLoadPolicy::WithoutDescendants,
            _ => panic!("Invalid value {:?} for UsdLoadPolicy in conversion", e),
        }
    }
}

impl From<UsdLoadPolicy> for pxrInternal_v0_21__pxrReserved____UsdLoadPolicy_e {
    fn from(e: UsdLoadPolicy) -> pxrInternal_v0_21__pxrReserved____UsdLoadPolicy_e {
        match e {
            UsdLoadPolicy::WithDescendants => pxr_UsdLoadPolicy_UsdLoadWithDescendants,
            UsdLoadPolicy::WithoutDescendants => pxr_UsdLoadPolicy_UsdLoadWithoutDescendants,
        }
    }
}


extern "C" {


} // extern "C"
