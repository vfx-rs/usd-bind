#include <cppmm_bind.hpp>
#include <pxr/usd/ar/assetInfo.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArAssetInfo
///
/// Contains information about a resolved asset.
///
struct ArAssetInfo 
{
public:
    using BoundType = pxr::ArAssetInfo;
} CPPMM_OPAQUEPTR; // struct ArAssetInfo

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

