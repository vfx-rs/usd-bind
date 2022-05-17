#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSchema(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *const pxr_SdfSchemaBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsDormant(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetLayer(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *mut pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetPath(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_PermissionToEdit(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetMetaDataDisplayGroup(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut pxr_TfToken_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetInfo(this_: *mut pxr_SdfRelationshipSpec_t, key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetInfoDictionaryValue(this_: *mut pxr_SdfRelationshipSpec_t, dictionary_key: *const pxr_TfToken_t, entry_key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasInfo(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearInfo(this_: *mut pxr_SdfRelationshipSpec_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetTypeForInfo(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *mut pxr_TfType_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetFallbackForInfo(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *const pxr_VtValue_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsInert(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool, ignore_children: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasField(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetField(this_: *mut pxr_SdfRelationshipSpec_t, return_: *mut bool, name: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearField(this_: *mut pxr_SdfRelationshipSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetName(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetNameToken(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_CanSetName(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool, new_name: *const std_string_t, why_not: *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetName(this_: *mut pxr_SdfRelationshipSpec_t, return_: *mut bool, new_name: *const std_string_t, validate: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsValidName(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetCustomData(this_: *mut pxr_SdfRelationshipSpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetAssetInfo(this_: *mut pxr_SdfRelationshipSpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetDisplayGroup(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDisplayGroup(this_: *mut pxr_SdfRelationshipSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetDisplayName(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDisplayName(this_: *mut pxr_SdfRelationshipSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetDocumentation(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDocumentation(this_: *mut pxr_SdfRelationshipSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetHidden(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetHidden(this_: *mut pxr_SdfRelationshipSpec_t, value: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetPrefix(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetPrefix(this_: *mut pxr_SdfRelationshipSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSuffix(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSuffix(this_: *mut pxr_SdfRelationshipSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSymmetricPeer(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSymmetricPeer(this_: *mut pxr_SdfRelationshipSpec_t, peer_name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSymmetryArgument(this_: *mut pxr_SdfRelationshipSpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetSymmetryFunction(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetSymmetryFunction(this_: *mut pxr_SdfRelationshipSpec_t, function_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetValueType(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *mut pxr_TfType_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetTypeName(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut pxr_SdfValueTypeName_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetDefaultValue(this_: *mut pxr_SdfRelationshipSpec_t, return_: *mut bool, default_value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasDefaultValue(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearDefaultValue(this_: *mut pxr_SdfRelationshipSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetComment(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetComment(this_: *mut pxr_SdfRelationshipSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_IsCustom(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetCustom(this_: *mut pxr_SdfRelationshipSpec_t, custom: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasOnlyRequiredFields(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ctor(this_: *mut *mut pxr_SdfRelationshipSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_copy(this_: *mut *mut pxr_SdfRelationshipSpec_t, spec: *const pxr_SdfRelationshipSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_HasTargetPathList(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ClearTargetPathList(this_: *const pxr_SdfRelationshipSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_ReplaceTargetPath(this_: *mut pxr_SdfRelationshipSpec_t, old_path: *const pxr_SdfPath_t, new_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_RemoveTargetPath(this_: *mut pxr_SdfRelationshipSpec_t, path: *const pxr_SdfPath_t, preserve_target_order: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_GetNoLoadHint(this_: *const pxr_SdfRelationshipSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfRelationshipSpec_SetNoLoadHint(this_: *mut pxr_SdfRelationshipSpec_t, noload: bool) -> Exception;


} // extern "C"
