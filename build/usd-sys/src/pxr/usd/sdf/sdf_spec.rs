#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfSpec_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_ctor(this_: *mut *mut pxr_SdfSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_copy(this_: *mut *mut pxr_SdfSpec_t, spec: *const pxr_SdfSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec__assign(this_: *mut pxr_SdfSpec_t, return_: *mut *mut pxr_SdfSpec_t, other: *const pxr_SdfSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_dtor(this_: *mut pxr_SdfSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_GetSchema(this_: *const pxr_SdfSpec_t, return_: *mut *const pxr_SdfSchemaBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_IsDormant(this_: *const pxr_SdfSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_GetLayer(this_: *const pxr_SdfSpec_t, return_: *mut *mut pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_GetPath(this_: *const pxr_SdfSpec_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_PermissionToEdit(this_: *const pxr_SdfSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_GetMetaDataDisplayGroup(this_: *const pxr_SdfSpec_t, return_: *mut pxr_TfToken_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_SetInfo(this_: *mut pxr_SdfSpec_t, key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_SetInfoDictionaryValue(this_: *mut pxr_SdfSpec_t, dictionary_key: *const pxr_TfToken_t, entry_key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_HasInfo(this_: *const pxr_SdfSpec_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_ClearInfo(this_: *mut pxr_SdfSpec_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_GetTypeForInfo(this_: *const pxr_SdfSpec_t, return_: *mut *mut pxr_TfType_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_GetFallbackForInfo(this_: *const pxr_SdfSpec_t, return_: *mut *const pxr_VtValue_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_IsInert(this_: *const pxr_SdfSpec_t, return_: *mut bool, ignore_children: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_HasField(this_: *const pxr_SdfSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_SetField(this_: *mut pxr_SdfSpec_t, return_: *mut bool, name: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_ClearField(this_: *mut pxr_SdfSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec__eq(this_: *const pxr_SdfSpec_t, return_: *mut bool, rhs: *const pxr_SdfSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSpec_operator_(this_: *const pxr_SdfSpec_t, return_: *mut bool, rhs: *const pxr_SdfSpec_t) -> Exception;


} // extern "C"
