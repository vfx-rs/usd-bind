#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/errors.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpErrors
struct PcpErrors
{
public:
    using BoundType = pxr::PcpErrors;

} CPPMM_OPAQUEPTR; // struct PcpErrors

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

