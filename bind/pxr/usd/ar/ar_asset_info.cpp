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

    ArAssetInfo();

} CPPMM_OPAQUEPTR; // struct ArAssetInfo

} // namespace PXR_INTERNAL_NS

std::string & ArAssetInfo_get_version(
        ::PXR_INTERNAL_NS::ArAssetInfo& self) CPPMM_IMPL {
    return self.version;
}

std::string & ArAssetInfo_get_assetName(
        ::PXR_INTERNAL_NS::ArAssetInfo& self) CPPMM_IMPL {
    return self.assetName;
}

std::string & ArAssetInfo_get_repoPath(
        ::PXR_INTERNAL_NS::ArAssetInfo& self) CPPMM_IMPL {
    return self.repoPath;
}

} // namespace cppmm_bind

