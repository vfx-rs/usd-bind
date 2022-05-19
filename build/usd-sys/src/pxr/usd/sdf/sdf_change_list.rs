#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfChangeList_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_t {
    _unused: [u8; 0],
}

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____SdfChangeList__SubLayerChangeType_e(pub u32);
pub const pxr_SdfChangeList_SubLayerChangeType_SubLayerAdded: pxrInternal_v0_21__pxrReserved____SdfChangeList__SubLayerChangeType_e = pxrInternal_v0_21__pxrReserved____SdfChangeList__SubLayerChangeType_e(0);
pub const pxr_SdfChangeList_SubLayerChangeType_SubLayerRemoved: pxrInternal_v0_21__pxrReserved____SdfChangeList__SubLayerChangeType_e = pxrInternal_v0_21__pxrReserved____SdfChangeList__SubLayerChangeType_e(1);
pub const pxr_SdfChangeList_SubLayerChangeType_SubLayerOffset: pxrInternal_v0_21__pxrReserved____SdfChangeList__SubLayerChangeType_e = pxrInternal_v0_21__pxrReserved____SdfChangeList__SubLayerChangeType_e(2);


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_ctor(this_: *mut *mut pxr_SdfChangeList_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_copy(this_: *mut *mut pxr_SdfChangeList_t, rhs: *const pxr_SdfChangeList_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList__assign(this_: *mut pxr_SdfChangeList_t, return_: *mut *mut pxr_SdfChangeList_t, rhs: *const pxr_SdfChangeList_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReplaceLayerContent(this_: *mut pxr_SdfChangeList_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReloadLayerContent(this_: *mut pxr_SdfChangeList_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeLayerResolvedPath(this_: *mut pxr_SdfChangeList_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeLayerIdentifier(this_: *mut pxr_SdfChangeList_t, old_identifier: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeSublayerPaths(this_: *mut pxr_SdfChangeList_t, sub_layer_path: *const std_string_t, change_type: pxr_SdfChangeList_SubLayerChangeType) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidAddPrim(this_: *mut pxr_SdfChangeList_t, prim_path: *const pxr_SdfPath_t, inert: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidRemovePrim(this_: *mut pxr_SdfChangeList_t, prim_path: *const pxr_SdfPath_t, inert: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReorderPrims(this_: *mut pxr_SdfChangeList_t, parent_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimName(this_: *mut pxr_SdfChangeList_t, old_path: *const pxr_SdfPath_t, new_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimVariantSets(this_: *mut pxr_SdfChangeList_t, prim_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimInheritPaths(this_: *mut pxr_SdfChangeList_t, prim_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimReferences(this_: *mut pxr_SdfChangeList_t, prim_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePrimSpecializes(this_: *mut pxr_SdfChangeList_t, prim_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidAddProperty(this_: *mut pxr_SdfChangeList_t, prop_path: *const pxr_SdfPath_t, has_only_required_fields: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidRemoveProperty(this_: *mut pxr_SdfChangeList_t, prop_path: *const pxr_SdfPath_t, has_only_required_fields: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidReorderProperties(this_: *mut pxr_SdfChangeList_t, prop_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangePropertyName(this_: *mut pxr_SdfChangeList_t, old_path: *const pxr_SdfPath_t, new_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeAttributeTimeSamples(this_: *mut pxr_SdfChangeList_t, attr_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeAttributeConnection(this_: *mut pxr_SdfChangeList_t, attr_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeRelationshipTargets(this_: *mut pxr_SdfChangeList_t, rel_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidAddTarget(this_: *mut pxr_SdfChangeList_t, target_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidRemoveTarget(this_: *mut pxr_SdfChangeList_t, target_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_DidChangeInfo(this_: *mut pxr_SdfChangeList_t, path: *const pxr_SdfPath_t, key: *const pxr_TfToken_t, old_value: *const pxr_VtValue_t, new_value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_GetEntry(this_: *const pxr_SdfChangeList_t, return_: *mut *const pxr_SdfChangeList_Entry_t, rhs: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList_dtor(this_: *mut pxr_SdfChangeList_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_HasInfoChange(this_: *const pxr_SdfChangeList_Entry_t, return_: *mut bool, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_copy(this_: *mut *mut pxr_SdfChangeList_Entry_t, rhs: *const pxr_SdfChangeList_Entry_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry__assign(this_: *mut pxr_SdfChangeList_Entry_t, return_: *mut *mut pxr_SdfChangeList_Entry_t, rhs: *const pxr_SdfChangeList_Entry_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_dtor(this_: *mut pxr_SdfChangeList_Entry_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_ctor(this_: *mut *mut pxr_SdfChangeList_Entry_t) -> Exception;


} // extern "C"
