#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/mapFunction.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpMapFunction
struct PcpMapFunction
{
public:
    using BoundType = pxr::PcpMapFunction;

} CPPMM_OPAQUEPTR; // struct PcpMapFunction

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

