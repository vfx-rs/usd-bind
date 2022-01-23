#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/arc.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpArc
///
/// Represents an arc connecting two nodes in the prim index. 
/// The arc is owned by a node (source) and points to its parent node (target) 
/// in the index.
struct PcpArc
{
public:
    using BoundType = pxr::PcpArc;

	PcpArc();

    // Exposed through the getters
    #if 0
    /// The type of this arc.
    PcpArcType type;
    
    /// The parent (or target) node of this arc.
    /// If this arc's source node is a root node (i.e., type == PcpArcTypeRoot),
    /// this will be an invalid node.
    PcpNodeRef parent;
    
    /// The origin node of this arc.
    /// This is the node that caused this arc's source node to be brought into 
    /// the prim index. In most cases, this will be the same as the parent node.
    /// For implied inherits, this is the node from which this inherit arc was 
    /// propagated. This affects strength ordering.
    PcpNodeRef origin;
    
    /// The value-mapping function used to map values from this arc's source
    /// node to its parent node.
    PcpMapExpression mapToParent;

    // index among sibling arcs at origin; lower is stronger
    int siblingNumAtOrigin;
    
    // Absolute depth in namespace of node that introduced this node.
    // Note that this does *not* count any variant selections.
    int namespaceDepth;
    #endif

} CPPMM_OPAQUEPTR; // struct PcpArc

} // namespace PXR_INTERNAL_NS

::PXR_INTERNAL_NS::PcpArcType & PxpArc_get_type(
        ::PXR_INTERNAL_NS::PcpArc& self) CPPMM_IMPL {
    return self.type;
}

} // namespace cppmm_bind

