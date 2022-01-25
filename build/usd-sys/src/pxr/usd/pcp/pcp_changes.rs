#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpLayerStackChanges_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpCacheChanges_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpLifeboat_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpChanges_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpLayerStackChanges_ctor(this_: *mut *mut pxr_PcpLayerStackChanges_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLifeboat_ctor(this_: *mut *mut pxr_PcpLifeboat_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLifeboat_dtor(this_: *mut pxr_PcpLifeboat_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpLifeboat_Swap(this_: *mut pxr_PcpLifeboat_t, other: *mut pxr_PcpLifeboat_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_ctor(this_: *mut *mut pxr_PcpChanges_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_dtor(this_: *mut pxr_PcpChanges_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_DidMaybeFixSublayer(this_: *mut pxr_PcpChanges_t, cache: *const pxr_PcpCache_t, layer: *const pxr_SdfLayerHandle_t, asset_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_DidMuteLayer(this_: *mut pxr_PcpChanges_t, cache: *const pxr_PcpCache_t, layer_id: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_DidUnmuteLayer(this_: *mut pxr_PcpChanges_t, cache: *const pxr_PcpCache_t, layer_id: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeLayers(this_: *mut pxr_PcpChanges_t, cache: *const pxr_PcpCache_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeLayerOffsets(this_: *mut pxr_PcpChanges_t, cache: *const pxr_PcpCache_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeSignificantly(this_: *mut pxr_PcpChanges_t, cache: *const pxr_PcpCache_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeSpecs(this_: *mut pxr_PcpChanges_t, cache: *const pxr_PcpCache_t, path: *const pxr_SdfPath_t, changed_layer: *const pxr_SdfLayerHandle_t, changed_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeSpecStack(this_: *mut pxr_PcpChanges_t, cache: *const pxr_PcpCache_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeRelocates(this_: *mut pxr_PcpChanges_t, cache: *const pxr_PcpCache_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangePaths(this_: *mut pxr_PcpChanges_t, cache: *const pxr_PcpCache_t, old_path: *const pxr_SdfPath_t, new_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_DidDestroyCache(this_: *mut pxr_PcpChanges_t, cache: *const pxr_PcpCache_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_DidChangeAssetResolver(this_: *mut pxr_PcpChanges_t, cache: *const pxr_PcpCache_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_Swap(this_: *mut pxr_PcpChanges_t, other: *mut pxr_PcpChanges_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_IsEmpty(this_: *const pxr_PcpChanges_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_GetLifeboat(this_: *const pxr_PcpChanges_t, return_: *mut *const pxr_PcpLifeboat_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpChanges_Apply(this_: *const pxr_PcpChanges_t) -> Exception;


} // extern "C"
