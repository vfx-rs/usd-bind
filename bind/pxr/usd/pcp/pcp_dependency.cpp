#include <pxr/usd/pcp/dependency.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

enum PcpDependencyType {
    PcpDependencyTypeNone = 0,
    PcpDependencyTypeRoot = 1,
    PcpDependencyTypePurelyDirect = 2,
    PcpDependencyTypePartlyDirect = 4,
    PcpDependencyTypeAncestral = 8,
    PcpDependencyTypeVirtual = 16,
    PcpDependencyTypeNonVirtual = 32,
    PcpDependencyTypeDirect = 6,
    PcpDependencyTypeAnyNonVirtual = 47,
    PcpDependencyTypeAnyIncludingVirtual = 63,
};

using PcpDependencyFlags = pxr::PcpDependencyFlags;


/// Description of a dependency.
struct PcpDependency {
    using BoundType = pxr::PcpDependency;

    bool operator==(const pxr::PcpDependency& rhs) const;

    bool operator!=(const pxr::PcpDependency& rhs) const;

} CPPMM_OPAQUEPTR; // struct PcpDependency


using PcpDependencyVector = pxr::PcpDependencyVector;


/// Returns true if this node introduces a dependency in its
/// PcpPrimIndex, false otherwise.  This is equivalent to
/// PcpClassifyNodeDependency(n) != PcpDependencyTypeNone, but
/// is faster.
bool PcpNodeIntroducesDependency(const pxr::PcpNodeRef& n);


/// Classify the dependency represented by a node, by analyzing
/// its structural role in its PcpPrimIndex.  Returns a
/// bitmask of flags from PcpDependencyType.
pxr::PcpDependencyFlags PcpClassifyNodeDependency(const pxr::PcpNodeRef& n);

std::string PcpDependencyFlagsToString(const pxr::PcpDependencyFlags flags);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
