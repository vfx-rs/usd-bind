mod map_string_string;

use std::ffi::{CStr, CString};
use usd_sys as sys;

use cppmm_refptr::*;

pub use map_string_string::*;

#[repr(transparent)]
pub struct CppString(pub *mut sys::std_string_t);

unsafe impl OpaquePtr for CppString {
    type SysPointee = sys::std_string_t;
    type Pointee = CppString;
}

pub type CppStringRef<'a, P = CppString> = Ref<'a, P>;
pub type CppStringRefMut<'a, P = CppString> = RefMut<'a, P>;

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

impl Default for CppString {
    fn default() -> Self {
        CppString::new("")
    }
}

#[repr(transparent)]
pub struct CppVectorString(pub *mut sys::std_vector_string_t);

unsafe impl OpaquePtr for CppVectorString {
    type SysPointee = sys::std_vector_string_t;
    type Pointee = CppVectorString;
}

pub type CppVectorStringRef<'a, P = CppVectorString> = Ref<'a, P>;
pub type CppVectorStringRefMut<'a, P = CppVectorString> = RefMut<'a, P>;

impl CppVectorString {
    pub fn new() -> CppVectorString {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::std_vector_string_ctor(&mut ptr).into_result().unwrap();
        }
        CppVectorString(ptr)
    }

    pub fn from_slice<S: AsRef<str>>(vec: &[S]) -> CppVectorString {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::std_vector_string_ctor(&mut ptr).into_result().unwrap();

            for rs in vec {
                let s = CppString::new(rs.as_ref());
                sys::std_vector_string_push_back(ptr, s.0)
                    .into_result()
                    .unwrap();
            }
        }

        CppVectorString(ptr)
    }

    /// Get a reference to the string at index `pos` without bounds checking
    ///
    /// # Safety
    /// You must ensure that `pos` is less than the length of the vector
    ///
    pub unsafe fn get_unchecked(&self, pos: usize) -> CppStringRef {
        let mut ptr = std::ptr::null();
        sys::std_vector_string_index(self.0, &mut ptr, pos);
        CppStringRef::new(ptr)
    }

    pub fn to_vec(&self) -> Vec<String> {
        let mut size = 0;
        unsafe {
            sys::std_vector_string_size(self.0, &mut size);
            let mut result = Vec::with_capacity(size as usize);
            for i in 0..size {
                let mut sptr = std::ptr::null();
                sys::std_vector_string_index(self.0, &mut sptr, i);
                let mut cptr = std::ptr::null();
                sys::std_string_c_str(sptr, &mut cptr);
                result.push(CStr::from_ptr(cptr).to_string_lossy().to_string());
            }

            result
        }
    }
}

impl Drop for CppVectorString {
    fn drop(&mut self) {
        unsafe {
            sys::std_vector_string_dtor(self.0);
        }
    }
}

impl Default for CppVectorString {
    fn default() -> Self {
        CppVectorString::new()
    }
}

#[repr(transparent)]
pub struct CppTypeInfo(pub *const sys::std_type_info_t);

impl PartialEq for CppTypeInfo {
    fn eq(&self, other: &Self) -> bool {
        let mut result = false;
        unsafe {
            sys::std_type_info__eq(self.0, &mut result, other.0);
        }
        result
    }
}
