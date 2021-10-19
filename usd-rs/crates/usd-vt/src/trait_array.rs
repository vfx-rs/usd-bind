use cppmm_refptr::*;
use imath_traits::{Vec2, Vec3, Vec4, Matrix33, Matrix44};
use std::ffi::CStr;
use std::ops::Deref;
use usd_sys as sys;

macro_rules! vt_vec_array {
    ($oy:ty, $ty:ty, $elem:ident) => {
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

    pub fn push<V: $oy>(&mut self, value: V) {
        unsafe {
            sys::[<pxr_VtArray $elem _push_back>](
                self.0,
                &value as *const _ as *const sys::[<pxr_ $elem _t>],
            );
        }
    }

    pub fn as_slice<V: $oy>(&self) -> &[V] {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::[<pxr_VtArray $elem _data_const>](self.0, &mut ptr);
            std::slice::from_raw_parts(ptr as *const V, self.len())
        }
    }

    pub fn reserve(&mut self, length: usize) {
        unsafe {
            sys::[<pxr_VtArray $elem _reserve>](self.0, length);
        }
    }

    pub fn len(&self) -> usize {
        let mut result = 0_usize;
        unsafe {
            sys::[<pxr_VtArray $elem _size>](self.0, &mut result);
            result
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

// Vec
vt_vec_array!(Vec2<f32>, f32, GfVec2f);
vt_vec_array!(Vec3<f32>, f32, GfVec3f);
vt_vec_array!(Vec4<f32>, f32, GfVec4f);

vt_vec_array!(Vec2<f64>, f64, GfVec2d);
vt_vec_array!(Vec3<f64>, f64, GfVec3d);
vt_vec_array!(Vec4<f64>, f64, GfVec4d);

// Quat
vt_vec_array!(Vec4<f32>, f32, GfQuatf);
vt_vec_array!(Vec4<f64>, f64, GfQuatd);

// Matrix
//vt_vec_array!(Matrix22<f32>, f32, GfMatrix2f); // TODO LT: Waiting for PR to be merged in
vt_vec_array!(Matrix33<f32>, f32, GfMatrix3f);
vt_vec_array!(Matrix44<f32>, f32, GfMatrix4f);
//vt_vec_array!(Matrix22<f64>, f64, GfMatrix2d); // TODO LT: Waiting for PR to be merged in
vt_vec_array!(Matrix33<f64>, f64, GfMatrix3d);
vt_vec_array!(Matrix44<f64>, f64, GfMatrix4d);

