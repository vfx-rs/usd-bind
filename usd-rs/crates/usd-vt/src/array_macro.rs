
#[macro_export]
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

impl Deref for [<VtArray $elem>] {
    type Target = [$ty];

    fn deref(&self) -> &Self::Target {
        self.as_slice()
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

