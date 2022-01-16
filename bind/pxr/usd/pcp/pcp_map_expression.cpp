#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/mapExpression.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpMapExpression
struct PcpMapExpression
{
public:
    using BoundType = pxr::PcpMapExpression;

} CPPMM_OPAQUEPTR; // struct PcpMapExpression

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

