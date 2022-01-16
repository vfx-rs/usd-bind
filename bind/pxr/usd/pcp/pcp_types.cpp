#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/types.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpTypes
struct PcpTypes
{
public:
    using BoundType = pxr::PcpTypes;

} CPPMM_OPAQUEPTR; // struct PcpTypes

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

