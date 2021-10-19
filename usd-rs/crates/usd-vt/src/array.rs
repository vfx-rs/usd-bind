use cppmm_refptr::*;
use imath_traits::{Vec2, Vec3, Vec4};
use std::ffi::CStr;
use std::ops::Deref;
use usd_sys as sys;
use usd_tf::token::TfToken;

use crate::vt_array;
pub use super::array_gfvec::*;
pub use super::array_tftoken::*;

vt_array!(u8, U8);
vt_array!(u32, U32);
vt_array!(i32, I32);
vt_array!(i64, I64);
vt_array!(f32, F32);
vt_array!(f64, F64);
vt_array!(bool, Bool);

/*
#[cfg(test)]
mod test {
    use super::*;

    #[test]
    fn test_basics() {
        let mut v = VtArrayBool::new();
        v.reserve(123_usize);
    }

    #[test]
    fn test_create_each_type() {
        // bool
        let mut v = VtArrayBool::new();
        v.push(true);
        v.push(false);
        assert!(v[0] == true);
        assert!(v[1] == false);
        assert!(v.len() == 2);
        /*

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
*/
