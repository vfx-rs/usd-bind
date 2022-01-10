#include <cppmm_bind.hpp>
#include <pxr/usd/ar/resolverScopedCache.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArResolverScopedCache
///
/// Contains information about a resolved asset.
///
struct ArResolverScopedCache
{
public:
    using BoundType = pxr::ArResolverScopedCache;

} CPPMM_OPAQUEPTR; // struct ArResolverScopedCache

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

