#include <cppmm_bind.hpp>
#include <pxr/usd/ndr/registry.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class NdrRegistry
struct NdrRegistry
{
public:
    using BoundType = pxr::NdrRegistry;

} CPPMM_OPAQUEPTR; // struct NdrRegistry

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

