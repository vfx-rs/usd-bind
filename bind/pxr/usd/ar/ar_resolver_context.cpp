#include <cppmm_bind.hpp>
#include <pxr/usd/ar/resolverContext.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArResolverContext
///
/// Contains information about a resolved asset.
///
struct ArResolverContext
{
public:
    using BoundType = pxr::ArResolverContext;

} CPPMM_OPAQUEPTR; // struct ArResolverContext

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

