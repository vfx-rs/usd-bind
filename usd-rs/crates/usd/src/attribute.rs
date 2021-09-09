use crate::refptr::*;
use crate::{prim::UsdPrim, stage::UsdStagePtr};
use usd_sdf::path::{SdfPath, SdfPathRef};
use usd_sdf::value_type_name::SdfValueTypeName;
use usd_sys as sys;

use std::ffi::CStr;

#[repr(transparent)]
pub struct UsdAttribute(pub *mut sys::pxr_UsdAttribute_t);

unsafe impl OpaquePtr for UsdAttribute {
    type SysPointee = sys::pxr_UsdAttribute_t;
    type Pointee = UsdAttribute;
}

pub type UsdAttributeRef<'a, P = UsdAttribute> = Ref<'a, P>;
pub type UsdAttributeRefMut<'a, P = UsdAttribute> = RefMut<'a, P>;

impl UsdAttribute {
    /// Return the stage that owns the object, and to whose state and lifetime
    /// this object's validity is tied.
    pub fn stage(&self) -> UsdStagePtr {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_GetStage(self.0, &mut ptr);
        }

        UsdStagePtr(ptr)
    }

    /// Return the complete scene path to this object on its UsdStage,
    /// which may (UsdPrim) or may not (all other subclasses) return a
    /// cached result
    pub fn path(&self) -> SdfPath {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_GetPath(self.0, &mut ptr);
        }

        SdfPath(ptr)
    }

    /// Return this object's path if this object is a prim, otherwise this
    /// object's nearest owning prim's path.  Equivalent to GetPrim().GetPath().
    pub fn prim_path(&self) -> SdfPathRef {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_UsdAttribute_GetPrimPath(self.0, &mut ptr);
        }

        SdfPathRef::new(ptr)
    }

    /// Return this object if it is a prim, otherwise return this object's
    /// nearest owning prim.
    pub fn prim(&self) -> UsdPrim {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdAttribute_GetPrim(self.0, &mut ptr);
        }

        UsdPrim(ptr)
    }

    /// Return the full name of this object, i.e. the last component of its
    /// SdfPath in namespace.
    ///
    /// This is equivalent to, but generally cheaper than,
    /// GetPath().GetNameToken()
    pub fn name(&self) -> &str {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_UsdAttribute_GetName(self.0, &mut ptr);
            let mut char_ptr = std::ptr::null();
            sys::pxr_TfToken_GetText(ptr, &mut char_ptr);
            CStr::from_ptr(char_ptr).to_str().unwrap()
        }
    }

    /// Return the "scene description" value type name for this attribute.
    pub fn type_name(&self) -> SdfValueTypeName {
        let mut inner = sys::pxr_SdfValueTypeName_t::default();
        unsafe {
            sys::pxr_UsdAttribute_GetTypeName(self.0, &mut inner);
        }

        SdfValueTypeName(inner)
    }
}

#[repr(transparent)]
pub struct UsdAttributeVector(pub(crate) *mut sys::std_UsdAttributeVector_t);

unsafe impl OpaquePtr for UsdAttributeVector {
    type SysPointee = sys::std_UsdAttributeVector_t;
    type Pointee = UsdAttributeVector;
}

pub type UsdAttributeVectorRef<'a, P = UsdAttributeVector> = Ref<'a, P>;
pub type UsdAttributeVectorRefMut<'a, P = UsdAttributeVector> = RefMut<'a, P>;

impl UsdAttributeVector {
    pub fn new() -> UsdAttributeVector {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::std_UsdAttributeVector_ctor(&mut ptr)
                .into_result()
                .unwrap();
        }
        UsdAttributeVector(ptr)
    }

    pub unsafe fn get_unchecked(&self, index: usize) -> UsdAttributeRef {
        let mut ptr = std::ptr::null();
        sys::std_UsdAttributeVector_index(self.0, &mut ptr, index);
        UsdAttributeRef::new(ptr)
    }

    pub fn len(&self) -> usize {
        let mut result = 0;
        unsafe {
            sys::std_UsdAttributeVector_size(self.0, &mut result);
        }
        result
    }

    pub fn iter(&self) -> UsdAttributeVectorIter {
        UsdAttributeVectorIter {
            vec: self,
            current: 0,
            size: self.len(),
        }
    }
}

pub struct UsdAttributeVectorIter<'a> {
    vec: &'a UsdAttributeVector,
    current: usize,
    size: usize,
}

impl<'a> Iterator for UsdAttributeVectorIter<'a> {
    type Item = UsdAttributeRef<'a>;

    fn next(&mut self) -> Option<Self::Item> {
        if self.current == self.size {
            None
        } else {
            unsafe {
                let uar = self.vec.get_unchecked(self.current);
                self.current += 1;
                Some(uar)
            }
        }
    }
}

impl<'a> IntoIterator for &'a UsdAttributeVector {
    type Item = UsdAttributeRef<'a>;
    type IntoIter = UsdAttributeVectorIter<'a>;

    fn into_iter(self) -> Self::IntoIter {
        self.iter()
    }
}

impl Default for UsdAttributeVector {
    fn default() -> Self {
        UsdAttributeVector::new()
    }
}
