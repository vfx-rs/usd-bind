#if 0
#include <pxr/usd/sdf/layerUtils.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// Returns the path to the asset specified by \p assetPath, using the
/// \p anchor layer to anchor the path if it is relative.  If the result of
/// anchoring \p assetPath to \p anchor's path cannot be resolved and
/// \p assetPath is a search path, \p assetPath will be returned.  If
/// \p assetPath is not relative, \p assetPath will be returned.  Otherwise,
/// the anchored path will be returned.
/// 
/// Note that if \p anchor is an anonymous layer, we will always return
/// the untouched \p assetPath.
std::string SdfComputeAssetPathRelativeToLayer(const pxr::SdfLayerHandle& anchor, const std::string& assetPath);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
