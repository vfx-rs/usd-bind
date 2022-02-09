#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpNodeRef_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpNodeRef__Hash_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_ctor(this_: *mut *mut pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef__eq(this_: *const pxr_PcpNodeRef_t, return_: *mut bool, rhs: *const pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_operator_(this_: *const pxr_PcpNodeRef_t, return_: *mut bool, rhs: *const pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetUniqueIdentifier(this_: *const pxr_PcpNodeRef_t, return_: *mut *mut c_void) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetArcType(this_: *const pxr_PcpNodeRef_t, return_: *mut pxr_PcpArcType) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetParentNode(this_: *const pxr_PcpNodeRef_t, return_: *mut *mut pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetOriginNode(this_: *const pxr_PcpNodeRef_t, return_: *mut *mut pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetOriginRootNode(this_: *const pxr_PcpNodeRef_t, return_: *mut *mut pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetRootNode(this_: *const pxr_PcpNodeRef_t, return_: *mut *mut pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetMapToParent(this_: *const pxr_PcpNodeRef_t, return_: *mut *const pxr_PcpMapExpression_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetMapToRoot(this_: *const pxr_PcpNodeRef_t, return_: *mut *const pxr_PcpMapExpression_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetSiblingNumAtOrigin(this_: *const pxr_PcpNodeRef_t, return_: *mut c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetNamespaceDepth(this_: *const pxr_PcpNodeRef_t, return_: *mut c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetDepthBelowIntroduction(this_: *const pxr_PcpNodeRef_t, return_: *mut c_int) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetPathAtIntroduction(this_: *const pxr_PcpNodeRef_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetIntroPath(this_: *const pxr_PcpNodeRef_t, return_: *mut *mut pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetSite(this_: *const pxr_PcpNodeRef_t, return_: *mut *mut pxr_PcpLayerStackSite_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetPath(this_: *const pxr_PcpNodeRef_t, return_: *mut *const pxr_SdfPath_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsRootNode(this_: *const pxr_PcpNodeRef_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsDueToAncestor(this_: *const pxr_PcpNodeRef_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetHasSymmetry(this_: *mut pxr_PcpNodeRef_t, has_symmetry: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_HasSymmetry(this_: *const pxr_PcpNodeRef_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetInert(this_: *mut pxr_PcpNodeRef_t, inert: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsInert(this_: *const pxr_PcpNodeRef_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetCulled(this_: *mut pxr_PcpNodeRef_t, culled: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsCulled(this_: *const pxr_PcpNodeRef_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetRestricted(this_: *mut pxr_PcpNodeRef_t, restricted: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsRestricted(this_: *const pxr_PcpNodeRef_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_CanContributeSpecs(this_: *const pxr_PcpNodeRef_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetHasSpecs(this_: *mut pxr_PcpNodeRef_t, has_specs: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_HasSpecs(this_: *const pxr_PcpNodeRef_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_copy(this_: *mut *mut pxr_PcpNodeRef_t, rhs: *const pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_dtor(this_: *mut pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef__assign(this_: *mut pxr_PcpNodeRef_t, return_: *mut *mut pxr_PcpNodeRef_t, rhs: *const pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef__Hash__op_call(this_: *const pxr_PcpNodeRef_Hash_t, return_: *mut usize, rhs: *const pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator__op_inc(this_: *mut pxr_PcpNodeRef_ChildrenIterator_t, return_: *mut *mut pxr_PcpNodeRef_ChildrenIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_ctor(this_: *mut *mut pxr_PcpNodeRef_ChildrenIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_ctor_1(this_: *mut *mut pxr_PcpNodeRef_ChildrenIterator_t, node: *const pxr_PcpNodeRef_t, end: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator__assign(this_: *mut pxr_PcpNodeRef_ChildrenIterator_t, return_: *mut *mut pxr_PcpNodeRef_ChildrenIterator_t, rhs: *const pxr_PcpNodeRef_ChildrenIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_dtor(this_: *mut pxr_PcpNodeRef_ChildrenIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_copy(this_: *mut *mut pxr_PcpNodeRef_ChildrenIterator_t, rhs: *const pxr_PcpNodeRef_ChildrenIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator__op_inc(this_: *mut pxr_PcpNodeRef_ChildrenReverseIterator_t, return_: *mut *mut pxr_PcpNodeRef_ChildrenReverseIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_ctor(this_: *mut *mut pxr_PcpNodeRef_ChildrenReverseIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_ctor_1(this_: *mut *mut pxr_PcpNodeRef_ChildrenReverseIterator_t, rhs: *const pxr_PcpNodeRef_ChildrenIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_ctor_2(this_: *mut *mut pxr_PcpNodeRef_ChildrenReverseIterator_t, node: *const pxr_PcpNodeRef_t, end: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_copy(this_: *mut *mut pxr_PcpNodeRef_ChildrenReverseIterator_t, rhs: *const pxr_PcpNodeRef_ChildrenReverseIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_dtor(this_: *mut pxr_PcpNodeRef_ChildrenReverseIterator_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___hash_value(return_: *mut usize, x: *const pxr_PcpNodeRef_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___PcpNode_GetNonVariantPathElementCount(return_: *mut c_int, path: *const pxr_SdfPath_t) -> Exception;


} // extern "C"
