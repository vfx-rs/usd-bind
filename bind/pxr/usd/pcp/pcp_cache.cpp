#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/cache.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpCache
struct PcpCache
{
public:
    using BoundType = pxr::PcpCache;

} CPPMM_OPAQUEPTR; // struct PcpCache

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

