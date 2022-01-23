#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/cache.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpCache
///
/// PcpCache is the context required to make requests of the Pcp
/// composition algorithm and cache the results.
///
/// Because the algorithms are recursive -- making a request typically
/// makes other internal requests to solve subproblems -- caching
/// subproblem results is required for reasonable performance, and
/// so this cache is the only entrypoint to the algorithms.
///
/// There is a set of parameters that affect the composition results:
///
/// \li variant fallbacks: per named variant set, an ordered list of
///     fallback values to use when composing a prim that defines
///     a variant set but does not specify a selection
/// \li payload inclusion set: an SdfPath set used to identify which
///     prims should have their payloads included during composition;
///     this is the basis for explicit control over the "working set"
///     of composition
/// \li file format target: the file format target that Pcp will request
///     when opening scene description layers
/// \li "USD mode" configures the Pcp composition algorithm to provide
///     only a custom, lighter subset of the full feature set, as needed
///     by the Universal Scene Description system
///
/// There are a number of different computations that can be requested.
/// These include computing a layer stack from a PcpLayerStackIdentifier,
/// computing a prim index or prim stack, and computing a property index.
///
struct PcpCache
{
public:
    using BoundType = pxr::PcpCache;

    /// Construct a PcpCache to compose results for the layer stack identified
    /// by \a layerStackIdentifier. 
    /// 
    /// If \p fileFormatTarget is given, Pcp will specify \p fileFormatTarget
    /// as the file format target when searching for or opening a layer.
    ///
    /// If \p usd is true, computation of prim indices and composition of prim 
    /// child names are performed without relocates, inherits, permissions, 
    /// symmetry, or payloads, and without populating the prim stack and 
    /// gathering its dependencies.
    PcpCache(const pxr::PcpLayerStackIdentifier & layerStackIdentifier,
             const std::string& fileFormatTarget = std::string(),
             bool usd = false);
     ~PcpCache();

    /// \name Parameters
    /// @{

    /// Get the identifier of the layerStack used for composition.
    
    const pxr::PcpLayerStackIdentifier& GetLayerStackIdentifier() const;

    /// Get the layer stack for GetLayerStackIdentifier().  Note that
    /// this will neither compute the layer stack nor report errors.
    /// So if the layer stack has not been computed yet this will
    /// return \c NULL.  Use ComputeLayerStack() if you need to
    /// compute the layer stack if it hasn't been computed already
    /// and/or get errors caused by computing the layer stack.
    
    pxr::PcpLayerStackPtr GetLayerStack() const;

    /// Return true if the cache is configured in Usd mode.
    
    bool IsUsd() const;

    /// Returns the file format target this cache is configured for.
    
    const std::string& GetFileFormatTarget() const;

    /// Get the list of fallbacks to attempt to use when evaluating
    /// variant sets that lack an authored selection.
    
    pxr::PcpVariantFallbackMap GetVariantFallbacks() const;

    /// Set the list of fallbacks to attempt to use when evaluating
    /// variant sets that lack an authored selection.
    ///
    /// If \p changes is not \c NULL then it's adjusted to reflect the
    /// changes necessary to see the change in standin preferences,
    /// otherwise those changes are applied immediately.
    
    void SetVariantFallbacks( const pxr::PcpVariantFallbackMap & map,
                              pxr::PcpChanges* changes = NULL );

    /// Return true if the payload is included for the given path.
    
    bool IsPayloadIncluded(const pxr::SdfPath &path) const;

    pxr::PcpCache::PayloadSet const &GetIncludedPayloads() const;

    /// Request payloads to be included or excluded from composition.
    /// \param pathsToInclude is a set of paths to add to the set for
    ///        payload inclusion.
    /// \param pathsToExclude is a set of paths to remove from the set for
    ///        payload inclusion.
    /// \param changes if not \c NULL, is adjusted to reflect the changes
    ///        necessary to see the change in payloads;  otherwise those
    ///        changes are applied immediately.
    /// \note If a path is listed in both pathsToInclude and pathsToExclude,
    /// it will be treated as an inclusion only.
    ///
     
    void RequestPayloads( const pxr::SdfPathSet & pathsToInclude,
                          const pxr::SdfPathSet & pathsToExclude,
                          pxr::PcpChanges* changes = NULL );

    /// Request layers to be muted or unmuted in this cache.  Muted layers
    /// are ignored during composition and do not appear in any layer
    /// stacks.  The root layer of this stage may not be muted; attempting
    /// to do so will generate a coding error.  If the root layer of a
    /// reference or payload layer stack is muted, the behavior is as if 
    /// the muted layer did not exist, which means a composition error will 
    /// be generated.
    ///
#if AR_VERSION == 1
    /// A canonical identifier for each layer in \p layersToMute will be
    /// computed using ArResolver::ComputeRepositoryPath.  Any layer 
    /// encountered during composition with the same repository path will
    /// be considered muted and ignored.  Relative paths will be assumed to
    /// be relative to the cache's root layer.  Search paths are immediately 
    /// resolved and the result is used for computing the canonical path.
#else
    /// A canonical identifier for each layer in \p layersToMute will be
    /// computed using ArResolver::CreateIdentifier using the cache's root
    /// layer as the anchoring asset. Any layer encountered during composition
    /// with the same identifier will be considered muted and ignored.
#endif
    ///
    /// Note that muting a layer will cause this cache to release all
    /// references to that layer.  If no other client is holding on to
    /// references to that layer, it will be unloaded.  In this case, if 
    /// there are unsaved edits to the muted layer, those edits are lost.  
    /// Since anonymous layers are not serialized, muting an anonymous
    /// layer will cause that layer and its contents to be lost in this
    /// case.
    ///
    /// If \p changes is not \c nullptr, it is adjusted to reflect the
    /// changes necessary to see the change in muted layers.  Otherwise,
    /// those changes are applied immediately.
    /// 
    /// \p newLayersMuted and \p newLayersUnmuted contains the pruned vector
    /// of layers which are muted or unmuted by this call to RequestLayerMuting.
    ///
     
    void RequestLayerMuting(const std::vector<std::string>& layersToMute,
                            const std::vector<std::string>& layersToUnmute,
                            pxr::PcpChanges* changes = nullptr,
                            std::vector<std::string>* newLayersMuted = nullptr,
                            std::vector<std::string>* newLayersUnmuted = 
                                nullptr);

    /// Returns the list of canonical identifiers for muted layers
    /// in this cache.  See documentation on RequestLayerMuting for
    /// more details.
     
    const std::vector<std::string>& GetMutedLayers() const;

    /// Returns true if the layer specified by \p layerIdentifier is
    /// muted in this cache, false otherwise.  If \p layerIdentifier
    /// is relative, it is assumed to be relative to this cache's
    /// root layer.  See documentation on RequestLayerMuting for
    /// more details.
     
    bool IsLayerMuted(const std::string& layerIdentifier) const;

    /// Returns true if the layer specified by \p layerIdentifier is
    /// muted in this cache, false otherwise.  If \p layerIdentifier
    /// is relative, it is assumed to be relative to \p anchorLayer.
    /// If \p canonicalMutedLayerIdentifier is supplied, it will be
    /// populated with the canonical identifier of the muted layer if this
    /// function returns true.  See documentation on RequestLayerMuting
    /// for more details.  
     
    bool IsLayerMuted(const pxr::SdfLayerHandle& anchorLayer,
                      const std::string& layerIdentifier,
                      std::string* canonicalMutedLayerIdentifier 
                          = nullptr) const;

    /// Returns parameter object containing all inputs for the prim index
    /// computation used by this cache. 
    
    pxr::PcpPrimIndexInputs GetPrimIndexInputs();

    /// @}

    /// \name Computations
    /// @{

    /// Returns the layer stack for \p identifier if it exists, otherwise
    /// creates a new layer stack for \p identifier.  This returns \c NULL
    /// if \p identifier is invalid (i.e. its root layer is \c NULL). 
    /// \p allErrors will contain any errors encountered while creating a 
    /// new layer stack.  It'll be unchanged if the layer stack already existed.
    
    pxr::PcpLayerStackRefPtr
    ComputeLayerStack(const pxr::PcpLayerStackIdentifier &identifier, 
                      pxr::PcpErrorVector *allErrors);

    /// Returns the layer stack for \p identifier if it has been computed
    /// and cached, otherwise returns \c NULL.
    
    pxr::PcpLayerStackPtr
    FindLayerStack(const pxr::PcpLayerStackIdentifier &identifier) const;

    /// Return true if \p layerStack is used by this cache in its composition,
    /// false otherwise.
    
    bool UsesLayerStack(const pxr::PcpLayerStackPtr &layerStack) const;

    /// Compute and return a reference to the cached result for the
    /// prim index for the given path. \p allErrors will contain any errors 
    /// encountered while performing this operation.
    
    const pxr::PcpPrimIndex &
    ComputePrimIndex(const pxr::SdfPath &primPath, pxr::PcpErrorVector *allErrors);

    /// Compute PcpPrimIndexes in the subtree rooted at path in parallel,
    /// recursing to children based on the supplied \p childrenPred.  Also
    /// include payloads not already in this cache's included payloads (see
    /// GetIncludedPayloads()) according to \p payloadPred.
    ///
    /// This is similar to ComputePrimIndex(), except it computes an entire
    /// subtree of indexes in parallel so it can be much more efficient.  This
    /// function invokes both \p childrenPred and \p payloadPred concurrently,
    /// so it must be safe to do so.  
    ///
    /// When a PcpPrimIndex computation completes invoke \p childrenPred, 
    /// passing it the PcpPrimIndex.  If \p childrenPred returns true, continue 
    /// indexing children prim indexes.  In this case, \p childrenPred may 
    /// provide a list of names of the children prim indexes to compute.
    /// If it does not, all children prim indexes will be computed.
    /// If \p childrenPred returns false, stop indexing in that subtree.  
    ///
    /// If payloads discovered during indexing do not already appear in this
    /// cache's set of included payloads, invoke \p payloadPred, passing it the
    /// path for the prim with the payload.  If \p payloadPred returns true,
    /// include its payload and add it to the cache's set of included payloads
    /// upon completion.
    template <class ChildrenPredicate, class PayloadPredicate>
    void ComputePrimIndexesInParallel(const pxr::SdfPath &path,
                                      pxr::PcpErrorVector *allErrors,
                                      const ChildrenPredicate &childrenPred,
                                      const PayloadPredicate &payloadPred);

    /// Vectorized form of ComputePrimIndexesInParallel().  Equivalent to
    /// invoking that method for each path in \p paths, but more efficient.
    template <class ChildrenPredicate, class PayloadPredicate>
    void ComputePrimIndexesInParallel(const pxr::SdfPathVector &paths,
                                      pxr::PcpErrorVector *allErrors,
                                      const ChildrenPredicate &childrenPred,
                                      const PayloadPredicate &payloadPred);

    /// Returns a pointer to the cached computed prim index for the given
    /// path, or NULL if it has not been computed.
    const pxr::PcpPrimIndex *
    FindPrimIndex(const pxr::SdfPath &primPath) const;

    /// Run the given \p callback on every prim index in the cache.
    /// The callback must have the signature: void(const PcpPrimIndex&).
#if 0
    template <class Callback>
    void
    ForEachPrimIndex(const Callback& callback) const
    {
        TfFunctionRef<void(const PcpPrimIndex&)> fn(callback);
        _ForEachPrimIndex(fn);
    }
#endif

    /// Compute and return a reference to the cached result for the
    /// property index for the given path. \p allErrors will contain any
    /// errors encountered while performing this operation.
    
    const pxr::PcpPropertyIndex &
    ComputePropertyIndex(const pxr::SdfPath &propPath, pxr::PcpErrorVector *allErrors);

    /// Returns a pointer to the cached computed property index for the given
    /// path, or NULL if it has not been computed.
    
    const pxr::PcpPropertyIndex *
    FindPropertyIndex(const pxr::SdfPath &propPath) const;

    /// Compute the relationship target paths for the relationship at
    /// \p relationshipPath into \p paths.  If \p localOnly is \c true then
    /// this will compose relationship targets from local nodes only.  If
    /// \p stopProperty is not \c NULL then this will stop composing
    /// relationship targets at \p stopProperty, including \p stopProperty
    /// iff \p includeStopProperty is \c true.  If not \c NULL, \p deletedPaths
    /// will be populated with target paths whose deletion contributed to
    /// the computed result.  \p allErrors will contain any errors encountered
    /// while performing this operation.
    
    void
    ComputeRelationshipTargetPaths(const pxr::SdfPath &relationshipPath, 
                                   pxr::SdfPathVector *paths,
                                   bool localOnly,
                                   const pxr::SdfSpecHandle &stopProperty,
                                   bool includeStopProperty,
                                   pxr::SdfPathVector *deletedPaths,
                                   pxr::PcpErrorVector *allErrors);

    /// Compute the attribute connection paths for the attribute at
    /// \p attributePath into \p paths.  If \p localOnly is \c true then
    /// this will compose attribute connections from local nodes only.  If
    /// \p stopProperty is not \c NULL then this will stop composing
    /// attribute connections at \p stopProperty, including \p stopProperty
    /// iff \p includeStopProperty is \c true.  If not \c NULL, \p deletedPaths
    /// will be populated with connection paths whose deletion contributed to
    /// the computed result.  \p allErrors will contain any errors encountered
    /// while performing this operation.
    
    void
    ComputeAttributeConnectionPaths(const pxr::SdfPath &attributePath,
                                    pxr::SdfPathVector *paths,
                                    bool localOnly,
                                    const pxr::SdfSpecHandle &stopProperty,
                                    bool includeStopProperty,
                                    pxr::SdfPathVector *deletedPaths,
                                    pxr::PcpErrorVector *allErrors);

    /// @}
    /// \name Dependencies
    /// @{

    /// Returns set of all layers used by this cache. 
    
    pxr::SdfLayerHandleSet GetUsedLayers() const;

    /// Return a number that can be used to determine whether or not the set of
    /// layers used by this cache may have changed or not.  For example, if one
    /// calls GetUsedLayers() and saves the GetUsedLayersRevision(), and then
    /// later calls GetUsedLayersRevision() again, if the number is unchanged,
    /// then GetUsedLayers() is guaranteed to be unchanged as well.
    
    size_t GetUsedLayersRevision() const;

    /// Returns set of all root layers used by this cache.
    
    pxr::SdfLayerHandleSet GetUsedRootLayers() const;

    /// Returns every computed & cached layer stack that includes \p layer.
    
    const pxr::PcpLayerStackPtrVector&
    FindAllLayerStacksUsingLayer(const pxr::SdfLayerHandle& layer) const;

    /// Run the given \p callbcack on every layer stack used by prim
    /// indexes in the cache. The callback must have the signature:
    /// void(const PcpLayerStackPtr&).
#if 0
    template <class Callback>
    void
    ForEachLayerStack(const Callback& callback) const
    {
        TfFunctionRef<void(const PcpLayerStackPtr&)> fn(callback);
        _ForEachLayerStack(fn);
    }
#endif

    /// Returns dependencies on the given site of scene description,
    /// as discovered by the cached index computations.
    ///
    /// \param depMask specifies what classes of dependency to include;
    ///        see PcpDependencyFlags for details
    /// \param recurseOnSite includes incoming dependencies on
    ///        children of sitePath
    /// \param recurseOnIndex extends the result to include all PcpCache
    ///        child indexes below discovered results
    /// \param filterForExistingCachesOnly filters the results to only
    ///        paths representing computed prim and property index caches;
    ///        otherwise a recursively-expanded result can include
    ///        un-computed paths that are expected to depend on the site
    
    pxr::PcpDependencyVector
    FindSiteDependencies(const pxr::PcpLayerStackPtr& siteLayerStack,
                         const pxr::SdfPath& sitePath,
                         pxr::PcpDependencyFlags depMask,
                         bool recurseOnSite,
                         bool recurseOnIndex,
                         bool filterForExistingCachesOnly) const;

    /// Returns dependencies on the given site of scene description,
    /// as discovered by the cached index computations.
    ///
    /// This method overload takes a site layer rather than a layer
    /// stack.  It will check every layer stack using that layer, and
    /// apply any relevant sublayer offsets to the map functions in the
    /// returned PcpDependencyVector.
    ///
    /// See the other method for parameter details.
    
    pxr::PcpDependencyVector
    FindSiteDependencies(const pxr::SdfLayerHandle& siteLayer,
                         const pxr::SdfPath& sitePath,
                         pxr::PcpDependencyFlags depMask,
                         bool recurseOnSite,
                         bool recurseOnIndex,
                         bool filterForExistingCachesOnly) const;

    /// Returns \c true if an opinion for the site at \p localPcpSitePath
    /// in the cache's layer stack can be provided by an opinion in \p layer,
    /// \c false otherwise.  If \c true and \p allowedPathInLayer is not
    /// \c NULL then it's set to a path in \p layer that would provide an
    /// opinion.
    ///
    /// This returns \c false if no prim index has yet been computed for
    /// \p localPcpSitePath.
     
    bool CanHaveOpinionForSite(const pxr::SdfPath& localPcpSitePath,
                               const pxr::SdfLayerHandle& layer,
                               pxr::SdfPath* allowedPathInLayer) const;

    /// Returns a vector of sublayer asset paths used in the layer stack
    /// that didn't resolve to valid assets.
     
    std::vector<std::string> GetInvalidSublayerIdentifiers() const;

    /// Returns true if \p identifier was used as a sublayer path in a 
    /// layer stack but did not identify a valid layer. This is functionally 
    /// equivalent to examining the values in the vector returned by
    /// GetInvalidSublayerIdentifiers, but more efficient.
     
    bool IsInvalidSublayerIdentifier(const std::string& identifier) const;

    /// Returns a map of prim paths to asset paths used by that prim
    /// (e.g. in a reference) that didn't resolve to valid assets.
     
    std::map<pxr::SdfPath, std::vector<std::string>, pxr::SdfPath::FastLessThan>
    GetInvalidAssetPaths() const;

    /// Returns true if \p resolvedAssetPath was used by a prim (e.g. in
    /// a reference) but did not resolve to a valid asset. This is
    /// functionally equivalent to examining the values in the map returned
    /// by GetInvalidAssetPaths, but more efficient.
     
    bool IsInvalidAssetPath(const std::string& resolvedAssetPath) const;

    /// Returns true if any prim index in this cache has a dependency on a 
    /// dynamic file format argument field. 
    
    bool HasAnyDynamicFileFormatArgumentDependencies() const;

    /// Returns true if the given \p field is the name of a field that 
    /// was composed while generating dynamic file format arguments for any prim
    /// index in this cache. 
    
    bool IsPossibleDynamicFileFormatArgumentField(const pxr::TfToken &field) const;

    /// Returns the dynamic file format dependency data object for the prim
    /// index with the given \p primIndexPath. This will return an empty 
    /// dependency data if either there is no cache prim index for the path or 
    /// if the prim index has no dynamic file formats that it depends on.
    
    const pxr::PcpDynamicFileFormatDependencyData &
    GetDynamicFileFormatArgumentDependencyData(
        const pxr::SdfPath &primIndexPath) const;

    /// @}

    /// \name Change handling
    /// @{

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
     
    void Apply(const pxr::PcpCacheChanges& changes, pxr::PcpLifeboat* lifeboat);

    /// Reload the layers of the layer stack, except session layers
    /// and sublayers of session layers.  This will also try to load
    /// sublayers in this cache's layer stack that could not be loaded
    /// previously.  It will also try to load any referenced or payloaded
    /// layer that could not be loaded previously.  Clients should
    /// subsequently \c Apply() \p changes to use any now-valid layers.
    
    void Reload(pxr::PcpChanges* changes);

    /// Reload every layer used by the prim at \p primPath that's across
    /// a reference or payload.  Clients should subsequently apply the
    /// changes to use any now valid layers.
    ///
    /// Note:  If a reference or payload was to an invalid asset and this
    /// asset is valid upon reloading then this call will not necessarily
    /// reload every layer accessible across the reference or payload.
    /// For example, say prim R has an invalid reference and prim Q has a
    /// valid reference to layer X with sublayer Y.  If on reload R now
    /// has a valid reference to layer Z with sublayer Y, we will load Z
    /// but we will not reload Y.
     
    void ReloadReferences(pxr::PcpChanges* changes, const pxr::SdfPath& primPath);

    /// @}

    /// \name Diagnostics
    /// @{

    /// Prints various statistics about the data stored in this cache.
    
    void PrintStatistics() const;

    /// @}


} CPPMM_OPAQUEPTR; // struct PcpCache

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

