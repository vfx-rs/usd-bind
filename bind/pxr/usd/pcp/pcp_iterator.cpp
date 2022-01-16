#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/iterator.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpIterator
struct PcpIterator
{
public:
    using BoundType = pxr::PcpIterator;

} CPPMM_OPAQUEPTR; // struct PcpIterator

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

