use std::ffi::CStr;
use usd_sys as sys;

#[repr(transparent)]
pub struct Value(pub(crate) * mut sys::pxr_VtValue_t);

impl Value {
    pub fn new() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_ctor(&mut ptr);
        }
        Value(ptr)
    }
}

impl Drop for Value {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_VtValue_ctor(& mut self.0);
        }
        self.0 = std::ptr::null_mut();
    }
}

#[cfg(test)]
mod test {
    #[test]
    fn test_creation() {
        use crate::value::Value;

        let v = Value::new();
    }
}
