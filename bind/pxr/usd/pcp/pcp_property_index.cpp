#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/propertyIndex.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpPropertyIndex
struct PcpPropertyIndex
{
public:
    using BoundType = pxr::PcpPropertyIndex;

} CPPMM_OPAQUEPTR; // struct PcpPropertyIndex

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

