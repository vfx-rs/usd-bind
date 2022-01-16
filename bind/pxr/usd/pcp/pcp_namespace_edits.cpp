#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/namespaceEdits.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpNamespaceEdits
struct PcpNamespaceEdits
{
public:
    using BoundType = pxr::PcpNamespaceEdits;

} CPPMM_OPAQUEPTR; // struct PcpNamespaceEdits

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

