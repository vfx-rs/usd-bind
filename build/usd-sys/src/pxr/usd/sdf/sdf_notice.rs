#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice__Base_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice__LayerIdentifierDidChange_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidReplaceContent_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidReloadContent_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidSaveLayerToFile_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDirtinessChanged_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfNotice__LayerMutenessChanged_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__Base_Send(this_: *const pxr_SdfNotice_Base_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__Base_dtor(this_: *mut pxr_SdfNotice_Base_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__Base_copy(this_: *mut *mut pxr_SdfNotice_Base_t, rhs: *const pxr_SdfNotice_Base_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__Base__assign(this_: *mut pxr_SdfNotice_Base_t, return_: *mut *mut pxr_SdfNotice_Base_t, rhs: *const pxr_SdfNotice_Base_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__Base_ctor(this_: *mut *mut pxr_SdfNotice_Base_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_count(this_: *const pxr_SdfNotice_BaseLayersDidChange_t, return_: *mut bool, layer: *const pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_GetSerialNumber(this_: *const pxr_SdfNotice_BaseLayersDidChange_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_copy(this_: *mut *mut pxr_SdfNotice_BaseLayersDidChange_t, rhs: *const pxr_SdfNotice_BaseLayersDidChange_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_dtor(this_: *mut pxr_SdfNotice_BaseLayersDidChange_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_Send(this_: *const pxr_SdfNotice_LayersDidChangeSentPerLayer_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_count(this_: *const pxr_SdfNotice_LayersDidChangeSentPerLayer_t, return_: *mut bool, layer: *const pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_GetSerialNumber(this_: *const pxr_SdfNotice_LayersDidChangeSentPerLayer_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_dtor(this_: *mut pxr_SdfNotice_LayersDidChangeSentPerLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_copy(this_: *mut *mut pxr_SdfNotice_LayersDidChangeSentPerLayer_t, rhs: *const pxr_SdfNotice_LayersDidChangeSentPerLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_Send(this_: *const pxr_SdfNotice_LayersDidChange_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_count(this_: *const pxr_SdfNotice_LayersDidChange_t, return_: *mut bool, layer: *const pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_GetSerialNumber(this_: *const pxr_SdfNotice_LayersDidChange_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_dtor(this_: *mut pxr_SdfNotice_LayersDidChange_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_copy(this_: *mut *mut pxr_SdfNotice_LayersDidChange_t, rhs: *const pxr_SdfNotice_LayersDidChange_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange_Send(this_: *const pxr_SdfNotice_LayerInfoDidChange_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange_ctor(this_: *mut *mut pxr_SdfNotice_LayerInfoDidChange_t, key: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange_dtor(this_: *mut pxr_SdfNotice_LayerInfoDidChange_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange_key(this_: *const pxr_SdfNotice_LayerInfoDidChange_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange_copy(this_: *mut *mut pxr_SdfNotice_LayerInfoDidChange_t, rhs: *const pxr_SdfNotice_LayerInfoDidChange_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerInfoDidChange__assign(this_: *mut pxr_SdfNotice_LayerInfoDidChange_t, return_: *mut *mut pxr_SdfNotice_LayerInfoDidChange_t, rhs: *const pxr_SdfNotice_LayerInfoDidChange_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerIdentifierDidChange_Send(this_: *const pxr_SdfNotice_LayerIdentifierDidChange_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerIdentifierDidChange_ctor(this_: *mut *mut pxr_SdfNotice_LayerIdentifierDidChange_t, old_identifier: *const std_string_t, new_identifier: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerIdentifierDidChange_dtor(this_: *mut pxr_SdfNotice_LayerIdentifierDidChange_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerIdentifierDidChange_GetOldIdentifier(this_: *const pxr_SdfNotice_LayerIdentifierDidChange_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerIdentifierDidChange_GetNewIdentifier(this_: *const pxr_SdfNotice_LayerIdentifierDidChange_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerIdentifierDidChange_copy(this_: *mut *mut pxr_SdfNotice_LayerIdentifierDidChange_t, rhs: *const pxr_SdfNotice_LayerIdentifierDidChange_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerIdentifierDidChange__assign(this_: *mut pxr_SdfNotice_LayerIdentifierDidChange_t, return_: *mut *mut pxr_SdfNotice_LayerIdentifierDidChange_t, rhs: *const pxr_SdfNotice_LayerIdentifierDidChange_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidReplaceContent_Send(this_: *const pxr_SdfNotice_LayerDidReplaceContent_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidReplaceContent_dtor(this_: *mut pxr_SdfNotice_LayerDidReplaceContent_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidReplaceContent_copy(this_: *mut *mut pxr_SdfNotice_LayerDidReplaceContent_t, rhs: *const pxr_SdfNotice_LayerDidReplaceContent_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidReplaceContent__assign(this_: *mut pxr_SdfNotice_LayerDidReplaceContent_t, return_: *mut *mut pxr_SdfNotice_LayerDidReplaceContent_t, rhs: *const pxr_SdfNotice_LayerDidReplaceContent_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidReloadContent_Send(this_: *const pxr_SdfNotice_LayerDidReloadContent_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidReloadContent_dtor(this_: *mut pxr_SdfNotice_LayerDidReloadContent_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidReloadContent_copy(this_: *mut *mut pxr_SdfNotice_LayerDidReloadContent_t, rhs: *const pxr_SdfNotice_LayerDidReloadContent_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidReloadContent__assign(this_: *mut pxr_SdfNotice_LayerDidReloadContent_t, return_: *mut *mut pxr_SdfNotice_LayerDidReloadContent_t, rhs: *const pxr_SdfNotice_LayerDidReloadContent_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidSaveLayerToFile_Send(this_: *const pxr_SdfNotice_LayerDidSaveLayerToFile_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidSaveLayerToFile_dtor(this_: *mut pxr_SdfNotice_LayerDidSaveLayerToFile_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidSaveLayerToFile_copy(this_: *mut *mut pxr_SdfNotice_LayerDidSaveLayerToFile_t, rhs: *const pxr_SdfNotice_LayerDidSaveLayerToFile_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDidSaveLayerToFile__assign(this_: *mut pxr_SdfNotice_LayerDidSaveLayerToFile_t, return_: *mut *mut pxr_SdfNotice_LayerDidSaveLayerToFile_t, rhs: *const pxr_SdfNotice_LayerDidSaveLayerToFile_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDirtinessChanged_Send(this_: *const pxr_SdfNotice_LayerDirtinessChanged_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDirtinessChanged_dtor(this_: *mut pxr_SdfNotice_LayerDirtinessChanged_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDirtinessChanged_copy(this_: *mut *mut pxr_SdfNotice_LayerDirtinessChanged_t, rhs: *const pxr_SdfNotice_LayerDirtinessChanged_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerDirtinessChanged__assign(this_: *mut pxr_SdfNotice_LayerDirtinessChanged_t, return_: *mut *mut pxr_SdfNotice_LayerDirtinessChanged_t, rhs: *const pxr_SdfNotice_LayerDirtinessChanged_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerMutenessChanged_Send(this_: *const pxr_SdfNotice_LayerMutenessChanged_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerMutenessChanged_ctor(this_: *mut *mut pxr_SdfNotice_LayerMutenessChanged_t, layer_path: *const std_string_t, was_muted: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerMutenessChanged_dtor(this_: *mut pxr_SdfNotice_LayerMutenessChanged_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerMutenessChanged_GetLayerPath(this_: *const pxr_SdfNotice_LayerMutenessChanged_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerMutenessChanged_WasMuted(this_: *const pxr_SdfNotice_LayerMutenessChanged_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerMutenessChanged_copy(this_: *mut *mut pxr_SdfNotice_LayerMutenessChanged_t, rhs: *const pxr_SdfNotice_LayerMutenessChanged_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfNotice__LayerMutenessChanged__assign(this_: *mut pxr_SdfNotice_LayerMutenessChanged_t, return_: *mut *mut pxr_SdfNotice_LayerMutenessChanged_t, rhs: *const pxr_SdfNotice_LayerMutenessChanged_t) -> Exception;


} // extern "C"
