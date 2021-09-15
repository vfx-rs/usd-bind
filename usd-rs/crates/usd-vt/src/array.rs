use cppmm_refptr::*;
use std::ffi::CStr;
use usd_sys as sys;
use usd_tf::token::TfToken;
use imath_traits::{Vec2, Vec3, Vec4};

macro_rules! vt_array {
    ($ty:ty, $elem:ident) => {
paste::paste! {
#[repr(transparent)]
pub struct [<VtArray $elem>](pub(crate) *mut sys::[<pxr_VtArray $elem _t>]);

unsafe impl OpaquePtr for [<VtArray $elem>] {
    type SysPointee = sys::[<pxr_VtArray $elem _t>];
    type Pointee = [<VtArray $elem>];
}

pub type [<VtArray $elem Ref>]<'a, P = [<VtArray $elem>]> = Ref<'a, P>;
pub type [<VtArray $elem RefMut>]<'a, P = [<VtArray $elem>]> = RefMut<'a, P>;

impl [<VtArray $elem>] {
    pub fn new() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::[<pxr_VtArray $elem _ctor>](&mut ptr);
        }
        [<VtArray $elem>](ptr)
    }

    pub fn reserve(&mut self, length: usize) {
        unsafe {
            sys::[<pxr_VtArray $elem _reserve>](self.0, length);
        }
    }

    pub fn push(&mut self, value: $ty) {
        unsafe {
            sys::[<pxr_VtArray $elem _push_back>](self.0, &value);
        }
    }

    pub fn len(&self) -> usize {
        let mut result = 0_usize;
        unsafe {
            sys::[<pxr_VtArray $elem _size>](self.0, &mut result);
            result
        }
    }

    pub fn as_slice(&self) -> &[$ty] {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::[<pxr_VtArray $elem _data_const>](self.0, &mut ptr);
            std::slice::from_raw_parts(ptr, self.len())
        }
    }
}

//------------------------------------------------------------------------------
impl std::ops::Index<usize> for [<VtArray $elem>] {
    type Output = $ty;

    fn index(&self, i: usize) -> &Self::Output {
        let mut result = std::ptr::null();
        unsafe {
            sys::[<pxr_VtArray $elem _index>](self.0, &mut result, i);
            &*result
        }
    }
}

//------------------------------------------------------------------------------
impl Drop for [<VtArray $elem>] {
    fn drop(&mut self) {
        unsafe {
            sys::[<pxr_VtArray $elem _dtor>](self.0);
        }
        self.0 = std::ptr::null_mut();
    }
}
}

    };
}

vt_array!(u8, U8);
vt_array!(u32, U32);
vt_array!(i32, I32);
vt_array!(i64, I64);
vt_array!(f32, F32);
vt_array!(f64, F64);
vt_array!(bool, Bool);

//------------------------------------------------------------------------------
// VtArrayTfToken
//------------------------------------------------------------------------------
#[repr(transparent)]
pub struct VtArrayTfToken(pub(crate) *mut sys::pxr_VtArrayTfToken_t);

unsafe impl OpaquePtr for VtArrayTfToken {
    type SysPointee = sys::pxr_VtArrayTfToken_t;
    type Pointee = VtArrayTfToken;
}

pub type VtArrayTfTokenRef<'a, P = VtArrayTfToken> = Ref<'a, P>;
pub type VtArrayTfTokenRefMut<'a, P = VtArrayTfToken> = RefMut<'a, P>;

impl VtArrayTfToken {
    pub fn new() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtArrayTfToken_ctor(&mut ptr);
        }
        VtArrayTfToken(ptr)
    }

    pub fn reserve(&mut self, length: usize) {
        unsafe {
            sys::pxr_VtArrayTfToken_reserve(self.0, length);
        }
    }

    pub fn push(&mut self, value: TfToken) {
        unsafe {
            sys::pxr_VtArrayTfToken_push_back(
                self.0,
                &value as *const _ as *const sys::pxr_TfToken_t,
            );
        }
    }

    pub fn len(&self) -> usize {
        let mut result = 0_usize;
        unsafe {
            sys::pxr_VtArrayTfToken_size(self.0, &mut result);
            result
        }
    }

    pub fn as_slice(&self) -> &[TfToken] {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_VtArrayTfToken_data_const(self.0, &mut ptr);
            std::slice::from_raw_parts(ptr as *const TfToken, self.len())
        }
    }
}

//------------------------------------------------------------------------------
impl std::ops::Index<usize> for VtArrayTfToken {
    type Output = TfToken;

    fn index(&self, i: usize) -> &Self::Output {
        let mut result: *const TfToken = std::ptr::null();
        unsafe {
            sys::pxr_VtArrayTfToken_index(
                self.0,
                &mut result as *mut *const _ as *mut *const sys::pxr_TfToken_t,
                i,
            );
            &*result
        }
    }
}

//------------------------------------------------------------------------------
impl Drop for VtArrayTfToken {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_VtArrayTfToken_dtor(self.0);
        }
        self.0 = std::ptr::null_mut();
    }
}

//------------------------------------------------------------------------------
// VtArrayGfVec2f
//------------------------------------------------------------------------------
#[repr(transparent)]
pub struct VtArrayGfVec2f(pub(crate) *mut sys::pxr_VtArrayGfVec2f_t);

unsafe impl OpaquePtr for VtArrayGfVec2f {
    type SysPointee = sys::pxr_VtArrayGfVec2f_t;
    type Pointee = VtArrayGfVec2f;
}

pub type VtArrayGfVec2fRef<'a, P = VtArrayGfVec2f> = Ref<'a, P>;
pub type VtArrayGfVec2fRefMut<'a, P = VtArrayGfVec2f> = RefMut<'a, P>;

impl VtArrayGfVec2f {
    pub fn new() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtArrayGfVec2f_ctor(&mut ptr);
        }
        VtArrayGfVec2f(ptr)
    }

    pub fn reserve(&mut self, length: usize) {
        unsafe {
            sys::pxr_VtArrayGfVec2f_reserve(self.0, length);
        }
    }

    pub fn push<V: Vec2<f32>>(&mut self, value: V) {
        unsafe {
            sys::pxr_VtArrayGfVec2f_push_back(
                self.0,
                &value as *const _ as *const sys::pxr_GfVec2f_t,
            );
        }
    }

    pub fn len(&self) -> usize {
        let mut result = 0_usize;
        unsafe {
            sys::pxr_VtArrayGfVec2f_size(self.0, &mut result);
            result
        }
    }

    pub fn as_slice<V: Vec2<f32>>(&self) -> &[V] {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_VtArrayGfVec2f_data_const(self.0, &mut ptr);
            std::slice::from_raw_parts(ptr as *const V, self.len())
        }
    }
}

//------------------------------------------------------------------------------
impl Drop for VtArrayGfVec2f {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_VtArrayGfVec2f_dtor(self.0);
        }
        self.0 = std::ptr::null_mut();
    }
}


//------------------------------------------------------------------------------
// VtArrayGfVec3f
//------------------------------------------------------------------------------
#[repr(transparent)]
pub struct VtArrayGfVec3f(pub(crate) *mut sys::pxr_VtArrayGfVec3f_t);

unsafe impl OpaquePtr for VtArrayGfVec3f {
    type SysPointee = sys::pxr_VtArrayGfVec3f_t;
    type Pointee = VtArrayGfVec3f;
}

pub type VtArrayGfVec3fRef<'a, P = VtArrayGfVec3f> = Ref<'a, P>;
pub type VtArrayGfVec3fRefMut<'a, P = VtArrayGfVec3f> = RefMut<'a, P>;

impl VtArrayGfVec3f {
    pub fn new() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtArrayGfVec3f_ctor(&mut ptr);
        }
        VtArrayGfVec3f(ptr)
    }

    pub fn reserve(&mut self, length: usize) {
        unsafe {
            sys::pxr_VtArrayGfVec3f_reserve(self.0, length);
        }
    }

    pub fn push<V: Vec3<f32>>(&mut self, value: V) {
        unsafe {
            sys::pxr_VtArrayGfVec3f_push_back(
                self.0,
                &value as *const _ as *const sys::pxr_GfVec3f_t,
            );
        }
    }

    pub fn len(&self) -> usize {
        let mut result = 0_usize;
        unsafe {
            sys::pxr_VtArrayGfVec3f_size(self.0, &mut result);
            result
        }
    }

    pub fn as_slice<V: Vec3<f32>>(&self) -> &[V] {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_VtArrayGfVec3f_data_const(self.0, &mut ptr);
            std::slice::from_raw_parts(ptr as *const V, self.len())
        }
    }
}

//------------------------------------------------------------------------------
impl Drop for VtArrayGfVec3f {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_VtArrayGfVec3f_dtor(self.0);
        }
        self.0 = std::ptr::null_mut();
    }
}

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
