#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_copy(this_: *mut *mut pxr_PcpSourceArcInfo_t, rhs: *const pxr_PcpSourceArcInfo_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo__assign(this_: *mut pxr_PcpSourceArcInfo_t, return_: *mut *mut pxr_PcpSourceArcInfo_t, rhs: *const pxr_PcpSourceArcInfo_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_dtor(this_: *mut pxr_PcpSourceArcInfo_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpComposeSiteHasPrimSpecs(return_: *mut bool, node: *const pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpComposeSiteHasSymmetry(return_: *mut bool, node: *const pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpComposeSiteInherits(node: *const pxr_PcpNodeRef_t, result: *mut std_SdfPathVector_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpComposeSiteSpecializes(node: *const pxr_PcpNodeRef_t, result: *mut std_SdfPathVector_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpComposeSiteVariantSets(node: *const pxr_PcpNodeRef_t, result: *mut std_vector_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpComposeSiteVariantSelection(return_: *mut bool, node: *const pxr_PcpNodeRef_t, vset_name: *const std_string_t, result: *mut std_string_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpComposeSiteVariantSelections(node: *const pxr_PcpNodeRef_t, result: *mut std_map_string_string_t) -> Exception;


} // extern "C"
