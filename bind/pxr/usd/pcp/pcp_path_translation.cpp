#if 0
#include <pxr/usd/pcp/pathTranslation.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// Translates \p pathInNodeNamespace from the namespace of the prim index node
/// \p sourceNode to the namespace of the prim index's root node. This applies 
/// all necessary namespace translations.
/// 
/// If the path is successfully translated and \p pathWasTranslated is supplied,
/// it will be set to \c true. In some cases, paths may fail to translate 
/// because they fall outside the set of paths that are allowed by nodes in the 
/// prim index. For instance, for a referenced model, paths referring to 
/// locations outside that model will not be translated. In these cases, this 
/// function will return an empty SdfPath and \p pathWasTranslated will be set
/// to \c false.
/// 
/// In Sd/Csd terminology, this is forward path translation from the 
/// namespace of the prim spec represented by \p sourceNode to the composed 
/// scene namespace.
pxr::SdfPath PcpTranslatePathFromNodeToRoot(const pxr::PcpNodeRef& sourceNode, const pxr::SdfPath& pathInNodeNamespace, bool* pathWasTranslated);


/// Translates \p pathInRootNamespace from the namespace of the root of the
/// prim index that \p destNode belongs to to the namespace of \p destNode 
/// itself. This applies all necessary namespace translations.
/// 
/// If the path is successfully translated and \p pathWasTranslated is supplied,
/// it will be set to \c true. In some cases, paths may fail to translate 
/// because they fall outside the set of paths that are allowed by nodes in the 
/// prim index. For instance, for a referenced model, paths referring to 
/// locations outside that model will not be translated. In these cases, this 
/// function will return an empty SdfPath and \p pathWasTranslated will be set
/// to \c false.
/// 
/// In Sd/Csd terminology, this is reverse path translation from the
/// namespace of the composed scene to the namespace of the prim spec 
/// represented by \p destNode.
pxr::SdfPath PcpTranslatePathFromRootToNode(const pxr::PcpNodeRef& destNode, const pxr::SdfPath& pathInRootNamespace, bool* pathWasTranslated);


/// Same as \a PcpTranslatePathFromRootToNode, but explicitly for use when
/// translating paths intended for use as attribute connections or relationship
/// targets. The primary difference is that variant selections will never 
/// be included in the translated path. This is functionally equivalent to
/// calling StripAllVariantSelections() on the result of the referenced
/// function, but is more efficient.
pxr::SdfPath PcpTranslateTargetPathFromRootToNode(const pxr::PcpNodeRef& destNode, const pxr::SdfPath& pathInRootNamespace, bool* pathWasTranslated);


/// Convenience function like \a PcpTranslatePathFromRootToNode, but
/// takes a function rather than a node.
pxr::SdfPath PcpTranslatePathFromRootToNodeUsingFunction(const pxr::PcpMapFunction& mapToRoot, const pxr::SdfPath& pathInRootNamespace, bool* pathWasTranslated);


/// Convenience function like \a PcpTranslatePathFromNodeToRoot, but
/// takes a function rather than a node.
pxr::SdfPath PcpTranslatePathFromNodeToRootUsingFunction(const pxr::PcpMapFunction& mapToRoot, const pxr::SdfPath& pathInNodeNamespace, bool* pathWasTranslated);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
