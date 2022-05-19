#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____ArResolver_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_dtor(this_: *mut pxr_ArResolver_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_CreateIdentifier(this_: *const pxr_ArResolver_t, return_: *mut *mut std_string_t, asset_path: *const std_string_t, anchor_asset_path: *const pxr_ArResolvedPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_CreateIdentifierForNewAsset(this_: *const pxr_ArResolver_t, return_: *mut *mut std_string_t, asset_path: *const std_string_t, anchor_asset_path: *const pxr_ArResolvedPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_Resolve(this_: *const pxr_ArResolver_t, return_: *mut *mut pxr_ArResolvedPath_t, asset_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_ResolveForNewAsset(this_: *const pxr_ArResolver_t, return_: *mut *mut pxr_ArResolvedPath_t, asset_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_BindContext(this_: *mut pxr_ArResolver_t, context: *const pxr_ArResolverContext_t, binding_data: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_UnbindContext(this_: *mut pxr_ArResolver_t, context: *const pxr_ArResolverContext_t, binding_data: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_CreateDefaultContext(this_: *const pxr_ArResolver_t, return_: *mut *mut pxr_ArResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_CreateDefaultContextForAsset(this_: *const pxr_ArResolver_t, return_: *mut *mut pxr_ArResolverContext_t, asset_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_CreateContextFromString(this_: *const pxr_ArResolver_t, return_: *mut *mut pxr_ArResolverContext_t, context_str: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_CreateContextFromString_1(this_: *const pxr_ArResolver_t, return_: *mut *mut pxr_ArResolverContext_t, uri_scheme: *const std_string_t, context_str: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_RefreshContext(this_: *mut pxr_ArResolver_t, context: *const pxr_ArResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_GetCurrentContext(this_: *const pxr_ArResolver_t, return_: *mut *mut pxr_ArResolverContext_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_IsContextDependentPath(this_: *const pxr_ArResolver_t, return_: *mut bool, asset_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_GetExtension(this_: *const pxr_ArResolver_t, return_: *mut *mut std_string_t, asset_path: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_CanWriteAssetToPath(this_: *const pxr_ArResolver_t, return_: *mut bool, resolved_path: *const pxr_ArResolvedPath_t, why_not: *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_BeginCacheScope(this_: *mut pxr_ArResolver_t, cache_scope_data: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_EndCacheScope(this_: *mut pxr_ArResolver_t, cache_scope_data: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____ArResolver_IsRepositoryPath(this_: *const pxr_ArResolver_t, return_: *mut bool, path: *const std_string_t) -> Exception;


} // extern "C"
