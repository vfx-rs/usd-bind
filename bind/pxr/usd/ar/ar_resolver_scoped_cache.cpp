#include <cppmm_bind.hpp>
#include <pxr/usd/ar/resolverScopedCache.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArResolverScopedCache
///
/// Contains information about a resolved asset.
///
struct ArResolverScopedCache
{
public:
    using BoundType = pxr::ArResolverScopedCache;

    /// Begin an asset resolver cache scope. 
    ///
    /// Calls ArResolver::BeginCacheScope on the configured asset resolver
    /// and saves the cacheScopeData populated by that function.
    ArResolverScopedCache();

    /// Begin an asset resolver cache scope that shares data
    /// with the given \p parent scope.
    ///
    /// Calls ArResolver::BeginCacheScope on the configured asset resolver,
    /// saves the cacheScopeData stored in \p parent and passes that to that
    /// function.
    ArResolverScopedCache(const pxr::ArResolverScopedCache* parent);

    /// End an asset resolver cache scope.
    ///
    /// Calls ArResolver::EndCacheScope on the configured asset resolver,
    /// passing the saved cacheScopeData to that function.
    ~ArResolverScopedCache();

} CPPMM_OPAQUEPTR; // struct ArResolverScopedCache

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

