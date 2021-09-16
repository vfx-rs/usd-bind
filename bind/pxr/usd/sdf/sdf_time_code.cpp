#include <pxr/usd/sdf/timeCode.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfTimeCode
/// 
/// Value type that represents a time code. It's equivalent to a double type
/// value but is used to indicate that this value should be resolved by any
/// time based value resolution.
struct SdfTimeCode {
    using BoundType = pxr::SdfTimeCode;

    /// Construct a time code with the given time. 
    /// A default constructed SdfTimeCode has a time of 0.0.
    /// A double value can implicitly cast to SdfTimeCode.
    SdfTimeCode(double time);

    /// \name Operators
    ///  @{
    bool operator==(const pxr::SdfTimeCode& rhs) const;

    bool operator!=(const pxr::SdfTimeCode& rhs) const;

    bool operator<(const pxr::SdfTimeCode& rhs) const CPPMM_RENAME(op_lt);

    bool operator>(const pxr::SdfTimeCode& rhs) const CPPMM_RENAME(op_gt);

    bool operator<=(const pxr::SdfTimeCode& rhs) const CPPMM_RENAME(op_le);

    bool operator>=(const pxr::SdfTimeCode& rhs) const CPPMM_RENAME(op_ge);

    pxr::SdfTimeCode operator*(const pxr::SdfTimeCode& rhs) const;

    pxr::SdfTimeCode operator/(const pxr::SdfTimeCode& rhs) const;

    pxr::SdfTimeCode operator+(const pxr::SdfTimeCode& rhs) const;

    pxr::SdfTimeCode operator-(const pxr::SdfTimeCode& rhs) const;

    /// Explicit conversion to double
    operator double() const CPPMM_IGNORE;

    /// Hash function
    size_t GetHash() const;

    /// Return the time value.
    double GetValue() const;

    SdfTimeCode(const pxr::SdfTimeCode& );

    SdfTimeCode(pxr::SdfTimeCode&& ) CPPMM_IGNORE;

    ~SdfTimeCode();

} CPPMM_OPAQUEBYTES CPPMM_DERIVE("Copy, Clone"); // struct SdfTimeCode


/// \name Related
/// Binary arithmetic and comparison operators with double valued lefthand side.
/// @{
pxr::SdfTimeCode operator*(double time, const pxr::SdfTimeCode& timeCode) CPPMM_IGNORE;


pxr::SdfTimeCode operator/(double time, const pxr::SdfTimeCode& timeCode) CPPMM_IGNORE;


pxr::SdfTimeCode operator+(double time, const pxr::SdfTimeCode& timeCode) CPPMM_IGNORE;


pxr::SdfTimeCode operator-(double time, const pxr::SdfTimeCode& timeCode) CPPMM_IGNORE;


bool operator==(double time, const pxr::SdfTimeCode& timeCode) CPPMM_IGNORE;


bool operator!=(double time, const pxr::SdfTimeCode& timeCode) CPPMM_IGNORE;


bool operator<(double time, const pxr::SdfTimeCode& timeCode) CPPMM_IGNORE;


bool operator>(double time, const pxr::SdfTimeCode& timeCode) CPPMM_IGNORE;


bool operator<=(double time, const pxr::SdfTimeCode& timeCode) CPPMM_IGNORE;


bool operator>=(double time, const pxr::SdfTimeCode& timeCode) CPPMM_IGNORE;


/// Stream insertion operator for the string representation of this time code.
std::ostream& operator<<(std::ostream& out, const pxr::SdfTimeCode& ap) CPPMM_IGNORE;


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
