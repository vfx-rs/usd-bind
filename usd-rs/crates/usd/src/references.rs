use crate::{
    common::UsdListPosition, prim::UsdPrim, property::UsdProperty,
    stage::UsdStagePtr, time_code::UsdTimeCode,
};
use usd_sys as sys;
use cppmm_refptr::*;

use crate::error::Error;

type Result<T, E = Error> = std::result::Result<T, E>;

#[repr(transparent)]
pub struct UsdReferences(pub *mut sys::pxr_UsdReferences_t);

unsafe impl OpaquePtr for UsdReferences {
    type SysPointee = sys::pxr_UsdReferences_t;
    type Pointee = UsdReferences;
}

pub type UsdReferencesRef<'a, P = UsdReferences> = Ref<'a, P>;
pub type UsdReferencesRefMut<'a, P = UsdReferences> = RefMut<'a, P>;

impl UsdReferences {
}

