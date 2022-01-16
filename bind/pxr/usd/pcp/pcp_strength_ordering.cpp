#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/strengthOrdering.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpStrengthOrdering
struct PcpStrengthOrdering
{
public:
    using BoundType = pxr::PcpStrengthOrdering;

} CPPMM_OPAQUEPTR; // struct PcpStrengthOrdering

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

