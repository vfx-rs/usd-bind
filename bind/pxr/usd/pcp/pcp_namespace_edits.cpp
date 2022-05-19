#include <pxr/usd/pcp/namespaceEdits.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// Sites that must respond to a namespace edit.
struct PcpNamespaceEdits {
    using BoundType = pxr::PcpNamespaceEdits;

    void Swap(pxr::PcpNamespaceEdits& rhs);

    PcpNamespaceEdits(const pxr::PcpNamespaceEdits& );

    PcpNamespaceEdits(pxr::PcpNamespaceEdits&& ) CPPMM_IGNORE;

    pxr::PcpNamespaceEdits& operator=(const pxr::PcpNamespaceEdits& );

    pxr::PcpNamespaceEdits& operator=(pxr::PcpNamespaceEdits&& ) CPPMM_IGNORE;

    ~PcpNamespaceEdits();


    enum EditType {
        EditPath = 0,
        EditInherit = 1,
        EditSpecializes = 2,
        EditReference = 3,
        EditPayload = 4,
        EditRelocate = 5,
    };

    /// Cache site that must respond to a namespace edit.
    struct CacheSite {
        using BoundType = pxr::PcpNamespaceEdits::CacheSite;

    } CPPMM_OPAQUEPTR; // struct CacheSite


    /// Layer stack site that must respond to a namespace edit.  All
    /// of the specs at the site will respond the same way.
    struct LayerStackSite {
        using BoundType = pxr::PcpNamespaceEdits::LayerStackSite;

        LayerStackSite(const pxr::PcpNamespaceEdits::LayerStackSite& );

        LayerStackSite(pxr::PcpNamespaceEdits::LayerStackSite&& ) CPPMM_IGNORE;

        pxr::PcpNamespaceEdits::LayerStackSite& operator=(const pxr::PcpNamespaceEdits::LayerStackSite& );

        pxr::PcpNamespaceEdits::LayerStackSite& operator=(pxr::PcpNamespaceEdits::LayerStackSite&& ) CPPMM_IGNORE;

    } CPPMM_OPAQUEPTR; // struct LayerStackSite

} CPPMM_OPAQUEPTR; // struct PcpNamespaceEdits


/// Returns the changes caused in any cache in \p caches due to
/// namespace editing the object at \p curPath in this cache to
/// have the path \p newPath.  \p caches should have all caches,
/// including this cache.  If \p caches includes this cache then
/// the result includes the changes caused at \p curPath in this
/// cache itself.
/// 
/// To keep everything consistent, a namespace edit requires that
/// everything using the namespace edited site to be changed in an
/// appropriate way.  For example, if a referenced prim /A is renamed
/// to /B then everything referencing /A must be changed to reference
/// /B instead.  There are many other possibilities.
/// 
/// One possibility is that there are no opinions at \p curPath in
/// this cache's layer stack and the site exists due to some ancestor
/// arc.  This requires a relocation and only sites using \p curPath
/// that include the layer with the relocation must be changed in
/// response.  To find those sites, \p relocatesLayer indicates which
/// layer the client will write the relocation to.
/// 
/// Clients must perform the changes to correctly perform a namespace
/// edit.  All changes must be performed in a change block, otherwise
/// notices could be sent prematurely.
/// 
/// This method only works when the affected prim indexes have been
/// computed.  In general, this means you must have computed the prim
/// index of everything in any existing cache, otherwise you might miss
/// changes to objects in those caches that use the namespace edited
/// object.  Using the above example, if a prim with an uncomputed prim
/// index referenced /A then this method would not report that prim. 
/// As a result that prim would continue to reference /A, which no
/// longer exists.
pxr::PcpNamespaceEdits PcpComputeNamespaceEdits(const pxr::PcpCache* primaryCache, const std::vector<pxr::PcpCache*>& caches, const pxr::SdfPath& curPath, const pxr::SdfPath& newPath, const pxr::SdfLayerHandle& relocatesLayer);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
