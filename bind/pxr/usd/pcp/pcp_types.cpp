#if 0
#include <pxr/usd/pcp/types.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

enum PcpArcType {
    PcpArcTypeRoot = 0,
    PcpArcTypeInherit = 1,
    PcpArcTypeVariant = 2,
    PcpArcTypeRelocate = 3,
    PcpArcTypeReference = 4,
    PcpArcTypePayload = 5,
    PcpArcTypeSpecialize = 6,
    PcpNumArcTypes = 7,
};

enum PcpRangeType {
    PcpRangeTypeRoot = 0,
    PcpRangeTypeInherit = 1,
    PcpRangeTypeVariant = 2,
    PcpRangeTypeReference = 3,
    PcpRangeTypePayload = 4,
    PcpRangeTypeSpecialize = 5,
    PcpRangeTypeAll = 6,
    PcpRangeTypeWeakerThanRoot = 7,
    PcpRangeTypeStrongerThanPayload = 8,
    PcpRangeTypeInvalid = 9,
};

/// Returns true if \p arcType represents an inherit arc, false
/// otherwise.
bool PcpIsInheritArc(pxr::PcpArcType arcType);


/// Returns true if \p arcType represents a specialize arc, false
/// otherwise.
bool PcpIsSpecializeArc(pxr::PcpArcType arcType);


/// Returns true if \p arcType represents a class-based 
/// composition arc, false otherwise.
/// 
/// The key characteristic of these arcs is that they imply 
/// additional sources of opinions outside of the site where 
/// the arc is introduced.
bool PcpIsClassBasedArc(pxr::PcpArcType arcType);


/// \struct PcpSiteTrackerSegment
/// 
/// Used to keep track of which sites have been visited and through
/// what type of arcs. 
struct PcpSiteTrackerSegment {
    using BoundType = pxr::PcpSiteTrackerSegment;

} CPPMM_OPAQUEPTR; // struct PcpSiteTrackerSegment


    using PcpSiteTracker = pxr::PcpSiteTracker;


struct Pcp_SdSiteRef {
    using BoundType = pxr::Pcp_SdSiteRef;

    Pcp_SdSiteRef(const pxr::SdfLayerRefPtr& layer_, const pxr::SdfPath& path_);

    bool operator==(const pxr::Pcp_SdSiteRef& other) const;

    bool operator<(const pxr::Pcp_SdSiteRef& other) const;

} CPPMM_OPAQUEPTR; // struct Pcp_SdSiteRef


struct Pcp_CompressedSdSite {
    using BoundType = pxr::Pcp_CompressedSdSite;

    Pcp_CompressedSdSite(size_t nodeIndex_, size_t layerIndex_);

} CPPMM_OPAQUEPTR; // struct Pcp_CompressedSdSite


    using Pcp_CompressedSdSiteVector = pxr::Pcp_CompressedSdSiteVector;


    using PcpVariantFallbackMap = pxr::PcpVariantFallbackMap;


    using PcpTokenSet = pxr::PcpTokenSet;


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
