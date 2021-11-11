#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____VtValue_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor(this_: *mut *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_bool(this_: *mut *mut pxr_VtValue_t, obj: *const bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_uint8_t(this_: *mut *mut pxr_VtValue_t, obj: *const c_uchar) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_uint32_t(this_: *mut *mut pxr_VtValue_t, obj: *const c_uint) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_uint64_t(this_: *mut *mut pxr_VtValue_t, obj: *const c_ulong) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_int32_t(this_: *mut *mut pxr_VtValue_t, obj: *const c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_int64_t(this_: *mut *mut pxr_VtValue_t, obj: *const c_long) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_float(this_: *mut *mut pxr_VtValue_t, obj: *const c_float) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_double(this_: *mut *mut pxr_VtValue_t, obj: *const c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_half(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_pxr_half_half_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_SdfTimeCode(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_SdfAssetPath(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_SdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_TfToken(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_string(this_: *mut *mut pxr_VtValue_t, obj: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2h(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec2h_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3h(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec3h_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4h(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec4h_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2d(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3d(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4d(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2f(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3f(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4f(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2i(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec2i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3i(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec3i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4i(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec4i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfQuatf(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfQuatf_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfQuatd(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfQuatd_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix2f(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfMatrix2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix2d(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfMatrix2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix3f(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfMatrix3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix3d(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfMatrix3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix4f(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfMatrix4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix4d(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfMatrix4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayBool(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayBool_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayU32(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayU32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayI32(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayI32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayI64(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayI64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayU64(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayU64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayF32(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayF32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayF64(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayF64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayTfToken(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayTfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArraySdfAssetPath(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArraySdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayString(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArraystring_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec2f(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec3f(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec4f(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec2d(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec3d(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec4d(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec2i(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec2i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec3i(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec3i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec4i(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec4i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfQuatf(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfQuatf_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfQuatd(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfQuatd_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix2f(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfMatrix2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix3f(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfMatrix3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix4f(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfMatrix4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix2d(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfMatrix2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix3d(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfMatrix3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix4d(this_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfMatrix4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_dtor(this_: *mut pxr_VtValue_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_bool(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_uint8_t(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: c_uchar) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_uint32_t(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: c_uint) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_uint64_t(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: c_ulong) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_int32_t(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_int64_t(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: c_long) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_float(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: c_float) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_double(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_half(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: pxr_pxr_half_half_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2h(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: pxr_GfVec2h_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3h(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: pxr_GfVec3h_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4h(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: pxr_GfVec4h_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2f(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: pxr_GfVec2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2i(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: pxr_GfVec2i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_SdfTimeCode(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_SdfAssetPath(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_SdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_TfToken(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_string(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2d(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3d(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4d(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3f(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4f(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3i(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec3i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4i(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfVec4i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfQuatf(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfQuatf_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfQuatd(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfQuatd_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix2f(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfMatrix2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix2d(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfMatrix2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix3f(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfMatrix3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix3d(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfMatrix3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix4f(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfMatrix4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix4d(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_GfMatrix4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayBool(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayBool_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayU32(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayU32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayI32(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayI32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayI64(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayI64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayU64(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayU64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayF32(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayF32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayF64(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayF64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayTfToken(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayTfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArraySdfAssetPath(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArraySdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayString(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArraystring_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec2f(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec3f(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec4f(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec2d(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec3d(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec4d(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec2i(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec2i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec3i(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec3i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec4i(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfVec4i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfQuatf(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfQuatf_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfQuatd(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfQuatd_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix2f(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfMatrix2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix3f(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfMatrix3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix4f(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfMatrix4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix2d(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfMatrix2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix3d(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfMatrix3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix4d(this_: *mut pxr_VtValue_t, return_: *mut *mut pxr_VtValue_t, obj: *const pxr_VtArrayGfMatrix4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_GetType(this_: *const pxr_VtValue_t, return_: *mut *mut pxr_TfType_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_GetTypeName(this_: *const pxr_VtValue_t, return_: *mut *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_bool(this_: *const pxr_VtValue_t, return_: *mut *const bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_uint8_t(this_: *const pxr_VtValue_t, return_: *mut *const c_uchar) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_uint32_t(this_: *const pxr_VtValue_t, return_: *mut *const c_uint) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_uint64_t(this_: *const pxr_VtValue_t, return_: *mut *const c_ulong) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_int32_t(this_: *const pxr_VtValue_t, return_: *mut *const c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_int64_t(this_: *const pxr_VtValue_t, return_: *mut *const c_long) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_float(this_: *const pxr_VtValue_t, return_: *mut *const c_float) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_double(this_: *const pxr_VtValue_t, return_: *mut *const c_double) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_half(this_: *const pxr_VtValue_t, return_: *mut *const pxr_pxr_half_half_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_SdfTimeCode(this_: *const pxr_VtValue_t, return_: *mut *const pxr_SdfTimeCode_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_SdfAssetPath(this_: *const pxr_VtValue_t, return_: *mut *const pxr_SdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_TfToken(this_: *const pxr_VtValue_t, return_: *mut *const pxr_TfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_string(this_: *const pxr_VtValue_t, return_: *mut *const std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2h(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfVec2h_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3h(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfVec3h_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4h(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfVec4h_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2d(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfVec2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3d(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfVec3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4d(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfVec4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2f(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfVec2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3f(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfVec3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4f(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfVec4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2i(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfVec2i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3i(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfVec3i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4i(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfVec4i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfQuatf(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfQuatf_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfQuatd(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfQuatd_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix2f(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfMatrix2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix2d(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfMatrix2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix3f(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfMatrix3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix3d(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfMatrix3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix4f(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfMatrix4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix4d(this_: *const pxr_VtValue_t, return_: *mut *const pxr_GfMatrix4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayBool(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayBool_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayU32(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayU32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayI32(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayI32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayI64(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayI64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayU64(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayU64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayF32(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayF32_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayF64(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayF64_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayTfToken(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayTfToken_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArraySdfAssetPath(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArraySdfAssetPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayString(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArraystring_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec2f(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfVec2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec3f(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfVec3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec4f(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfVec4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec2d(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfVec2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec3d(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfVec3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec4d(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfVec4d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec2i(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfVec2i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec3i(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfVec3i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec4i(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfVec4i_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfQuatf(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfQuatf_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfQuatd(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfQuatd_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix2f(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfMatrix2f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix3f(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfMatrix3f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix4f(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfMatrix4f_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix2d(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfMatrix2d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix3d(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfMatrix3d_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix4d(this_: *const pxr_VtValue_t, return_: *mut *const pxr_VtArrayGfMatrix4d_t) -> Exception;

pub fn value_is_holding_bool(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_uint8_t(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_uint32_t(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_uint64_t(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_int32_t(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_int64_t(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_float(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_double(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_half(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_SdfTimeCode(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_SdfAssetPath(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_TfToken(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_string(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfVec2h(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfVec3h(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfVec4h(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfVec2d(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfVec3d(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfVec4d(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfVec2f(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfVec3f(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfVec4f(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfVec2i(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfVec3i(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfVec4i(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfQuatf(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfQuatd(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfMatrix2f(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfMatrix2d(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfMatrix3f(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfMatrix3d(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfMatrix4f(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_GfMatrix4d(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayBool(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayU32(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayI32(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayI64(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayU64(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayF32(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayF64(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayTfToken(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArraySdfAssetPath(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayString(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfVec2f(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfVec3f(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfVec4f(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfVec2d(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfVec3d(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfVec4d(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfVec2i(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfVec3i(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfVec4i(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfQuatf(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfQuatd(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfMatrix2f(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfMatrix3f(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfMatrix4f(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfMatrix2d(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfMatrix3d(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;

pub fn value_is_holding_VtArrayGfMatrix4d(return_: *mut bool, v: *const pxr_VtValue_t) -> Exception;


} // extern "C"
