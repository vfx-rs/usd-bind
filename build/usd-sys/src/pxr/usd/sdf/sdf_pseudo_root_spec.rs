#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsDormant(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetLayer(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut *mut pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetPath(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_PermissionToEdit(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInfo(this_: *mut pxr_SdfPseudoRootSpec_t, key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInfoDictionaryValue(this_: *mut pxr_SdfPseudoRootSpec_t, dictionary_key: *const pxr_TfToken_t, entry_key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasInfo(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearInfo(this_: *mut pxr_SdfPseudoRootSpec_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetTypeForInfo(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut *mut pxr_TfType_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetFallbackForInfo(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut *const pxr_VtValue_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsInert(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool, ignore_children: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasField(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetField(this_: *mut pxr_SdfPseudoRootSpec_t, return_: *mut bool, name: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearField(this_: *mut pxr_SdfPseudoRootSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;


} // extern "C"
