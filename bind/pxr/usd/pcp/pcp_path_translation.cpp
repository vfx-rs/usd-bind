#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/pathTranslation.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpPathTranslation
struct PcpPathTranslation
{
public:
    using BoundType = pxr::PcpPathTranslation;

} CPPMM_OPAQUEPTR; // struct PcpPathTranslation

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

