#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/targetIndex.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpTargetIndex
struct PcpTargetIndex
{
public:
    using BoundType = pxr::PcpTargetIndex;

} CPPMM_OPAQUEPTR; // struct PcpTargetIndex

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

