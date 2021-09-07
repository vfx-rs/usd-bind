use crate::refptr::{OpaquePtr, Ref, RefMut};
use std::ffi::CStr;
use usd_base_tf::token::TfToken;
use usd_sdf::path::SdfPath;
use usd_sys as sys;

#[repr(transparent)]
pub struct UsdPrim(pub *mut sys::pxr_UsdPrim_t);

unsafe impl OpaquePtr for UsdPrim {
    type SysPointee = sys::pxr_UsdPrim_t;
    type Pointee = UsdPrim;
}

pub type UsdPrimRef<'a, P = UsdPrim> = Ref<'a, P>;
pub type UsdPrimRefMut<'a, P = UsdPrim> = RefMut<'a, P>;

impl UsdPrim {
    pub fn is_valid(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdPrim_IsValid(self.0, &mut result);
        }
        result
    }

    pub fn get_name(&self) -> &str {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_UsdPrim_GetName(self.0, &mut ptr);
            let mut char_ptr = std::ptr::null();
            sys::pxr_TfToken_GetText(ptr, &mut char_ptr);
            CStr::from_ptr(char_ptr).to_str().unwrap()
        }
    }

    pub fn get_path(&self) -> SdfPath {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdPrim_GetPath(self.0, &mut ptr);
        }

        SdfPath(ptr)
    }

    /// Return this prim's composed type name.  
    ///
    /// Note that this value is cached and is efficient to query.
    pub fn get_type_name(&self) -> &TfToken {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_UsdPrim_GetTypeName(self.0, &mut ptr);

            &*(ptr as *const TfToken)
        }

    }
}

impl Default for UsdPrim {
    fn default() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdPrim_ctor(&mut ptr);
        }

        UsdPrim(ptr)
    }
}

impl std::fmt::Debug for UsdPrim {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "UsdPrim({})", self.get_path().get_text())
    }
}

impl Drop for UsdPrim {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_UsdPrim_dtor(self.0);
        }
    }
}
