#include <cppmm_bind.hpp>
#include <pxr/usd/sdf/assetPath.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfAssetPath
///
/// Contains an asset path and an optional resolved path.
struct SdfAssetPath {
    using BoundType = pxr::SdfAssetPath;

    /// Construct an empty asset path.
    SdfAssetPath();

    /// Construct asset path with no associated resolved path.
    SdfAssetPath(const std::string& path) CPPMM_RENAME(from_path);

    /// Construct an asset path with an associated resolved path.
    SdfAssetPath(const std::string& path, const std::string& resolvedPath)
        CPPMM_RENAME(from_resolved_path);

    /// Equality, including the resolved path.
    bool operator==(const pxr::SdfAssetPath& rhs) const;

    /// Ordering first by asset path, then by resolved path.
    bool operator<(const pxr::SdfAssetPath& rhs) const CPPMM_RENAME(op_lt);

    /// Hash function
    size_t GetHash() const;

    /// Return the asset path.
    const std::string& GetAssetPath() const;

    /// Return the resolved asset path, if any.
    ///
    /// Note that SdfAssetPath only carries a resolved path if the creator of
    /// an instance supplied one to the constructor.  SdfAssetPath will never
    /// perform any resolution itself.
    const std::string& GetResolvedPath() const;

    SdfAssetPath(const pxr::SdfAssetPath&);

    SdfAssetPath(pxr::SdfAssetPath&&) CPPMM_IGNORE;

    pxr::SdfAssetPath& operator=(const pxr::SdfAssetPath&);

    pxr::SdfAssetPath& operator=(pxr::SdfAssetPath&&) CPPMM_IGNORE;

    ~SdfAssetPath();

} CPPMM_OPAQUEPTR; // struct SdfAssetPath

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
