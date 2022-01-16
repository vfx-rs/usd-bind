#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/instanceKey.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpInstanceKey
struct PcpInstanceKey
{
public:
    using BoundType = pxr::PcpInstanceKey;

} CPPMM_OPAQUEPTR; // struct PcpInstanceKey

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

