#include <cppmm_bind.hpp>
#include <pxr/usd/ndr/property.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class NdrProperty
struct NdrProperty
{
public:
    using BoundType = pxr::NdrProperty;

} CPPMM_OPAQUEPTR; // struct NdrProperty

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

