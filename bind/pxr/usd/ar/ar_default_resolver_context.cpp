#include <cppmm_bind.hpp>
#include <pxr/usd/ar/defaultResolverContext.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArDefaultResolverContext
///
/// Contains information about a resolved asset.
///
struct ArDefaultResolverContext 
{
public:
    using BoundType = pxr::ArDefaultResolverContext;

    /// Default construct a context with no search path.
    ArDefaultResolverContext();

    /// Construct a context with the given \p searchPath.
    /// Elements in \p searchPath should be absolute paths. If they are not,
    /// they will be anchored to the current working directory.
    ArDefaultResolverContext(const std::vector<std::string>& searchPath);

    bool operator<(const pxr::ArDefaultResolverContext& rhs) const;
    bool operator==(const pxr::ArDefaultResolverContext& rhs) const;
    bool operator!=(const pxr::ArDefaultResolverContext& rhs) const;

    /// Return this context's search path.
    const std::vector<std::string>& GetSearchPath() const;

    /// Return a string representation of this context for debugging.
    std::string GetAsString() const;

} CPPMM_OPAQUEPTR; // struct ArDefaultResolverContext

// Explicitly instantiate the ArIsContextObject
using ArIsContextObject_ArDefaultResolverContext = pxr::ArIsContextObject<pxr::ArDefaultResolverContext>;

#if 0
AR_API size_t 
hash_value(const ArDefaultResolverContext& context);

inline std::string 
ArGetDebugString(const ArDefaultResolverContext& context)
{
    return context.GetAsString();
}
AR_DECLARE_RESOLVER_CONTEXT(ArDefaultResolverContext);
#endif

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

template struct pxr::ArIsContextObject<pxr::ArDefaultResolverContext>;
