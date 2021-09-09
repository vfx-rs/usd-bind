use std::ffi::CStr;
use usd_sys as sys;

// Getter
pub trait Get<T>
{
    fn get(&self) -> Option<T>;
}

// This is like AsRef but the return value is an Option.
pub trait GetRef<T>
    where
        T: ?Sized
{
    fn get_ref(&self) -> Option<&T>;
}

//------------------------------------------------------------------------------
// Value
//------------------------------------------------------------------------------
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

//------------------------------------------------------------------------------
// From
//------------------------------------------------------------------------------
impl From<bool> for Value {
    fn from(value : bool) -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_ctor_bool(&mut ptr, &value);
        }
        Value(ptr)
    }
}

impl From<char> for Value {
    fn from(value : char) -> Self {
        use std::os::raw::c_uchar;
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_ctor_uchar(&mut ptr, &(value as c_uchar));
        }
        Value(ptr)
    }
}

//------------------------------------------------------------------------------
// Get
//------------------------------------------------------------------------------
impl Get<bool> for Value {
    fn get(&self) -> Option<bool> {
        let mut result : *const bool = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get(self.0, & mut result);
            Some(*result)
        }
    }
}

impl Get<char> for Value {
    fn get(&self) -> Option<char> {
        use std::os::raw::c_uchar;
        let mut result : *const c_uchar = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_1(self.0, & mut result);
            Some((*result) as char)
        }
    }
}

//------------------------------------------------------------------------------
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
        let r : bool = v.get().unwrap();
        assert!(r == true);

        // char
        let v = Value::from('a');
        let r : char = v.get().unwrap();
        assert!(r == 'a');
    }
}
