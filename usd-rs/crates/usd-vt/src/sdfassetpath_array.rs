use cppmm_refptr::*;
use std::ffi::CStr;
use std::ops::Deref;
use usd_sys as sys;
use usd_sdf::asset_path::SdfAssetPath;

//------------------------------------------------------------------------------
// VtArraySdfAssetPath
//------------------------------------------------------------------------------
#[repr(transparent)]
pub struct VtArraySdfAssetPath(pub(crate) *mut sys::pxr_VtArraySdfAssetPath_t);

unsafe impl OpaquePtr for VtArraySdfAssetPath {
    type SysPointee = sys::pxr_VtArraySdfAssetPath_t;
    type Pointee = VtArraySdfAssetPath;
}

pub type VtArraySdfAssetPathRef<'a, P = VtArraySdfAssetPath> = Ref<'a, P>;
pub type VtArraySdfAssetPathRefMut<'a, P = VtArraySdfAssetPath> = RefMut<'a, P>;

impl VtArraySdfAssetPath {
    pub fn new() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtArraySdfAssetPath_ctor(&mut ptr);
        }
        VtArraySdfAssetPath(ptr)
    }

    pub fn reserve(&mut self, length: usize) {
        unsafe {
            sys::pxr_VtArraySdfAssetPath_reserve(self.0, length);
        }
    }

    pub fn push(&mut self, value: SdfAssetPath) {
        unsafe {
            sys::pxr_VtArraySdfAssetPath_push_back(
                self.0,
                value.0,
            );
        }
    }

    pub fn len(&self) -> usize {
        let mut result = 0_usize;
        unsafe {
            sys::pxr_VtArraySdfAssetPath_size(self.0, &mut result);
            result
        }
    }

    pub fn at(&self, i: usize) -> Option<Ref<SdfAssetPath>> {
        let mut result : *const sys::pxr_SdfAssetPath_t = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtArraySdfAssetPath_index(
                self.0,
                &mut result,
                i,
            );

            Some(Ref::<SdfAssetPath>::new(result))
        }
    }
}

//------------------------------------------------------------------------------
impl Drop for VtArraySdfAssetPath {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_VtArraySdfAssetPath_dtor(self.0);
        }
        self.0 = std::ptr::null_mut();
    }
}

