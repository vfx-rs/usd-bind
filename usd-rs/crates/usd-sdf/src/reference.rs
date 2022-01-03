use cppmm_refptr::{OpaquePtr, Ref, RefMut};
use std::cmp::Ordering;
use std::ffi::CStr;
use std::fmt;
use usd_cppstd::CppString;
use crate::{path::SdfPath, layer_offset::SdfLayerOffset};
use usd_sys as sys;

/// Contains an asset path and an optional resolved path.
#[repr(transparent)]
pub struct SdfReference(pub *mut sys::pxr_SdfReference_t);

unsafe impl OpaquePtr for SdfReference {
    type SysPointee = sys::pxr_SdfReference_t;
    type Pointee = SdfReference;
}

pub type SdfReferenceRef<'a, P = SdfReference> = Ref<'a, P>;
pub type SdfReferenceRefMut<'a, P = SdfReference> = RefMut<'a, P>;

impl SdfReference {
    /// Construct an empty asset path.
    pub fn new(assetPath: &str, primPath: &SdfPath, 
               layer_offset : Option<SdfLayerOffset>) -> Self {

        // The asset path
        let identifier = CppString::new(assetPath);

        // Layer offset
        let lo = if let Some(layer_offset) = layer_offset {
            layer_offset.0
        } else {
            sys::pxr_SdfLayerOffset_t::default()
        };

        // VtDictionary
        let mut customData = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtDictionary_ctor(&mut customData);
        }

        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_SdfReference_ctor(&mut ptr, identifier.0, primPath.0, &lo, customData);
            sys::pxr_VtDictionary_dtor(customData);
        }

        SdfReference(ptr)
    }
}

impl Drop for SdfReference {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_SdfReference_dtor(self.0);
        }
    }
}