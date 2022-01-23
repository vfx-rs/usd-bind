#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpCache_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_dtor(this_: *mut pxr_PcpCache_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_IsUsd(this_: *const pxr_PcpCache_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_GetFileFormatTarget(this_: *const pxr_PcpCache_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_IsPayloadIncluded(this_: *const pxr_PcpCache_t, return_: *mut bool, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_GetMutedLayers(this_: *const pxr_PcpCache_t, return_: *mut *const std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_IsLayerMuted(this_: *const pxr_PcpCache_t, return_: *mut bool, layer_identifier: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_IsLayerMuted_1(this_: *const pxr_PcpCache_t, return_: *mut bool, anchor_layer: *const pxr_SdfLayerHandle_t, layer_identifier: *const std_string_t, canonical_muted_layer_identifier: *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_GetUsedLayersRevision(this_: *const pxr_PcpCache_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_CanHaveOpinionForSite(this_: *const pxr_PcpCache_t, return_: *mut bool, local_pcp_site_path: *const pxr_SdfPath_t, layer: *const pxr_SdfLayerHandle_t, allowed_path_in_layer: *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_GetInvalidSublayerIdentifiers(this_: *const pxr_PcpCache_t, return_: *mut *mut std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_IsInvalidSublayerIdentifier(this_: *const pxr_PcpCache_t, return_: *mut bool, identifier: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_IsInvalidAssetPath(this_: *const pxr_PcpCache_t, return_: *mut bool, resolved_asset_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_HasAnyDynamicFileFormatArgumentDependencies(this_: *const pxr_PcpCache_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_IsPossibleDynamicFileFormatArgumentField(this_: *const pxr_PcpCache_t, return_: *mut bool, field: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpCache_PrintStatistics(this_: *const pxr_PcpCache_t) -> Exception;


} // extern "C"
