#if 0
#include <pxr/usd/sdf/site.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfSite
/// 
/// An SdfSite is a simple representation of a location in a layer where 
/// opinions may possibly be found. It is simply a pair of layer and path
/// within that layer.
struct SdfSite {
    using BoundType = pxr::SdfSite;

    SdfSite();

    SdfSite(const pxr::SdfLayerHandle& layer_, const pxr::SdfPath& path_);

    bool operator==(const pxr::SdfSite& other) const;

    bool operator<(const pxr::SdfSite& other) const;

    /// Explicit bool conversion operator. A site object converts to \c true iff 
    /// both the layer and path fields are filled with valid values, \c false
    /// otherwise.
    /// This does NOT imply that there are opinions in the layer at that path.
    operator bool() const;

    SdfSite(const pxr::SdfSite& );

    SdfSite(pxr::SdfSite&& ) CPPMM_IGNORE;

    pxr::SdfSite& operator=(const pxr::SdfSite& );

    pxr::SdfSite& operator=(pxr::SdfSite&& ) CPPMM_IGNORE;

} CPPMM_OPAQUEPTR; // struct SdfSite


    using SdfSiteSet = pxr::SdfSiteSet;


    using SdfSiteVector = pxr::SdfSiteVector;


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
