#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C, align(4))]
#[derive(Clone)]
pub struct pxrInternal_v0_21__pxrReserved____Usd_Term_t {
    pub flag: pxr_Usd_PrimFlags,
    pub negated: bool,
}


impl pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_sizeof(),
                pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_alignof(),
            ).unwrap()
        }
    }
}


impl pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_sizeof(),
                pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_alignof(),
            ).unwrap()
        }
    }
}


impl pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_sizeof(),
                pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_alignof(),
            ).unwrap()
        }
    }
}


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(pub u32);
pub const pxr_Usd_PrimFlags_Usd_PrimActiveFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(0);
pub const pxr_Usd_PrimFlags_Usd_PrimLoadedFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(1);
pub const pxr_Usd_PrimFlags_Usd_PrimModelFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(2);
pub const pxr_Usd_PrimFlags_Usd_PrimGroupFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(3);
pub const pxr_Usd_PrimFlags_Usd_PrimAbstractFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(4);
pub const pxr_Usd_PrimFlags_Usd_PrimDefinedFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(5);
pub const pxr_Usd_PrimFlags_Usd_PrimHasDefiningSpecifierFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(6);
pub const pxr_Usd_PrimFlags_Usd_PrimInstanceFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(7);
pub const pxr_Usd_PrimFlags_Usd_PrimHasPayloadFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(8);
pub const pxr_Usd_PrimFlags_Usd_PrimClipsFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(9);
pub const pxr_Usd_PrimFlags_Usd_PrimDeadFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(10);
pub const pxr_Usd_PrimFlags_Usd_PrimPrototypeFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(11);
pub const pxr_Usd_PrimFlags_Usd_PrimInstanceProxyFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(12);
pub const pxr_Usd_PrimFlags_Usd_PrimPseudoRootFlag: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(13);
pub const pxr_Usd_PrimFlags_Usd_PrimNumFlags: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e = pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e(14);

#[repr(u32)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum Usd_PrimFlags {
    PrimActive = 0,
    PrimLoaded = 1,
    PrimModel = 2,
    PrimGroup = 3,
    PrimAbstract = 4,
    PrimDefined = 5,
    PrimHasDefiningSpecifier = 6,
    PrimInstance = 7,
    PrimHasPayload = 8,
    PrimClips = 9,
    PrimDead = 10,
    PrimPrototype = 11,
    PrimInstanceProxy = 12,
    PrimPseudoRoot = 13,
    PrimNumFlags = 14,
}

impl From<pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e> for Usd_PrimFlags {
    fn from(e: pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e) -> Usd_PrimFlags {
        match e {
            pxr_Usd_PrimFlags_Usd_PrimActiveFlag => Usd_PrimFlags::PrimActive,
            pxr_Usd_PrimFlags_Usd_PrimLoadedFlag => Usd_PrimFlags::PrimLoaded,
            pxr_Usd_PrimFlags_Usd_PrimModelFlag => Usd_PrimFlags::PrimModel,
            pxr_Usd_PrimFlags_Usd_PrimGroupFlag => Usd_PrimFlags::PrimGroup,
            pxr_Usd_PrimFlags_Usd_PrimAbstractFlag => Usd_PrimFlags::PrimAbstract,
            pxr_Usd_PrimFlags_Usd_PrimDefinedFlag => Usd_PrimFlags::PrimDefined,
            pxr_Usd_PrimFlags_Usd_PrimHasDefiningSpecifierFlag => Usd_PrimFlags::PrimHasDefiningSpecifier,
            pxr_Usd_PrimFlags_Usd_PrimInstanceFlag => Usd_PrimFlags::PrimInstance,
            pxr_Usd_PrimFlags_Usd_PrimHasPayloadFlag => Usd_PrimFlags::PrimHasPayload,
            pxr_Usd_PrimFlags_Usd_PrimClipsFlag => Usd_PrimFlags::PrimClips,
            pxr_Usd_PrimFlags_Usd_PrimDeadFlag => Usd_PrimFlags::PrimDead,
            pxr_Usd_PrimFlags_Usd_PrimPrototypeFlag => Usd_PrimFlags::PrimPrototype,
            pxr_Usd_PrimFlags_Usd_PrimInstanceProxyFlag => Usd_PrimFlags::PrimInstanceProxy,
            pxr_Usd_PrimFlags_Usd_PrimPseudoRootFlag => Usd_PrimFlags::PrimPseudoRoot,
            pxr_Usd_PrimFlags_Usd_PrimNumFlags => Usd_PrimFlags::PrimNumFlags,
            _ => panic!("Invalid value {:?} for Usd_PrimFlags in conversion", e),
        }
    }
}

impl From<Usd_PrimFlags> for pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e {
    fn from(e: Usd_PrimFlags) -> pxrInternal_v0_21__pxrReserved____Usd_PrimFlags_e {
        match e {
            Usd_PrimFlags::PrimActive => pxr_Usd_PrimFlags_Usd_PrimActiveFlag,
            Usd_PrimFlags::PrimLoaded => pxr_Usd_PrimFlags_Usd_PrimLoadedFlag,
            Usd_PrimFlags::PrimModel => pxr_Usd_PrimFlags_Usd_PrimModelFlag,
            Usd_PrimFlags::PrimGroup => pxr_Usd_PrimFlags_Usd_PrimGroupFlag,
            Usd_PrimFlags::PrimAbstract => pxr_Usd_PrimFlags_Usd_PrimAbstractFlag,
            Usd_PrimFlags::PrimDefined => pxr_Usd_PrimFlags_Usd_PrimDefinedFlag,
            Usd_PrimFlags::PrimHasDefiningSpecifier => pxr_Usd_PrimFlags_Usd_PrimHasDefiningSpecifierFlag,
            Usd_PrimFlags::PrimInstance => pxr_Usd_PrimFlags_Usd_PrimInstanceFlag,
            Usd_PrimFlags::PrimHasPayload => pxr_Usd_PrimFlags_Usd_PrimHasPayloadFlag,
            Usd_PrimFlags::PrimClips => pxr_Usd_PrimFlags_Usd_PrimClipsFlag,
            Usd_PrimFlags::PrimDead => pxr_Usd_PrimFlags_Usd_PrimDeadFlag,
            Usd_PrimFlags::PrimPrototype => pxr_Usd_PrimFlags_Usd_PrimPrototypeFlag,
            Usd_PrimFlags::PrimInstanceProxy => pxr_Usd_PrimFlags_Usd_PrimInstanceProxyFlag,
            Usd_PrimFlags::PrimPseudoRoot => pxr_Usd_PrimFlags_Usd_PrimPseudoRootFlag,
            Usd_PrimFlags::PrimNumFlags => pxr_Usd_PrimFlags_Usd_PrimNumFlags,
        }
    }
}


extern "C" {

pub fn pxrInternal_v0_21__pxrReserved____Usd_Term_ctor(this_: *mut pxr_Usd_Term_t, flag: pxr_Usd_PrimFlags) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_Term_ctor_1(this_: *mut pxr_Usd_Term_t, flag: pxr_Usd_PrimFlags, negated: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_Term_op_neg(this_: *const pxr_Usd_Term_t, return_: *mut pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_Term__eq(this_: *const pxr_Usd_Term_t, return_: *mut bool, other: pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_Term__ne(this_: *const pxr_Usd_Term_t, return_: *mut bool, other: pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_Term_copy(this_: *mut pxr_Usd_Term_t, rhs: *const pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_Term_dtor(this_: *mut pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_sizeof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_alignof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_ctor(this_: *mut pxr_Usd_PrimFlagsPredicate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_ctor_1(this_: *mut pxr_Usd_PrimFlagsPredicate_t, flag: pxr_Usd_PrimFlags) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_ctor_2(this_: *mut pxr_Usd_PrimFlagsPredicate_t, term: pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_Tautology(return_: *mut pxr_Usd_PrimFlagsPredicate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_Contradiction(return_: *mut pxr_Usd_PrimFlagsPredicate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_TraverseInstanceProxies(this_: *mut pxr_Usd_PrimFlagsPredicate_t, return_: *mut *mut pxr_Usd_PrimFlagsPredicate_t, traverse: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_IncludeInstanceProxiesInTraversal(this_: *const pxr_Usd_PrimFlagsPredicate_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_func(this_: *const pxr_Usd_PrimFlagsPredicate_t, return_: *mut bool, prim: *const pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_copy(this_: *mut pxr_Usd_PrimFlagsPredicate_t, rhs: *const pxr_Usd_PrimFlagsPredicate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_dtor(this_: *mut pxr_Usd_PrimFlagsPredicate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate__assign(this_: *mut pxr_Usd_PrimFlagsPredicate_t, return_: *mut *mut pxr_Usd_PrimFlagsPredicate_t, rhs: *const pxr_Usd_PrimFlagsPredicate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_sizeof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_alignof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_Tautology(return_: *mut pxr_Usd_PrimFlagsPredicate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_Contradiction(return_: *mut pxr_Usd_PrimFlagsPredicate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_TraverseInstanceProxies(this_: *mut pxr_Usd_PrimFlagsConjunction_t, return_: *mut *mut pxr_Usd_PrimFlagsPredicate_t, traverse: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_IncludeInstanceProxiesInTraversal(this_: *const pxr_Usd_PrimFlagsConjunction_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_func(this_: *const pxr_Usd_PrimFlagsConjunction_t, return_: *mut bool, prim: *const pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_ctor(this_: *mut pxr_Usd_PrimFlagsConjunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_ctor_1(this_: *mut pxr_Usd_PrimFlagsConjunction_t, term: pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_op_bit_and_assign(this_: *mut pxr_Usd_PrimFlagsConjunction_t, return_: *mut *mut pxr_Usd_PrimFlagsConjunction_t, term: pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_op_neg(this_: *const pxr_Usd_PrimFlagsConjunction_t, return_: *mut pxr_Usd_PrimFlagsDisjunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_copy(this_: *mut pxr_Usd_PrimFlagsConjunction_t, rhs: *const pxr_Usd_PrimFlagsConjunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_dtor(this_: *mut pxr_Usd_PrimFlagsConjunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_sizeof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_alignof() -> usize;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_Tautology(return_: *mut pxr_Usd_PrimFlagsPredicate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_Contradiction(return_: *mut pxr_Usd_PrimFlagsPredicate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_TraverseInstanceProxies(this_: *mut pxr_Usd_PrimFlagsDisjunction_t, return_: *mut *mut pxr_Usd_PrimFlagsPredicate_t, traverse: bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_IncludeInstanceProxiesInTraversal(this_: *const pxr_Usd_PrimFlagsDisjunction_t, return_: *mut bool) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_func(this_: *const pxr_Usd_PrimFlagsDisjunction_t, return_: *mut bool, prim: *const pxr_UsdPrim_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_ctor(this_: *mut pxr_Usd_PrimFlagsDisjunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_ctor_1(this_: *mut pxr_Usd_PrimFlagsDisjunction_t, term: pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_op_bit_or_assign(this_: *mut pxr_Usd_PrimFlagsDisjunction_t, return_: *mut *mut pxr_Usd_PrimFlagsDisjunction_t, term: pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_op_neg(this_: *const pxr_Usd_PrimFlagsDisjunction_t, return_: *mut pxr_Usd_PrimFlagsConjunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_copy(this_: *mut pxr_Usd_PrimFlagsDisjunction_t, rhs: *const pxr_Usd_PrimFlagsDisjunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_dtor(this_: *mut pxr_Usd_PrimFlagsDisjunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___op_neg(return_: *mut pxr_Usd_Term_t, flag: pxr_Usd_PrimFlags) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___op_and(return_: *mut pxr_Usd_PrimFlagsConjunction_t, lhs: pxr_Usd_Term_t, rhs: pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___op_and_1(return_: *mut pxr_Usd_PrimFlagsConjunction_t, conjunction: *const pxr_Usd_PrimFlagsConjunction_t, rhs: pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___op_and_2(return_: *mut pxr_Usd_PrimFlagsConjunction_t, lhs: pxr_Usd_Term_t, conjunction: *const pxr_Usd_PrimFlagsConjunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___op_and_3(return_: *mut pxr_Usd_PrimFlagsConjunction_t, lhs: pxr_Usd_PrimFlags, rhs: pxr_Usd_PrimFlags) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___op_or(return_: *mut pxr_Usd_PrimFlagsDisjunction_t, lhs: pxr_Usd_Term_t, rhs: pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___op_or_1(return_: *mut pxr_Usd_PrimFlagsDisjunction_t, disjunction: *const pxr_Usd_PrimFlagsDisjunction_t, rhs: pxr_Usd_Term_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___op_or_2(return_: *mut pxr_Usd_PrimFlagsDisjunction_t, lhs: pxr_Usd_Term_t, disjunction: *const pxr_Usd_PrimFlagsDisjunction_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___op_or_3(return_: *mut pxr_Usd_PrimFlagsDisjunction_t, lhs: pxr_Usd_PrimFlags, rhs: pxr_Usd_PrimFlags) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___UsdTraverseInstanceProxies(return_: *mut pxr_Usd_PrimFlagsPredicate_t, predicate: pxr_Usd_PrimFlagsPredicate_t) -> Exception;

pub fn pxrInternal_v0_21__pxrReserved___UsdTraverseInstanceProxies_1(return_: *mut pxr_Usd_PrimFlagsPredicate_t) -> Exception;


} // extern "C"
