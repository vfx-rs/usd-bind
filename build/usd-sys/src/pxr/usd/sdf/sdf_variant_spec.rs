#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfVariantSpec_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetSchema(this_: *const pxr_SdfVariantSpec_t, return_: *mut *const pxr_SdfSchemaBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_IsDormant(this_: *const pxr_SdfVariantSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetLayer(this_: *const pxr_SdfVariantSpec_t, return_: *mut *mut pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetPath(this_: *const pxr_SdfVariantSpec_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_PermissionToEdit(this_: *const pxr_SdfVariantSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_SetInfo(this_: *mut pxr_SdfVariantSpec_t, key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_SetInfoDictionaryValue(this_: *mut pxr_SdfVariantSpec_t, dictionary_key: *const pxr_TfToken_t, entry_key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_HasInfo(this_: *const pxr_SdfVariantSpec_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_ClearInfo(this_: *mut pxr_SdfVariantSpec_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetTypeForInfo(this_: *const pxr_SdfVariantSpec_t, return_: *mut *mut pxr_TfType_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetFallbackForInfo(this_: *const pxr_SdfVariantSpec_t, return_: *mut *const pxr_VtValue_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_IsInert(this_: *const pxr_SdfVariantSpec_t, return_: *mut bool, ignore_children: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_HasField(this_: *const pxr_SdfVariantSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_SetField(this_: *mut pxr_SdfVariantSpec_t, return_: *mut bool, name: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_ClearField(this_: *mut pxr_SdfVariantSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_ctor(this_: *mut *mut pxr_SdfVariantSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_copy(this_: *mut *mut pxr_SdfVariantSpec_t, spec: *const pxr_SdfVariantSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetName(this_: *const pxr_SdfVariantSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_GetVariantNames(this_: *const pxr_SdfVariantSpec_t, return_: *mut *mut std_vector_string_t, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec__assign(this_: *mut pxr_SdfVariantSpec_t, return_: *mut *mut pxr_SdfVariantSpec_t, rhs: *const pxr_SdfVariantSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSpec_dtor(this_: *mut pxr_SdfVariantSpec_t) -> Exception;


} // extern "C"
