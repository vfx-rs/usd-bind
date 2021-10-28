use std::ffi::{CStr, CString};
use usd_sys as sys;

use cppmm_refptr::*;

#[repr(transparent)]
pub struct CppMapStringString(pub *mut sys::std_map_string_string_t);

unsafe impl OpaquePtr for CppMapStringString {
    type SysPointee = sys::std_map_string_string_t;
    type Pointee = CppMapStringString;
}

pub type CppMapStringStringRef<'a, P = CppMapStringString> = Ref<'a, P>;
pub type CppMapStringStringRefMut<'a, P = CppMapStringString> = RefMut<'a, P>;

impl CppMapStringString {
    pub fn new() -> CppMapStringString {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::std_map_string_string_ctor(&mut ptr).into_result().unwrap();
        }
        CppMapStringString(ptr)
    }
}

impl Drop for CppMapStringString {
    fn drop(&mut self) {
        unsafe {
            sys::std_map_string_string_dtor(self.0);
        }
    }
}

impl Default for CppMapStringString {
    fn default() -> Self {
        CppMapStringString::new()
    }
}

