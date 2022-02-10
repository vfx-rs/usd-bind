#include <pxr/usd/sdf/assetPath.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfAssetPath
/// 
/// Contains an asset path and an optional resolved path.  Asset paths may
/// contain non-control UTF-8 encoded characters.  Specifically, U+0000..U+001F
/// (C0 controls), U+007F (delete), and U+0080..U+009F (C1 controls) are
/// disallowed.  Attempts to construct asset paths with such characters will
/// issue a TfError and produce the default-constructed empty asset path.
struct SdfAssetPath {
    using BoundType = pxr::SdfAssetPath;

    /// Construct an empty asset path.
    SdfAssetPath();

    /// Construct an asset path with \p path and no associated resolved path.
    /// 
    /// If the passed \p path is not valid UTF-8 or contains C0 or C1 control
    /// characters, raise a TfError and return the default-constructed empty
    /// asset path.
    SdfAssetPath(const std::string& path) CPPMM_RENAME(from_path);

    /// Construct an asset path with \p path and an associated \p resolvedPath.
    /// 
    /// If either the passed \path or \p resolvedPath are not valid UTF-8 or
    /// either contain C0 or C1 control characters, raise a TfError and return
    /// the default-constructed empty asset path.
    SdfAssetPath(const std::string& path, const std::string& resolvedPath) CPPMM_RENAME(from_resolved_path);

    /// Equality, including the resolved path.
    bool operator==(const pxr::SdfAssetPath& rhs) const;

    /// Ordering first by asset path, then by resolved path.
    bool operator<(const pxr::SdfAssetPath& rhs) const CPPMM_RENAME(op_lt);;

    /// Hash function
    size_t GetHash() const;

    /// Return the asset path.
    const std::string& GetAssetPath() const;

    /// Return the resolved asset path, if any.
    /// 
    /// Note that SdfAssetPath carries a resolved path only if its creator
    /// passed one to the constructor.  SdfAssetPath never performs resolution
    /// itself.
    const std::string& GetResolvedPath() const;

    SdfAssetPath(const pxr::SdfAssetPath& rhs);

    SdfAssetPath(pxr::SdfAssetPath&& rhs) CPPMM_IGNORE;

    pxr::SdfAssetPath& operator=(const pxr::SdfAssetPath& rhs);

    pxr::SdfAssetPath& operator=(pxr::SdfAssetPath&& rhs) CPPMM_IGNORE;

    ~SdfAssetPath();


    /// \class Hash
    struct Hash {
        using BoundType = pxr::SdfAssetPath::Hash;

        size_t operator()(const pxr::SdfAssetPath& ap) const;

    } CPPMM_OPAQUEPTR; // struct Hash

} CPPMM_OPAQUEPTR; // struct SdfAssetPath


/// Stream insertion operator for the string representation of this assetPath.
/// 
/// \note This always encodes only the result of GetAssetPath().  The resolved
///       path is ignored for the purpose of this operator.  This means that
///       two SdfAssetPath s that do not compare equal may produce
///       indistinguishable ostream output.
std::ostream& operator<<(std::ostream& out, const pxr::SdfAssetPath& ap);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
