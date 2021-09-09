use usd_sys as sys;
use usd_tf::token::TfToken;

#[repr(C)]
#[derive(Default, Copy, Clone, Hash, Debug)]
pub struct SdfTupleDimensions {
    pub d: [usize; 2],
    pub size: usize,
}

#[repr(transparent)]
pub struct SdfValueTypeName(pub sys::pxr_SdfValueTypeName_t);

impl SdfValueTypeName {
    /// Returns the type name as a token.  This should not be used for
    /// comparison purposes.
    pub fn as_token(&self) -> TfToken {
        let mut result = sys::pxr_TfToken_t::default();
        unsafe {
            sys::pxr_SdfValueTypeName_GetAsToken(&self.0, &mut result);
        }
        TfToken(result)
    }

    /// Returns the type's role.
    pub fn role(&self) -> &TfToken {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::pxr_SdfValueTypeName_GetRole(&self.0, &mut ptr);
            &*(ptr as *const TfToken)
        }
    }

    /// Returns the dimensions of the scalar value, e.g. 3 for a 3D point.
    pub fn dimensions(&self) -> SdfTupleDimensions {
        let mut result = SdfTupleDimensions::default();
        unsafe {
            sys::pxr_SdfValueTypeName_GetDimensions(
                &self.0,
                &mut result as *mut _ as *mut sys::pxr_SdfTupleDimensions_t,
            );
        }

        result
    }
}

impl std::fmt::Debug for SdfValueTypeName {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "SdfValueTypeName({})", self.as_token())
    }
}
