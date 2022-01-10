#include <cppmm_bind.hpp>
#include <pxr/usd/ar/resolver.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArResolver
///
/// Contains information about a resolved asset.
///
struct ArResolver
{
public:
    using BoundType = pxr::ArResolver;

} CPPMM_OPAQUEPTR; // struct ArResolver

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

