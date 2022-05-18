#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfPrimSpec_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSchema(this_: *const pxr_SdfPrimSpec_t, return_: *mut *const pxr_SdfSchemaBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_IsDormant(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetLayer(this_: *const pxr_SdfPrimSpec_t, return_: *mut *mut pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetPath(this_: *const pxr_SdfPrimSpec_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_PermissionToEdit(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetMetaDataDisplayGroup(this_: *const pxr_SdfPrimSpec_t, return_: *mut pxr_TfToken_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetInfo(this_: *mut pxr_SdfPrimSpec_t, key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetInfoDictionaryValue(this_: *mut pxr_SdfPrimSpec_t, dictionary_key: *const pxr_TfToken_t, entry_key: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasInfo(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearInfo(this_: *mut pxr_SdfPrimSpec_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetTypeForInfo(this_: *const pxr_SdfPrimSpec_t, return_: *mut *mut pxr_TfType_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetFallbackForInfo(this_: *const pxr_SdfPrimSpec_t, return_: *mut *const pxr_VtValue_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_IsInert(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool, ignore_children: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasField(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetField(this_: *mut pxr_SdfPrimSpec_t, return_: *mut bool, name: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearField(this_: *mut pxr_SdfPrimSpec_t, return_: *mut bool, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec__eq(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool, rhs: *const pxr_SdfSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_operator_(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool, rhs: *const pxr_SdfSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ctor(this_: *mut *mut pxr_SdfPrimSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_copy(this_: *mut *mut pxr_SdfPrimSpec_t, spec: *const pxr_SdfPrimSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetName(this_: *const pxr_SdfPrimSpec_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetNameToken(this_: *const pxr_SdfPrimSpec_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_CanSetName(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool, new_name: *const std_string_t, why_not: *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetName(this_: *mut pxr_SdfPrimSpec_t, return_: *mut bool, new_name: *const std_string_t, validate: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_IsValidName(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasNameChildrenOrder(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_InsertInNameChildrenOrder(this_: *mut pxr_SdfPrimSpec_t, name: *const pxr_TfToken_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromNameChildrenOrder(this_: *mut pxr_SdfPrimSpec_t, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromNameChildrenOrderByIndex(this_: *mut pxr_SdfPrimSpec_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasPropertyOrder(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_InsertInPropertyOrder(this_: *mut pxr_SdfPrimSpec_t, name: *const pxr_TfToken_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromPropertyOrder(this_: *mut pxr_SdfPrimSpec_t, name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveFromPropertyOrderByIndex(this_: *mut pxr_SdfPrimSpec_t, index: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetTypeName(this_: *const pxr_SdfPrimSpec_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetTypeName(this_: *mut pxr_SdfPrimSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetComment(this_: *const pxr_SdfPrimSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetComment(this_: *mut pxr_SdfPrimSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetDocumentation(this_: *const pxr_SdfPrimSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetDocumentation(this_: *mut pxr_SdfPrimSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetActive(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetActive(this_: *mut pxr_SdfPrimSpec_t, value: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasActive(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearActive(this_: *mut pxr_SdfPrimSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetHidden(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetHidden(this_: *mut pxr_SdfPrimSpec_t, value: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetKind(this_: *const pxr_SdfPrimSpec_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetKind(this_: *mut pxr_SdfPrimSpec_t, value: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasKind(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearKind(this_: *mut pxr_SdfPrimSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSymmetryFunction(this_: *const pxr_SdfPrimSpec_t, return_: *mut pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSymmetryFunction(this_: *mut pxr_SdfPrimSpec_t, function_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSymmetryArgument(this_: *mut pxr_SdfPrimSpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSymmetricPeer(this_: *const pxr_SdfPrimSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSymmetricPeer(this_: *mut pxr_SdfPrimSpec_t, peer_name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetPrefix(this_: *const pxr_SdfPrimSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetPrefix(this_: *mut pxr_SdfPrimSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetSuffix(this_: *const pxr_SdfPrimSpec_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSuffix(this_: *mut pxr_SdfPrimSpec_t, value: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetCustomData(this_: *mut pxr_SdfPrimSpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetAssetInfo(this_: *mut pxr_SdfPrimSpec_t, name: *const std_string_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetPrefixSubstitutions(this_: *mut pxr_SdfPrimSpec_t, prefix_substitutions: *const pxr_VtDictionary_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetSuffixSubstitutions(this_: *mut pxr_SdfPrimSpec_t, suffix_substitutions: *const pxr_VtDictionary_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetInstanceable(this_: *mut pxr_SdfPrimSpec_t, instanceable: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetInstanceable(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasInstanceable(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearInstanceable(this_: *mut pxr_SdfPrimSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasPayloads(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearPayloadList(this_: *mut pxr_SdfPrimSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasInheritPaths(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearInheritPathList(this_: *mut pxr_SdfPrimSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasSpecializes(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearSpecializesList(this_: *mut pxr_SdfPrimSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasReferences(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearReferenceList(this_: *mut pxr_SdfPrimSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasVariantSetNames(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_GetVariantNames(this_: *const pxr_SdfPrimSpec_t, return_: *mut *mut std_vector_string_t, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_RemoveVariantSet(this_: *mut pxr_SdfPrimSpec_t, name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_SetVariantSelection(this_: *mut pxr_SdfPrimSpec_t, variant_set_name: *const std_string_t, variant_name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_BlockVariantSelection(this_: *mut pxr_SdfPrimSpec_t, variant_set_name: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_HasRelocates(this_: *const pxr_SdfPrimSpec_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_ClearRelocates(this_: *mut pxr_SdfPrimSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec__assign(this_: *mut pxr_SdfPrimSpec_t, return_: *mut *mut pxr_SdfPrimSpec_t, rhs: *const pxr_SdfPrimSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfPrimSpec_dtor(this_: *mut pxr_SdfPrimSpec_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___SdfJustCreatePrimInLayer(return_: *mut bool, layer: *const pxr_SdfLayerHandle_t, prim_path: *const pxr_SdfPath_t) -> Exception;


} // extern "C"
