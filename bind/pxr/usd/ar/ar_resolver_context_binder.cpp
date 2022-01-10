#include <cppmm_bind.hpp>
#include <pxr/usd/ar/resolverContextBinder.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArResolverContextBinder
///
/// Contains information about a resolved asset.
///
struct ArResolverContextBinder
{
public:
    using BoundType = pxr::ArResolverContextBinder;

	/// Bind the given \p context with the asset resolver.
    ///
    /// Calls ArResolver::BindContext on the configured asset resolver
    /// and saves the bindingData populated by that function.
    ArResolverContextBinder(
        const pxr::ArResolverContext& context);

    /// Bind the given \p context to the given \p assetResolver.
    ///
    /// Calls ArResolver::BindContext on the given \p assetResolver
    /// and saves the bindingData populated by that function.
    ArResolverContextBinder(
        pxr::ArResolver* assetResolver,
        const pxr::ArResolverContext& context);

    /// Unbinds the context specified in the constructor of this
    /// object from the asset resolver.
    ///
    /// Calls ArResolver::UnbindContext on the asset resolver that was
    /// bound to originally, passing the saved bindingData to that function.
    ~ArResolverContextBinder();

} CPPMM_OPAQUEPTR; // struct ArResolverContextBinder

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

