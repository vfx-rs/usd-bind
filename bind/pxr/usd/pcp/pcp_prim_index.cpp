#include <pxr/usd/pcp/primIndex.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpPrimIndex
/// 
/// PcpPrimIndex is an index of the all sites of scene description that
/// contribute opinions to a specific prim, under composition
/// semantics.
/// 
/// PcpComputePrimIndex() builds an index ("indexes") the given prim site.
/// At any site there may be scene description values expressing arcs
/// that represent instructions to pull in further scene description.
/// PcpComputePrimIndex() recursively follows these arcs, building and
/// ordering the results.
struct PcpPrimIndex {
    using BoundType = pxr::PcpPrimIndex;

    /// Default construct an empty, invalid prim index.
    PcpPrimIndex();

    /// Copy-construct a prim index.
    PcpPrimIndex(const pxr::PcpPrimIndex& rhs);

    /// Assignment.
    pxr::PcpPrimIndex& operator=(const pxr::PcpPrimIndex& rhs);

    /// Swap the contents of this prim index with \p index.
    void Swap(pxr::PcpPrimIndex& rhs);

    /// Same as Swap(), but standard name.
    void swap(pxr::PcpPrimIndex& rhs);

    /// Return true if this index is valid.
    /// A default-constructed index is invalid.
    bool IsValid() const;

    void SetGraph(const pxr::PcpPrimIndex_GraphRefPtr& graph);

    pxr::PcpPrimIndex_GraphPtr GetGraph() const;

    /// Returns the root node of the prim index graph.
    pxr::PcpNodeRef GetRootNode() const;

    /// Returns the path of the prim whose opinions are represented by this 
    /// prim index.
    const pxr::SdfPath& GetPath() const;

    /// Returns true if this prim index contains any scene description
    /// opinions.
    bool HasSpecs() const;

    /// Returns true if the prim has any authored payload arcs.
    /// The payload contents are only resolved and included
    /// if this prim's path is in the payload inclusion set
    /// provided in PcpPrimIndexInputs. 
    bool HasAnyPayloads() const;

    /// Returns true if this prim index was composed in USD mode.
    /// \see PcpCache::IsUsd().
    bool IsUsd() const;

    /// Returns true if this prim index is instanceable.
    /// Instanceable prim indexes with the same instance key are
    /// guaranteed to have the same set of opinions, but may not have
    /// local opinions about name children.
    /// \see PcpInstanceKey
    bool IsInstanceable() const;

    /// Returns range of iterators that encompass all children of the root node
    /// with the given arc type as well as their descendants, in 
    /// strong-to-weak order.
    /// 
    /// By default, this returns a range encompassing the entire index.
    pxr::PcpNodeRange GetNodeRange(pxr::PcpRangeType rangeType) const;

    /// Returns range of iterators that encompasses all prims, in
    /// strong-to-weak order.
    pxr::PcpPrimRange GetPrimRange(pxr::PcpRangeType rangeType) const;

    /// Returns range of iterators that encompasses all prims from the
    /// site of \p node. \p node must belong to this prim index.
    pxr::PcpPrimRange GetPrimRangeForNode(const pxr::PcpNodeRef& node) const;

    /// Returns the node that brings opinions from \p primSpec into
    /// this prim index. If no such node exists, returns an invalid PcpNodeRef.
    pxr::PcpNodeRef GetNodeProvidingSpec(const pxr::SdfPrimSpecHandle& primSpec) const;

    /// Returns the node that brings opinions from the Sd prim spec at \p layer
    /// and \p path into this prim index. If no such node exists, returns an
    /// invalid PcpNodeRef.
    pxr::PcpNodeRef GetNodeProvidingSpec(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& path) const;

    /// Return the list of errors local to this prim.
    pxr::PcpErrorVector GetLocalErrors() const;

    /// Prints various statistics about this prim index.
    void PrintStatistics() const;

    /// Dump the prim index contents to a string.
    /// 
    /// If \p includeInheritOriginInfo is \c true, output for implied inherit
    /// nodes will include information about the originating inherit node.
    /// If \p includeMaps is \c true, output for each node will include the
    /// mappings to the parent and root node.
    std::string DumpToString(bool includeInheritOriginInfo, bool includeMaps) const;

    /// Dump the prim index in dot format to the file named \p filename.
    /// See Dump(...) for information regarding arguments.
    void DumpToDotGraph(const std::string& filename, bool includeInheritOriginInfo, bool includeMaps) const;

    /// Compute the prim child names for the given path. \p errors will 
    /// contain any errors encountered while performing this operation.
    void ComputePrimChildNames(pxr::TfTokenVector* nameOrder, pxr::PcpTokenSet* prohibitedNameSet) const;

    /// Compute the prim property names for the given path. \p errors will
    /// contain any errors encountered while performing this operation.  The
    /// \p nameOrder vector must not contain any duplicate entries.
    void ComputePrimPropertyNames(pxr::TfTokenVector* nameOrder) const;

    /// Compose the authored prim variant selections.
    /// 
    /// These are the variant selections expressed in scene description.
    /// Note that these selections may not have actually been applied,
    /// if they are invalid.
    /// 
    /// \note This result is not cached, but computed each time.
    pxr::SdfVariantSelectionMap ComposeAuthoredVariantSelections() const;

    /// Return the variant selection applied for the named variant set.
    /// If none was applied, this returns an empty string.
    /// This can be different from the authored variant selection;
    /// for example, if the authored selection is invalid.
    std::string GetSelectionAppliedForVariantSet(const std::string& variantSet) const;

    ~PcpPrimIndex();

} CPPMM_OPAQUEPTR; // struct PcpPrimIndex


/// \class PcpPrimIndexInputs
/// 
/// Inputs for the prim indexing procedure.
struct PcpPrimIndexInputs {
    using BoundType = pxr::PcpPrimIndexInputs;

    PcpPrimIndexInputs();

    /// Returns true if prim index computations using this parameters object
    /// would be equivalent to computations using \p params.
    bool IsEquivalentTo(const pxr::PcpPrimIndexInputs& params) const;

    /// If supplied, the given PcpCache will be used where possible to compute
    /// needed intermediate results.
    pxr::PcpPrimIndexInputs& Cache(pxr::PcpCache* cache_);

    /// Ordered list of variant names to use for the "standin" variant set
    /// if there is no authored opinion in scene description.
    pxr::PcpPrimIndexInputs& VariantFallbacks(const pxr::PcpVariantFallbackMap* map);

    pxr::PcpPrimIndexInputs& IncludedPayloads(const pxr::PcpPrimIndexInputs::PayloadSet* payloadSet);

    /// Optional mutex for accessing includedPayloads.
    pxr::PcpPrimIndexInputs& IncludedPayloadsMutex(tbb::spin_rw_mutex* mutex);

    /// Optional predicate evaluated when a not-yet-included payload is
    /// discovered while indexing.  If the predicate returns true, indexing
    /// includes the payload and sets the includedDiscoveredPayload bit in the
    /// outputs.
#if 0
    pxr::PcpPrimIndexInputs& IncludePayloadPredicate(std::function<_Bool (const pxrInternal_v0_21__pxrReserved__::SdfPath &)> predicate);
#endif

    /// Whether subtrees that contribute no opinions should be culled
    /// from the index.
    pxr::PcpPrimIndexInputs& Cull(bool doCulling);

    /// Whether the prim stack should be computed, and
    /// whether relocates, inherits, permissions, symmetry, or payloads should
    /// be considered during prim index computation,
    pxr::PcpPrimIndexInputs& USD(bool doUSD);

    /// The file format target for scene description layers encountered during
    /// prim index computation.
    pxr::PcpPrimIndexInputs& FileFormatTarget(const std::string& target);

    PcpPrimIndexInputs(const pxr::PcpPrimIndexInputs& );

    PcpPrimIndexInputs(pxr::PcpPrimIndexInputs&& ) CPPMM_IGNORE;

    pxr::PcpPrimIndexInputs& operator=(const pxr::PcpPrimIndexInputs& );

    pxr::PcpPrimIndexInputs& operator=(pxr::PcpPrimIndexInputs&& ) CPPMM_IGNORE;

    ~PcpPrimIndexInputs();

} CPPMM_OPAQUEPTR; // struct PcpPrimIndexInputs


/// \class PcpPrimIndexOutputs
/// 
/// Outputs of the prim indexing procedure.
struct PcpPrimIndexOutputs {
    using BoundType = pxr::PcpPrimIndexOutputs;

    /// Swap content with \p r.
    void swap(pxr::PcpPrimIndexOutputs& r);

    /// Appends the outputs from \p childOutputs to this object, using 
    /// \p arcToParent to connect \p childOutputs' prim index to this object's
    /// prim index. 
    /// 
    /// Returns the node in this object's prim index corresponding to the root
    /// node of \p childOutputs' prim index.
    pxr::PcpNodeRef Append(pxr::PcpPrimIndexOutputs&& childOutputs, const pxr::PcpArc& arcToParent, pxr::PcpErrorBasePtr* error);

    PcpPrimIndexOutputs(const pxr::PcpPrimIndexOutputs& );

    PcpPrimIndexOutputs(pxr::PcpPrimIndexOutputs&& ) CPPMM_IGNORE;

    pxr::PcpPrimIndexOutputs& operator=(const pxr::PcpPrimIndexOutputs& );

    pxr::PcpPrimIndexOutputs& operator=(pxr::PcpPrimIndexOutputs&& ) CPPMM_IGNORE;

    ~PcpPrimIndexOutputs();


    enum PayloadState {
        NoPayload = 0,
        IncludedByIncludeSet = 1,
        ExcludedByIncludeSet = 2,
        IncludedByPredicate = 3,
        ExcludedByPredicate = 4,
    };
} CPPMM_OPAQUEPTR; // struct PcpPrimIndexOutputs


/// Free function version for generic code and ADL.
void swap(pxr::PcpPrimIndex& l, pxr::PcpPrimIndex& r);


/// Free function version for generic code and ADL.
void swap(pxr::PcpPrimIndexOutputs& l, pxr::PcpPrimIndexOutputs& r);


/// Compute an index for the given path. \p errors will contain any errors
/// encountered while performing this operation.
void PcpComputePrimIndex(const pxr::SdfPath& primPath, const pxr::PcpLayerStackPtr& layerStack, const pxr::PcpPrimIndexInputs& inputs, pxr::PcpPrimIndexOutputs* outputs, pxr::ArResolver* pathResolver);


/// Returns true if the 'new' default standin behavior is enabled.
bool PcpIsNewDefaultStandinBehaviorEnabled();


void Pcp_RescanForSpecs(pxr::PcpPrimIndex* index, bool usd);


bool Pcp_NeedToRecomputeDueToAssetPathChange(const pxr::PcpPrimIndex& index);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
