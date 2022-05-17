#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSchema(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *const pxr_SdfSchemaBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsDormant(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetLayer(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *mut pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetPath(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_PermissionToEdit(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetMetaDataDisplayGroup(this_: *const pxr_SdfAttributeSpec_t, return_: *mut pxr_TfToken_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetInfo(this_: *mut pxr_SdfAttributeSpec_t, key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetInfoDictionaryValue(this_: *mut pxr_SdfAttributeSpec_t, dictionary_key: *const pxr_TfToken_t, entry_key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasInfo(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearInfo(this_: *mut pxr_SdfAttributeSpec_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetTypeForInfo(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *mut pxr_TfType_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetFallbackForInfo(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *const pxr_VtValue_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsInert(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool, ignore_children: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasField(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetField(this_: *mut pxr_SdfAttributeSpec_t, return_: *mut bool, name: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearField(this_: *mut pxr_SdfAttributeSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetName(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetNameToken(this_: *const pxr_SdfAttributeSpec_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_CanSetName(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool, new_name: *const std_string_t, why_not: *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetName(this_: *mut pxr_SdfAttributeSpec_t, return_: *mut bool, new_name: *const std_string_t, validate: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsValidName(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetCustomData(this_: *mut pxr_SdfAttributeSpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetAssetInfo(this_: *mut pxr_SdfAttributeSpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetDisplayGroup(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDisplayGroup(this_: *mut pxr_SdfAttributeSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetDisplayName(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDisplayName(this_: *mut pxr_SdfAttributeSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetDocumentation(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDocumentation(this_: *mut pxr_SdfAttributeSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetHidden(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetHidden(this_: *mut pxr_SdfAttributeSpec_t, value: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetPrefix(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetPrefix(this_: *mut pxr_SdfAttributeSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSuffix(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSuffix(this_: *mut pxr_SdfAttributeSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSymmetricPeer(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSymmetricPeer(this_: *mut pxr_SdfAttributeSpec_t, peer_name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSymmetryArgument(this_: *mut pxr_SdfAttributeSpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetSymmetryFunction(this_: *const pxr_SdfAttributeSpec_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetSymmetryFunction(this_: *mut pxr_SdfAttributeSpec_t, function_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetValueType(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *mut pxr_TfType_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetDefaultValue(this_: *mut pxr_SdfAttributeSpec_t, return_: *mut bool, default_value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasDefaultValue(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearDefaultValue(this_: *mut pxr_SdfAttributeSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetComment(this_: *const pxr_SdfAttributeSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetComment(this_: *mut pxr_SdfAttributeSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_IsCustom(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetCustom(this_: *mut pxr_SdfAttributeSpec_t, custom: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasOnlyRequiredFields(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ctor(this_: *mut *mut pxr_SdfAttributeSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_copy(this_: *mut *mut pxr_SdfAttributeSpec_t, spec: *const pxr_SdfAttributeSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasConnectionPaths(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearConnectionPaths(this_: *mut pxr_SdfAttributeSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetAllowedTokens(this_: *mut pxr_SdfAttributeSpec_t, allowed_tokens: *const pxr_VtArrayTfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasAllowedTokens(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearAllowedTokens(this_: *mut pxr_SdfAttributeSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasDisplayUnit(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearDisplayUnit(this_: *mut pxr_SdfAttributeSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetColorSpace(this_: *const pxr_SdfAttributeSpec_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_SetColorSpace(this_: *mut pxr_SdfAttributeSpec_t, color_space: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_HasColorSpace(this_: *const pxr_SdfAttributeSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_ClearColorSpace(this_: *mut pxr_SdfAttributeSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_GetRoleName(this_: *const pxr_SdfAttributeSpec_t, return_: *mut pxr_TfToken_t) -> Exception;


} // extern "C"
