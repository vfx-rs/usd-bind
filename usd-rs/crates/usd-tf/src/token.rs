use usd_sys as sys;
use std::ffi::{CStr, CString};

#[repr(transparent)]
pub struct TfToken(pub sys::pxr_TfToken_t);

impl TfToken {
    pub fn new(s: &str) -> TfToken {
        let s = CString::new(s).unwrap();
        let mut result = sys::pxr_TfToken_t::default();
        unsafe {
            sys::pxr_TfToken_from_char_ptr(&mut result, s.as_ptr());
        }

        TfToken(result)
    }

    pub fn as_str(&self) -> &str {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_TfToken_GetText(&self.0, &mut ptr);
            CStr::from_ptr(ptr).to_str().unwrap()
        }
    }
}

impl AsRef<str> for TfToken {
    fn as_ref(&self) -> &str {
        self.as_str()
    }
}

impl std::fmt::Display for TfToken {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{}", self.as_str())
    }
}

impl Drop for TfToken {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_TfToken_dtor(&mut self.0);
        }
    }
}

impl PartialEq<str> for TfToken {
    fn eq(&self, other: &str) -> bool {
        self.as_str() == other
    }
}
