#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpPrimIndex_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_t {
    _unused: [u8; 0],
}

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__PayloadState_e(pub u32);
pub const pxr_PcpPrimIndexOutputs_PayloadState_NoPayload: pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__PayloadState_e = pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__PayloadState_e(0);
pub const pxr_PcpPrimIndexOutputs_PayloadState_IncludedByIncludeSet: pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__PayloadState_e = pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__PayloadState_e(1);
pub const pxr_PcpPrimIndexOutputs_PayloadState_ExcludedByIncludeSet: pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__PayloadState_e = pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__PayloadState_e(2);
pub const pxr_PcpPrimIndexOutputs_PayloadState_IncludedByPredicate: pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__PayloadState_e = pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__PayloadState_e(3);
pub const pxr_PcpPrimIndexOutputs_PayloadState_ExcludedByPredicate: pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__PayloadState_e = pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__PayloadState_e(4);


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_ctor(this_: *mut *mut pxr_PcpPrimIndex_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_copy(this_: *mut *mut pxr_PcpPrimIndex_t, rhs: *const pxr_PcpPrimIndex_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex__assign(this_: *mut pxr_PcpPrimIndex_t, return_: *mut *mut pxr_PcpPrimIndex_t, rhs: *const pxr_PcpPrimIndex_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_Swap(this_: *mut pxr_PcpPrimIndex_t, rhs: *mut pxr_PcpPrimIndex_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_swap(this_: *mut pxr_PcpPrimIndex_t, rhs: *mut pxr_PcpPrimIndex_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_IsValid(this_: *const pxr_PcpPrimIndex_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetRootNode(this_: *const pxr_PcpPrimIndex_t, return_: *mut *mut pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetPath(this_: *const pxr_PcpPrimIndex_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_HasSpecs(this_: *const pxr_PcpPrimIndex_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_HasAnyPayloads(this_: *const pxr_PcpPrimIndex_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_IsUsd(this_: *const pxr_PcpPrimIndex_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_IsInstanceable(this_: *const pxr_PcpPrimIndex_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetNodeProvidingSpec(this_: *const pxr_PcpPrimIndex_t, return_: *mut *mut pxr_PcpNodeRef_t, layer: *const pxr_SdfLayerHandle_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_PrintStatistics(this_: *const pxr_PcpPrimIndex_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_DumpToString(this_: *const pxr_PcpPrimIndex_t, return_: *mut *mut std_string_t, include_inherit_origin_info: bool, include_maps: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_DumpToDotGraph(this_: *const pxr_PcpPrimIndex_t, filename: *const std_string_t, include_inherit_origin_info: bool, include_maps: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_ComposeAuthoredVariantSelections(this_: *const pxr_PcpPrimIndex_t, return_: *mut *mut std_map_string_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_GetSelectionAppliedForVariantSet(this_: *const pxr_PcpPrimIndex_t, return_: *mut *mut std_string_t, variant_set: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndex_dtor(this_: *mut pxr_PcpPrimIndex_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_ctor(this_: *mut *mut pxr_PcpPrimIndexInputs_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_IsEquivalentTo(this_: *const pxr_PcpPrimIndexInputs_t, return_: *mut bool, params: *const pxr_PcpPrimIndexInputs_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_Cache(this_: *mut pxr_PcpPrimIndexInputs_t, return_: *mut *mut pxr_PcpPrimIndexInputs_t, cache_: *mut pxr_PcpCache_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_Cull(this_: *mut pxr_PcpPrimIndexInputs_t, return_: *mut *mut pxr_PcpPrimIndexInputs_t, do_culling: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_USD(this_: *mut pxr_PcpPrimIndexInputs_t, return_: *mut *mut pxr_PcpPrimIndexInputs_t, do_usd: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_FileFormatTarget(this_: *mut pxr_PcpPrimIndexInputs_t, return_: *mut *mut pxr_PcpPrimIndexInputs_t, target: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_copy(this_: *mut *mut pxr_PcpPrimIndexInputs_t, rhs: *const pxr_PcpPrimIndexInputs_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs__assign(this_: *mut pxr_PcpPrimIndexInputs_t, return_: *mut *mut pxr_PcpPrimIndexInputs_t, rhs: *const pxr_PcpPrimIndexInputs_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_dtor(this_: *mut pxr_PcpPrimIndexInputs_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_swap(this_: *mut pxr_PcpPrimIndexOutputs_t, r: *mut pxr_PcpPrimIndexOutputs_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_copy(this_: *mut *mut pxr_PcpPrimIndexOutputs_t, rhs: *const pxr_PcpPrimIndexOutputs_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs__assign(this_: *mut pxr_PcpPrimIndexOutputs_t, return_: *mut *mut pxr_PcpPrimIndexOutputs_t, rhs: *const pxr_PcpPrimIndexOutputs_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_dtor(this_: *mut pxr_PcpPrimIndexOutputs_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___swap(l: *mut pxr_PcpPrimIndex_t, r: *mut pxr_PcpPrimIndex_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___swap_1(l: *mut pxr_PcpPrimIndexOutputs_t, r: *mut pxr_PcpPrimIndexOutputs_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpIsNewDefaultStandinBehaviorEnabled(return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___Pcp_RescanForSpecs(index: *mut pxr_PcpPrimIndex_t, usd: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___Pcp_NeedToRecomputeDueToAssetPathChange(return_: *mut bool, index: *const pxr_PcpPrimIndex_t) -> Exception;


} // extern "C"
