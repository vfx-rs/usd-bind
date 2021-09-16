use std::cmp::Ordering;
use std::ops;
use usd_sdf::time_code::SdfTimeCode;
use usd_sys as sys;
use usd_vt::value::{ValueStore, VtValue};

/// \class UsdTimeCode
///
/// Represent a time value, which may be either numeric, holding a double
/// value, or a sentinel value UsdTimeCode::Default().
///
/// A UsdTimeCode does *not* represent an
/// <a href="https://en.wikipedia.org/wiki/SMPTE_timecode">SMPTE timecode</a>,
/// although we may, in future, support conversion functions between the two.
/// Instead, UsdTimeCode is an abstraction that acknowledges that in the
/// principal domains of use for USD, there are many different ways of encoding
/// time, and USD must be able to capture and translate between all of them for
/// interchange, retaining as much intent of the authoring application as
/// possible.
///
/// A UsdTimeCode is therefore a unitless, generic time measurement that serves
/// as the ordinate for time-sampled data in USD files.  A client of USD relies
/// on the UsdStage (which in turn consults metadata authored in its root layer)
/// to define the mapping of TimeCodes to units like seconds and frames.
///
/// \sa UsdStage::GetStartTimeCode()
/// \sa UsdStage::GetEndTimeCode()
/// \sa UsdStage::GetTimeCodesPerSecond()
/// \sa UsdStage::GetFramesPerSecond()
///
/// As described in \ref Usd_ValueResolution , USD optionally provides an
/// unvarying, 'default' value for every attribute.  UsdTimeCode embodies a time
/// value that can either be a floating-point sample time, or the default.
///
/// All UsdAttribute and derived API that requires a time parameter defaults
/// to UsdTimeCode::Default() if the parameter is left unspecified, and
/// auto-constructs from a floating-point argument.
///
/// UsdTimeCode::EarliestTime() is provided to aid clients who wish
/// to retrieve the first authored timesample for any attribute.
#[repr(transparent)]
pub struct UsdTimeCode(pub sys::pxr_UsdTimeCode_t);

impl UsdTimeCode {
    /// Construct a time code with the given time.
    pub fn new(time: f64) -> Self {
        time.into()
    }

    /// Produce a UsdTimeCode representing the lowest/earliest possible
    /// timeCode.  Thus, for any given timeSample *s*, its time ordinate
    /// *t* will obey: t >= UsdTimeCode::EarliestTime()
    ///
    /// This is useful for clients that wish to retrieve the first authored
    /// timeSample for an attribute, as they can use UsdTimeCode::EarliestTime()
    /// as the *time* argument to UsdAttribute::Get() and
    /// UsdAttribute::GetBracketingTimeSamples()
    pub fn earliest_time() -> Self {
        let mut result = Self::default();
        unsafe {
            sys::pxr_UsdTimeCode_EarliestTime(&mut result.0);
        }
        result
    }

    /// Produce a safe step value such that for any numeric UsdTimeCode t in
    /// [-maxValue, maxValue], t +/- (step / maxCompression) != t with a safety
    /// factor of 2.  This is shorthand for
    /// std::numeric_limits<double>::epsilon() * maxValue * maxCompression *
    /// 2.0.  Such a step value is recommended for simulating jump
    /// discontinuities in time samples.  For example, author value x at time t,
    /// and value y at time t + SafeStep().  This ensures that as the sample
    /// times are shifted and scaled, t and t + SafeStep() remain distinct so
    /// long as they adhere to the *maxValue* and *maxCompression* limits.
    pub fn safe_step(max_value: f64, max_compression: f64) -> f64 {
        let mut result = 0.0;
        unsafe {
            sys::pxr_UsdTimeCode_SafeStep(
                &mut result,
                max_value,
                max_compression,
            );
        }
        result
    }

    /// Return true if this time represents the lowest/earliest possible
    /// timeCode, false otherwise.
    pub fn is_earliest_time(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdTimeCode_IsEarliestTime(&self.0, &mut result);
        }
        result
    }

    /// Return true if this time represents the 'default' sentinel value, false
    /// otherwise.  This is equivalent to !IsNumeric().
    pub fn is_default(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdTimeCode_IsDefault(&self.0, &mut result);
        }
        result
    }

    /// Return true if this time represents a numeric value, false otherwise.
    /// This is equivalent to !IsDefault().
    pub fn is_numeric(&self) -> bool {
        let mut result = false;
        unsafe {
            sys::pxr_UsdTimeCode_IsNumeric(&self.0, &mut result);
        }
        result
    }
}

impl Default for UsdTimeCode {
    fn default() -> Self {
        let mut inner = sys::pxr_UsdTimeCode_t::default();
        unsafe {
            sys::pxr_UsdTimeCode_Default(&mut inner);
        }
        UsdTimeCode(inner)
    }
}

impl From<f64> for UsdTimeCode {
    fn from(f: f64) -> Self {
        let mut inner = sys::pxr_UsdTimeCode_t::default();
        unsafe {
            sys::pxr_UsdTimeCode_ctor(&mut inner, f);
        }

        UsdTimeCode(inner)
    }
}

impl From<SdfTimeCode> for UsdTimeCode {
    fn from(f: SdfTimeCode) -> Self {
        let mut inner = sys::pxr_UsdTimeCode_t::default();
        unsafe {
            sys::pxr_UsdTimeCode_from_SdfTimeCode(&mut inner, &f.0);
        }

        UsdTimeCode(inner)
    }
}

impl From<UsdTimeCode> for f64 {
    fn from(t: UsdTimeCode) -> Self {
        let mut result = 0.0;
        unsafe {
            sys::pxr_UsdTimeCode_GetValue(&t.0, &mut result);
        }
        result
    }
}

