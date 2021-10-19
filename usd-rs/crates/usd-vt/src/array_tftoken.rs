use cppmm_refptr::*;
use imath_traits::{Vec2, Vec3, Vec4};
use std::ffi::CStr;
use std::ops::Deref;
use usd_sys as sys;
use usd_tf::token::TfToken;

use crate::vt_array;

vt_array!(u8, U8);
vt_array!(u32, U32);
vt_array!(i32, I32);
vt_array!(i64, I64);
vt_array!(f32, F32);
vt_array!(f64, F64);
vt_array!(bool, Bool);

//------------------------------------------------------------------------------
// VtArrayTfToken
//------------------------------------------------------------------------------
#[repr(transparent)]
pub struct VtArrayTfToken(pub(crate) *mut sys::pxr_VtArrayTfToken_t);

unsafe impl OpaquePtr for VtArrayTfToken {
    type SysPointee = sys::pxr_VtArrayTfToken_t;
    type Pointee = VtArrayTfToken;
}

pub type VtArrayTfTokenRef<'a, P = VtArrayTfToken> = Ref<'a, P>;
pub type VtArrayTfTokenRefMut<'a, P = VtArrayTfToken> = RefMut<'a, P>;

impl VtArrayTfToken {
    pub fn new() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtArrayTfToken_ctor(&mut ptr);
        }
        VtArrayTfToken(ptr)
    }

    pub fn reserve(&mut self, length: usize) {
        unsafe {
            sys::pxr_VtArrayTfToken_reserve(self.0, length);
        }
    }

    pub fn push(&mut self, value: TfToken) {
        unsafe {
            sys::pxr_VtArrayTfToken_push_back(
                self.0,
                &value as *const _ as *const sys::pxr_TfToken_t,
            );
        }
    }

    pub fn len(&self) -> usize {
        let mut result = 0_usize;
        unsafe {
            sys::pxr_VtArrayTfToken_size(self.0, &mut result);
            result
        }
    }

    pub fn as_slice(&self) -> &[TfToken] {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_VtArrayTfToken_data_const(self.0, &mut ptr);
            std::slice::from_raw_parts(ptr as *const TfToken, self.len())
        }
    }
}

//------------------------------------------------------------------------------
impl std::ops::Index<usize> for VtArrayTfToken {
    type Output = TfToken;

    fn index(&self, i: usize) -> &Self::Output {
        let mut result: *const TfToken = std::ptr::null();
        unsafe {
            sys::pxr_VtArrayTfToken_index(
                self.0,
                &mut result as *mut *const _ as *mut *const sys::pxr_TfToken_t,
                i,
            );
            &*result
        }
    }
}

//------------------------------------------------------------------------------
impl Drop for VtArrayTfToken {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_VtArrayTfToken_dtor(self.0);
        }
        self.0 = std::ptr::null_mut();
    }
}

