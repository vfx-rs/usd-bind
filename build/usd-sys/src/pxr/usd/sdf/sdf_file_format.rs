#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfFileFormat_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetCurrentCount(this_: *const pxr_SdfFileFormat_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsUnique(this_: *const pxr_SdfFileFormat_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_SetShouldInvokeUniqueChangedListener(this_: *mut pxr_SdfFileFormat_t, should_call: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_EnableNotification2(this_: *const pxr_SdfFileFormat_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetUniqueIdentifier(this_: *const pxr_SdfFileFormat_t, return_: *mut *const c_void) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetFormatId(this_: *const pxr_SdfFileFormat_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetTarget(this_: *const pxr_SdfFileFormat_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetFileCookie(this_: *const pxr_SdfFileFormat_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetVersionString(this_: *const pxr_SdfFileFormat_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsPrimaryFormatForExtensions(this_: *const pxr_SdfFileFormat_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetPrimaryFileExtension(this_: *const pxr_SdfFileFormat_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsSupportedExtension(this_: *const pxr_SdfFileFormat_t, return_: *mut bool, extension: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsPackage(this_: *const pxr_SdfFileFormat_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetPackageRootLayerPath(this_: *const pxr_SdfFileFormat_t, return_: *mut *mut std_string_t, resolved_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetDefaultFileFormatArguments(this_: *const pxr_SdfFileFormat_t, return_: *mut *mut std_map_string_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_ShouldSkipAnonymousReload(this_: *const pxr_SdfFileFormat_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_ShouldReadAnonymousLayers(this_: *const pxr_SdfFileFormat_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_CanRead(this_: *const pxr_SdfFileFormat_t, return_: *mut bool, file: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_Read(this_: *const pxr_SdfFileFormat_t, return_: *mut bool, layer: *mut pxr_SdfLayer_t, resolved_path: *const std_string_t, metadata_only: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_WriteToFile(this_: *const pxr_SdfFileFormat_t, return_: *mut bool, layer: *const pxr_SdfLayer_t, file_path: *const std_string_t, comment: *const std_string_t, args: *const std_map_string_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_ReadFromString(this_: *const pxr_SdfFileFormat_t, return_: *mut bool, layer: *mut pxr_SdfLayer_t, str: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_WriteToString(this_: *const pxr_SdfFileFormat_t, return_: *mut bool, layer: *const pxr_SdfLayer_t, str: *mut std_string_t, comment: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetFileExtension(return_: *mut *mut std_string_t, s: *const std_string_t) -> Exception;


} // extern "C"
