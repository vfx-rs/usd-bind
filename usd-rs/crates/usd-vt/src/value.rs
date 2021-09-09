use std::ffi::CStr;
use usd_sys as sys;

pub trait Get<T>
    where
        T: ?Sized
{
    fn get(&self) -> Option<&T>;
}

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

impl From<bool> for Value {
    fn from(value : bool) -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_ctor_bool(&mut ptr, &value);
        }
        Value(ptr)
    }
}

impl Get<bool> for Value {
    fn get(&self) -> Option<&bool> {
        let mut result : *const bool = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get(self.0, & mut result);
            Some(&*result)
        }
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
    use super::*;

    #[test]
    fn test_create_empty_value() {
        let v = Value::new();
    }

    #[test]
    fn test_create_each_type() {
        // Bool
        let v = Value::from(true);
        assert!(*v.get().unwrap() == true);
    }
}
