use std::ffi::CStr;
use usd_sys as sys;
use usd_cppstd::CppString;

pub struct SdfPath(pub *mut sys::pxr_SdfPath_t);

impl SdfPath {
    
    pub fn new(path: &str) -> SdfPath {
        let s = CppString::new(path);
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_SdfPath_from_string(&mut ptr, s.0);
        }
        SdfPath(ptr)
    }

    pub fn get_text(&self) -> &str {
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
