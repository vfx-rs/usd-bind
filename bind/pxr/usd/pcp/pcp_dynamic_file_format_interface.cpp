#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/dynamicFileFormatInterface.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpDynamicFileFormatInterface
struct PcpDynamicFileFormatInterface
{
public:
    using BoundType = pxr::PcpDynamicFileFormatInterface;

} CPPMM_OPAQUEPTR; // struct PcpDynamicFileFormatInterface

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

