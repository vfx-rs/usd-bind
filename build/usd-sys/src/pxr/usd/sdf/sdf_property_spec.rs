#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPropertySpec_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsDormant(this_: *const pxr_SdfPropertySpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetLayer(this_: *const pxr_SdfPropertySpec_t, return_: *mut *mut pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetPath(this_: *const pxr_SdfPropertySpec_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_PermissionToEdit(this_: *const pxr_SdfPropertySpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetMetaDataDisplayGroup(this_: *const pxr_SdfPropertySpec_t, return_: *mut pxr_TfToken_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetInfo(this_: *mut pxr_SdfPropertySpec_t, key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetInfoDictionaryValue(this_: *mut pxr_SdfPropertySpec_t, dictionary_key: *const pxr_TfToken_t, entry_key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasInfo(this_: *const pxr_SdfPropertySpec_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ClearInfo(this_: *mut pxr_SdfPropertySpec_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetTypeForInfo(this_: *const pxr_SdfPropertySpec_t, return_: *mut *mut pxr_TfType_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetFallbackForInfo(this_: *const pxr_SdfPropertySpec_t, return_: *mut *const pxr_VtValue_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsInert(this_: *const pxr_SdfPropertySpec_t, return_: *mut bool, ignore_children: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_HasField(this_: *const pxr_SdfPropertySpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetField(this_: *mut pxr_SdfPropertySpec_t, return_: *mut bool, name: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ClearField(this_: *mut pxr_SdfPropertySpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_ctor(this_: *mut *mut pxr_SdfPropertySpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_copy(this_: *mut *mut pxr_SdfPropertySpec_t, spec: *const pxr_SdfPropertySpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetName(this_: *const pxr_SdfPropertySpec_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetNameToken(this_: *const pxr_SdfPropertySpec_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_CanSetName(this_: *const pxr_SdfPropertySpec_t, return_: *mut bool, new_name: *const std_string_t, why_not: *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetName(this_: *mut pxr_SdfPropertySpec_t, return_: *mut bool, new_name: *const std_string_t, validate: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_IsValidName(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetCustomData(this_: *mut pxr_SdfPropertySpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_SetAssetInfo(this_: *mut pxr_SdfPropertySpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPropertySpec_GetDisplayGroup(this_: *const pxr_SdfPropertySpec_t, return_: *mut *mut std_string_t) -> Exception;


} // extern "C"
