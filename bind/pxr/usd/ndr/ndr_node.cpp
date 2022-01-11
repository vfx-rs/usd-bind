#include <cppmm_bind.hpp>
#include <pxr/usd/ndr/node.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class NdrNode
///
/// Contains information about a resolved asset.
///
struct NdrNode
{
public:
    using BoundType = pxr::NdrNode;

} CPPMM_OPAQUEPTR; // struct NdrNode

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

