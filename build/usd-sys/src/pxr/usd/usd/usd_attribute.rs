#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____UsdAttribute_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_IsValid(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetStage(this_: *const pxr_UsdAttribute_t, return_: *mut *mut pxr_UsdStagePtr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetPath(this_: *const pxr_UsdAttribute_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetPrimPath(this_: *const pxr_UsdAttribute_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetPrim(this_: *const pxr_UsdAttribute_t, return_: *mut *mut pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetName(this_: *const pxr_UsdAttribute_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDescription(this_: *const pxr_UsdAttribute_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetMetadata_value(this_: *const pxr_UsdAttribute_t, return_: *mut bool, key: *const pxr_TfToken_t, value: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_SetMetadata_value(this_: *const pxr_UsdAttribute_t, return_: *mut bool, key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearMetadata(this_: *const pxr_UsdAttribute_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_HasMetadata(this_: *const pxr_UsdAttribute_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredMetadata(this_: *const pxr_UsdAttribute_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetMetadataByDictKey_value(this_: *const pxr_UsdAttribute_t, return_: *mut bool, key: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t, value: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_SetMetadataByDictKey(this_: *const pxr_UsdAttribute_t, return_: *mut bool, key: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearMetadataByDictKey(this_: *const pxr_UsdAttribute_t, return_: *mut bool, key: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_HasMetadataDictKey(this_: *const pxr_UsdAttribute_t, return_: *mut bool, key: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredMetadataDictKey(this_: *const pxr_UsdAttribute_t, return_: *mut bool, key: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_IsHidden(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_SetHidden(this_: *const pxr_UsdAttribute_t, return_: *mut bool, hidden: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearHidden(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredHidden(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDocumentation(this_: *const pxr_UsdAttribute_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_SetDocumentation(this_: *const pxr_UsdAttribute_t, return_: *mut bool, doc: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearDocumentation(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredDocumentation(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetNamespaceDelimiter(return_: *mut c_char) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetBaseName(this_: *const pxr_UsdAttribute_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetNamespace(this_: *const pxr_UsdAttribute_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_SplitName(this_: *const pxr_UsdAttribute_t, return_: *mut *mut std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDisplayGroup(this_: *const pxr_UsdAttribute_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_SetDisplayGroup(this_: *const pxr_UsdAttribute_t, return_: *mut bool, display_group: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearDisplayGroup(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredDisplayGroup(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetNestedDisplayGroups(this_: *const pxr_UsdAttribute_t, return_: *mut *mut std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_SetNestedDisplayGroups(this_: *const pxr_UsdAttribute_t, return_: *mut bool, nested_groups: *const std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetDisplayName(this_: *const pxr_UsdAttribute_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_SetDisplayName(this_: *const pxr_UsdAttribute_t, return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearDisplayName(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredDisplayName(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_IsCustom(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_SetCustom(this_: *const pxr_UsdAttribute_t, return_: *mut bool, is_custom: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_IsDefined(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_IsAuthored(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_FlattenTo_parent(this_: *const pxr_UsdAttribute_t, return_: *mut *mut pxr_UsdProperty_t, parent: *const pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_FlattenTo_parent_property(this_: *const pxr_UsdAttribute_t, return_: *mut *mut pxr_UsdProperty_t, parent: *const pxr_UsdPrim_t, prop_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_FlattenTo_property(this_: *const pxr_UsdAttribute_t, return_: *mut *mut pxr_UsdProperty_t, property: *const pxr_UsdProperty_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_ctor(this_: *mut *mut pxr_UsdAttribute_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetTypeName(this_: *const pxr_UsdAttribute_t, return_: *mut pxr_SdfValueTypeName_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_SetTypeName(this_: *const pxr_UsdAttribute_t, return_: *mut bool, type_name: *const pxr_SdfValueTypeName_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetRoleName(this_: *const pxr_UsdAttribute_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_HasValue(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredValue(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_HasFallbackValue(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_ValueMightBeTimeVarying(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_Get_value(this_: *const pxr_UsdAttribute_t, return_: *mut bool, value: *mut pxr_VtValue_t, time: pxr_UsdTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_AddConnection(this_: *const pxr_UsdAttribute_t, return_: *mut bool, source: *const pxr_SdfPath_t, position: pxr_UsdListPosition) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_RemoveConnection(this_: *const pxr_UsdAttribute_t, return_: *mut bool, source: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_SetConnections(this_: *const pxr_UsdAttribute_t, return_: *mut bool, sources: *const std_SdfPathVector_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearConnections(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetConnections(this_: *const pxr_UsdAttribute_t, return_: *mut bool, sources: *mut std_SdfPathVector_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_HasAuthoredConnections(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_GetColorSpace(this_: *const pxr_UsdAttribute_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_SetColorSpace(this_: *const pxr_UsdAttribute_t, color_space: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_HasColorSpace(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_ClearColorSpace(this_: *const pxr_UsdAttribute_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdAttribute_copy(this_: *mut *mut pxr_UsdAttribute_t, rhs: *const pxr_UsdAttribute_t) -> Exception;


} // extern "C"
