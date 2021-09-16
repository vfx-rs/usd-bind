use cppmm_refptr::*;
use crate::stage::UsdStagePtr;
use crate::attribute::{UsdAttribute, UsdAttributeVector};
use std::ffi::CStr;
use usd_tf::token::TfToken;
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
    /// Return the stage that owns the object, and to whose state and lifetime
    /// this object's validity is tied.
    pub fn stage(&self) -> UsdStagePtr {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdPrim_GetStage(self.0, &mut ptr);
        }

        UsdStagePtr(ptr)
    }

    /// Return true if this is a valid object, false otherwise.
    /// You should't ever need to call this as any returned objects 
    /// should be checked for validity and converted to Result
    pub fn is_valid(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdPrim_IsValid(self.0, &mut result);
        }
        result
    }

    /// Return the full name of this object, i.e. the last component of its
    /// SdfPath in namespace.
    /// 
    /// This is equivalent to, but generally cheaper than,
    /// GetPath().GetNameToken()
    pub fn name(&self) -> &str {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_UsdPrim_GetName(self.0, &mut ptr);
            let mut char_ptr = std::ptr::null();
            sys::pxr_TfToken_GetText(ptr, &mut char_ptr);
            CStr::from_ptr(char_ptr).to_str().unwrap()
        }
    }

    /// Return the complete scene path to this object on its UsdStage,
    /// which may (UsdPrim) or may not (all other subclasses) return a 
    /// cached result
    pub fn path(&self) -> SdfPath {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdPrim_GetPath(self.0, &mut ptr);
        }

        SdfPath(ptr)
    }

    /// Return this prim's composed type name.  
    ///
    /// Note that this value is cached and is efficient to query.
    pub fn type_name(&self) -> &TfToken {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_UsdPrim_GetTypeName(self.0, &mut ptr);

            &*(ptr as *const TfToken)
        }

    }

    /// Return a UsdAttribute with the name *attrName*. The attribute 
    /// returned may or may not **actually** exist so it must be checked for
    /// validity. Suggested use:
    /// 
    /// ```
    /// if (UsdAttribute myAttr = prim.GetAttribute("myAttr")) {
    ///    // myAttr is safe to use. 
    ///    // Edits to the owning stage requires subsequent validation.
    /// } else {
    ///    // myAttr was not defined/authored
    /// }
    /// ```
    pub fn get_attribute(&self, name: &TfToken) -> Option<UsdAttribute> {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdPrim_GetAttribute(self.0, &mut ptr, &name.0);

            let mut is_valid = false;
            sys::pxr_UsdAttribute_IsValid(ptr, &mut is_valid);

            if is_valid {
                Some(UsdAttribute(ptr))
            } else {
                None
            }
        }
    }

    /// Return true if this prim has an attribute named *attrName*, false
    /// otherwise.
    pub fn has_attribute(&self, name: &TfToken) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdPrim_HasAttribute(self.0, &mut result, &name.0);
        }
        result
    }

    /// Returns the attribute at *path* on the same stage as this prim.
    /// If path is relative, it will be anchored to the path of this prim.
    /// 
    /// \note There is no guarantee that this method returns an attribute on
    /// this prim. This is only guaranteed if path is a purely relative
    /// property path.
    /// \sa GetAttribute(const TfToken&) const
    /// \sa UsdStage::GetAttributeAtPath(const SdfPath&) const
    pub fn attribute_at_path(&self, path: &SdfPath) -> Option<UsdAttribute> {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdPrim_GetAttributeAtPath(self.0, &mut ptr, path.0);

            let mut is_valid = false;
            sys::pxr_UsdAttribute_IsValid(ptr, &mut is_valid);

            if is_valid {
                Some(UsdAttribute(ptr))
            } else {
                None
            }
        }
    }

    /// Like GetProperties(), but exclude all relationships from the result.
    pub fn attributes(&self) -> UsdAttributeVector {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdPrim_GetAttributes(self.0, &mut ptr);
        }
        UsdAttributeVector(ptr)
    }

    /// Like GetAttributes(), but exclude attributes without authored scene
    /// description from the result.  See UsdProperty::IsAuthored().
    pub fn authored_attributes(&self) -> UsdAttributeVector {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_UsdPrim_GetAuthoredAttributes(self.0, &mut ptr);
        }
        UsdAttributeVector(ptr)
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
        write!(f, "UsdPrim({})", self.path().text())
    }
}

impl Drop for UsdPrim {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_UsdPrim_dtor(self.0);
        }
    }
}
