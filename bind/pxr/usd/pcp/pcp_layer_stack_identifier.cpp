#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/layerStackIdentifier.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpLayerStackIdentifier
struct PcpLayerStackIdentifier
{
public:
    using BoundType = pxr::PcpLayerStackIdentifier;

} CPPMM_OPAQUEPTR; // struct PcpLayerStackIdentifier

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

