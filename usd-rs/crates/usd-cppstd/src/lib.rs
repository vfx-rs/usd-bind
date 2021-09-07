use std::ffi::{CStr, CString};
use usd_sys as sys;

#[repr(transparent)]
pub struct CppString(pub *mut sys::std_string_t);

/*
unsafe impl OpaquePtr for CppString {
    type SysPointee = sys::std_string_t;
    type Pointee = CppString;
}

pub type CppStringRef<'a, P = CppString> = Ref<'a, P>;
pub type CppStringRefMut<'a, P = CppString> = RefMut<'a, P>;
*/

impl CppString {
    pub fn new(string: &str) -> CppString {
        let cstring = CString::new(string).expect("Inner NUL bytes in string");
        unsafe {
            let mut ptr = std::ptr::null_mut();
            sys::std_string_ctor(&mut ptr);
            let mut dummy = std::ptr::null_mut();
            sys::std_string_assign(
                ptr,
                &mut dummy,
                cstring.as_ptr(),
                cstring.as_bytes().len(),
            );
            CppString(ptr)
        }
    }

    pub fn as_str(self: &CppString) -> &str {
        let mut cptr = std::ptr::null();
        unsafe {
            sys::std_string_c_str(self.0, &mut cptr);
            CStr::from_ptr(cptr).to_str().unwrap()
        }
    }
}

impl Drop for CppString {
    fn drop(&mut self) {
        unsafe {
            sys::std_string_dtor(self.0);
        }
    }
}
