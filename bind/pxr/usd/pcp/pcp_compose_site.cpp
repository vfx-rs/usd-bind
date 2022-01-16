#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/composeSite.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpComposeSite
struct PcpComposeSite
{
public:
    using BoundType = pxr::PcpComposeSite;

} CPPMM_OPAQUEPTR; // struct PcpComposeSite

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

