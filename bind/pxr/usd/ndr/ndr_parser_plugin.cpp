#include <cppmm_bind.hpp>
#include <pxr/usd/ndr/parserPlugin.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class NdrParserPlugin
struct NdrParserPlugin
{
public:
    using BoundType = pxr::NdrParserPlugin;

} CPPMM_OPAQUEPTR; // struct NdrParserPlugin

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

