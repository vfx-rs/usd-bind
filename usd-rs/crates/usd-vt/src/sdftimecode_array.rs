use cppmm_refptr::*;
use std::ffi::CStr;
use std::ops::Deref;
use usd_sys as sys;
use usd_sdf::asset_path::SdfTimeCode;

//------------------------------------------------------------------------------
// VtArraySdfTimeCode
//------------------------------------------------------------------------------
#[repr(transparent)]
pub struct VtArraySdfTimeCode(pub(crate) *mut sys::pxr_VtArraySdfTimeCode_t);

unsafe impl OpaquePtr for VtArraySdfTimeCode {
    type SysPointee = sys::pxr_VtArraySdfTimeCode_t;
    type Pointee = VtArraySdfTimeCode;
}

pub type VtArraySdfTimeCodeRef<'a, P = VtArraySdfTimeCode> = Ref<'a, P>;
pub type VtArraySdfTimeCodeRefMut<'a, P = VtArraySdfTimeCode> = RefMut<'a, P>;

impl VtArraySdfTimeCode {
    pub fn new() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtArraySdfTimeCode_ctor(&mut ptr);
        }
        VtArraySdfTimeCode(ptr)
    }

    pub fn reserve(&mut self, length: usize) {
        unsafe {
            sys::pxr_VtArraySdfTimeCode_reserve(self.0, length);
        }
    }

    pub fn push(&mut self, value: SdfTimeCode) {
        unsafe {
            sys::pxr_VtArraySdfTimeCode_push_back(
                self.0,
                &value as *const _ as *const sys::pxr_SdfTimeCode_t,
            );
        }
    }

    pub fn len(&self) -> usize {
        let mut result = 0_usize;
        unsafe {
            sys::pxr_VtArraySdfTimeCode_size(self.0, &mut result);
            result
        }
    }

    pub fn as_slice(&self) -> &[SdfTimeCode] {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_VtArraySdfTimeCode_data_const(self.0, &mut ptr);
            std::slice::from_raw_parts(ptr as *const SdfTimeCode, self.len())
        }
    }
}

//------------------------------------------------------------------------------
impl std::ops::Index<usize> for VtArraySdfTimeCode {
    type Output = SdfTimeCode;

    fn index(&self, i: usize) -> &Self::Output {
        let mut result: *const SdfTimeCode = std::ptr::null();
        unsafe {
            sys::pxr_VtArraySdfTimeCode_index(
                self.0,
                &mut result as *mut *const _ as *mut *const sys::pxr_SdfTimeCode_t,
                i,
            );
            &*result
        }
    }
}

//------------------------------------------------------------------------------
impl Drop for VtArraySdfTimeCode {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_VtArraySdfTimeCode_dtor(self.0);
        }
        self.0 = std::ptr::null_mut();
    }
}

