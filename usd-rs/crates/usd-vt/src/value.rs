use usd_sys as sys;
use std::ffi::CStr;

#[repr(transparent)]
pub struct VtValue(pub sys::pxr_VtValue_t);

impl VtValue {}

/*
impl Drop for TfToken {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_TfToken_dtor(&mut self.0);
        }
    }
}
*/

