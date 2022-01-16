#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/changes.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpChanges
struct PcpChanges
{
public:
    using BoundType = pxr::PcpChanges;

} CPPMM_OPAQUEPTR; // struct PcpChanges

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

