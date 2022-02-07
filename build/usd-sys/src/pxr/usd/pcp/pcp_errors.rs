#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorBase_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyBase_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPathBase_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorTargetPathBase_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_t {
    _unused: [u8; 0],
}

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____PcpErrorType_e(pub u32);
pub const pxr_PcpErrorType_PcpErrorType_ArcCycle: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(0);
pub const pxr_PcpErrorType_PcpErrorType_ArcPermissionDenied: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(1);
pub const pxr_PcpErrorType_PcpErrorType_IndexCapacityExceeded: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(2);
pub const pxr_PcpErrorType_PcpErrorType_ArcCapacityExceeded: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(3);
pub const pxr_PcpErrorType_PcpErrorType_ArcNamespaceDepthCapacityExceeded: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(4);
pub const pxr_PcpErrorType_PcpErrorType_InconsistentPropertyType: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(5);
pub const pxr_PcpErrorType_PcpErrorType_InconsistentAttributeType: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(6);
pub const pxr_PcpErrorType_PcpErrorType_InconsistentAttributeVariability: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(7);
pub const pxr_PcpErrorType_PcpErrorType_InternalAssetPath: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(8);
pub const pxr_PcpErrorType_PcpErrorType_InvalidPrimPath: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(9);
pub const pxr_PcpErrorType_PcpErrorType_InvalidAssetPath: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(10);
pub const pxr_PcpErrorType_PcpErrorType_InvalidInstanceTargetPath: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(11);
pub const pxr_PcpErrorType_PcpErrorType_InvalidExternalTargetPath: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(12);
pub const pxr_PcpErrorType_PcpErrorType_InvalidTargetPath: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(13);
pub const pxr_PcpErrorType_PcpErrorType_InvalidReferenceOffset: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(14);
pub const pxr_PcpErrorType_PcpErrorType_InvalidSublayerOffset: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(15);
pub const pxr_PcpErrorType_PcpErrorType_InvalidSublayerOwnership: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(16);
pub const pxr_PcpErrorType_PcpErrorType_InvalidSublayerPath: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(17);
pub const pxr_PcpErrorType_PcpErrorType_InvalidVariantSelection: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(18);
pub const pxr_PcpErrorType_PcpErrorType_MutedAssetPath: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(19);
pub const pxr_PcpErrorType_PcpErrorType_OpinionAtRelocationSource: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(20);
pub const pxr_PcpErrorType_PcpErrorType_PrimPermissionDenied: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(21);
pub const pxr_PcpErrorType_PcpErrorType_PropertyPermissionDenied: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(22);
pub const pxr_PcpErrorType_PcpErrorType_SublayerCycle: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(23);
pub const pxr_PcpErrorType_PcpErrorType_TargetPermissionDenied: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(24);
pub const pxr_PcpErrorType_PcpErrorType_UnresolvedPrimPath: pxrInternal_v0_21__pxrReserved____PcpErrorType_e = pxrInternal_v0_21__pxrReserved____PcpErrorType_e(25);


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorBase_dtor(this_: *mut pxr_PcpErrorBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorBase_ToString(this_: *const pxr_PcpErrorBase_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorBase_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorBase_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_ToString(this_: *const pxr_PcpErrorArcCycle_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorArcCycle_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_dtor(this_: *mut pxr_PcpErrorArcCycle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_copy(this_: *mut *mut pxr_PcpErrorArcCycle_t, rhs: *const pxr_PcpErrorArcCycle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_ToString(this_: *const pxr_PcpErrorArcPermissionDenied_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorArcPermissionDenied_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_dtor(this_: *mut pxr_PcpErrorArcPermissionDenied_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_copy(this_: *mut *mut pxr_PcpErrorArcPermissionDenied_t, rhs: *const pxr_PcpErrorArcPermissionDenied_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_ToString(this_: *const pxr_PcpErrorCapacityExceeded_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorCapacityExceeded_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_dtor(this_: *mut pxr_PcpErrorCapacityExceeded_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_copy(this_: *mut *mut pxr_PcpErrorCapacityExceeded_t, rhs: *const pxr_PcpErrorCapacityExceeded_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyBase_ToString(this_: *const pxr_PcpErrorInconsistentPropertyBase_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyBase_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInconsistentPropertyBase_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyBase_dtor(this_: *mut pxr_PcpErrorInconsistentPropertyBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_ToString(this_: *const pxr_PcpErrorInconsistentPropertyType_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInconsistentPropertyType_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_dtor(this_: *mut pxr_PcpErrorInconsistentPropertyType_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_copy(this_: *mut *mut pxr_PcpErrorInconsistentPropertyType_t, rhs: *const pxr_PcpErrorInconsistentPropertyType_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_ToString(this_: *const pxr_PcpErrorInconsistentAttributeType_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInconsistentAttributeType_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_dtor(this_: *mut pxr_PcpErrorInconsistentAttributeType_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_copy(this_: *mut *mut pxr_PcpErrorInconsistentAttributeType_t, rhs: *const pxr_PcpErrorInconsistentAttributeType_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_ToString(this_: *const pxr_PcpErrorInconsistentAttributeVariability_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInconsistentAttributeVariability_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_dtor(this_: *mut pxr_PcpErrorInconsistentAttributeVariability_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_copy(this_: *mut *mut pxr_PcpErrorInconsistentAttributeVariability_t, rhs: *const pxr_PcpErrorInconsistentAttributeVariability_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_ToString(this_: *const pxr_PcpErrorInternalAssetPath_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInternalAssetPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_dtor(this_: *mut pxr_PcpErrorInternalAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_copy(this_: *mut *mut pxr_PcpErrorInternalAssetPath_t, rhs: *const pxr_PcpErrorInternalAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_ToString(this_: *const pxr_PcpErrorInvalidPrimPath_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInvalidPrimPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_dtor(this_: *mut pxr_PcpErrorInvalidPrimPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_copy(this_: *mut *mut pxr_PcpErrorInvalidPrimPath_t, rhs: *const pxr_PcpErrorInvalidPrimPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPathBase_ToString(this_: *const pxr_PcpErrorInvalidAssetPathBase_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPathBase_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInvalidAssetPathBase_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPathBase_dtor(this_: *mut pxr_PcpErrorInvalidAssetPathBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_ToString(this_: *const pxr_PcpErrorInvalidAssetPath_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInvalidAssetPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_dtor(this_: *mut pxr_PcpErrorInvalidAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_copy(this_: *mut *mut pxr_PcpErrorInvalidAssetPath_t, rhs: *const pxr_PcpErrorInvalidAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_ToString(this_: *const pxr_PcpErrorMutedAssetPath_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorMutedAssetPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_dtor(this_: *mut pxr_PcpErrorMutedAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_copy(this_: *mut *mut pxr_PcpErrorMutedAssetPath_t, rhs: *const pxr_PcpErrorMutedAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorTargetPathBase_ToString(this_: *const pxr_PcpErrorTargetPathBase_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorTargetPathBase_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorTargetPathBase_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorTargetPathBase_dtor(this_: *mut pxr_PcpErrorTargetPathBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_ToString(this_: *const pxr_PcpErrorInvalidInstanceTargetPath_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInvalidInstanceTargetPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_dtor(this_: *mut pxr_PcpErrorInvalidInstanceTargetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_copy(this_: *mut *mut pxr_PcpErrorInvalidInstanceTargetPath_t, rhs: *const pxr_PcpErrorInvalidInstanceTargetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_ToString(this_: *const pxr_PcpErrorInvalidExternalTargetPath_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInvalidExternalTargetPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_dtor(this_: *mut pxr_PcpErrorInvalidExternalTargetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_copy(this_: *mut *mut pxr_PcpErrorInvalidExternalTargetPath_t, rhs: *const pxr_PcpErrorInvalidExternalTargetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_ToString(this_: *const pxr_PcpErrorInvalidTargetPath_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInvalidTargetPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_dtor(this_: *mut pxr_PcpErrorInvalidTargetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_copy(this_: *mut *mut pxr_PcpErrorInvalidTargetPath_t, rhs: *const pxr_PcpErrorInvalidTargetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_ToString(this_: *const pxr_PcpErrorInvalidSublayerOffset_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInvalidSublayerOffset_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_dtor(this_: *mut pxr_PcpErrorInvalidSublayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_copy(this_: *mut *mut pxr_PcpErrorInvalidSublayerOffset_t, rhs: *const pxr_PcpErrorInvalidSublayerOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_ToString(this_: *const pxr_PcpErrorInvalidReferenceOffset_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInvalidReferenceOffset_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_dtor(this_: *mut pxr_PcpErrorInvalidReferenceOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_copy(this_: *mut *mut pxr_PcpErrorInvalidReferenceOffset_t, rhs: *const pxr_PcpErrorInvalidReferenceOffset_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_ToString(this_: *const pxr_PcpErrorInvalidSublayerOwnership_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInvalidSublayerOwnership_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_dtor(this_: *mut pxr_PcpErrorInvalidSublayerOwnership_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_copy(this_: *mut *mut pxr_PcpErrorInvalidSublayerOwnership_t, rhs: *const pxr_PcpErrorInvalidSublayerOwnership_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_ToString(this_: *const pxr_PcpErrorInvalidSublayerPath_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInvalidSublayerPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_dtor(this_: *mut pxr_PcpErrorInvalidSublayerPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_copy(this_: *mut *mut pxr_PcpErrorInvalidSublayerPath_t, rhs: *const pxr_PcpErrorInvalidSublayerPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_ToString(this_: *const pxr_PcpErrorInvalidVariantSelection_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorInvalidVariantSelection_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_dtor(this_: *mut pxr_PcpErrorInvalidVariantSelection_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_copy(this_: *mut *mut pxr_PcpErrorInvalidVariantSelection_t, rhs: *const pxr_PcpErrorInvalidVariantSelection_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_ToString(this_: *const pxr_PcpErrorOpinionAtRelocationSource_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorOpinionAtRelocationSource_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_dtor(this_: *mut pxr_PcpErrorOpinionAtRelocationSource_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_copy(this_: *mut *mut pxr_PcpErrorOpinionAtRelocationSource_t, rhs: *const pxr_PcpErrorOpinionAtRelocationSource_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_ToString(this_: *const pxr_PcpErrorPrimPermissionDenied_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorPrimPermissionDenied_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_dtor(this_: *mut pxr_PcpErrorPrimPermissionDenied_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_copy(this_: *mut *mut pxr_PcpErrorPrimPermissionDenied_t, rhs: *const pxr_PcpErrorPrimPermissionDenied_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_ToString(this_: *const pxr_PcpErrorPropertyPermissionDenied_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorPropertyPermissionDenied_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_dtor(this_: *mut pxr_PcpErrorPropertyPermissionDenied_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_copy(this_: *mut *mut pxr_PcpErrorPropertyPermissionDenied_t, rhs: *const pxr_PcpErrorPropertyPermissionDenied_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_ToString(this_: *const pxr_PcpErrorSublayerCycle_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorSublayerCycle_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_dtor(this_: *mut pxr_PcpErrorSublayerCycle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_copy(this_: *mut *mut pxr_PcpErrorSublayerCycle_t, rhs: *const pxr_PcpErrorSublayerCycle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_ToString(this_: *const pxr_PcpErrorTargetPermissionDenied_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorTargetPermissionDenied_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_dtor(this_: *mut pxr_PcpErrorTargetPermissionDenied_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_copy(this_: *mut *mut pxr_PcpErrorTargetPermissionDenied_t, rhs: *const pxr_PcpErrorTargetPermissionDenied_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_ToString(this_: *const pxr_PcpErrorUnresolvedPrimPath_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_ShouldReportAtMostOnce(this_: *const pxr_PcpErrorUnresolvedPrimPath_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_dtor(this_: *mut pxr_PcpErrorUnresolvedPrimPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_copy(this_: *mut *mut pxr_PcpErrorUnresolvedPrimPath_t, rhs: *const pxr_PcpErrorUnresolvedPrimPath_t) -> Exception;


} // extern "C"
