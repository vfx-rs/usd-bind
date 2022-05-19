#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpLayerStack_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetCurrentCount(this_: *const pxr_PcpLayerStack_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_IsUnique(this_: *const pxr_PcpLayerStack_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_SetShouldInvokeUniqueChangedListener(this_: *mut pxr_PcpLayerStack_t, should_call: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_EnableNotification2(this_: *const pxr_PcpLayerStack_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetUniqueIdentifier(this_: *const pxr_PcpLayerStack_t, return_: *mut *const c_void) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_dtor(this_: *mut pxr_PcpLayerStack_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetIdentifier(this_: *const pxr_PcpLayerStack_t, return_: *mut *const pxr_PcpLayerStackIdentifier_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetLayerOffsetForLayer(this_: *const pxr_PcpLayerStack_t, return_: *mut *const pxr_SdfLayerOffset_t, rhs: *const pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetLayerOffsetForLayer_1(this_: *const pxr_PcpLayerStack_t, return_: *mut *const pxr_SdfLayerOffset_t, layer_idx: usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_HasLayer(this_: *const pxr_PcpLayerStack_t, return_: *mut bool, layer: *const pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetTimeCodesPerSecond(this_: *const pxr_PcpLayerStack_t, return_: *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetPathsToPrimsWithRelocates(this_: *const pxr_PcpLayerStack_t, return_: *mut *const std_SdfPathVector_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_Apply(this_: *mut pxr_PcpLayerStack_t, changes: *const pxr_PcpLayerStackChanges_t, lifeboat: *mut pxr_PcpLifeboat_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetExpressionForRelocatesAtPath(this_: *mut pxr_PcpLayerStack_t, return_: *mut *mut pxr_PcpMapExpression_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpIsTimeScalingForLayerTimeCodesPerSecondDisabled(return_: *mut bool) -> Exception;


} // extern "C"
