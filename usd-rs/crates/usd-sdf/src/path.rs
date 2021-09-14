use std::ffi::CStr;
use usd_sys as sys;
use usd_cppstd::CppString;
use cppmm_refptr::{OpaquePtr, Ref, RefMut};

#[repr(transparent)]
pub struct SdfPath(pub *mut sys::pxr_SdfPath_t);

unsafe impl OpaquePtr for SdfPath {
    type SysPointee = sys::pxr_SdfPath_t;
    type Pointee = SdfPath;
}

pub type SdfPathRef<'a, P = SdfPath> = Ref<'a, P>;
pub type SdfPathRefMut<'a, P = SdfPath> = RefMut<'a, P>;

impl SdfPath {
    
    pub fn new(path: &str) -> SdfPath {
        let s = CppString::new(path);
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_SdfPath_from_string(&mut ptr, s.0);
        }
        SdfPath(ptr)
    }

    pub fn text(&self) -> &str {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_SdfPath_GetText(self.0, &mut ptr);
            CStr::from_ptr(ptr)
                .to_str()
                .expect("Could not convert SdfPath_GetText result to str")
        }
    }
}

impl Drop for SdfPath {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_SdfPath_dtor(self.0);
        }
    }
}

#[repr(transparent)]
pub struct SdfPathVector(pub *mut sys::std_SdfPathVector_t);

unsafe impl OpaquePtr for SdfPathVector {
    type SysPointee = sys::std_SdfPathVector_t;
    type Pointee = SdfPathVector;
}

pub type SdfPathVectorRef<'a, P = SdfPathVector> = Ref<'a, P>;
pub type SdfPathVectorRefMut<'a, P = SdfPathVector> = RefMut<'a, P>;

impl SdfPathVector {
    pub fn new() -> SdfPathVector {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::std_SdfPathVector_ctor(&mut ptr)
                .into_result()
                .unwrap();
        }
        SdfPathVector(ptr)
    }

    pub fn resize(&mut self, count: usize) {
        unsafe {
            sys::std_SdfPathVector_resize(self.0, count);
        }
    }

    pub fn reserve(&mut self, count: usize) {
        unsafe {
            sys::std_SdfPathVector_reserve(self.0, count);
        }
    }

    pub fn from_slice(s: &[SdfPath]) -> Self {
        let mut vec = Self::new();
        vec.reserve(s.len());
        for p in s {
            unsafe {
                let mut tmp = std::ptr::null_mut();
                // FIXME: don't want to be doing two copies here but can't 
                // get the assignment operator to bind for some reason
                sys::pxr_SdfPath_copy(&mut tmp, p.0);
                sys::std_SdfPathVector_push_back(vec.0, tmp);
            }
        }
        vec
    }

    pub unsafe fn get_unchecked(&self, index: usize) -> SdfPathRef {
        let mut ptr = std::ptr::null();
        sys::std_SdfPathVector_index(self.0, &mut ptr, index);
        SdfPathRef::new(ptr)
    }

    pub unsafe fn get_unchecked_mut(&mut self, index: usize) -> SdfPathRefMut {
        let mut ptr = std::ptr::null_mut();
        sys::std_SdfPathVector_index_mut(self.0, &mut ptr, index);
        SdfPathRefMut::new(ptr)
    }

    pub fn len(&self) -> usize {
        let mut result = 0;
        unsafe {
            sys::std_SdfPathVector_size(self.0, &mut result);
        }
        result
    }

    pub fn iter(&self) -> SdfPathVectorIter {
        SdfPathVectorIter {
            vec: self,
            current: 0,
            size: self.len(),
        }
    }
}

impl Drop for SdfPathVector {
    fn drop(&mut self) {
        unsafe {
            sys::std_SdfPathVector_dtor(self.0);
        }
    }
}

pub struct SdfPathVectorIter<'a> {
    vec: &'a SdfPathVector,
    current: usize,
    size: usize,
}

impl<'a> Iterator for SdfPathVectorIter<'a> {
    type Item = SdfPathRef<'a>;

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

impl<'a> IntoIterator for &'a SdfPathVector {
    type Item = SdfPathRef<'a>;
    type IntoIter = SdfPathVectorIter<'a>;

    fn into_iter(self) -> Self::IntoIter {
        self.iter()
    }
}

impl Default for SdfPathVector {
    fn default() -> Self {
        SdfPathVector::new()
    }
}
