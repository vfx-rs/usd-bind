#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/site.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpSite
struct PcpSite
{
public:
    using BoundType = pxr::PcpSite;

} CPPMM_OPAQUEPTR; // struct PcpSite

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

