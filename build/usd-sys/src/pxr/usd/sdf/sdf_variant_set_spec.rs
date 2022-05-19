#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetSchema(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut *const pxr_SdfSchemaBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetSpecType(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut pxr_SdfSpecType) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_IsDormant(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetLayer(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut *mut pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetPath(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_PermissionToEdit(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetMetaDataDisplayGroup(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut pxr_TfToken_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_SetInfo(this_: *mut pxr_SdfVariantSetSpec_t, key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_SetInfoDictionaryValue(this_: *mut pxr_SdfVariantSetSpec_t, dictionary_key: *const pxr_TfToken_t, entry_key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_HasInfo(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_ClearInfo(this_: *mut pxr_SdfVariantSetSpec_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetTypeForInfo(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut *mut pxr_TfType_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetFallbackForInfo(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut *const pxr_VtValue_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_IsInert(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut bool, ignore_children: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_HasField(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_SetField(this_: *mut pxr_SdfVariantSetSpec_t, return_: *mut bool, name: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_ClearField(this_: *mut pxr_SdfVariantSetSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec__eq(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut bool, rhs: *const pxr_SdfSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_operator_(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut bool, rhs: *const pxr_SdfSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_ctor(this_: *mut *mut pxr_SdfVariantSetSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_copy(this_: *mut *mut pxr_SdfVariantSetSpec_t, spec: *const pxr_SdfVariantSetSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetName(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_GetNameToken(this_: *const pxr_SdfVariantSetSpec_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec__assign(this_: *mut pxr_SdfVariantSetSpec_t, return_: *mut *mut pxr_SdfVariantSetSpec_t, rhs: *const pxr_SdfVariantSetSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_dtor(this_: *mut pxr_SdfVariantSetSpec_t) -> Exception;


} // extern "C"
