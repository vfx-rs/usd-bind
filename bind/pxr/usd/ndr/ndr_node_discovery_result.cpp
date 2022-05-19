#include <cppmm_bind.hpp>
#include <pxr/usd/ndr/nodeDiscoveryResult.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class NdrNodeDiscoveryResult
struct NdrNodeDiscoveryResult
{
public:
    using BoundType = pxr::NdrNodeDiscoveryResult;

} CPPMM_OPAQUEPTR; // struct NdrNodeDiscoveryResult

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

