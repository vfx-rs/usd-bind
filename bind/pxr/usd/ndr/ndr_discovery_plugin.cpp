#include <cppmm_bind.hpp>
#include <pxr/usd/ndr/discoveryPlugin.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class NdrDiscoveryPlugin
struct NdrDiscoveryPlugin
{
public:
    using BoundType = pxr::NdrDiscoveryPlugin;

} CPPMM_OPAQUEPTR; // struct NdrDiscoveryPlugin

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

