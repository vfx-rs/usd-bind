#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfData_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfData_GetCurrentCount(this_: *const pxr_SdfData_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_IsUnique(this_: *const pxr_SdfData_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_SetShouldInvokeUniqueChangedListener(this_: *mut pxr_SdfData_t, should_call: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_EnableNotification2(this_: *const pxr_SdfData_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_GetUniqueIdentifier(this_: *const pxr_SdfData_t, return_: *mut *const c_void) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_StreamsData(this_: *const pxr_SdfData_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_IsEmpty(this_: *const pxr_SdfData_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_HasSpec(this_: *const pxr_SdfData_t, return_: *mut bool, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_EraseSpec(this_: *mut pxr_SdfData_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_MoveSpec(this_: *mut pxr_SdfData_t, old_path: *const pxr_SdfPath_t, new_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_VisitSpecs(this_: *const pxr_SdfData_t, visitor: *mut pxr_SdfAbstractDataSpecVisitor_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_Has(this_: *const pxr_SdfData_t, return_: *mut bool, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, value: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_Set(this_: *mut pxr_SdfData_t, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_Erase(this_: *mut pxr_SdfData_t, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_HasDictKey(this_: *const pxr_SdfData_t, return_: *mut bool, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t, value: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_SetDictValueByKey(this_: *mut pxr_SdfData_t, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_EraseDictValueByKey(this_: *mut pxr_SdfData_t, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_GetBracketingTimeSamples(this_: *const pxr_SdfData_t, return_: *mut bool, time: c_double, t_lower: *mut c_double, t_upper: *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_GetNumTimeSamplesForPath(this_: *const pxr_SdfData_t, return_: *mut usize, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_GetBracketingTimeSamplesForPath(this_: *const pxr_SdfData_t, return_: *mut bool, path: *const pxr_SdfPath_t, time: c_double, t_lower: *mut c_double, t_upper: *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_QueryTimeSample(this_: *const pxr_SdfData_t, return_: *mut bool, path: *const pxr_SdfPath_t, time: c_double, optional_value: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_SetTimeSample(this_: *mut pxr_SdfData_t, path: *const pxr_SdfPath_t, time: c_double, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_EraseTimeSample(this_: *mut pxr_SdfData_t, path: *const pxr_SdfPath_t, time: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_ctor(this_: *mut *mut pxr_SdfData_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_dtor(this_: *mut pxr_SdfData_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData_copy(this_: *mut *mut pxr_SdfData_t, rhs: *const pxr_SdfData_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfData__assign(this_: *mut pxr_SdfData_t, return_: *mut *mut pxr_SdfData_t, rhs: *const pxr_SdfData_t) -> Exception;


} // extern "C"
