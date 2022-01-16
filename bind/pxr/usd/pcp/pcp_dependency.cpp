#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/dependency.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpDependency
struct PcpDependency
{
public:
    using BoundType = pxr::PcpDependency;

} CPPMM_OPAQUEPTR; // struct PcpDependency

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

