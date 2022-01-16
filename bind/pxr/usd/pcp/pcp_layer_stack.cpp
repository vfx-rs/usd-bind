#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/layerStack.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpLayerStack
struct PcpLayerStack
{
public:
    using BoundType = pxr::PcpLayerStack;

} CPPMM_OPAQUEPTR; // struct PcpLayerStack

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

