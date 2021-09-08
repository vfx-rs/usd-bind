use std::ffi::CStr;
use usd_sys as sys;

#[repr(transparent)]
pub struct Value(pub sys::pxr_VtValue_t);

impl Value {}

#[cfg(test)]
mod test {
    #[test]
    fn test_creation() {
        use crate::value::Value;

        //let v = Value::new();
    }
}
