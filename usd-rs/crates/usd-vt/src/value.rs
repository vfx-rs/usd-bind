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

impl From<u8> for Value {
    fn from(value : u8) -> Self {
        use std::os::raw::c_uchar;
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_ctor_uchar(&mut ptr, &(value as c_uchar));
        }
        Value(ptr)
    }
}

impl From<i32> for Value {
    fn from(value : i32) -> Self {
        use std::os::raw::c_int;
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_ctor_int(&mut ptr, &(value as c_int));
        }
        Value(ptr)
    }
}

impl From<u32> for Value {
    fn from(value : u32) -> Self {
        use std::os::raw::c_uint;
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_ctor_uint(&mut ptr, &(value as c_uint));
        }
        Value(ptr)
    }
}

impl From<i64> for Value {
    fn from(value : i64) -> Self {
        use std::os::raw::c_long;
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_ctor_int64(&mut ptr, &(value as c_long));
        }
        Value(ptr)
    }
}

impl From<u64> for Value {
    fn from(value : u64) -> Self {
        use std::os::raw::c_ulong;
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_ctor_uint64(&mut ptr, &(value as c_ulong));
        }
        Value(ptr)
    }
}

impl From<f32> for Value {
    fn from(value : f32) -> Self {
        use std::os::raw::c_float;
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_ctor_float(&mut ptr, &(value as c_float));
        }
        Value(ptr)
    }
}

impl From<f64> for Value {
    fn from(value : f64) -> Self {
        use std::os::raw::c_double;
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_ctor_double(&mut ptr, &(value as c_double));
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

impl Get<u8> for Value {
    fn get(&self) -> Option<u8> {
        use std::os::raw::c_uchar;
        let mut result : *const c_uchar = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_1(self.0, & mut result);
            Some((*result) as u8)
        }
    }
}

impl Get<i32> for Value {
    fn get(&self) -> Option<i32> {
        use std::os::raw::c_int;
        let mut result : *const c_int = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_2(self.0, & mut result);
            Some((*result) as i32)
        }
    }
}

impl Get<u32> for Value {
    fn get(&self) -> Option<u32> {
        use std::os::raw::c_uint;
        let mut result : *const c_uint = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_3(self.0, & mut result);
            Some((*result) as u32)
        }
    }
}

impl Get<i64> for Value {
    fn get(&self) -> Option<i64> {
        use std::os::raw::c_long;
        let mut result : *const c_long = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_4(self.0, & mut result);
            Some((*result) as i64)
        }
    }
}

impl Get<u64> for Value {
    fn get(&self) -> Option<u64> {
        use std::os::raw::c_ulong;
        let mut result : *const c_ulong = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_5(self.0, & mut result);
            Some((*result) as u64)
        }
    }
}

impl Get<f32> for Value {
    fn get(&self) -> Option<f32> {
        use std::os::raw::c_float;
        let mut result : *const c_float = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_6(self.0, & mut result);
            Some((*result) as f32)
        }
    }
}

impl Get<f64> for Value {
    fn get(&self) -> Option<f64> {
        use std::os::raw::c_double;
        let mut result : *const c_double = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_7(self.0, & mut result);
            Some((*result) as f64)
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
        Value::new();
    }

    #[test]
    fn test_create_each_type() {
        // bool
        let v = Value::from(true);
        let r : bool = v.get().unwrap();
        assert!(r == true);

        // u8
        let v = Value::from(123_u8);
        let r : u8 = v.get().unwrap();
        assert!(r == 123_u8);

        // i32
        let v = Value::from(123_i32);
        let r : i32 = v.get().unwrap();
        assert!(r == 123_i32);

        // u32
        let v = Value::from(123_u32);
        let r : u32 = v.get().unwrap();
        assert!(r == 123_u32);

        // i64
        let v = Value::from(123_i64);
        let r : i64 = v.get().unwrap();
        assert!(r == 123_i64);

        // u64
        let v = Value::from(123_u64);
        let r : u64 = v.get().unwrap();
        assert!(r == 123_u64);

        // f32
        let v = Value::from(123_f32);
        let r : f32 = v.get().unwrap();
        assert!(r == 123_f32);

        // f64
        let v = Value::from(123_f64);
        let r : f64 = v.get().unwrap();
        assert!(r == 123_f64);
    }
}
