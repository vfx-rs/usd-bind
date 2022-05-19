#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpSiteTrackerSegment_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Pcp_SdSiteRef_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____Pcp_CompressedSdSite_t {
    _unused: [u8; 0],
}

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____PcpArcType_e(pub u32);
pub const pxr_PcpArcType_PcpArcTypeRoot: pxrInternal_v0_21__pxrReserved____PcpArcType_e = pxrInternal_v0_21__pxrReserved____PcpArcType_e(0);
pub const pxr_PcpArcType_PcpArcTypeInherit: pxrInternal_v0_21__pxrReserved____PcpArcType_e = pxrInternal_v0_21__pxrReserved____PcpArcType_e(1);
pub const pxr_PcpArcType_PcpArcTypeVariant: pxrInternal_v0_21__pxrReserved____PcpArcType_e = pxrInternal_v0_21__pxrReserved____PcpArcType_e(2);
pub const pxr_PcpArcType_PcpArcTypeRelocate: pxrInternal_v0_21__pxrReserved____PcpArcType_e = pxrInternal_v0_21__pxrReserved____PcpArcType_e(3);
pub const pxr_PcpArcType_PcpArcTypeReference: pxrInternal_v0_21__pxrReserved____PcpArcType_e = pxrInternal_v0_21__pxrReserved____PcpArcType_e(4);
pub const pxr_PcpArcType_PcpArcTypePayload: pxrInternal_v0_21__pxrReserved____PcpArcType_e = pxrInternal_v0_21__pxrReserved____PcpArcType_e(5);
pub const pxr_PcpArcType_PcpArcTypeSpecialize: pxrInternal_v0_21__pxrReserved____PcpArcType_e = pxrInternal_v0_21__pxrReserved____PcpArcType_e(6);
pub const pxr_PcpArcType_PcpNumArcTypes: pxrInternal_v0_21__pxrReserved____PcpArcType_e = pxrInternal_v0_21__pxrReserved____PcpArcType_e(7);

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____PcpRangeType_e(pub u32);
pub const pxr_PcpRangeType_PcpRangeTypeRoot: pxrInternal_v0_21__pxrReserved____PcpRangeType_e = pxrInternal_v0_21__pxrReserved____PcpRangeType_e(0);
pub const pxr_PcpRangeType_PcpRangeTypeInherit: pxrInternal_v0_21__pxrReserved____PcpRangeType_e = pxrInternal_v0_21__pxrReserved____PcpRangeType_e(1);
pub const pxr_PcpRangeType_PcpRangeTypeVariant: pxrInternal_v0_21__pxrReserved____PcpRangeType_e = pxrInternal_v0_21__pxrReserved____PcpRangeType_e(2);
pub const pxr_PcpRangeType_PcpRangeTypeReference: pxrInternal_v0_21__pxrReserved____PcpRangeType_e = pxrInternal_v0_21__pxrReserved____PcpRangeType_e(3);
pub const pxr_PcpRangeType_PcpRangeTypePayload: pxrInternal_v0_21__pxrReserved____PcpRangeType_e = pxrInternal_v0_21__pxrReserved____PcpRangeType_e(4);
pub const pxr_PcpRangeType_PcpRangeTypeSpecialize: pxrInternal_v0_21__pxrReserved____PcpRangeType_e = pxrInternal_v0_21__pxrReserved____PcpRangeType_e(5);
pub const pxr_PcpRangeType_PcpRangeTypeAll: pxrInternal_v0_21__pxrReserved____PcpRangeType_e = pxrInternal_v0_21__pxrReserved____PcpRangeType_e(6);
pub const pxr_PcpRangeType_PcpRangeTypeWeakerThanRoot: pxrInternal_v0_21__pxrReserved____PcpRangeType_e = pxrInternal_v0_21__pxrReserved____PcpRangeType_e(7);
pub const pxr_PcpRangeType_PcpRangeTypeStrongerThanPayload: pxrInternal_v0_21__pxrReserved____PcpRangeType_e = pxrInternal_v0_21__pxrReserved____PcpRangeType_e(8);
pub const pxr_PcpRangeType_PcpRangeTypeInvalid: pxrInternal_v0_21__pxrReserved____PcpRangeType_e = pxrInternal_v0_21__pxrReserved____PcpRangeType_e(9);


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____Pcp_SdSiteRef__eq(this_: *const pxr_Pcp_SdSiteRef_t, return_: *mut bool, other: *const pxr_Pcp_SdSiteRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Pcp_SdSiteRef_operator_(this_: *const pxr_Pcp_SdSiteRef_t, return_: *mut bool, other: *const pxr_Pcp_SdSiteRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Pcp_CompressedSdSite_ctor(this_: *mut *mut pxr_Pcp_CompressedSdSite_t, node_index_: usize, layer_index_: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpIsInheritArc(return_: *mut bool, arc_type: pxr_PcpArcType) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpIsSpecializeArc(return_: *mut bool, arc_type: pxr_PcpArcType) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpIsClassBasedArc(return_: *mut bool, arc_type: pxr_PcpArcType) -> Exception;


} // extern "C"
