use usd_sys as sys;
use usd_tf::token::TfToken;

pub use sys::pxr_SdfTupleDimensions_t as SdfTupleDimensions;

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
}

impl std::fmt::Debug for SdfValueTypeName {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "SdfValueTypeName({})", self.as_token())
    }
}
