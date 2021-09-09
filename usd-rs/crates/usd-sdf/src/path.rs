use std::ffi::CStr;
use usd_sys as sys;
use usd_cppstd::CppString;
use crate::refptr::{OpaquePtr, Ref, RefMut};

pub struct SdfPath(pub *mut sys::pxr_SdfPath_t);

unsafe impl OpaquePtr for SdfPath {
    type SysPointee = sys::pxr_SdfPath_t;
    type Pointee = SdfPath;
}

pub type SdfPathRef<'a, P = SdfPath> = Ref<'a, P>;
pub type SdfPathRefMut<'a, P = SdfPath> = RefMut<'a, P>;

impl SdfPath {
    
    pub fn new(path: &str) -> SdfPath {
        let s = CppString::new(path);
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_SdfPath_from_string(&mut ptr, s.0);
        }
        SdfPath(ptr)
    }

    pub fn text(&self) -> &str {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_SdfPath_GetText(self.0, &mut ptr);
            CStr::from_ptr(ptr)
                .to_str()
                .expect("Could not convert SdfPath_GetText result to str")
        }
    }
}

impl Drop for SdfPath {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_SdfPath_dtor(self.0);
        }
    }
}
