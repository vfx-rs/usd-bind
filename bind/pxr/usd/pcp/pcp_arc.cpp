#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/arc.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpArc
struct PcpArc
{
public:
    using BoundType = pxr::PcpArc;

} CPPMM_OPAQUEPTR; // struct PcpArc

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

