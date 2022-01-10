#include <cppmm_bind.hpp>
#include <pxr/usd/ar/resolvedPath.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArResolvedPath
///
/// Contains information about a resolved asset.
///
struct ArResolvedPath
{
public:
    using BoundType = pxr::ArResolvedPath;

} CPPMM_OPAQUEPTR; // struct ArResolvedPath

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

