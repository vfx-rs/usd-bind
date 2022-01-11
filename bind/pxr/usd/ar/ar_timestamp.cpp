#include <cppmm_bind.hpp>
#include <pxr/usd/ar/timestamp.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArTimestamp
///
/// Contains information about a resolved asset.
///
struct ArTimestamp
{
public:
    using BoundType = pxr::ArTimestamp;

    /// Create an invalid timestamp.
    ArTimestamp() ;

    /// Create a timestamp at \p time, which must be a Unix time value.
    ArTimestamp(double time);

    /// Return true if this timestamp is valid, false otherwise.
    bool IsValid() const;

    /// Return the time represented by this timestamp as a double.
    /// If this timestamp is invalid, issue a coding error and
    /// return a quiet NaN value.
    double GetTime() const;

    /// Comparison operators
    /// Note that invalid timestamps are considered less than all
    /// other timestamps.
    /// @{
    #if 0
    friend bool operator==(const ArTimestamp& lhs, const ArTimestamp& rhs)
    {
        return (!lhs.IsValid() && !rhs.IsValid()) ||
            (lhs.IsValid() && rhs.IsValid() && lhs._time == rhs._time);
    }

    friend bool operator!=(const ArTimestamp& lhs, const ArTimestamp& rhs)
    {
        return !(lhs == rhs);
    }

    friend bool operator<(const ArTimestamp& lhs, const ArTimestamp& rhs)
    {
        return (!lhs.IsValid() && rhs.IsValid()) ||
            (lhs.IsValid() && rhs.IsValid() && lhs._time < rhs._time);
    }

    friend bool operator>=(const ArTimestamp& lhs, const ArTimestamp& rhs)
    {
        return !(lhs < rhs);
    }

    friend bool operator<=(const ArTimestamp& lhs, const ArTimestamp& rhs)
    {
        return !lhs.IsValid() || (rhs.IsValid() && lhs._time <= rhs._time);
    }

    friend bool operator>(const ArTimestamp& lhs, const ArTimestamp& rhs)
    {
        return !(lhs <= rhs);
    }
    #endif
    /// @}

} CPPMM_OPAQUEPTR; // struct ArTimestamp

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

