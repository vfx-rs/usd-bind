use crate::array::*;
use imath_traits::{f16, Vec2, Vec3, Vec4};
use std::convert::TryFrom;
use std::ffi::CStr;
use std::fmt;
use usd_cppstd::{CppString, CppStringRef, CppTypeInfo};
use usd_sdf::asset_path::SdfAssetPath;
use usd_sdf::time_code::SdfTimeCode;
use usd_sys as sys;
use usd_tf::token::TfToken;
use cppmm_refptr::{OpaquePtr, Ref};

pub trait ValueStore: Sized {
    /// Get a value of type Self from a VtValue
    fn get(value: &VtValue) -> Option<&Self>;

    /// Store a value of type Self in a VtValue
    fn set(value: &mut VtValue, data: &Self);

    /// Is this VtValue holding a Self?
    fn is_holding(value: &VtValue) -> bool;
}

pub trait ValueRefStore: Sized where Self: OpaquePtr {
    /// Get a value of type Self from a VtValue
    fn get_ref(value: &VtValue) -> Option<Ref<Self>>;

    /// Store a value of type Self in a VtValue
    fn set_ref(value: &mut VtValue, data: &Self);

    /// Is this VtValue holding a Self?
    fn is_holding_ref(value: &VtValue) -> bool;
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

    pub fn to_ref<T: ValueRefStore>(&self) -> Option<Ref<T>> {
        T::get_ref(self)
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

    pub fn is_holding_ref<T: ValueRefStore>(&self) -> bool {
        T::is_holding_ref(self)
    }
}

impl fmt::Display for VtValue {
    // I'm sorry...
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
        } else if self.is_holding::<[f32; 2]>() {
            let v = *self.to::<[f32; 2]>().unwrap();
            write!(f, "[{}, {}]", v[0], v[1])
        } else if self.is_holding::<[f32; 3]>() {
            let v = *self.to::<[f32; 3]>().unwrap();
            write!(f, "[{}, {}, {}]", v[0], v[1], v[2])
        } else if self.is_holding::<[f32; 4]>() {
            let v = *self.to::<[f32; 4]>().unwrap();
            write!(f, "[{}, {}, {}, {}]", v[0], v[1], v[2], v[3])
        } else if self.is_holding::<[f32; 9]>() {
            let v = *self.to::<[f32; 9]>().unwrap();
            write!(f, "[")?;
            for n in &v[0..8] {
                write!(f, "{}, ", *n)?;
            }
            write!(f, "{}]", v[8])
        } else if self.is_holding::<[f32; 16]>() {
            let v = *self.to::<[f32; 16]>().unwrap();
            write!(f, "[")?;
            for n in &v[0..15] {
                write!(f, "{}, ", *n)?;
            }
            write!(f, "{}]", v[15])
        } else if self.is_holding::<[f64; 2]>() {
            let v = *self.to::<[f64; 2]>().unwrap();
            write!(f, "[{}, {}]", v[0], v[1])
        } else if self.is_holding::<[f64; 3]>() {
            let v = *self.to::<[f64; 3]>().unwrap();
            write!(f, "[{}, {}, {}]", v[0], v[1], v[2])
        } else if self.is_holding::<[f64; 4]>() {
            let v = *self.to::<[f64; 4]>().unwrap();
            write!(f, "[{}, {}, {}, {}]", v[0], v[1], v[2], v[3])
        } else if self.is_holding::<[f64; 9]>() {
            let v = *self.to::<[f64; 9]>().unwrap();
            write!(f, "[")?;
            for n in &v[0..8] {
                write!(f, "{}, ", *n)?;
            }
            write!(f, "{}]", v[8])
        } else if self.is_holding::<[f64; 16]>() {
            let v = *self.to::<[f64; 16]>().unwrap();
            write!(f, "[")?;
            for n in &v[0..15] {
                write!(f, "{}, ", *n)?;
            }
            write!(f, "{}]", v[15])
        } else if self.is_holding::<[i32; 2]>() {
            let v = *self.to::<[i32; 2]>().unwrap();
            write!(f, "[{}, {}]", v[0], v[1])
        } else if self.is_holding::<[i32; 3]>() {
            let v = *self.to::<[i32; 3]>().unwrap();
            write!(f, "[{}, {}, {}]", v[0], v[1], v[2])
        } else if self.is_holding::<[i32; 4]>() {
            let v = *self.to::<[i32; 4]>().unwrap();
            write!(f, "[{}, {}, {}, {}]", v[0], v[1], v[2], v[3])
        } else if self.is_holding_ref::<VtArrayI32>() {
            let arr = self.to_ref::<VtArrayI32>().unwrap();
            let v = arr.as_slice();
            if v.is_empty() {
                write!(f, "[]")
            } else if v.len() <= 16 {
                write!(f, "[{}; ", v.len())?;
                for n in v.iter().take(v.len()-1) {
                    write!(f, "{}, ", *n)?;
                }
                write!(f, "{}]", v.last().unwrap())
            } else {
                write!(f, "[{}; ", v.len())?;
                for n in &v[0..12] {
                    write!(f, "{}, ", *n)?;
                }
                write!(f, "... {}]", v.last().unwrap())
            }
        } else if self.is_holding_ref::<VtArrayGfVec2f>() {
            let arr = self.to_ref::<VtArrayGfVec2f>().unwrap();
            let v = arr.as_slice::<[f32;2]>();
            if v.is_empty() {
                write!(f, "[]")
            } else if v.len() <= 4 {
                write!(f, "[{}; ", v.len())?;
                for n in v.iter().take(v.len()-1) {
                    write!(f, "[{:.3}, {:.3}], ", n[0], n[1])?;
                }
                let n = v.last().unwrap();
                write!(f, "[{:.3}, {:.3}]]", n[0], n[1])
            } else {
                write!(f, "[{}; ", v.len())?;
                for n in &v[0..3] {
                    write!(f, "[{:.3}, {:.3}], ", n[0], n[1])?;
                }
                let n = v.last().unwrap();
                write!(f, "... [{:.3}, {:.3}]]", n[0], n[1])
            }
        } else if self.is_holding_ref::<VtArrayGfVec3f>() {
            let arr = self.to_ref::<VtArrayGfVec3f>().unwrap();
            let v = arr.as_slice::<[f32;3]>();
            if v.is_empty() {
                write!(f, "[]")
            } else if v.len() <= 4 {
                write!(f, "[{}; ", v.len())?;
                for n in v.iter().take(v.len()-1) {
                    write!(f, "[{:.3}, {:.3}, {:.3}], ", n[0], n[1], n[2])?;
                }
                let n = v.last().unwrap();
                write!(f, "[{:.3}, {:.3}, {:.3}]]", n[0], n[1], n[2])
            } else {
                write!(f, "[{}; ", v.len())?;
                for n in &v[0..3] {
                    write!(f, "[{:.3}, {:.3}, {:.3}], ", n[0], n[1], n[2])?;
                }
                let n = v.last().unwrap();
                write!(f, "... [{:.3}, {:.3}, {:.3}]]", n[0], n[1], n[2])
            }
        } else if self.is_holding_ref::<VtArrayF32>() {
            let arr = self.to_ref::<VtArrayF32>().unwrap();
            let v = arr.as_slice();
            if v.is_empty() {
                write!(f, "[]")
            } else if v.len() <= 16 {
                write!(f, "[{}; ", v.len())?;
                for n in v.iter().take(v.len()-1) {
                    write!(f, "{}, ", *n)?;
                }
                write!(f, "{}]", v.last().unwrap())
            } else {
                write!(f, "[{}; ", v.len())?;
                for n in &v[0..12] {
                    write!(f, "{}, ", *n)?;
                }
                write!(f, "... {}]", v.last().unwrap())
            }
        } else if self.is_holding_ref::<VtArrayTfToken>() {
            let arr = self.to_ref::<VtArrayTfToken>().unwrap();
            let v = arr.as_slice();
            if v.is_empty() {
                write!(f, "[]")
            } else if v.len() <= 8 {
                write!(f, "[{}; ", v.len())?;
                for n in v.iter().take(v.len()-1) {
                    write!(f, "\"{}\", ", *n)?;
                }
                write!(f, "\"{}\"]", v.last().unwrap())
            } else {
                write!(f, "[{}; ", v.len())?;
                for n in &v[0..5] {
                    write!(f, "\"{}\", ", *n)?;
                }
                write!(f, "... \"{}\"]", v.last().unwrap())
            }
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

impl ValueStore for [i32; 2] {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_GfVec2i(
                value.0,
                &mut result as *mut *const _ as *mut *const sys::pxr_GfVec2i_t,
            );
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_GfVec2i(
                value.0,
                &mut dummy,
                *(data as *const _ as *const sys::pxr_GfVec2i_t),
            );
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_GfVec2i(&mut result, value.0);
        }
        result
    }
}

impl ValueStore for [i32; 3] {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_GfVec3f(
                value.0,
                &mut result as *mut *const _ as *mut *const sys::pxr_GfVec3f_t,
            );
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_GfVec3f(
                value.0,
                &mut dummy,
                data as *const _ as *const sys::pxr_GfVec3f_t,
            );
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_GfVec3f(&mut result, value.0);
        }
        result
    }
}

impl ValueStore for [i32; 4] {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_GfVec4f(
                value.0,
                &mut result as *mut *const _ as *mut *const sys::pxr_GfVec4f_t,
            );
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_GfVec4f(
                value.0,
                &mut dummy,
                data as *const _ as *const sys::pxr_GfVec4f_t,
            );
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_GfVec4f(&mut result, value.0);
        }
        result
    }
}

impl ValueStore for [f16; 2] {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_GfVec2h(
                value.0,
                &mut result as *mut *const _ as *mut *const sys::pxr_GfVec2h_t,
            );
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_GfVec2h(
                value.0,
                &mut dummy,
                *(data as *const _ as *const sys::pxr_GfVec2h_t),
            );
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_GfVec2h(&mut result, value.0);
        }
        result
    }
}

impl ValueStore for [f16; 3] {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_GfVec3h(
                value.0,
                &mut result as *mut *const _ as *mut *const sys::pxr_GfVec3h_t,
            );
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_GfVec3h(
                value.0,
                &mut dummy,
                *(data as *const _ as *const sys::pxr_GfVec3h_t),
            );
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_GfVec3h(&mut result, value.0);
        }
        result
    }
}

impl ValueStore for [f16; 4] {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_GfVec4h(
                value.0,
                &mut result as *mut *const _ as *mut *const sys::pxr_GfVec4h_t,
            );
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_GfVec4h(
                value.0,
                &mut dummy,
                *(data as *const _ as *const sys::pxr_GfVec4h_t),
            );
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_GfVec4h(&mut result, value.0);
        }
        result
    }
}

impl ValueStore for [f32; 2] {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_GfVec2f(
                value.0,
                &mut result as *mut *const _ as *mut *const sys::pxr_GfVec2f_t,
            );
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_GfVec2f(
                value.0,
                &mut dummy,
                *(data as *const _ as *const sys::pxr_GfVec2f_t),
            );
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_GfVec2f(&mut result, value.0);
        }
        result
    }
}

impl ValueStore for [f32; 3] {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_GfVec3f(
                value.0,
                &mut result as *mut *const _ as *mut *const sys::pxr_GfVec3f_t,
            );
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_GfVec3f(
                value.0,
                &mut dummy,
                data as *const _ as *const sys::pxr_GfVec3f_t,
            );
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_GfVec3f(&mut result, value.0);
        }
        result
    }
}

impl ValueStore for [f32; 4] {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_GfVec4f(
                value.0,
                &mut result as *mut *const _ as *mut *const sys::pxr_GfVec4f_t,
            );
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_GfVec4f(
                value.0,
                &mut dummy,
                data as *const _ as *const sys::pxr_GfVec4f_t,
            );
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_GfVec4f(&mut result, value.0);
        }
        result
    }
}

impl ValueStore for [f32; 9] {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_GfMatrix3f(
                value.0,
                &mut result as *mut *const _
                    as *mut *const sys::pxr_GfMatrix3f_t,
            );
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_GfMatrix3f(
                value.0,
                &mut dummy,
                data as *const _ as *const sys::pxr_GfMatrix3f_t,
            );
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_GfMatrix3f(&mut result, value.0);
        }
        result
    }
}

impl ValueStore for [f32; 16] {
    fn get(value: &VtValue) -> Option<&Self> {
        let mut result: *const Self = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_Get_GfMatrix3f(
                value.0,
                &mut result as *mut *const _
                    as *mut *const sys::pxr_GfMatrix3f_t,
            );
            Some(&*result)
        }
    }

    fn set(value: &mut VtValue, data: &Self) {
        let mut dummy = std::ptr::null_mut();
        unsafe {
            sys::pxr_VtValue_assign_GfMatrix3f(
                value.0,
                &mut dummy,
                data as *const _ as *const sys::pxr_GfMatrix3f_t,
            );
        }
    }

    fn is_holding(value: &VtValue) -> bool {
        let mut result = false;
        unsafe {
            sys::value_is_holding_GfMatrix3f(&mut result, value.0);
        }
        result
    }
}

macro_rules! slice_value_store {
    ($slice:tt, $elem:ident) => {
paste::paste! {

    impl ValueStore for $slice {
        fn get(value: &VtValue) -> Option<&Self> {
            let mut result: *const Self = std::ptr::null_mut();
            unsafe {
                sys::[<pxr_VtValue_Get_ $elem>](
                    value.0,
                    &mut result as *mut *const _
                        as *mut *const sys::[<pxr_ $elem _t>],
                );
                Some(&*result)
            }
        }

        fn set(value: &mut VtValue, data: &Self) {
            let mut dummy = std::ptr::null_mut();
            unsafe {
                sys::[<pxr_VtValue_assign_ $elem>](
                    value.0,
                    &mut dummy,
                    data as *const _ as *const sys::[<pxr_ $elem _t>],
                );
            }
        }

        fn is_holding(value: &VtValue) -> bool {
            let mut result = false;
            unsafe {
                sys::[<value_is_holding_ $elem>](&mut result, value.0);
            }
            result
        }
    }

}
};
}

slice_value_store!([f64;2], GfVec2d);
slice_value_store!([f64;3], GfVec3d);

slice_value_store!([f64;4], GfMatrix2d);
slice_value_store!([f64;9], GfMatrix3d);
slice_value_store!([f64;16], GfMatrix4d);

cfg_if::cfg_if! {
    if #[cfg(feature="imath_cgmath")] {
        type Vec2h = cgmath::Vector2<f16>;
        type Vec2f = cgmath::Vector2<f32>;
        type Vec2d = cgmath::Vector2<f64>;
        type Vec2i = cgmath::Vector2<i32>;

        type Vec3h = cgmath::Vector3<f16>;
        type Vec3f = cgmath::Vector3<f32>;
        type Vec3d = cgmath::Vector3<f64>;
        type Vec3i = cgmath::Vector3<i32>;

        type Vec4h = cgmath::Vector4<f16>;
        type Vec4f = cgmath::Vector4<f32>;
        type Vec4d = cgmath::Vector4<f64>;
        type Vec4i = cgmath::Vector4<i32>;

        type Mat2f = cgmath::Matrix2<f32>;
        type Mat2d = cgmath::Matrix2<f64>;

        type Mat3f = cgmath::Matrix3<f32>;
        type Mat3d = cgmath::Matrix3<f64>;

        type Mat4f = cgmath::Matrix4<f32>;
        type Mat4d = cgmath::Matrix4<f64>;
    } else if #[cfg(feature="imath_glam")] {
        type Vec2f = glam::Vec2;
        type Vec2d = glam::DVec2;
        type Vec2i = glam::IVec2;

        type Vec3f = glam::Vec3;
        type Vec3d = glam::DVec3;
        type Vec3i = glam::IVec3;

        type Vec4f = glam::Vec4;
        type Vec4d = glam::DVec4;
        type Vec4i = glam::IVec4;

        type Mat2f = glam::Mat2;
        type Mat2d = glam::DMat2;

        type Mat3f = glam::Mat3;
        type Mat3d = glam::DMat3;

        type Mat4f = glam::Mat4;
        type Mat4d = glam::DMat4;
    } else if #[cfg(feature="imath_nalgebra")] {

    } else if #[cfg(feature="imath_nalgebra_glm")] {

    }
}

macro_rules! value_store {
    ($ty:ty, $elem:ident) => {
paste::paste! {

    #[cfg(any(
        feature = "imath_cgmath",
        feature = "imath_glam",
        feature = "imath_nalgebra",
        feature = "imath_nalgebra_glm"
    ))]
    impl ValueStore for [<$ty>] {
        fn get(value: &VtValue) -> Option<&Self> {
            let mut result: *const Self = std::ptr::null_mut();
            unsafe {
                sys::[<pxr_VtValue_Get_ $elem>](
                    value.0,
                    &mut result as *mut *const _
                        as *mut *const sys::[<pxr_ $elem _t>],
                );
                Some(&*result)
            }
        }

        fn set(value: &mut VtValue, data: &Self) {
            let mut dummy = std::ptr::null_mut();
            unsafe {
                sys::[<pxr_VtValue_assign_ $elem>](
                    value.0,
                    &mut dummy,
                    data as *const _ as *const sys::[<pxr_ $elem _t>],
                );
            }
        }

        fn is_holding(value: &VtValue) -> bool {
            let mut result = false;
            unsafe {
                sys::[<value_is_holding_ $elem>](&mut result, value.0);
            }
            result
        }
    }

}
};
}

// Vec
value_store!(Vec2i, GiVec2i);
value_store!(Vec3i, GiVec3i);
value_store!(Vec4i, GiVec4i);
value_store!(Vec2f, GfVec2f);
value_store!(Vec3f, GfVec3f);
value_store!(Vec4f, GfVec4f);
value_store!(Vec2d, GdVec2d);
value_store!(Vec3d, GdVec3d);
value_store!(Vec4d, GdVec4d);

// Matrix
value_store!(Mat2f, GfMatrix2f);
value_store!(Mat3f, GfMatrix3f);
value_store!(Mat4f, GfMatrix4f);
value_store!(Mat2d, GfMatrix2d);
value_store!(Mat3d, GfMatrix3d);
value_store!(Mat4d, GfMatrix4d);

macro_rules! value_ref_store_array {
    ($elem:ident) => {
paste::paste! {
    impl ValueRefStore for [<VtArray $elem>] {
        fn get_ref(value: &VtValue) -> Option<[<VtArray $elem Ref>]> {
            let mut result = std::ptr::null();
            unsafe {
                sys::[<pxr_VtValue_Get_VtArray $elem>](value.0, &mut result);
                Some([<VtArray $elem Ref>]::new(result))
            }
        }

        fn set_ref(value: &mut VtValue, data: &Self) {
            let mut dummy = std::ptr::null_mut();
            unsafe {
                sys::[<pxr_VtValue_assign_VtArray $elem>](
                    value.0,
                    &mut dummy,
                    data as *const _ as *const sys::[<pxr_VtArray $elem _t>],
                );
            }
        }

        fn is_holding_ref(value: &VtValue) -> bool {
            let mut result = false;
            unsafe {
                sys::[<value_is_holding_VtArray $elem>](&mut result, value.0);
            }
            result
        }
    }
}
};
}

value_ref_store_array!(I32);
value_ref_store_array!(F32);
value_ref_store_array!(GfVec2f);
value_ref_store_array!(GfVec3f);
value_ref_store_array!(GfVec4f);
value_ref_store_array!(GfVec2d);
value_ref_store_array!(GfVec3d);
value_ref_store_array!(GfVec4d);
value_ref_store_array!(TfToken);

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
