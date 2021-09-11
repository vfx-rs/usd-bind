use cppmm_refptr::*;
use usd_cppstd::CppString;
use usd_sys as sys;

#[repr(transparent)]
pub struct TfError(pub *mut sys::pxr_TfError_t);

unsafe impl OpaquePtr for TfError {
    type SysPointee = sys::pxr_TfError_t;
    type Pointee = TfError;
}

pub type TfErrorRef<'a, P = TfError> = Ref<'a, P>;
pub type TfErrorRefMut<'a, P = TfError> = RefMut<'a, P>;

impl TfError {
    pub fn to_string(&self) -> String {
        let mut result = CppString::default();
        unsafe {
            // FIXME: is this UB?
            sys::pxr_TfError_GetErrorCodeAsString(
                self.0,
                &mut result.0 as *mut *mut _ as *mut *const _,
            );
        }

        result.as_str().to_string()
    }
}
