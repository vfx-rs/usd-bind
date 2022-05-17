#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfLayer_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetCurrentCount(this_: *const pxr_SdfLayer_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_IsUnique(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetShouldInvokeUniqueChangedListener(this_: *mut pxr_SdfLayer_t, should_call: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_EnableNotification2(this_: *const pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetUniqueIdentifier(this_: *const pxr_SdfLayer_t, return_: *mut *const c_void) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_dtor(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetSchema(this_: *const pxr_SdfLayer_t, return_: *mut *const pxr_SdfSchemaBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetFileFormatArguments(this_: *const pxr_SdfLayer_t, return_: *mut *const std_map_string_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_Find(return_: *mut *mut pxr_SdfLayerHandle_t, identifier: *const std_string_t, args: *const std_map_string_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_FindRelativeToLayer(return_: *mut *mut pxr_SdfLayerHandle_t, anchor: *const pxr_SdfLayerHandle_t, layer_path: *const std_string_t, args: *const std_map_string_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_IsEmpty(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_TransferContent(this_: *mut pxr_SdfLayer_t, layer: *const pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_IsAnonymous(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_IsAnonymousLayerIdentifier(return_: *mut bool, identifier: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetDisplayNameFromIdentifier(return_: *mut *mut std_string_t, identifier: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_Save(this_: *const pxr_SdfLayer_t, return_: *mut bool, force: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_Export(this_: *const pxr_SdfLayer_t, return_: *mut bool, filename: *const std_string_t, comment: *const std_string_t, args: *const std_map_string_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_ExportToString(this_: *const pxr_SdfLayer_t, return_: *mut bool, result: *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_ImportFromString(this_: *mut pxr_SdfLayer_t, return_: *mut bool, string: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_Clear(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_Reload(this_: *mut pxr_SdfLayer_t, return_: *mut bool, force: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_Import(this_: *mut pxr_SdfLayer_t, return_: *mut bool, layer_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_UpdateExternalReference(this_: *mut pxr_SdfLayer_t, return_: *mut bool, old_asset_path: *const std_string_t, new_asset_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SplitIdentifier(return_: *mut bool, identifier: *const std_string_t, layer_path: *mut std_string_t, arguments: *mut std_map_string_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_CreateIdentifier(return_: *mut *mut std_string_t, layer_path: *const std_string_t, arguments: *const std_map_string_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetIdentifier(this_: *const pxr_SdfLayer_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetIdentifier(this_: *mut pxr_SdfLayer_t, identifier: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetDisplayName(this_: *const pxr_SdfLayer_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetRealPath(this_: *const pxr_SdfLayer_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetFileExtension(this_: *const pxr_SdfLayer_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetVersion(this_: *const pxr_SdfLayer_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetRepositoryPath(this_: *const pxr_SdfLayer_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetAssetName(this_: *const pxr_SdfLayer_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetAssetInfo(this_: *const pxr_SdfLayer_t, return_: *mut *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasSpec(this_: *const pxr_SdfLayer_t, return_: *mut bool, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasField(this_: *const pxr_SdfLayer_t, return_: *mut bool, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, value: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasFieldDictKey(this_: *const pxr_SdfLayer_t, return_: *mut bool, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t, value: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetField(this_: *mut pxr_SdfLayer_t, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetFieldDictValueByKey(this_: *mut pxr_SdfLayer_t, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_EraseField(this_: *mut pxr_SdfLayer_t, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_EraseFieldDictValueByKey(this_: *mut pxr_SdfLayer_t, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetColorConfiguration(this_: *const pxr_SdfLayer_t, return_: *mut *mut pxr_SdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetColorConfiguration(this_: *mut pxr_SdfLayer_t, color_configuration: *const pxr_SdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasColorConfiguration(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_ClearColorConfiguration(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetColorManagementSystem(this_: *const pxr_SdfLayer_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetColorManagementSystem(this_: *mut pxr_SdfLayer_t, cms: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasColorManagementSystem(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_ClearColorManagementSystem(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetComment(this_: *const pxr_SdfLayer_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetComment(this_: *mut pxr_SdfLayer_t, comment: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetDefaultPrim(this_: *const pxr_SdfLayer_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetDefaultPrim(this_: *mut pxr_SdfLayer_t, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_ClearDefaultPrim(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasDefaultPrim(this_: *mut pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetDocumentation(this_: *const pxr_SdfLayer_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetDocumentation(this_: *mut pxr_SdfLayer_t, documentation: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetStartTimeCode(this_: *const pxr_SdfLayer_t, return_: *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetStartTimeCode(this_: *mut pxr_SdfLayer_t, start_timecode: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasStartTimeCode(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_ClearStartTimeCode(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetEndTimeCode(this_: *const pxr_SdfLayer_t, return_: *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetEndTimeCode(this_: *mut pxr_SdfLayer_t, end_time_code: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasEndTimeCode(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_ClearEndTimeCode(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetTimeCodesPerSecond(this_: *const pxr_SdfLayer_t, return_: *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetTimeCodesPerSecond(this_: *mut pxr_SdfLayer_t, time_codes_per_second: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasTimeCodesPerSecond(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_ClearTimeCodesPerSecond(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetFramesPerSecond(this_: *const pxr_SdfLayer_t, return_: *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetFramesPerSecond(this_: *mut pxr_SdfLayer_t, frames_per_second: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasFramesPerSecond(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_ClearFramesPerSecond(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetFramePrecision(this_: *const pxr_SdfLayer_t, return_: *mut c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetFramePrecision(this_: *mut pxr_SdfLayer_t, frame_precision: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasFramePrecision(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_ClearFramePrecision(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetOwner(this_: *const pxr_SdfLayer_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetOwner(this_: *mut pxr_SdfLayer_t, owner: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasOwner(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_ClearOwner(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetSessionOwner(this_: *const pxr_SdfLayer_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetSessionOwner(this_: *mut pxr_SdfLayer_t, owner: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasSessionOwner(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_ClearSessionOwner(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetHasOwnedSubLayers(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetHasOwnedSubLayers(this_: *mut pxr_SdfLayer_t, rhs: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetCustomLayerData(this_: *mut pxr_SdfLayer_t, value: *const pxr_VtDictionary_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_HasCustomLayerData(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_ClearCustomLayerData(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveInertSceneDescription(this_: *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_InsertInRootPrimOrder(this_: *mut pxr_SdfLayer_t, name: *const pxr_TfToken_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveFromRootPrimOrder(this_: *mut pxr_SdfLayer_t, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveFromRootPrimOrderByIndex(this_: *mut pxr_SdfLayer_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetSubLayerPaths(this_: *mut pxr_SdfLayer_t, new_paths: *const std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetNumSubLayerPaths(this_: *const pxr_SdfLayer_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_InsertSubLayerPath(this_: *mut pxr_SdfLayer_t, path: *const std_string_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveSubLayerPath(this_: *mut pxr_SdfLayer_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_GetSubLayerOffset(this_: *const pxr_SdfLayer_t, return_: *mut pxr_SdfLayerOffset_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetSubLayerOffset(this_: *mut pxr_SdfLayer_t, offset: *const pxr_SdfLayerOffset_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_IsMuted(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_IsMuted_1(return_: *mut bool, path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetMuted(this_: *mut pxr_SdfLayer_t, muted: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_AddToMutedLayers(muted_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveFromMutedLayers(muted_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_PermissionToEdit(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_PermissionToSave(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetPermissionToEdit(this_: *mut pxr_SdfLayer_t, allow: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_SetPermissionToSave(this_: *mut pxr_SdfLayer_t, allow: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_Apply(this_: *mut pxr_SdfLayer_t, return_: *mut bool, rhs: *const pxr_SdfBatchNamespaceEdit_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayer_IsDirty(this_: *const pxr_SdfLayer_t, return_: *mut bool) -> Exception;


} // extern "C"
