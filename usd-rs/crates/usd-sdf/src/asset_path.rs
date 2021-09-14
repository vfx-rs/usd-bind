use cppmm_refptr::{OpaquePtr, Ref, RefMut};
use std::cmp::Ordering;
use std::ffi::CStr;
use std::fmt;
use usd_cppstd::CppString;
use usd_sys as sys;

/// Contains an asset path and an optional resolved path.
#[repr(transparent)]
pub struct SdfAssetPath(pub *mut sys::pxr_SdfAssetPath_t);

unsafe impl OpaquePtr for SdfAssetPath {
    type SysPointee = sys::pxr_SdfAssetPath_t;
    type Pointee = SdfAssetPath;
}

pub type SdfAssetPathRef<'a, P = SdfAssetPath> = Ref<'a, P>;
pub type SdfAssetPathRefMut<'a, P = SdfAssetPath> = RefMut<'a, P>;

impl SdfAssetPath {
    /// Construct an empty asset path.
    pub fn new() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_SdfAssetPath_ctor(&mut ptr);
        }
        SdfAssetPath(ptr)
    }

    /// Construct asset path with no associated resolved path.
    pub fn from_path(path: &str) -> Self {
        let path = CppString::new(path);
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_SdfAssetPath_from_path(&mut ptr, path.0);
        }
        SdfAssetPath(ptr)
    }

    /// Construct an asset path with an associated resolved path.
    pub fn from_reslved_path(path: &str, resolved_path: &str) -> Self {
        let path = CppString::new(path);
        let rpath = CppString::new(resolved_path);
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_SdfAssetPath_from_resolved_path(&mut ptr, path.0, rpath.0);
        }
        SdfAssetPath(ptr)
    }

    /// Hash function
    pub fn hash(&self) -> u64 {
        let mut result = 0;
        unsafe {
            sys::pxr_SdfAssetPath_GetHash(self.0, &mut result);
        }
        result as u64
    }

    /// Return the asset path.
    pub fn asset_path(&self) -> &str {
        let mut result = std::ptr::null_mut();
        unsafe {
            sys::std_string_ctor(&mut result);
            sys::pxr_SdfAssetPath_GetAssetPath(
                self.0,
                &mut result as *mut *mut _ as *mut *const _,
            );

            let mut cptr = std::ptr::null();
            sys::std_string_c_str(result, &mut cptr);
            CStr::from_ptr(cptr).to_str().unwrap()
        }
    }

    /// Return the resolved asset path, if any.
    ///
    /// Note that SdfAssetPath only carries a resolved path if the creator of
    /// an instance supplied one to the constructor.  SdfAssetPath will never
    /// perform any resolution itself.
    pub fn resolved_path(&self) -> &str {
        let mut result = std::ptr::null_mut();
        unsafe {
            sys::std_string_ctor(&mut result);
            sys::pxr_SdfAssetPath_GetResolvedPath(
                self.0,
                &mut result as *mut *mut _ as *mut *const _,
            );

            let mut cptr = std::ptr::null();
            sys::std_string_c_str(result, &mut cptr);
            CStr::from_ptr(cptr).to_str().unwrap()
        }
    }
}

impl fmt::Display for SdfAssetPath {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "\"{}\": \"{}\"", self.asset_path(), self.resolved_path())
    }
}

impl fmt::Debug for SdfAssetPath {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "SdfAssetPath(\"{}\": \"{}\")", self.asset_path(), self.resolved_path())
    }
}

impl Drop for SdfAssetPath {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_SdfAssetPath_dtor(self.0);
        }
    }
}

impl PartialEq for SdfAssetPath {
    fn eq(&self, other: &Self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_SdfAssetPath__eq(self.0, &mut result, other.0);
        }
        result
    }
}

impl PartialOrd for SdfAssetPath {
    fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
        if self == other {
            Some(Ordering::Equal)
        } else {
            let mut less_than = false;
            unsafe {
                sys::pxr_SdfAssetPath_op_lt(self.0, &mut less_than, other.0);
            }

            if less_than {
                Some(Ordering::Less)
            } else {
                Some(Ordering::Greater)
            }
        }
    }
}
