#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/primIndex.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpPrimIndex
struct PcpPrimIndex
{
public:
    using BoundType = pxr::PcpPrimIndex;

} CPPMM_OPAQUEPTR; // struct PcpPrimIndex

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

