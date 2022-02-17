#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfAbstractData_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetCurrentCount(this_: *const pxr_SdfAbstractData_t, return_: *mut usize) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_IsUnique(this_: *const pxr_SdfAbstractData_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_SetShouldInvokeUniqueChangedListener(this_: *mut pxr_SdfAbstractData_t, should_call: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_EnableNotification2(this_: *const pxr_SdfAbstractData_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetUniqueIdentifier(this_: *const pxr_SdfAbstractData_t, return_: *mut *const c_void) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_dtor(this_: *mut pxr_SdfAbstractData_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_StreamsData(this_: *const pxr_SdfAbstractData_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_IsEmpty(this_: *const pxr_SdfAbstractData_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_HasSpec(this_: *const pxr_SdfAbstractData_t, return_: *mut bool, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_EraseSpec(this_: *mut pxr_SdfAbstractData_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_MoveSpec(this_: *mut pxr_SdfAbstractData_t, old_path: *const pxr_SdfPath_t, new_path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_VisitSpecs(this_: *const pxr_SdfAbstractData_t, visitor: *mut pxr_SdfAbstractDataSpecVisitor_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_Has(this_: *const pxr_SdfAbstractData_t, return_: *mut bool, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, value: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_Set(this_: *mut pxr_SdfAbstractData_t, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_Erase(this_: *mut pxr_SdfAbstractData_t, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_HasDictKey(this_: *const pxr_SdfAbstractData_t, return_: *mut bool, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t, value: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_SetDictValueByKey(this_: *mut pxr_SdfAbstractData_t, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_EraseDictValueByKey(this_: *mut pxr_SdfAbstractData_t, path: *const pxr_SdfPath_t, field_name: *const pxr_TfToken_t, key_path: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetBracketingTimeSamples(this_: *const pxr_SdfAbstractData_t, return_: *mut bool, time: c_double, t_lower: *mut c_double, t_upper: *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetNumTimeSamplesForPath(this_: *const pxr_SdfAbstractData_t, return_: *mut usize, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetBracketingTimeSamplesForPath(this_: *const pxr_SdfAbstractData_t, return_: *mut bool, path: *const pxr_SdfPath_t, time: c_double, t_lower: *mut c_double, t_upper: *mut c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_QueryTimeSample(this_: *const pxr_SdfAbstractData_t, return_: *mut bool, path: *const pxr_SdfPath_t, time: c_double, optional_value: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_SetTimeSample(this_: *mut pxr_SdfAbstractData_t, path: *const pxr_SdfPath_t, time: c_double, value: *const pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData_EraseTimeSample(this_: *mut pxr_SdfAbstractData_t, path: *const pxr_SdfPath_t, time: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractData__assign(this_: *mut pxr_SdfAbstractData_t, return_: *mut *mut pxr_SdfAbstractData_t, rhs: *const pxr_SdfAbstractData_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_dtor(this_: *mut pxr_SdfAbstractDataSpecVisitor_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_VisitSpec(this_: *mut pxr_SdfAbstractDataSpecVisitor_t, return_: *mut bool, data: *const pxr_SdfAbstractData_t, path: *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_Done(this_: *mut pxr_SdfAbstractDataSpecVisitor_t, data: *const pxr_SdfAbstractData_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor__assign(this_: *mut pxr_SdfAbstractDataSpecVisitor_t, return_: *mut *mut pxr_SdfAbstractDataSpecVisitor_t, rhs: *const pxr_SdfAbstractDataSpecVisitor_t) -> Exception;


} // extern "C"
