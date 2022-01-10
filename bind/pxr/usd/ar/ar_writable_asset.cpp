#include <cppmm_bind.hpp>
#include <pxr/usd/ar/writableAsset.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArWritableAsset
///
/// Contains information about a resolved asset.
///
struct ArWritableAsset
{
public:
    using BoundType = pxr::ArWritableAsset;

} CPPMM_OPAQUEPTR; // struct ArWritableAsset

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

