#include <pxr/usd/pcp/composeSite.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \struct PcpSourceArcInfo
/// 
/// Information about the source of the target of an arc.
/// All arcs have a layer that the arc comes from. References and payloads
/// have a resolved layer offset and authored asset path as well.
struct PcpSourceArcInfo {
    using BoundType = pxr::PcpSourceArcInfo;

    PcpSourceArcInfo(const pxr::PcpSourceArcInfo& );

    PcpSourceArcInfo(pxr::PcpSourceArcInfo&& ) CPPMM_IGNORE;

    pxr::PcpSourceArcInfo& operator=(const pxr::PcpSourceArcInfo& );

    pxr::PcpSourceArcInfo& operator=(pxr::PcpSourceArcInfo&& ) CPPMM_IGNORE;

    ~PcpSourceArcInfo();

} CPPMM_OPAQUEPTR; // struct PcpSourceArcInfo


using PcpSourceArcInfoVector = pxr::PcpSourceArcInfoVector;


/// References
void PcpComposeSiteReferences(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path, pxr::SdfReferenceVector* result, pxr::PcpSourceArcInfoVector* info);


void PcpComposeSiteReferences(const pxr::PcpNodeRef& node, pxr::SdfReferenceVector* result, pxr::PcpSourceArcInfoVector* info);


/// Payloads
void PcpComposeSitePayloads(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path, pxr::SdfPayloadVector* result, pxr::PcpSourceArcInfoVector* info);


void PcpComposeSitePayloads(const pxr::PcpNodeRef& node, pxr::SdfPayloadVector* result, pxr::PcpSourceArcInfoVector* info);


/// Permission
pxr::SdfPermission PcpComposeSitePermission(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path);


pxr::SdfPermission PcpComposeSitePermission(const pxr::PcpNodeRef& node);


/// Prim sites
void PcpComposeSitePrimSites(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path, pxr::SdfSiteVector* result);


void PcpComposeSitePrimSites(const pxr::PcpNodeRef& node, pxr::SdfSiteVector* result);


/// Relocates
void PcpComposeSiteRelocates(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path, pxr::SdfRelocatesMap* result);


void PcpComposeSiteRelocates(const pxr::PcpNodeRef& node, pxr::SdfRelocatesMap* result);


/// Has prim specs.
bool PcpComposeSiteHasPrimSpecs(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path);


bool PcpComposeSiteHasPrimSpecs(const pxr::PcpNodeRef& node);


/// Symmetry
bool PcpComposeSiteHasSymmetry(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path);


bool PcpComposeSiteHasSymmetry(const pxr::PcpNodeRef& node);


/// Inherits
void PcpComposeSiteInherits(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path, pxr::SdfPathVector* result, pxr::PcpSourceArcInfoVector* info);


void PcpComposeSiteInherits(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path, pxr::SdfPathVector* result);


void PcpComposeSiteInherits(const pxr::PcpNodeRef& node, pxr::SdfPathVector* result);


/// Specializes
void PcpComposeSiteSpecializes(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path, pxr::SdfPathVector* result, pxr::PcpSourceArcInfoVector* info);


void PcpComposeSiteSpecializes(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path, pxr::SdfPathVector* result);


void PcpComposeSiteSpecializes(const pxr::PcpNodeRef& node, pxr::SdfPathVector* result);


/// VariantSets
void PcpComposeSiteVariantSets(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path, std::vector<std::string>* result, pxr::PcpSourceArcInfoVector* info);


void PcpComposeSiteVariantSets(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path, std::vector<std::string>* result);


void PcpComposeSiteVariantSets(const pxr::PcpNodeRef& node, std::vector<std::string>* result);


/// VariantSetOptions
void PcpComposeSiteVariantSetOptions(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path, const std::string& vsetName, std::set<std::string>* result);


void PcpComposeSiteVariantSetOptions(const pxr::PcpNodeRef& node, const std::string& vsetName, std::set<std::string>* result);


/// VariantSelection
bool PcpComposeSiteVariantSelection(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path, const std::string& vsetName, std::string* result);


bool PcpComposeSiteVariantSelection(const pxr::PcpNodeRef& node, const std::string& vsetName, std::string* result);


/// VariantSelections
void PcpComposeSiteVariantSelections(const pxr::PcpLayerStackRefPtr& layerStack, const pxr::SdfPath& path, pxr::SdfVariantSelectionMap* result);


void PcpComposeSiteVariantSelections(const pxr::PcpNodeRef& node, pxr::SdfVariantSelectionMap* result);


/// Compose child names.
/// If the optional \p orderField is provided, its order will be applied.
void PcpComposeSiteChildNames(const pxr::SdfLayerRefPtrVector& layers, const pxr::SdfPath& path, const pxr::TfToken& namesField, pxr::TfTokenVector* nameOrder, pxr::PcpTokenSet* nameSet, const pxr::TfToken* orderField);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
