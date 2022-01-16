#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/node.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpNode
struct PcpNode
{
public:
    using BoundType = pxr::PcpNode;

} CPPMM_OPAQUEPTR; // struct PcpNode

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

