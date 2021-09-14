use std::cmp::Ordering;
use std::ops;
use usd_sys as sys;
use std::fmt;

/// Value type that represents a time code. It's equivalent to a double type
/// value but is used to indicate that this value should be resolved by any
/// time based value resolution.
#[repr(transparent)]
#[derive(Copy, Clone)]
pub struct SdfTimeCode(pub sys::pxr_SdfTimeCode_t);

impl SdfTimeCode {
    /// Construct a time code with the given time.
    pub fn new(time: f64) -> Self {
        time.into()
    }

    /// Get the hash
    pub fn hash(&self) -> u64 {
        let mut result = 0;
        unsafe {
            sys::pxr_SdfTimeCode_GetHash(
                &self.0,
                &mut result as *mut _ as *mut usize,
            );
        }
        result
    }
}

impl Default for SdfTimeCode {
    fn default() -> Self {
        0.0.into()
    }
}

impl fmt::Display for SdfTimeCode {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}", f64::from(*self))
    }
}

impl From<f64> for SdfTimeCode {
    fn from(f: f64) -> Self {
        let mut inner = sys::pxr_SdfTimeCode_t::default();
        unsafe {
            sys::pxr_SdfTimeCode_ctor(&mut inner, f);
        }

        SdfTimeCode(inner)
    }
}

impl From<SdfTimeCode> for f64 {
    fn from(t: SdfTimeCode) -> Self {
        let mut result = 0.0;
        unsafe {
            sys::pxr_SdfTimeCode_GetValue(&t.0, &mut result);
        }
        result
    }
}

impl PartialEq for SdfTimeCode {
    fn eq(&self, other: &Self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_SdfTimeCode__eq(&self.0, &mut result, &other.0);
        }
        result
    }
}

impl PartialOrd for SdfTimeCode {
    fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
        if self == other {
            Some(Ordering::Equal)
        } else {
            let mut less_than = false;
            unsafe {
                sys::pxr_SdfTimeCode_op_lt(&self.0, &mut less_than, &other.0);
            }

            if less_than {
                Some(Ordering::Less)
            } else {
                Some(Ordering::Greater)
            }
        }
    }
}

impl ops::Add<SdfTimeCode> for SdfTimeCode {
    type Output = SdfTimeCode;
    fn add(self, rhs: SdfTimeCode) -> Self::Output {
        let mut result = SdfTimeCode::default();
        unsafe {
            sys::pxr_SdfTimeCode__op_add(&self.0, &mut result.0, &rhs.0);
        }
        result
    }
}

impl ops::Sub<SdfTimeCode> for SdfTimeCode {
    type Output = SdfTimeCode;
    fn sub(self, rhs: SdfTimeCode) -> Self::Output {
        let mut result = SdfTimeCode::default();
        unsafe {
            sys::pxr_SdfTimeCode__op_sub(&self.0, &mut result.0, &rhs.0);
        }
        result
    }
}

impl ops::Div<SdfTimeCode> for SdfTimeCode {
    type Output = SdfTimeCode;
    fn div(self, rhs: SdfTimeCode) -> Self::Output {
        let mut result = SdfTimeCode::default();
        unsafe {
            sys::pxr_SdfTimeCode__op_div(&self.0, &mut result.0, &rhs.0);
        }
        result
    }
}

impl ops::Mul<SdfTimeCode> for SdfTimeCode {
    type Output = SdfTimeCode;
    fn mul(self, rhs: SdfTimeCode) -> Self::Output {
        let mut result = SdfTimeCode::default();
        unsafe {
            sys::pxr_SdfTimeCode__op_mul(&self.0, &mut result.0, &rhs.0);
        }
        result
    }
}
