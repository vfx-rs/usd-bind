#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____UsdProperty_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_IsValid(this_: *const pxr_UsdProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetStage(this_: *const pxr_UsdProperty_t, return_: *mut *mut pxr_UsdStagePtr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetPath(this_: *const pxr_UsdProperty_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetPrimPath(this_: *const pxr_UsdProperty_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetPrim(this_: *const pxr_UsdProperty_t, return_: *mut *mut pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetName(this_: *const pxr_UsdProperty_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetDescription(this_: *const pxr_UsdProperty_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetMetadata(this_: *const pxr_UsdProperty_t, return_: *mut bool, key: *const pxr_TfToken_t, value: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_SetMetadata(this_: *const pxr_UsdProperty_t, return_: *mut bool, key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_ClearMetadata(this_: *const pxr_UsdProperty_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_HasMetadata(this_: *const pxr_UsdProperty_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredMetadata(this_: *const pxr_UsdProperty_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_IsHidden(this_: *const pxr_UsdProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_SetHidden(this_: *const pxr_UsdProperty_t, return_: *mut bool, hidden: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_ClearHidden(this_: *const pxr_UsdProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredHidden(this_: *const pxr_UsdProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetDocumentation(this_: *const pxr_UsdProperty_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_SetDocumentation(this_: *const pxr_UsdProperty_t, return_: *mut bool, doc: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_ClearDocumentation(this_: *const pxr_UsdProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredDocumentation(this_: *const pxr_UsdProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetNamespaceDelimiter(return_: *mut c_char) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_ctor(this_: *mut *mut pxr_UsdProperty_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetBaseName(this_: *const pxr_UsdProperty_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetNamespace(this_: *const pxr_UsdProperty_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_SplitName(this_: *const pxr_UsdProperty_t, return_: *mut *mut std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetDisplayGroup(this_: *const pxr_UsdProperty_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_SetDisplayGroup(this_: *const pxr_UsdProperty_t, return_: *mut bool, display_group: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_ClearDisplayGroup(this_: *const pxr_UsdProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredDisplayGroup(this_: *const pxr_UsdProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetNestedDisplayGroups(this_: *const pxr_UsdProperty_t, return_: *mut *mut std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_SetNestedDisplayGroups(this_: *const pxr_UsdProperty_t, return_: *mut bool, nested_groups: *const std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_GetDisplayName(this_: *const pxr_UsdProperty_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_SetDisplayName(this_: *const pxr_UsdProperty_t, return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_ClearDisplayName(this_: *const pxr_UsdProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_HasAuthoredDisplayName(this_: *const pxr_UsdProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_IsCustom(this_: *const pxr_UsdProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_SetCustom(this_: *const pxr_UsdProperty_t, return_: *mut bool, is_custom: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_IsDefined(this_: *const pxr_UsdProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_IsAuthored(this_: *const pxr_UsdProperty_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_FlattenTo_parent(this_: *const pxr_UsdProperty_t, return_: *mut *mut pxr_UsdProperty_t, parent: *const pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_FlattenTo_parent_property(this_: *const pxr_UsdProperty_t, return_: *mut *mut pxr_UsdProperty_t, parent: *const pxr_UsdPrim_t, prop_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_FlattenTo_property(this_: *const pxr_UsdProperty_t, return_: *mut *mut pxr_UsdProperty_t, property: *const pxr_UsdProperty_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____UsdProperty_copy(this_: *mut *mut pxr_UsdProperty_t, rhs: *const pxr_UsdProperty_t) -> Exception;


} // extern "C"
