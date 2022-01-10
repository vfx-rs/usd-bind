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

} CPPMM_OPAQUEPTR; // struct ArTimestamp

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

