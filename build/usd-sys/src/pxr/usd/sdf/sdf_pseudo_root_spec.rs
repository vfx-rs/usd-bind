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

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetName(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_CanSetName(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool, new_name: *const std_string_t, why_not: *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetName(this_: *mut pxr_SdfPseudoRootSpec_t, return_: *mut bool, new_name: *const std_string_t, validate: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsValidName(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasNameChildrenOrder(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_InsertInNameChildrenOrder(this_: *mut pxr_SdfPseudoRootSpec_t, name: *const pxr_TfToken_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromNameChildrenOrder(this_: *mut pxr_SdfPseudoRootSpec_t, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromNameChildrenOrderByIndex(this_: *mut pxr_SdfPseudoRootSpec_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasPropertyOrder(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_InsertInPropertyOrder(this_: *mut pxr_SdfPseudoRootSpec_t, name: *const pxr_TfToken_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromPropertyOrder(this_: *mut pxr_SdfPseudoRootSpec_t, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromPropertyOrderByIndex(this_: *mut pxr_SdfPseudoRootSpec_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetTypeName(this_: *mut pxr_SdfPseudoRootSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetComment(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetComment(this_: *mut pxr_SdfPseudoRootSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetDocumentation(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetDocumentation(this_: *mut pxr_SdfPseudoRootSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetActive(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetActive(this_: *mut pxr_SdfPseudoRootSpec_t, value: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasActive(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearActive(this_: *mut pxr_SdfPseudoRootSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetHidden(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetHidden(this_: *mut pxr_SdfPseudoRootSpec_t, value: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetKind(this_: *mut pxr_SdfPseudoRootSpec_t, value: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasKind(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearKind(this_: *mut pxr_SdfPseudoRootSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetSymmetryFunction(this_: *mut pxr_SdfPseudoRootSpec_t, function_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetSymmetryArgument(this_: *mut pxr_SdfPseudoRootSpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetSymmetricPeer(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetSymmetricPeer(this_: *mut pxr_SdfPseudoRootSpec_t, peer_name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetPrefix(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetPrefix(this_: *mut pxr_SdfPseudoRootSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetSuffix(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetSuffix(this_: *mut pxr_SdfPseudoRootSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetCustomData(this_: *mut pxr_SdfPseudoRootSpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetAssetInfo(this_: *mut pxr_SdfPseudoRootSpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetPrefixSubstitutions(this_: *mut pxr_SdfPseudoRootSpec_t, prefix_substitutions: *const pxr_VtDictionary_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetSuffixSubstitutions(this_: *mut pxr_SdfPseudoRootSpec_t, suffix_substitutions: *const pxr_VtDictionary_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInstanceable(this_: *mut pxr_SdfPseudoRootSpec_t, instanceable: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetInstanceable(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasInstanceable(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearInstanceable(this_: *mut pxr_SdfPseudoRootSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasPayloads(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearPayloadList(this_: *mut pxr_SdfPseudoRootSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasInheritPaths(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearInheritPathList(this_: *mut pxr_SdfPseudoRootSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasSpecializes(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearSpecializesList(this_: *mut pxr_SdfPseudoRootSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasReferences(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearReferenceList(this_: *mut pxr_SdfPseudoRootSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasVariantSetNames(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetVariantNames(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut *mut std_vector_string_t, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveVariantSet(this_: *mut pxr_SdfPseudoRootSpec_t, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetVariantSelection(this_: *mut pxr_SdfPseudoRootSpec_t, variant_set_name: *const std_string_t, variant_name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_BlockVariantSelection(this_: *mut pxr_SdfPseudoRootSpec_t, variant_set_name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasRelocates(this_: *const pxr_SdfPseudoRootSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearRelocates(this_: *mut pxr_SdfPseudoRootSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ctor(this_: *mut *mut pxr_SdfPseudoRootSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_copy(this_: *mut *mut pxr_SdfPseudoRootSpec_t, spec: *const pxr_SdfPseudoRootSpec_t) -> Exception;


} // extern "C"
