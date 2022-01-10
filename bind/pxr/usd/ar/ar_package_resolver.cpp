#include <cppmm_bind.hpp>
#include <pxr/usd/ar/packageResolver.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArPackageResolver
///
/// Contains information about a resolved asset.
///
struct ArPackageResolver 
{
public:
    using BoundType = pxr::ArPackageResolver;

    ~ArPackageResolver();

    // --------------------------------------------------------------------- //
    /// \name Packaged Path Resolution Operations
    ///
    /// @{
    // --------------------------------------------------------------------- //

    /// Returns the resolved path for the asset located at \p packagedPath 
    /// in the package specified by \p resolvedPackagePath if it exists. 
    /// If the asset does not exist in the package, returns an empty string.
    ///
    /// When ArResolver::Resolve is invoked on a package-relative path, the
    /// path will be parsed into the outermost package path, and the inner
    /// packaged path. The outermost package path will be resolved by the
    /// primary resolver. ArPackageResolver::Resolve will then be called on
    /// the corresponding package resolver with that resolved path and the
    /// inner packaged path. If the inner packaged path is itself a 
    /// package-relative path, this process recurses until all paths have been
    /// resolved.
    ///
    /// \see ArResolver::Resolve
    std::string Resolve(
        const std::string& resolvedPackagePath,
        const std::string& packagedPath);
    
    /// @}

    // --------------------------------------------------------------------- //
    /// \name Asset-specific Operations
    ///
    /// @{
    // --------------------------------------------------------------------- //

    /// Returns an ArAsset object for the asset at \p resolvedPackagedPath
    /// located in the package asset at \p resolvedPackagePath. 
    /// Returns an invalid std::shared_ptr if object could not be created.
    ///
    /// \see ArResolver::OpenAsset
    std::shared_ptr<pxr::ArAsset> OpenAsset(
        const std::string& resolvedPackagePath,
        const std::string& resolvedPackagedPath);

    // --------------------------------------------------------------------- //
    /// \name Scoped Resolution Cache
    /// 
    /// These functions are called when scoped resolution caches are enabled
    /// via ArResolver. 
    ///
    /// \see \ref ArResolver_scopedCache "Scoped Resolution Cache"
    /// @{
    // --------------------------------------------------------------------- //

    /// Mark the start of a resolution caching scope.
    ///
    /// \see ArResolver::BeginCacheScope
    void BeginCacheScope(
        pxr::VtValue* cacheScopeData);

    /// Mark the end of a resolution caching scope.
    ///
    /// \see ArResolver::EndCacheScope
    void EndCacheScope(
        pxr::VtValue* cacheScopeData);

} CPPMM_OPAQUEPTR; // struct ArPackageResolver

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
