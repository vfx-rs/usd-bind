use std::ffi::CStr;
use usd_sys as sys;

//------------------------------------------------------------------------------
// ArrayBool
//------------------------------------------------------------------------------
#[repr(transparent)]
pub struct ArrayBool(pub(crate) * mut sys::pxr_VtArrayBool_t);

impl ArrayBool {
    pub fn new() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtArrayBool_ctor(&mut ptr);
        }
        ArrayBool(ptr)
    }

    pub fn reserve(& mut self, length: usize) {
        unsafe {
            sys::pxr_VtArrayBool_reserve(self.0, length);
        }
    }

    pub fn size(& mut self) -> usize {
        let mut result = 0_usize;
        unsafe {
            sys::pxr_VtArrayBool_size(self.0, & mut result);
            result
        }
    }
}

//------------------------------------------------------------------------------
impl Drop for ArrayBool {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_VtArrayBool_ctor(& mut self.0);
        }
        self.0 = std::ptr::null_mut();
    }
}

#[cfg(test)]
mod test {
    use super::*;

    #[test]
    fn test_basics() {
        let mut v = ArrayBool::new();
        v.reserve(123_usize);
    }

    #[test]
    fn test_create_each_type() {
        /*
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
        */
    }
}
