#if 0
#include <pxr/usd/pcp/layerStack.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpLayerStack
/// 
/// Represents a stack of layers that contribute opinions to composition.
/// 
/// Each PcpLayerStack is identified by a PcpLayerStackIdentifier. This
/// identifier contains all of the parameters needed to construct a layer stack,
/// such as the root layer, session layer, and path resolver context.
/// 
/// PcpLayerStacks are constructed and managed by a Pcp_LayerStackRegistry.
struct PcpLayerStack {
    using BoundType = pxr::PcpLayerStack;

    /// Return the current reference count of this object.
    size_t GetCurrentCount() const;

    /// Return true if only one \c TfRefPtr points to this object.
    bool IsUnique() const;

    const pxr::TfRefCount& GetRefCount() const;

    void SetShouldInvokeUniqueChangedListener(bool shouldCall);

    static void SetUniqueChangedListener(pxr::TfRefBase::UniqueChangedListener listener);

    const pxr::TfWeakBase& __GetTfWeakBase__() const;

    void EnableNotification2() const;

    const void* GetUniqueIdentifier() const;

    ~PcpLayerStack();

    /// Returns the identifier for this layer stack.
    const pxr::PcpLayerStackIdentifier& GetIdentifier() const;

    /// Returns the layers in this layer stack in strong-to-weak order.
    /// Note that this is only the *local* layer stack -- it does not
    /// include any layers brought in by references inside prims.
    const pxr::SdfLayerRefPtrVector& GetLayers() const;

    /// Returns only the session layers in the layer stack in strong-to-weak 
    /// order.
    pxr::SdfLayerHandleVector GetSessionLayers() const;

    /// Returns the layer tree representing the structure of this layer
    /// stack.
    const pxr::SdfLayerTreeHandle& GetLayerTree() const;

    /// Returns the layer offset for the given layer, or NULL if the layer
    /// can't be found or is the identity.
    const pxr::SdfLayerOffset* GetLayerOffsetForLayer(const pxr::SdfLayerHandle& ) const;

    /// Return the layer offset for the given layer, or NULL if the layer
    /// can't be found or is the identity.
    const pxr::SdfLayerOffset* GetLayerOffsetForLayer(const pxr::SdfLayerRefPtr& ) const;

    /// Returns the layer offset for the layer at the given index in this
    /// layer stack. Returns NULL if the offset is the identity.
    const pxr::SdfLayerOffset* GetLayerOffsetForLayer(size_t layerIdx) const;

    /// Returns the set of layers that were muted in this layer
    /// stack.
    const std::set<std::__cxx11::basic_string<char>, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::__cxx11::basic_string<char> > >& GetMutedLayers() const;

    /// Return the list of errors local to this layer stack.
    pxr::PcpErrorVector GetLocalErrors() const;

    /// Returns true if this layer stack contains the given layer, false
    /// otherwise.
    bool HasLayer(const pxr::SdfLayerHandle& layer) const;

    bool HasLayer(const pxr::SdfLayerRefPtr& layer) const;

    /// Return the time codes per second value of the layer stack. This is 
    /// usually the same as the computed time codes per second of the root layer
    /// but may be computed from the session layer when its present.
    double GetTimeCodesPerSecond() const;

    /// Returns relocation source-to-target mapping for this layer stack.
    /// 
    /// This map combines the individual relocation entries found across
    /// all layers in this layer stack; multiple entries that affect a single
    /// prim will be combined into a single entry. For instance, if this
    /// layer stack contains relocations { /A: /B } and { /A/C: /A/D }, this
    /// map will contain { /A: /B } and { /B/C: /B/D }. This allows consumers
    /// to go from unrelocated namespace to relocated namespace in a single
    /// step.
    const pxr::SdfRelocatesMap& GetRelocatesSourceToTarget() const;

    /// Returns relocation target-to-source mapping for this layer stack.
    /// 
    /// See GetRelocatesSourceToTarget for more details.
    const pxr::SdfRelocatesMap& GetRelocatesTargetToSource() const;

    /// Returns incremental relocation source-to-target mapping for this layer 
    /// stack.
    /// 
    /// This map contains the individual relocation entries found across
    /// all layers in this layer stack; it does not combine ancestral
    /// entries with descendant entries. For instance, if this
    /// layer stack contains relocations { /A: /B } and { /A/C: /A/D }, this
    /// map will contain { /A: /B } and { /A/C: /A/D }.
    const pxr::SdfRelocatesMap& GetIncrementalRelocatesSourceToTarget() const;

    /// Returns incremental relocation target-to-source mapping for this layer 
    /// stack.
    /// 
    /// See GetIncrementalRelocatesTargetToSource for more details.
    const pxr::SdfRelocatesMap& GetIncrementalRelocatesTargetToSource() const;

    /// Returns a list of paths to all prims across all layers in this 
    /// layer stack that contained relocates.
    const pxr::SdfPathVector& GetPathsToPrimsWithRelocates() const;

    /// Apply the changes in \p changes.  This blows caches.  It's up to
    /// the client to pull on those caches again as needed.
    /// 
    /// Objects that are no longer needed and would be destroyed are
    /// retained in \p lifeboat and won't be destroyed until \p lifeboat is
    /// itself destroyed.  This gives the client control over the timing
    /// of the destruction of those objects.  Clients may choose to pull
    /// on the caches before destroying \p lifeboat.  That may cause the
    /// caches to again retain the objects, meaning they won't be destroyed
    /// when \p lifeboat is destroyed.
    /// 
    /// For example, if blowing a cache means an SdfLayer is no longer
    /// needed then \p lifeboat will hold an SdfLayerRefPtr to that layer. 
    /// The client can then pull on that cache, which could cause the
    /// cache to hold an SdfLayerRefPtr to the layer again.  If so then
    /// destroying \p changes will not destroy the layer.  In any case,
    /// we don't destroy the layer and then read it again.  However, if
    /// the client destroys \p lifeboat before pulling on the cache then
    /// we would destroy the layer then read it again.
    void Apply(const pxr::PcpLayerStackChanges& changes, pxr::PcpLifeboat* lifeboat);

    /// Return a PcpMapExpression representing the relocations that affect
    /// namespace at and below the given path.  The value of this
    /// expression will continue to track the effective relocations if
    /// they are changed later.
    pxr::PcpMapExpression GetExpressionForRelocatesAtPath(const pxr::SdfPath& path);


    /// Tracks information used to compute sublayer asset paths.
    struct _SublayerSourceInfo {
        using BoundType = pxr::PcpLayerStack::_SublayerSourceInfo;

        _SublayerSourceInfo(const pxr::SdfLayerHandle& layer_, const std::string& authoredSublayerPath_, const std::string& computedSublayerPath_);

        _SublayerSourceInfo(const pxr::PcpLayerStack::_SublayerSourceInfo& );

        _SublayerSourceInfo(pxr::PcpLayerStack::_SublayerSourceInfo&& ) CPPMM_IGNORE;

        pxr::PcpLayerStack::_SublayerSourceInfo& operator=(const pxr::PcpLayerStack::_SublayerSourceInfo& );

        pxr::PcpLayerStack::_SublayerSourceInfo& operator=(pxr::PcpLayerStack::_SublayerSourceInfo&& ) CPPMM_IGNORE;

        ~_SublayerSourceInfo();

    } CPPMM_OPAQUEPTR; // struct _SublayerSourceInfo

} CPPMM_OPAQUEPTR; // struct PcpLayerStack


std::ostream& operator<<(std::ostream& , const pxr::PcpLayerStackPtr& );


std::ostream& operator<<(std::ostream& , const pxr::PcpLayerStackRefPtr& );


/// Compose the relocation arcs in the given stack of layers,
/// putting the results into the given sourceToTarget and targetToSource
/// maps.
void Pcp_ComputeRelocationsForLayerStack(const pxr::SdfLayerRefPtrVector& layers, pxr::SdfRelocatesMap* relocatesSourceToTarget, pxr::SdfRelocatesMap* relocatesTargetToSource, pxr::SdfRelocatesMap* incrementalRelocatesSourceToTarget, pxr::SdfRelocatesMap* incrementalRelocatesTargetToSource, pxr::SdfPathVector* relocatesPrimPaths);


bool Pcp_NeedToRecomputeDueToAssetPathChange(const pxr::PcpLayerStackPtr& layerStack);


bool Pcp_NeedToRecomputeLayerStackTimeCodesPerSecond(const pxr::PcpLayerStackPtr& layerStack, const pxr::SdfLayerHandle& changedLayer);


/// Returns true when the environment variable has been set to disable the 
/// behavior where differing time codes per second metadata in layers sublayered
/// or referenced by another layer are used to apply a layer offset scale to the
/// map function.
bool PcpIsTimeScalingForLayerTimeCodesPerSecondDisabled();


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
