#include <pxr/usd/usd/timeCode.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

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
struct UsdTimeCode {
    using BoundType = pxr::UsdTimeCode;

    /// Construct with optional time value.  Impilicitly convert from double.
    UsdTimeCode(double t);

    /// Construct and implicitly cast from SdfTimeCode.
    UsdTimeCode(const pxr::SdfTimeCode& timeCode) CPPMM_RENAME(from_SdfTimeCode);

    /// Produce a UsdTimeCode representing the lowest/earliest possible
    /// timeCode.  Thus, for any given timeSample *s*, its time ordinate 
    /// *t* will obey: t >= UsdTimeCode::EarliestTime()
    /// 
    /// This is useful for clients that wish to retrieve the first authored 
    /// timeSample for an attribute, as they can use UsdTimeCode::EarliestTime()
    /// as the *time* argument to UsdAttribute::Get() and 
    /// UsdAttribute::GetBracketingTimeSamples()
    static pxr::UsdTimeCode EarliestTime();

    /// Produce a UsdTimeCode representing the sentinel value for 'default'.
    /// 
    /// \note In inequality comparisons, Default() is considered less than any
    /// numeric TimeCode, including EarliestTime(), indicative of the fact that
    /// in UsdAttribute value resolution, the sample at Default() (if any) is
    /// always weaker than any numeric timeSample in the same layer.  For
    /// more information, see \ref Usd_ValueResolution
    static pxr::UsdTimeCode Default();

    /// Produce a safe step value such that for any numeric UsdTimeCode t in
    /// [-maxValue, maxValue], t +/- (step / maxCompression) != t with a safety
    /// factor of 2.  This is shorthand for
    /// std::numeric_limits<double>::epsilon() * maxValue * maxCompression *
    /// 2.0.  Such a step value is recommended for simulating jump
    /// discontinuities in time samples.  For example, author value x at time t,
    /// and value y at time t + SafeStep().  This ensures that as the sample
    /// times are shifted and scaled, t and t + SafeStep() remain distinct so
    /// long as they adhere to the *maxValue* and *maxCompression* limits.
    static double SafeStep(double maxValue, double maxCompression);

    /// Return true if this time represents the lowest/earliest possible
    /// timeCode, false otherwise.
    bool IsEarliestTime() const;

    /// Return true if this time represents the 'default' sentinel value, false
    /// otherwise.  This is equivalent to !IsNumeric().
    bool IsDefault() const;

    /// Return true if this time represents a numeric value, false otherwise.
    /// This is equivalent to !IsDefault().
    bool IsNumeric() const;

    /// Return the numeric value for this time.  If this time *IsDefault*(),
    /// return a quiet NaN value.
    double GetValue() const;

    UsdTimeCode(const pxr::UsdTimeCode& );

    UsdTimeCode(pxr::UsdTimeCode&& ) CPPMM_IGNORE;

    ~UsdTimeCode();

} CPPMM_OPAQUEBYTES CPPMM_DERIVE("Copy, Clone"); // struct UsdTimeCode


std::ostream& operator<<(std::ostream& os, const pxr::UsdTimeCode& time) CPPMM_IGNORE;


std::istream& operator>>(std::istream& is, pxr::UsdTimeCode& time) CPPMM_IGNORE;


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
