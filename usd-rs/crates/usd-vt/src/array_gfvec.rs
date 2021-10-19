use cppmm_refptr::*;
use imath_traits::{Vec2, Vec3, Vec4};
use std::ffi::CStr;
use std::ops::Deref;
use usd_sys as sys;

#[macro_export]
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

vt_vec_array!(Vec2<f32>, f32, GfVec2f);

/*
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
*/

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
