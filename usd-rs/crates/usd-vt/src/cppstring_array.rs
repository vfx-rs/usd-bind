use cppmm_refptr::*;
use imath_traits::{Vec2, Vec3, Vec4};
use std::ffi::CStr;
use std::ops::Deref;
use usd_sys as sys;
use usd_cppstd::CppString;

//------------------------------------------------------------------------------
// VtArrayCppString
//------------------------------------------------------------------------------
#[repr(transparent)]
pub struct VtArrayCppString(pub(crate) *mut sys::pxr_VtArraystring_t);

unsafe impl OpaquePtr for VtArrayCppString {
    type SysPointee = sys::pxr_VtArraystring_t;
    type Pointee = VtArrayCppString;
}

pub type VtArrayCppStringRef<'a, P = VtArrayCppString> = Ref<'a, P>;
pub type VtArrayCppStringRefMut<'a, P = VtArrayCppString> = RefMut<'a, P>;

impl VtArrayCppString {
    pub fn new() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtArraystring_ctor(&mut ptr);
        }
        VtArrayCppString(ptr)
    }

    pub fn reserve(&mut self, length: usize) {
        unsafe {
            sys::pxr_VtArraystring_reserve(self.0, length);
        }
    }

    pub fn push(&mut self, value: CppString) {
        unsafe {
            sys::pxr_VtArraystring_push_back(
                self.0,
                &value as *const _ as *const sys::std_string_t,
            );
        }
    }

    pub fn len(&self) -> usize {
        let mut result = 0_usize;
        unsafe {
            sys::pxr_VtArraystring_size(self.0, &mut result);
            result
        }
    }

    pub fn as_slice(&self) -> &[CppString] {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_VtArraystring_data_const(self.0, &mut ptr);
            std::slice::from_raw_parts(ptr as *const CppString, self.len())
        }
    }
}

//------------------------------------------------------------------------------
impl std::ops::Index<usize> for VtArrayCppString {
    type Output = CppString;

    fn index(&self, i: usize) -> &Self::Output {
        let mut result: *const CppString = std::ptr::null();
        unsafe {
            sys::pxr_VtArraystring_index(
                self.0,
                &mut result as *mut *const _ as *mut *const sys::std_string_t,
                i,
            );
            &*result
        }
    }
}

//------------------------------------------------------------------------------
impl Drop for VtArrayCppString {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_VtArraystring_dtor(self.0);
        }
        self.0 = std::ptr::null_mut();
    }
}

