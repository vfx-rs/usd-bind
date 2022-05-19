#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/changes.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpLayerStackChanges
///
/// Types of changes per layer stack.
///
struct PcpLayerStackChanges
{
public:
    using BoundType = pxr::PcpLayerStackChanges;

#if 0
    /// Must rebuild the layer tree.  Implies didChangeLayerOffsets.
    bool didChangeLayers;

    /// Must rebuild the layer offsets.
    bool didChangeLayerOffsets;

    /// Must rebuild the relocation tables.
    bool didChangeRelocates;

    /// A significant layer stack change means the composed opinions of
    /// the layer stack may have changed in arbitrary ways.  This
    /// represents a coarse invalidation. By way of contrast, an example
    /// of an insignificant change is adding or removing a layer empty
    /// of opinions.
    bool didChangeSignificantly;

    /// New relocation maps for this layer stack.
    /// If didChangeRelocates is true, these fields will be populated
    /// as part of determining the changes to this layer stack.
    /// However, we do not immediately apply those changes to the
    /// layer stack; we store them here and commit them in Apply().
    SdfRelocatesMap newRelocatesTargetToSource;
    SdfRelocatesMap newRelocatesSourceToTarget;
    SdfRelocatesMap newIncrementalRelocatesSourceToTarget;
    SdfRelocatesMap newIncrementalRelocatesTargetToSource;
    SdfPathVector newRelocatesPrimPaths;

    /// Paths that are affected by the above relocation changes.
    SdfPathSet pathsAffectedByRelocationChanges;

#endif
    PcpLayerStackChanges();

} CPPMM_OPAQUEPTR; // struct PcpLayerStackChanges

/// \class PcpCacheChanges
///
/// Types of changes per cache.
///
struct PcpCacheChanges
{
public:
    using BoundType = pxr::PcpCacheChanges;

#if 0
    enum TargetType {
        TargetTypeConnection         = 1 << 0,
        TargetTypeRelationshipTarget = 1 << 1
    };

    /// Must rebuild the indexes at and below each path.  This
    /// implies rebuilding the prim/property stacks at
    /// and below each path.
    SdfPathSet didChangeSignificantly;

    /// Must rebuild the prim/property stacks at each path.
    SdfPathSet didChangeSpecs;

    /// Must rebuild the prim indexes at each path.  This implies rebuilding
    /// the prim stack at each path.
    SdfPathSet didChangePrims;

    /// Must rebuild the connections/targets at each path.
    std::map<SdfPath, int, SdfPath::FastLessThan> didChangeTargets;

    /// Must update the path on every namespace object at and below each
    /// given path. The first path is the old path to the object and the
    /// second path is the new path. The order of the vector matters and 
    /// indicates the order in which the namespace edits occur.
    std::vector<std::pair<SdfPath, SdfPath>> didChangePath;

    /// Layers used in the composition may have changed.
    bool didMaybeChangeLayers = false;
#endif

} CPPMM_OPAQUEPTR; // struct PcpCacheChanges

/// \class PcpLifeboat
///
/// Structure used to temporarily retain layers and layerStacks within
/// a code block.  Analogous to the autorelease pool in obj-c.
struct PcpLifeboat
{
public:
    using BoundType = pxr::PcpLifeboat;

    PcpLifeboat();
    ~PcpLifeboat();

    /// Ensure that \p layer exists until this object is destroyed.
    void Retain(const pxr::SdfLayerRefPtr& layer);

    /// Ensure that \p layerStack exists until this object is destroyed.
    void Retain(const pxr::PcpLayerStackRefPtr& layerStack);

    /// Returns reference to the set of layer stacks currently being held
    /// in the lifeboat.
    const std::set<pxr::PcpLayerStackRefPtr>& GetLayerStacks() const;

    /// Swap the contents of this and \p other.
    void Swap(pxr::PcpLifeboat& other);

} CPPMM_OPAQUEPTR; // struct PcpLifeboat

/// \class PcpChanges
///
/// Describes Pcp changes.
///
/// Collects changes to Pcp necessary to reflect changes in Sd.  It does
/// not cause any changes to any Pcp caches, layer stacks, etc;  it only
/// computes what changes would be necessary to Pcp to reflect the Sd
/// changes.
///
struct PcpChanges
{
public:
    using BoundType = pxr::PcpChanges;

    PcpChanges();
     ~PcpChanges();

    /// Breaks down \p changes into individual changes on the caches in
    /// \p caches.  This simply translates data in \p changes into other
    /// Did...() calls on this object.
    ///
    /// Clients will typically call this method once then call \c Apply() or
    /// get the changes using \c GetLayerStackChanges() and
    /// \c GetCacheChanges().
     
    void DidChange(const pxr::TfSpan<const pxr::PcpCache*> &caches,
                   const pxr::SdfLayerChangeListVec& changes);

    /// Tries to load the sublayer of \p layer at \p sublayerPath.  If
    /// successful, any layer stack using \p layer is marked as having changed
    /// and all prims in \p cache using any prim in any of those layer stacks
    /// are marked as changed.
     
    void DidMaybeFixSublayer(const pxr::PcpCache* cache,
                             const pxr::SdfLayerHandle& layer,
                             const std::string& assetPath);

    /// Tries to load the asset at \p assetPath.  If successful, any prim
    /// in \p cache using the site \p site is marked as changed.
     
    void DidMaybeFixAsset(const pxr::PcpCache* cache,
                          const pxr::PcpSite& site,
                          const pxr::SdfLayerHandle& srcLayer,
                          const std::string& assetPath);

    /// The layer identified by \p layerId was muted in \p cache.
     
    void DidMuteLayer(const pxr::PcpCache* cache, const std::string& layerId);

    /// The layer identified by \p layerId was unmuted in \p cache.
     
    void DidUnmuteLayer(const pxr::PcpCache* cache, const std::string& layerId);

    /// The sublayer tree changed.  This often, but doesn't always, imply that
    /// anything and everything may have changed.  If clients want to indicate
    /// that anything and everything may have changed they should call this
    /// method and \c DidChangePrimGraph() with the absolute root path.
    
    void DidChangeLayers(const pxr::PcpCache* cache);

    /// The sublayer offsets changed.
    
    void DidChangeLayerOffsets(const pxr::PcpCache* cache);

    /// The object at \p path changed significantly enough to require
    /// recomputing the entire prim or property index.  A significant change
    /// implies changes to every namespace descendant's index, specs, and
    /// dependencies.
     
    void DidChangeSignificantly(const pxr::PcpCache* cache, const pxr::SdfPath& path);

    /// The spec stack for the prim or property has changed, due to the
    /// addition or removal of the spec in \p changedLayer at \p changedPath.
    /// This is used when inert prims/properties are added or removed or when 
    /// any change requires rebuilding the property stack.  It implies that 
    /// dependencies on those specs has changed.
     
    void DidChangeSpecs(const pxr::PcpCache* cache, const pxr::SdfPath& path,
                        const pxr::SdfLayerHandle& changedLayer,
                        const pxr::SdfPath& changedPath);

    /// The spec stack for the prim or property at \p path in \p cache has
    /// changed.
     
    void DidChangeSpecStack(const pxr::PcpCache* cache, const pxr::SdfPath& path);

    /// The connections on the attribute or targets on the relationship have
    /// changed.
     
    void DidChangeTargets(const pxr::PcpCache* cache, const pxr::SdfPath& path,
                          pxr::PcpCacheChanges::TargetType targetType);

    /// The relocates that affect prims and properties at and below
    /// the given cache path have changed.
     
    void DidChangeRelocates(const pxr::PcpCache* cache, const pxr::SdfPath& path);

    /// The composed object at \p oldPath was moved to \p newPath.  This
    /// implies every corresponding Sd change.  This object will subsume
    /// those Sd changes under this higher-level move.  Sd path changes
    /// that are not so subsumed will be converted to DidChangePrimGraph()
    /// and/or DidChangeSpecs() changes.
     
    void DidChangePaths(const pxr::PcpCache* cache,
                        const pxr::SdfPath& oldPath, const pxr::SdfPath& newPath);

    /// Remove any changes for \p cache.
    
    void DidDestroyCache(const pxr::PcpCache* cache);

    /// The asset resolver has changed, invalidating previously-resolved
    /// asset paths. This function will check all prim indexes in \p cache
    /// for composition arcs that may now refer to a different asset and
    /// mark them as needing significant resyncs.
    
    void DidChangeAssetResolver(const pxr::PcpCache* cache);

    /// Swap the contents of this and \p other.
    
    void Swap(pxr::PcpChanges& other);

    /// Returns \c true iff there are no changes.
    
    bool IsEmpty() const;

    /// Returns a map of all of the layer stack changes.  Note that some
    /// keys may be to expired layer stacks.
    
    const pxr::PcpChanges::LayerStackChanges& GetLayerStackChanges() const;

    /// Returns a map of all of the cache changes.
    
    const pxr::PcpChanges::CacheChanges& GetCacheChanges() const;

    /// Returns the lifeboat responsible for maintaining the lifetime of
    /// layers and layer stacks during change processing. Consumers may
    /// inspect this object to determine which of these objects, if any,
    /// had their lifetimes affected during change processing.
    
    const pxr::PcpLifeboat& GetLifeboat() const;

    /// Applies the changes to the layer stacks and caches.
    
    void Apply() const;

} CPPMM_OPAQUEPTR; // struct PcpChanges

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

