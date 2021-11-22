use cppmm_refptr::*;
use imath_traits::{Vec2, Vec3, Vec4};
use std::ffi::CStr;
use std::ops::Deref;
use usd_sys as sys;
use usd_tf::token::TfToken;

//------------------------------------------------------------------------------
// VtDictionary
//------------------------------------------------------------------------------
#[repr(transparent)]
pub struct VtDictionary(pub(crate) *mut sys::pxr_VtDictionary_t);

unsafe impl OpaquePtr for VtDictionary {
    type SysPointee = sys::pxr_VtDictionary_t;
    type Pointee = VtDictionary;
}

pub type VtDictionaryRef<'a, P = VtDictionary> = Ref<'a, P>;
pub type VtDictionaryRefMut<'a, P = VtDictionary> = RefMut<'a, P>;

impl VtDictionary {
    pub fn new() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtDictionary_ctor(&mut ptr);
        }
        VtDictionary(ptr)
    }
}
