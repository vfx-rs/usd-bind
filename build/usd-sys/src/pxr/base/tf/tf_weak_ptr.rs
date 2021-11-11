#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__is_null(this_: *const pxr_SdfLayerHandle_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__deref(this_: *const pxr_SdfLayerHandle_t, return_: *mut *mut pxr_SdfLayer_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__ctor(this_: *mut *mut pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__copy(this_: *mut *mut pxr_SdfLayerHandle_t, p: *const pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__IsExpired(this_: *const pxr_SdfLayerHandle_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__dtor(this_: *mut pxr_SdfLayerHandle_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__is_null(this_: *const pxr_UsdStagePtr_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__deref(this_: *const pxr_UsdStagePtr_t, return_: *mut *mut pxr_UsdStage_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__ctor(this_: *mut *mut pxr_UsdStagePtr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__copy(this_: *mut *mut pxr_UsdStagePtr_t, p: *const pxr_UsdStagePtr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__IsExpired(this_: *const pxr_UsdStagePtr_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__dtor(this_: *mut pxr_UsdStagePtr_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__from_ref(this_: *mut *mut pxr_UsdStagePtr_t, p: *const pxr_UsdStageRefPtr_t) -> Exception;


} // extern "C"
