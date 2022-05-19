#include <pxr/usd/pcp/strengthOrdering.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// Compares the strength of nodes \p a and \p b. These nodes must be siblings; 
/// it is a coding error if \p a and \p b do not have the same parent node.
/// 
/// Returns -1 if a is stronger than b,
///          0 if a is equivalent to b,
///          1 if a is weaker than b
int PcpCompareSiblingNodeStrength(const pxr::PcpNodeRef& a, const pxr::PcpNodeRef& b);


/// Compares the strength of nodes \p a and \p b. These nodes must be part
/// of the same graph; it is a coding error if \p a and \p b do not have the
/// same root node.
/// 
/// Returns -1 if a is stronger than b,
///          0 if a is equivalent to b,
///          1 if a is weaker than b
int PcpCompareNodeStrength(const pxr::PcpNodeRef& a, const pxr::PcpNodeRef& b);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
