#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_GetCurrentCount(this_: *const pxr_SdfLayerStateDelegateBase_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_IsUnique(this_: *const pxr_SdfLayerStateDelegateBase_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetShouldInvokeUniqueChangedListener(this_: *mut pxr_SdfLayerStateDelegateBase_t, should_call: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_EnableNotification2(this_: *const pxr_SdfLayerStateDelegateBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_GetUniqueIdentifier(this_: *const pxr_SdfLayerStateDelegateBase_t, return_: *mut *const c_void) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_dtor(this_: *mut pxr_SdfLayerStateDelegateBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_IsDirty(this_: *mut pxr_SdfLayerStateDelegateBase_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetField(this_: *mut pxr_SdfLayerStateDelegateBase_t, path: *const pxr_SdfPath_t, field: *const pxr_TfToken_t, value: *const pxr_VtValue_t, old_value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetFieldDictValueByKey(this_: *mut pxr_SdfLayerStateDelegateBase_t, path: *const pxr_SdfPath_t, field: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t, value: *const pxr_VtValue_t, old_value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_SetTimeSample(this_: *mut pxr_SdfLayerStateDelegateBase_t, path: *const pxr_SdfPath_t, time: c_double, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_CreateSpec(this_: *mut pxr_SdfLayerStateDelegateBase_t, path: *const pxr_SdfPath_t, spec_type: pxr_SdfSpecType, inert: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_DeleteSpec(this_: *mut pxr_SdfLayerStateDelegateBase_t, path: *const pxr_SdfPath_t, inert: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_MoveSpec(this_: *mut pxr_SdfLayerStateDelegateBase_t, old_path: *const pxr_SdfPath_t, new_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PushChild(this_: *mut pxr_SdfLayerStateDelegateBase_t, parent_path: *const pxr_SdfPath_t, field: *const pxr_TfToken_t, value: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PushChild_1(this_: *mut pxr_SdfLayerStateDelegateBase_t, parent_path: *const pxr_SdfPath_t, field: *const pxr_TfToken_t, value: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PopChild(this_: *mut pxr_SdfLayerStateDelegateBase_t, parent_path: *const pxr_SdfPath_t, field: *const pxr_TfToken_t, old_value: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase_PopChild_1(this_: *mut pxr_SdfLayerStateDelegateBase_t, parent_path: *const pxr_SdfPath_t, field: *const pxr_TfToken_t, old_value: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfLayerStateDelegateBase__assign(this_: *mut pxr_SdfLayerStateDelegateBase_t, return_: *mut *mut pxr_SdfLayerStateDelegateBase_t, rhs: *const pxr_SdfLayerStateDelegateBase_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_GetCurrentCount(this_: *const pxr_SdfSimpleLayerStateDelegate_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_IsUnique(this_: *const pxr_SdfSimpleLayerStateDelegate_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetShouldInvokeUniqueChangedListener(this_: *mut pxr_SdfSimpleLayerStateDelegate_t, should_call: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_EnableNotification2(this_: *const pxr_SdfSimpleLayerStateDelegate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_GetUniqueIdentifier(this_: *const pxr_SdfSimpleLayerStateDelegate_t, return_: *mut *const c_void) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_IsDirty(this_: *mut pxr_SdfSimpleLayerStateDelegate_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetField(this_: *mut pxr_SdfSimpleLayerStateDelegate_t, path: *const pxr_SdfPath_t, field: *const pxr_TfToken_t, value: *const pxr_VtValue_t, old_value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetFieldDictValueByKey(this_: *mut pxr_SdfSimpleLayerStateDelegate_t, path: *const pxr_SdfPath_t, field: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t, value: *const pxr_VtValue_t, old_value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_SetTimeSample(this_: *mut pxr_SdfSimpleLayerStateDelegate_t, path: *const pxr_SdfPath_t, time: c_double, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_CreateSpec(this_: *mut pxr_SdfSimpleLayerStateDelegate_t, path: *const pxr_SdfPath_t, spec_type: pxr_SdfSpecType, inert: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_DeleteSpec(this_: *mut pxr_SdfSimpleLayerStateDelegate_t, path: *const pxr_SdfPath_t, inert: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_MoveSpec(this_: *mut pxr_SdfSimpleLayerStateDelegate_t, old_path: *const pxr_SdfPath_t, new_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PushChild(this_: *mut pxr_SdfSimpleLayerStateDelegate_t, parent_path: *const pxr_SdfPath_t, field: *const pxr_TfToken_t, value: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PushChild_1(this_: *mut pxr_SdfSimpleLayerStateDelegate_t, parent_path: *const pxr_SdfPath_t, field: *const pxr_TfToken_t, value: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PopChild(this_: *mut pxr_SdfSimpleLayerStateDelegate_t, parent_path: *const pxr_SdfPath_t, field: *const pxr_TfToken_t, old_value: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_PopChild_1(this_: *mut pxr_SdfSimpleLayerStateDelegate_t, parent_path: *const pxr_SdfPath_t, field: *const pxr_TfToken_t, old_value: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_copy(this_: *mut *mut pxr_SdfSimpleLayerStateDelegate_t, rhs: *const pxr_SdfSimpleLayerStateDelegate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate__assign(this_: *mut pxr_SdfSimpleLayerStateDelegate_t, return_: *mut *mut pxr_SdfSimpleLayerStateDelegate_t, rhs: *const pxr_SdfSimpleLayerStateDelegate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_dtor(this_: *mut pxr_SdfSimpleLayerStateDelegate_t) -> Exception;


} // extern "C"
