#include <cppmm_bind.hpp>
#include <pxr/usd/ar/defaultResolver.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArDefaultResolver
///
/// Contains information about a resolved asset.
///
struct ArDefaultResolver 
{
public:
    using BoundType = pxr::ArDefaultResolver;

    ArDefaultResolver();
    ~ArDefaultResolver();

    /// Set the default search path that will be used during asset
    /// resolution. This must be called before the first call
    /// to \ref ArGetResolver.
    /// The specified paths will be searched *in addition to, and before*
    /// paths specified via the environment variable PXR_AR_DEFAULT_SEARCH_PATH
    static void SetDefaultSearchPath(
        const std::vector<std::string>& searchPath);

} CPPMM_OPAQUEPTR; // struct ArDefaultResolver

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
