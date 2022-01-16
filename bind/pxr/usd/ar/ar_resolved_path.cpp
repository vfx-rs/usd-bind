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

    /// Construct an ArResolvedPath holding the given \p resolvedPath.
    ArResolvedPath(const std::string& resolvedPath);
    
    /// \overload
    ArResolvedPath(std::string&& resolvedPath);

    ArResolvedPath() = default;

    ArResolvedPath(const pxr::ArResolvedPath& rhs);
    ArResolvedPath(pxr::ArResolvedPath&& rhs);
    
#if 0
    ArResolvedPath& operator=(const pxr::ArResolvedPath& rhs);
    ArResolvedPath& operator=(pxr::ArResolvedPath&& rhs);

    bool operator==(const pxr::ArResolvedPath& rhs) const;

    bool operator!=(const pxr::ArResolvedPath& rhs) const;

    bool operator<(const pxr::ArResolvedPath& rhs) const CPPMM_RENAME(lt);

    bool operator>(const pxr::ArResolvedPath& rhs) const CPPMM_RENAME(gt);

    bool operator<=(const pxr::ArResolvedPath& rhs) const;

    bool operator>=(const pxr::ArResolvedPath& rhs) const;

    bool operator==(const std::string& rhs) const;

    bool operator!=(const std::string& rhs) const;

    bool operator<(const std::string& rhs) const;

    bool operator>(const std::string& rhs) const;

    bool operator<=(const std::string& rhs) const;

    bool operator>=(const std::string& rhs) const;
#endif

    /// Return hash value for this object.
    size_t GetHash() const;

#if 0
    /// Return true if this object is holding a non-empty resolved path,
    /// false otherwise.
    operator bool() const;
#endif

    /// Return true if this object is holding an empty resolved path,
    /// false otherwise.
    bool IsEmpty() const;

    /// Equivalent to IsEmpty. This exists primarily for backwards
    /// compatibility.
    bool empty() const;

#if 0
    /// Return the resolved path held by this object as a string.
    operator const std::string&() const;
#endif

    /// Return the resolved path held by this object as a string.
    const std::string& GetPathString() const;

} CPPMM_OPAQUEPTR; // struct ArResolvedPath

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

