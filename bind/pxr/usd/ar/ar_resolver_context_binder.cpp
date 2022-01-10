#include <cppmm_bind.hpp>
#include <pxr/usd/ar/resolverContextBinder.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArResolverContextBinder
///
/// Contains information about a resolved asset.
///
struct ArResolverContextBinder
{
public:
    using BoundType = pxr::ArResolverContextBinder;

} CPPMM_OPAQUEPTR; // struct ArResolverContextBinder

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

