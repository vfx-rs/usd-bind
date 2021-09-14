use imath_traits::f16;
use std::convert::TryFrom;
use std::ffi::CStr;
use std::fmt;
use usd_cppstd::{CppString, CppStringRef, CppTypeInfo};
use usd_sys as sys;
use usd_tf::token::TfToken;
use usd_sdf::time_code::SdfTimeCode;
use usd_sdf::asset_path::SdfAssetPath;

pub trait ValueStore: Sized + fmt::Display {
    /// Get a value of type Self from a VtValue
    fn get(value: &VtValue) -> Option<&Self>;

    /// Store a value of type Self in a VtValue
    fn set(value: &mut VtValue, data: &Self);

    /// Is this VtValue holding a Self?
    fn is_holding(value: &VtValue) -> bool;
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

    pub fn is_holding<T: ValueStore>(&self) -> bool {
        T::is_holding(self)
    }
}

impl fmt::Display for VtValue {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        if self.is_holding::<bool>() {
            write!(f, "{}", *self.to::<bool>().unwrap())
        } else if self.is_holding::<u8>() {
            write!(f, "{}", *self.to::<u8>().unwrap())
        } else if self.is_holding::<u32>() {
            write!(f, "{}", *self.to::<u32>().unwrap())
        } else if self.is_holding::<u64>() {
            write!(f, "{}", *self.to::<u64>().unwrap())
        } else if self.is_holding::<i32>() {
            write!(f, "{}", *self.to::<i32>().unwrap())
        } else if self.is_holding::<i64>() {
            write!(f, "{}", *self.to::<i64>().unwrap())
        } else if self.is_holding::<f16>() {
            write!(f, "{}", *self.to::<f16>().unwrap())
        } else if self.is_holding::<f32>() {
            write!(f, "{}", *self.to::<f32>().unwrap())
        } else if self.is_holding::<f64>() {
            write!(f, "{}", *self.to::<f64>().unwrap())
        } else if self.is_holding::<SdfTimeCode>() {
            write!(f, "{}", *self.to::<SdfTimeCode>().unwrap())
        } else if self.is_holding::<SdfAssetPath>() {
            write!(f, "{}", *self.to::<SdfAssetPath>().unwrap())
        } else if self.is_holding::<TfToken>() {
            write!(f, "\"{}\"", *self.to::<TfToken>().unwrap())
        } else {
            write!(f, "{:?}", self)
        }
    }
}

impl fmt::Debug for VtValue {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "VtValue({})", self.get_type_name())
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

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_bool(&mut result, value.0);
        }
        result
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

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_uint8_t(&mut result, value.0);
        }
        result
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

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_uint32_t(&mut result, value.0);
        }
        result
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

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_int32_t(&mut result, value.0);
        }
        result
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

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_int64_t(&mut result, value.0);
        }
        result
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

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_uint64_t(&mut result, value.0);
        }
        result
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

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_half(&mut result, value.0);
        }
        result
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

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_float(&mut result, value.0);
        }
        result
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

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_double(&mut result, value.0);
        }
        result
    }
}

impl ValueStore for TfToken {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result = std::ptr::null();
        unsafe {
            sys::pxr_VtValue_Get_TfToken(value.0, &mut result);
            Some(&*(result as *const TfToken))
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_TfToken(value.0, &mut dummy, &data.0);
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_TfToken(&mut result, value.0);
        }
        result
    }
}

impl ValueStore for SdfTimeCode {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result = std::ptr::null();
        unsafe {
            sys::pxr_VtValue_Get_SdfTimeCode(value.0, &mut result);
            Some(&*(result as *const SdfTimeCode))
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_SdfTimeCode(value.0, &mut dummy, &data.0);
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_SdfTimeCode(&mut result, value.0);
        }
        result
    }
}


impl ValueStore for SdfAssetPath {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result = std::ptr::null();
        unsafe {
            sys::pxr_VtValue_Get_SdfAssetPath(value.0, &mut result);
            Some(&*(result as *const SdfAssetPath))
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_SdfAssetPath(value.0, &mut dummy, data.0);
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_SdfAssetPath(&mut result, value.0);
        }
        result
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
