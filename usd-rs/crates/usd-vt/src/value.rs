use imath_traits::f16;
use usd_cppstd::{CppString, CppTypeInfo};
use std::convert::TryFrom;
use std::ffi::CStr;
use std::fmt;
use usd_sys as sys;
use usd_tf::token::TfToken;

pub trait ValueStore: Sized {
    fn get(value: &VtValue) -> Option<&Self>;
    fn set(value: &mut VtValue, data: &Self);
}

#[repr(transparent)]
pub struct VtValue(pub *mut sys::pxr_VtValue_t);

impl VtValue {
    pub fn new() -> Self {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_ctor(&mut ptr);
        }
        VtValue(ptr)
    }

    pub fn to<T: ValueStore>(&self) -> Option<&T> {
        T::get(self)
    }

    pub fn get_type_name(&self) -> String {
        let mut result = CppString::default();
        unsafe {
            sys::pxr_VtValue_GetTypeName(self.0, &mut result.0);
        }

        result.as_str().to_string()
    }

    pub fn get_type_id(&self) -> CppTypeInfo {
        let mut result = std::ptr::null();
        unsafe {
            sys::pxr_VtValue_GetTypeid(self.0, &mut result);
        }
        CppTypeInfo(result)
    }
}

impl ValueStore for bool {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_bool(value.0, &mut result);
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_bool(value.0, &mut dummy, *data);
        }
    }

}

impl ValueStore for u8 {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_uint8_t(value.0, &mut result);
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_uint8_t(value.0, &mut dummy, *data);
        }
    }
}

impl ValueStore for u32 {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_uint32_t(value.0, &mut result);
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_uint32_t(value.0, &mut dummy, *data);
        }
    }
}

impl ValueStore for i32 {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_int32_t(value.0, &mut result);
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_int32_t(value.0, &mut dummy, *data);
        }
    }
}

impl ValueStore for i64 {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_int64_t(value.0, &mut result);
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_int64_t(value.0, &mut dummy, *data);
        }
    }
}

impl ValueStore for u64 {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_uint64_t(value.0, &mut result);
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_uint64_t(value.0, &mut dummy, *data);
        }
    }
}

impl ValueStore for f16 {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_half(
                value.0,
                &mut result as *mut _ as *mut *const sys::pxr_pxr_half_half_t,
            );
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_half(
                value.0,
                &mut dummy,
                std::mem::transmute::<f16, sys::pxr_pxr_half_half_t>(*data),
            );
        }
    }
}

impl ValueStore for f32 {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_float(value.0, &mut result);
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_float(value.0, &mut dummy, *data);
        }
    }
}

impl ValueStore for f64 {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_double(value.0, &mut result);
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_double(value.0, &mut dummy, *data);
        }
    }
}

impl ValueStore for TfToken {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result = std::ptr::null();
        unsafe {
            sys::pxr_VtValue_Get_TfToken(value.0, &mut result);
            // FIXME: we probably want to return a ref here??
            Some(&*(result as *const TfToken))
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_TfToken(value.0, &mut dummy, &data.0);
        }
    }
}

impl<T> From<&T> for VtValue
where
    T: ValueStore,
{
    fn from(data: &T) -> Self {
        let mut val = VtValue::new();
        T::set(&mut val, &data);
        val
    }
}

impl Drop for VtValue {
    fn drop(&mut self) {
        unsafe {
            sys::pxr_VtValue_dtor(self.0);
        }
    }
}
