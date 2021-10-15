#include <pxr/usd/usd/stage.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class UsdStage
/// 
/// The outermost container for scene description, which owns and presents
/// composed prims as a scenegraph, following the composition recipe
/// recursively described in its associated "root layer".
/// 
/// USD derives its persistent-storage scalability by combining and reusing
/// simple compositions into richer aggregates using referencing and layering
/// with sparse overrides.  Ultimately, every composition (i.e. "scene") is
/// identifiable by its root layer, i.e. the <tt>.usd</tt> file, and a scene
/// is instantiated in an application on a UsdStage that presents a composed
/// view of the scene's root layer.  Each simple composition referenced into
/// a larger composition could be presented on its own UsdStage, at the same
/// (or not) time that it is participating in the larger composition on its
/// own UsdStage; all of the underlying layers will be shared by the two
/// stages, while each maintains its own scenegraph of composed prims.
/// 
/// A UsdStage has sole ownership over the UsdPrim 's with which it is populated,
/// and retains *shared* ownership (with other stages and direct clients of
/// SdfLayer's, via the Sdf_LayerRegistry that underlies all SdfLayer creation
/// methods) of layers.  It provides roughly five categories of API that
/// address different aspects of scene management:
/// 
/// - \ref Usd_lifetimeManagement "Stage lifetime management" methods for
/// constructing and initially populating a UsdStage from an existing layer
/// file, or one that will be created as a result, in memory or on the 
/// filesystem.
/// - \ref Usd_workingSetManagement "Load/unload working set management" methods
/// that allow you to specify which \ref Usd_Payloads "payloads" should be
/// included and excluded from the stage's composition.
/// - \ref Usd_variantManagement "Variant management" methods to manage
/// policy for which variant to use when composing prims that provide
/// a named variant set, but do not specify a selection.
/// - \ref Usd_primManagement "Prim access, creation, and mutation" methods
/// that allow you to find, create, or remove a prim identified by a path on
/// the stage.  This group also provides methods for efficiently traversing the
/// prims on the stage.
/// - \ref Usd_layerManagement "Layers and EditTargets" methods provide access
/// to the layers in the stage's <em>root LayerStack</em> (i.e. the root layer
/// and all of its recursive sublayers), and the ability to set a UsdEditTarget
/// into which all subsequent mutations to objects associated with the stage
/// (e.g. prims, properties, etc) will go.
/// - \ref Usd_stageSerialization "Serialization" methods for "flattening" a
/// composition (to varying degrees), and exporting a completely flattened
/// view of the stage to a string or file.  These methods can be very useful
/// for targetted asset optimization and debugging, though care should be 
/// exercized with large scenes, as flattening defeats some of the benefits of
/// referenced scene description, and may produce very large results, 
/// especially in file formats that do not support data de-duplication, like
/// the usda ASCII format!
/// 
/// \section Usd_SessionLayer Stage Session Layers
/// 
/// Each UsdStage can possess an optional "session layer".  The purpose of
/// a session layer is to hold ephemeral edits that modify a UsdStage's contents
/// or behavior in a way that is useful to the client, but should not be
/// considered as permanent mutations to be recorded upon export.  A very 
/// common use of session layers is to make variant selections, to pick a
/// specific LOD or shading variation, for example.  The session layer is
/// also frequently used to perform interactive vising/invsning of geometry
/// and assets in the scene.   A session layer, if present, contributes to a 
/// UsdStage's identity, for purposes of stage-caching, etc.
struct UsdStage {
    using BoundType = pxr::UsdStage;

    enum InitialLoadSet {
        LoadAll = 0,
        LoadNone = 1,
    };

    /// Return the root UsdPrim on this stage whose name is the root layer's
    /// defaultPrim metadata's value.  Return an invalid prim if there is no
    /// such prim or if the root layer's defaultPrim metadata is unset or is not
    /// a valid prim name.  Note that this function only examines this stage's
    /// rootLayer.  It does not consider sublayers of the rootLayer.  See also
    /// SdfLayer::GetDefaultPrim().
    pxr::UsdPrim GetDefaultPrim() const;

    /// Return true if this stage's root layer has an authored opinion for the
    /// default prim layer metadata.  This is shorthand for:
    /// ```
    /// stage->GetRootLayer()->HasDefaultPrim();
    /// ```
    /// Note that this function only consults the stage's root layer.  To
    /// consult a different layer, use the SdfLayer::HasDefaultPrim() API.
    bool HasDefaultPrim() const;

    /// Traverse the active, loaded, defined, non-abstract prims on this stage
    /// depth-first.
    /// 
    /// Traverse() returns a UsdPrimRange , which allows low-latency
    /// traversal, with the ability to prune subtrees from traversal.  It
    /// is python iterable, so in its simplest form, one can do:
    /// 
    /// ```{.py}
    /// for prim in stage.Traverse():
    ///     print prim.GetPath()
    /// ```
    /// 
    /// If either a pre-and-post-order traversal or a traversal rooted at a
    /// particular prim is desired, construct a UsdPrimRange directly.
    /// 
    /// This is equivalent to UsdPrimRange::Stage() . 
    pxr::UsdPrimRange Traverse();

    /// Attempt to find a matching existing stage in a cache if
    /// UsdStageCacheContext objects exist on the stack. Failing that, create a
    /// new stage and recursively compose prims defined within and referenced by
    /// the layer at *filePath*, which must already exist.
    /// 
    /// The initial set of prims to load on the stage can be specified
    /// using the *load* parameter. \sa UsdStage::InitialLoadSet.
    /// 
    /// Note that the *pathResolverContext* passed here will apply to all path
    /// resolutions for this stage, regardless of what other context may be
    /// bound at resolve time. If no context is passed in here, Usd will create
    /// one by calling \sa ArResolver::CreateDefaultContextForAsset with the
    /// root layer's repository path if the layer has one, otherwise its real 
    /// path.
    static pxr::UsdStageRefPtr Open(const std::string& filePath, pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr Open(const std::string& filePath, const pxr::ArResolverContext& pathResolverContext, pxr::UsdStage::InitialLoadSet load);

    /// The initial set of prims to load on the stage can be specified
    /// using the *load* parameter. \sa UsdStage::InitialLoadSet.
    /// 
    /// Note that the *pathResolverContext* passed here will apply to all path
    /// resolutions for this stage, regardless of what other context may be
    /// bound at resolve time. If no context is passed in here, Usd will create
    /// one by calling \sa ArResolver::CreateDefaultContextForAsset with the
    /// root layer's repository path if the layer has one, otherwise its real 
    /// path.
    static pxr::UsdStageRefPtr CreateNew(const std::string& identifier, pxr::UsdStage::InitialLoadSet load);

    /// Functions for saving changes to layers that contribute opinions to
    /// this stage.  Layers may also be saved by calling SdfLayer::Save or
    /// exported to a new file by calling SdfLayer::Export.
    ///
    /// @{

    /// Calls SdfLayer::Save on all dirty layers contributing to this stage
    /// except session layers and sublayers of session layers.
    ///
    /// This function will emit a warning and skip each dirty anonymous
    /// layer it encounters, since anonymous layers cannot be saved with
    /// SdfLayer::Save. These layers must be manually exported by calling
    /// SdfLayer::Export.
    void Save();

    /// Calls SdfLayer::Save on all dirty session layers and sublayers of 
    /// session layers contributing to this stage.
    ///
    /// This function will emit a warning and skip each dirty anonymous
    /// layer it encounters, since anonymous layers cannot be saved with
    /// SdfLayer::Save. These layers must be manually exported by calling
    /// SdfLayer::Export.
    void SaveSessionLayers();
    /// @}

    /// Return this stage's root session layer.
    pxr::SdfLayerHandle GetSessionLayer() const;

    /// Return this stage's root layer.
    pxr::SdfLayerHandle GetRootLayer() const;


    /// Attempt to ensure a *UsdPrim* at *path* is defined (according to
    /// UsdPrim::IsDefined()) on this stage.
    /// 
    /// If a prim at *path* is already defined on this stage and *typeName* is
    /// empty or equal to the existing prim's typeName, return that prim.
    /// Otherwise author an *SdfPrimSpec* with *specifier* ==
    /// *SdfSpecifierDef* and *typeName* for the prim at *path* at the
    /// current EditTarget.  Author *SdfPrimSpec* s with *specifier* ==
    /// *SdfSpecifierDef* and empty typeName at the current EditTarget for any
    /// nonexistent, or existing but not *Defined* ancestors.
    /// 
    /// The given *path* must be an absolute prim path that does not contain
    /// any variant selections.
    /// 
    /// If it is impossible to author any of the necessary PrimSpecs (for
    /// example, in case *path* cannot map to the current UsdEditTarget's
    /// namespace or one of the ancestors of *path* is inactive on the 
    /// UsdStage), issue an error and return an invalid *UsdPrim*.
    /// 
    /// Note that this method may return a defined prim whose typeName does not
    /// match the supplied *typeName*, in case a stronger typeName opinion
    /// overrides the opinion at the current EditTarget.
    pxr::UsdPrim DefinePrim(const pxr::SdfPath& path, const pxr::TfToken& typeName);



/*
    /// Return the current reference count of this object.
    size_t GetCurrentCount() const;

    /// Return true if only one *TfRefPtr* points to this object.
    bool IsUnique() const;

    const pxr::TfRefCount& GetRefCount() const;

    void SetShouldInvokeUniqueChangedListener(bool shouldCall);

    static void SetUniqueChangedListener(pxr::TfRefBase::UniqueChangedListener listener);

    const pxr::TfWeakBase& __GetTfWeakBase__() const;

    void EnableNotification2() const;

    const void* GetUniqueIdentifier() const;

    /// \overload
    static pxr::UsdStageRefPtr CreateNew(const std::string& identifier, const pxr::SdfLayerHandle& sessionLayer, pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr CreateNew(const std::string& identifier, const pxr::SdfLayerHandle& sessionLayer, const pxr::ArResolverContext& pathResolverContext, pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr CreateNew(const std::string& identifier, const pxr::ArResolverContext& pathResolverContext, pxr::UsdStage::InitialLoadSet load);

    /// Creates a new stage only in memory, analogous to creating an
    /// anonymous SdfLayer.
    /// 
    /// Note that the *pathResolverContext* passed here will apply to all path
    /// resolutions for this stage, regardless of what other context may be
    /// bound at resolve time. If no context is passed in here, Usd will create
    /// one by calling \sa ArResolver::CreateDefaultContext.
    /// 
    /// The initial set of prims to load on the stage can be specified
    /// using the *load* parameter. \sa UsdStage::InitialLoadSet.
    /// 
    /// Invoking an overload that does not take a *sessionLayer* argument will
    /// create a stage with an anonymous in-memory session layer.  To create a
    /// stage without a session layer, pass TfNullPtr (or None in python) as the
    /// *sessionLayer* argument.
    static pxr::UsdStageRefPtr CreateInMemory(pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr CreateInMemory(const std::string& identifier, pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr CreateInMemory(const std::string& identifier, const pxr::ArResolverContext& pathResolverContext, pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr CreateInMemory(const std::string& identifier, const pxr::SdfLayerHandle& sessionLayer, pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr CreateInMemory(const std::string& identifier, const pxr::SdfLayerHandle& sessionLayer, const pxr::ArResolverContext& pathResolverContext, pxr::UsdStage::InitialLoadSet load);

    /// Create a new stage and recursively compose prims defined within and
    /// referenced by the layer at *filePath* which must already exist, subject
    /// to *mask*.
    /// 
    /// These OpenMasked() methods do not automatically consult or populate
    /// UsdStageCache s.
    /// 
    /// The initial set of prims to load on the stage can be specified
    /// using the *load* parameter. \sa UsdStage::InitialLoadSet.
    /// 
    /// Note that the *pathResolverContext* passed here will apply to all path
    /// resolutions for this stage, regardless of what other context may be
    /// bound at resolve time. If no context is passed in here, Usd will create
    /// one by calling \sa ArResolver::CreateDefaultContextForAsset with the
    /// root layer's repository path if the layer has one, otherwise its real 
    /// path.
    static pxr::UsdStageRefPtr OpenMasked(const std::string& filePath, const pxr::UsdStagePopulationMask& mask, pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr OpenMasked(const std::string& filePath, const pxr::ArResolverContext& pathResolverContext, const pxr::UsdStagePopulationMask& mask, pxr::UsdStage::InitialLoadSet load);

    /// Open a stage rooted at *rootLayer*.
    /// 
    /// Attempt to find a stage that matches the passed arguments in a
    /// UsdStageCache if UsdStageCacheContext objects exist on the calling
    /// stack.  If a matching stage is found, return that stage.  Otherwise,
    /// create a new stage rooted at *rootLayer*.
    /// 
    /// Invoking an overload that does not take a *sessionLayer* argument will
    /// create a stage with an anonymous in-memory session layer.  To create a
    /// stage without a session layer, pass TfNullPtr (or None in python) as the
    /// *sessionLayer* argument.
    /// 
    /// The initial set of prims to load on the stage can be specified
    /// using the *load* parameter. \sa UsdStage::InitialLoadSet.
    /// 
    /// Note that the *pathResolverContext* passed here will apply to all path
    /// resolutions for this stage, regardless of what other context may be
    /// bound at resolve time. If no context is passed in here, Usd will create
    /// one by calling \sa ArResolver::CreateDefaultContextForAsset with the
    /// root layer's repository path if the layer has one, otherwise its real 
    /// path.
    /// 
    /// When searching for a matching stage in bound UsdStageCache s, only the
    /// provided arguments matter for cache lookup.  For example, if only a root
    /// layer (or a root layer file path) is provided, the first stage found in
    /// any cache that has that root layer is returned.  So, for example if you
    /// require that the stage have no session layer, you must explicitly
    /// specify TfNullPtr (or None in python) for the sessionLayer argument.
    static pxr::UsdStageRefPtr Open(const pxr::SdfLayerHandle& rootLayer, pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr Open(const pxr::SdfLayerHandle& rootLayer, const pxr::SdfLayerHandle& sessionLayer, pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr Open(const pxr::SdfLayerHandle& rootLayer, const pxr::ArResolverContext& pathResolverContext, pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr Open(const pxr::SdfLayerHandle& rootLayer, const pxr::SdfLayerHandle& sessionLayer, const pxr::ArResolverContext& pathResolverContext, pxr::UsdStage::InitialLoadSet load);

    /// Open a stage rooted at *rootLayer* and with limited population subject
    /// to *mask*.
    /// 
    /// These OpenMasked() methods do not automatically consult or populate
    /// UsdStageCache s.
    /// 
    /// Invoking an overload that does not take a *sessionLayer* argument will
    /// create a stage with an anonymous in-memory session layer.  To create a
    /// stage without a session layer, pass TfNullPtr (or None in python) as the
    /// *sessionLayer* argument.
    /// 
    /// The initial set of prims to load on the stage can be specified
    /// using the *load* parameter. \sa UsdStage::InitialLoadSet.
    /// 
    /// Note that the *pathResolverContext* passed here will apply to all path
    /// resolutions for this stage, regardless of what other context may be
    /// bound at resolve time. If no context is passed in here, Usd will create
    /// one by calling \sa ArResolver::CreateDefaultContextForAsset with the
    /// root layer's repository path if the layer has one, otherwise its real 
    /// path.
    static pxr::UsdStageRefPtr OpenMasked(const pxr::SdfLayerHandle& rootLayer, const pxr::UsdStagePopulationMask& mask, pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr OpenMasked(const pxr::SdfLayerHandle& rootLayer, const pxr::SdfLayerHandle& sessionLayer, const pxr::UsdStagePopulationMask& mask, pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr OpenMasked(const pxr::SdfLayerHandle& rootLayer, const pxr::ArResolverContext& pathResolverContext, const pxr::UsdStagePopulationMask& mask, pxr::UsdStage::InitialLoadSet load);

    /// \overload
    static pxr::UsdStageRefPtr OpenMasked(const pxr::SdfLayerHandle& rootLayer, const pxr::SdfLayerHandle& sessionLayer, const pxr::ArResolverContext& pathResolverContext, const pxr::UsdStagePopulationMask& mask, pxr::UsdStage::InitialLoadSet load);

    ~UsdStage();

    /// Calls SdfLayer::Reload on all layers contributing to this stage,
    /// except session layers and sublayers of session layers.
    /// 
    /// This includes non-session sublayers, references and payloads.
    /// Note that reloading anonymous layers clears their content, so
    /// invoking Reload() on a stage constructed via CreateInMemory()
    /// will clear its root layer.
    /// 
    /// > This method is considered a mutation, which has potentially
    /// global effect!  Unlike the various Load() methods whose actions
    /// affect only **this stage**, Reload() may cause layers to change their
    /// contents, and because layers are global resources shared by
    /// potentially many Stages, calling Reload() on one stage may result in
    /// a mutation to any number of stages.  In general, unless you are
    /// highly confident your stage is the only consumer of its layers, you
    /// should only call Reload() when you are assured no other threads may
    /// be reading from any Stages.
    void Reload();

    /// Indicates whether the specified file is supported by UsdStage.
    /// 
    /// This function is a cheap way to determine whether a
    /// file might be open-able with UsdStage::Open. It is
    /// purely based on the given *filePath* and does not
    /// open the file or perform analysis on the contents.
    /// As such, UsdStage::Open may still fail even if this
    /// function returns true.
    static bool IsSupportedFile(const std::string& filePath);

    /// Calls SdfLayer::Save on all dirty layers contributing to this stage
    /// except session layers and sublayers of session layers.
    /// 
    /// This function will emit a warning and skip each dirty anonymous
    /// layer it encounters, since anonymous layers cannot be saved with
    /// SdfLayer::Save. These layers must be manually exported by calling
    /// SdfLayer::Export.
    void Save();

    /// Calls SdfLayer::Save on all dirty session layers and sublayers of 
    /// session layers contributing to this stage.
    /// 
    /// This function will emit a warning and skip each dirty anonymous
    /// layer it encounters, since anonymous layers cannot be saved with
    /// SdfLayer::Save. These layers must be manually exported by calling
    /// SdfLayer::Export.
    void SaveSessionLayers();

    /// Get the global variant fallback preferences used in new UsdStages.
    static pxr::PcpVariantFallbackMap GetGlobalVariantFallbacks();

    /// Set the global variant fallback preferences used in new
    /// UsdStages. This overrides any fallbacks configured in plugin
    /// metadata, and only affects stages created after this call.
    /// 
    /// > This does not affect existing UsdStages.
    static void SetGlobalVariantFallbacks(const pxr::PcpVariantFallbackMap& fallbacks);

    /// Modify this stage's load rules to load the prim at *path*, its
    /// ancestors, and all of its descendants if *policy* is
    /// UsdLoadWithDescendants.  If *policy* is UsdLoadWithoutDescendants, then
    /// payloads on descendant prims are not loaded.
    /// 
    /// See \ref Usd_workingSetManagement "Working Set Management" for more
    /// information.
    pxr::UsdPrim Load(const pxr::SdfPath& path, pxr::UsdLoadPolicy policy);

    /// Modify this stage's load rules to unload the prim and its descendants
    /// specified by *path*.
    /// 
    /// See \ref Usd_workingSetManagement "Working Set Management" for more
    /// information.
    void Unload(const pxr::SdfPath& path);

    /// Unload and load the given path sets.  The effect is as if the unload set
    /// were processed first followed by the load set.
    /// 
    /// This is equivalent to calling UsdStage::Unload for each item in the
    /// unloadSet followed by UsdStage::Load for each item in the loadSet,
    /// however this method is more efficient as all operations are committed in
    /// a single batch.  The *policy* argument is described in the
    /// documentation for Load().
    /// 
    /// See \ref Usd_workingSetManagement "Working Set Management" for more
    /// information.
    void LoadAndUnload(const pxr::SdfPathSet& loadSet, const pxr::SdfPathSet& unloadSet, pxr::UsdLoadPolicy policy);

    /// Returns a set of all loaded paths.
    /// 
    /// The paths returned are both those that have been explicitly loaded and
    /// those that were loaded as a result of dependencies, ancestors or
    /// descendants of explicitly loaded paths.
    /// 
    /// This method does not return paths to inactive prims.
    /// 
    /// See \ref Usd_workingSetManagement "Working Set Management" for more
    /// information.
    pxr::SdfPathSet GetLoadSet();

    /// Returns an SdfPathSet of all paths that can be loaded.
    /// 
    /// Note that this method does not return paths to inactive prims as they
    /// cannot be loaded.
    /// 
    /// The set returned includes loaded and unloaded paths. To determine the
    /// set of unloaded paths, one can diff this set with the current load set,
    /// for example:
    /// ```
    /// SdfPathSet loaded = stage->GetLoadSet(),
    ///            all = stage->FindLoadable(),
    ///            result;
    /// std::set_difference(loaded.begin(), loaded.end(),
    ///                     all.begin(), all.end(),
    ///                     std::inserter(result, result.end()));
    /// ```
    /// 
    /// See \ref Usd_workingSetManagement "Working Set Management" for more
    /// information.
    pxr::SdfPathSet FindLoadable(const pxr::SdfPath& rootPath);

    /// Return the stage's current UsdStageLoadRules governing payload
    /// inclusion.
    /// 
    /// See \ref Usd_workingSetManagement "Working Set Management" for more
    /// information.
    const pxr::UsdStageLoadRules& GetLoadRules() const;

    /// Set the UsdStageLoadRules to govern payload inclusion on this stage.
    /// This rebuilds the stage's entire prim hierarchy to follow *rules*.
    /// 
    /// Note that subsequent calls to Load(), Unload(), LoadAndUnload() will
    /// modify this stages load rules as described in the documentation for
    /// those member functions.
    /// 
    /// See \ref Usd_workingSetManagement "Working Set Management" for more
    /// information.
    void SetLoadRules(const pxr::UsdStageLoadRules& rules);

    /// Return this stage's population mask.
    pxr::UsdStagePopulationMask GetPopulationMask() const;

    /// Set this stage's population mask and recompose the stage.
    void SetPopulationMask(const pxr::UsdStagePopulationMask& mask);

    /// Expand this stage's population mask to include the targets of all
    /// relationships that pass *relPred* and connections to all attributes
    /// that pass *attrPred* recursively.  If *relPred* is null, include all
    /// relationship targets; if *attrPred* is null, include all connections.
    /// 
    /// This function can be used, for example, to expand a population mask for
    /// a given prim to include bound materials, if those bound materials are
    /// expressed as relationships or attribute connections.
    /// 
    /// See also UsdPrim::FindAllRelationshipTargetPaths() and
    /// UsdPrim::FindAllAttributeConnectionPaths().
    void ExpandPopulationMask(const std::function<_Bool (const pxrInternal_v0_20__pxrReserved__::UsdRelationship &)>& relPred, const std::function<_Bool (const pxrInternal_v0_20__pxrReserved__::UsdAttribute &)>& attrPred);

    /// Return the stage's "pseudo-root" prim, whose name is defined by Usd.
    /// 
    /// The stage's named root prims are namespace children of this prim,
    /// which exists to make the namespace hierarchy a tree instead of a
    /// forest.  This simplifies algorithms that want to traverse all prims.
    /// 
    /// A UsdStage always has a pseudo-root prim, unless there was an error
    /// opening or creating the stage, in which case this method returns
    /// an invalid UsdPrim.
    pxr::UsdPrim GetPseudoRoot() const;

    /// Set the default prim layer metadata in this stage's root layer.  This is
    /// shorthand for:
    /// ```
    /// stage->GetRootLayer()->SetDefaultPrim(prim.GetName());
    /// ```
    /// Note that this function always authors to the stage's root layer.  To
    /// author to a different layer, use the SdfLayer::SetDefaultPrim() API.
    void SetDefaultPrim(const pxr::UsdPrim& prim);

    /// Clear the default prim layer metadata in this stage's root layer.  This
    /// is shorthand for:
    /// ```
    /// stage->GetRootLayer()->ClearDefaultPrim();
    /// ```
    /// Note that this function always authors to the stage's root layer.  To
    /// author to a different layer, use the SdfLayer::SetDefaultPrim() API.
    void ClearDefaultPrim();

    /// Return the UsdPrim at *path*, or an invalid UsdPrim if none exists.
    /// 
    /// If *path* indicates a prim beneath an instance, returns an instance
    /// proxy prim if a prim exists at the corresponding path in that instance's 
    /// master.
    /// 
    /// Unlike OverridePrim() and DefinePrim(), this method will never author
    /// scene description, and therefore is safe to use as a "reader" in the Usd
    /// multi-threading model.
    pxr::UsdPrim GetPrimAtPath(const pxr::SdfPath& path) const;

    /// Return the UsdObject at *path*, or an invalid UsdObject if none exists.
    /// 
    /// If *path* indicates a prim beneath an instance, returns an instance
    /// proxy prim if a prim exists at the corresponding path in that instance's 
    /// master. If *path* indicates a property beneath a child of an instance, 
    /// returns a property whose parent prim is an instance proxy prim.
    /// 
    /// Example:
    /// 
    /// ```
    /// if (UsdObject obj = stage->GetObjectAtPath(path)) {
    ///    if (UsdPrim prim = obj.As<UsdPrim>()) {
    ///        // Do things with prim
    ///    }
    ///    else if (UsdProperty prop = obj.As<UsdProperty>()) {
    ///        // Do things with property. We can also cast to
    ///        // UsdRelationship or UsdAttribute using this same pattern.
    ///    }
    /// }
    /// else {
    ///    // No object at specified path
    /// }
    /// ```
    pxr::UsdObject GetObjectAtPath(const pxr::SdfPath& path) const;

    /// Return the UsdProperty at *path*, or an invalid UsdProperty
    /// if none exists.
    /// 
    /// This is equivalent to 
    /// ```{.cpp}
    /// stage.GetObjectAtPath(path).As<UsdProperty>();
    /// ```
    /// \sa GetObjectAtPath(const SdfPath&) const
    pxr::UsdProperty GetPropertyAtPath(const pxr::SdfPath& path) const;

    /// Return the UsdAttribute at *path*, or an invalid UsdAttribute
    /// if none exists.
    /// 
    /// This is equivalent to 
    /// ```{.cpp}
    /// stage.GetObjectAtPath(path).As<UsdAttribute>();
    /// ```
    /// \sa GetObjectAtPath(const SdfPath&) const
    pxr::UsdAttribute GetAttributeAtPath(const pxr::SdfPath& path) const;

    /// Return the UsdAttribute at *path*, or an invalid UsdAttribute
    /// if none exists.
    /// 
    /// This is equivalent to 
    /// ```{.cpp}
    /// stage.GetObjectAtPath(path).As<UsdRelationship>();
    /// ```
    /// \sa GetObjectAtPath(const SdfPath&) const
    pxr::UsdRelationship GetRelationshipAtPath(const pxr::SdfPath& path) const;

    /// \overload
    /// Traverse the prims on this stage subject to *predicate*.
    /// 
    /// This is equivalent to UsdPrimRange::Stage() .
    pxr::UsdPrimRange Traverse(const pxr::Usd_PrimFlagsPredicate& predicate);

    /// Traverse all the prims on this stage depth-first.
    /// 
    /// \sa Traverse()
    /// \sa UsdPrimRange::Stage()
    pxr::UsdPrimRange TraverseAll();

    /// Attempt to ensure a *UsdPrim* at *path* exists on this stage.
    /// 
    /// If a prim already exists at *path*, return it.  Otherwise author
    /// *SdfPrimSpecs* with *specifier* == *SdfSpecifierOver* and empty
    /// *typeName* at the current EditTarget to create this prim and any
    /// nonexistent ancestors, then return it.
    /// 
    /// The given *path* must be an absolute prim path that does not contain
    /// any variant selections.
    /// 
    /// If it is impossible to author any of the necessary PrimSpecs, (for
    /// example, in case *path* cannot map to the current UsdEditTarget's
    /// namespace) issue an error and return an invalid *UsdPrim*.
    /// 
    /// If an ancestor of *path* identifies an *inactive* prim, author scene
    /// description as described above but return an invalid prim, since the
    /// resulting prim is descendant to an inactive prim.
    pxr::UsdPrim OverridePrim(const pxr::SdfPath& path);

    /// Author an *SdfPrimSpec* with *specifier* == *SdfSpecifierClass* for
    /// the class at root prim path *path* at the current EditTarget.  The
    /// current EditTarget must have UsdEditTarget::IsLocalLayer() == true.
    /// 
    /// The given *path* must be an absolute, root prim path that does not
    /// contain any variant selections.
    /// 
    /// If a defined (UsdPrim::IsDefined()) non-class prim already exists at
    /// *path*, issue an error and return an invalid UsdPrim.
    /// 
    /// If it is impossible to author the necessary PrimSpec, issue an error
    /// and return an invalid *UsdPrim*.
    pxr::UsdPrim CreateClassPrim(const pxr::SdfPath& rootPrimPath);

    /// Remove all scene description for the given *path* and its subtree
    /// <em>in the current UsdEditTarget</em>.
    /// 
    /// This method does not do what you might initially think!  Calling this
    /// function will not necessarily cause the UsdPrim at *path* on this
    /// stage to disappear.  Completely eradicating a prim from a composition
    /// can be an involved process, involving edits to many contributing layers,
    /// some of which (in many circumstances) will not be editable by a client.
    /// This method is a surgical instrument that *can* be used iteratively
    /// to effect complete removal of a prim and its subtree from namespace,
    /// assuming the proper permissions are acquired, but more commonly it
    /// is used to perform layer-level operations; e.g.: ensuring that a given
    /// layer (as expressed by a UsdEditTarget) provides no opinions for a
    /// prim and its subtree.
    /// 
    /// Generally, if your eye is attracted to this method, you probably want
    /// to instead use UsdPrim::SetActive(false) , which will provide the
    /// \ref Usd_ActiveInactive "composed effect" of removing the prim and
    /// its subtree from the composition, without actually removing any
    /// scene description, which as a bonus, means that the effect is 
    /// reversible at a later time!
    bool RemovePrim(const pxr::SdfPath& path);

    /// Return the path resolver context for all path resolution during
    /// composition of this stage. Useful for external clients that want to
    /// resolve paths with the same context as this stage, or create new
    /// stages with the same context.
    pxr::ArResolverContext GetPathResolverContext() const;

    /// Resolve the given identifier using this stage's 
    /// ArResolverContext and the layer of its GetEditTarget()
    /// as an anchor for relative references (e.g. \@./siblingFile.usd\@).   
    /// 
    /// \return a non-empty string containing either the same
    /// identifier that was passed in (if the identifier refers to an
    /// already-opened layer or an "anonymous", in-memory layer), or a resolved
    /// layer filepath.  If the identifier was not resolvable, return the
    /// empty string.
    std::string ResolveIdentifierToEditTarget(const std::string& identifier) const;

    /// Return this stage's local layers in strong-to-weak order.  If
    /// *includeSessionLayers* is true, return the linearized strong-to-weak
    /// sublayers rooted at the stage's session layer followed by the linearized
    /// strong-to-weak sublayers rooted at this stage's root layer.  If
    /// *includeSessionLayers* is false, omit the sublayers rooted at this
    /// stage's session layer.
    pxr::SdfLayerHandleVector GetLayerStack(bool includeSessionLayers) const;

    /// Return a vector of all of the layers *currently* consumed by this
    /// stage, as determined by the composition arcs that were traversed to
    /// compose and populate the stage.
    /// 
    /// The list of consumed layers will change with the stage's load-set and
    /// variant selections, so the return value should be considered only
    /// a snapshot.  The return value will include the stage's session layer,
    /// if it has one. If *includeClipLayers* is true, we will also include
    /// all of the layers that this stage has had to open so far to perform
    /// value resolution of attributes affected by 
    /// \ref Usd_Page_ValueClips "Value Clips"
    pxr::SdfLayerHandleVector GetUsedLayers(bool includeClipLayers) const;

    /// Return true if *layer* is one of the layers in this stage's local,
    /// root layerStack.
    bool HasLocalLayer(const pxr::SdfLayerHandle& layer) const;

    /// Return the stage's EditTarget.
    const pxr::UsdEditTarget& GetEditTarget() const;

    /// Return a UsdEditTarget for editing the layer at index *i* in the
    /// layer stack.  This edit target will incorporate any layer time
    /// offset that applies to the sublayer.
    pxr::UsdEditTarget GetEditTargetForLocalLayer(size_t i);

    /// Return a UsdEditTarget for editing the given local *layer*.
    /// If the given layer appears more than once in the layer stack,
    /// the time offset to the first occurrence will be used.
    pxr::UsdEditTarget GetEditTargetForLocalLayer(const pxr::SdfLayerHandle& layer);

    /// Set the stage's EditTarget.  If *editTarget*.IsLocalLayer(), check to
    /// see if it's a layer in this stage's local LayerStack.  If not, issue an
    /// error and do nothing.  If *editTarget* is invalid, issue an error
    /// and do nothing.  If *editTarget* differs from the stage's current
    /// EditTarget, set the EditTarget and send
    /// UsdNotice::StageChangedEditTarget.  Otherwise do nothing.
    void SetEditTarget(const pxr::UsdEditTarget& editTarget);

    /// Mute the layer identified by *layerIdentifier*.  Muted layers are
    /// ignored by the stage; they do not participate in value resolution
    /// or composition and do not appear in any LayerStack.  If the root 
    /// layer of a reference or payload LayerStack is muted, the behavior 
    /// is as if the muted layer did not exist, which means a composition 
    /// error will be generated.
    /// 
    /// A canonical identifier for *layerIdentifier* will be
    /// computed using ArResolver::ComputeRepositoryPath.  Any layer 
    /// encountered during composition with the same repository path will
    /// be considered muted and ignored.  Relative paths will be assumed 
    /// to be relative to the cache's root layer.  Search paths are immediately 
    /// resolved and the result is used for computing the canonical path.
    /// 
    /// Note that muting a layer will cause this stage to release all
    /// references to that layer.  If no other client is holding on to
    /// references to that layer, it will be unloaded.  In this case, if 
    /// there are unsaved edits to the muted layer, those edits are lost.  
    /// Since anonymous layers are not serialized, muting an anonymous
    /// layer will cause that layer and its contents to be lost in this
    /// case.
    /// 
    /// Muting a layer that has not been used by this stage is not an error.
    /// If that layer is encountered later, muting will take effect and that
    /// layer will be ignored.  
    /// 
    /// The root layer of this stage may not be muted; attempting to do so
    /// will generate a coding error.
    void MuteLayer(const std::string& layerIdentifier);

    /// Unmute the layer identified by *layerIdentifier* if it had
    /// previously been muted.
    void UnmuteLayer(const std::string& layerIdentifier);

    /// Mute and unmute the layers identified in *muteLayers* and
    /// *unmuteLayers*.  
    /// 
    /// This is equivalent to calling UsdStage::UnmuteLayer for each layer 
    /// in *unmuteLayers* followed by UsdStage::MuteLayer for each layer 
    /// in *muteLayers*, however this method is more efficient as all
    /// operations are committed in a single batch.
    void MuteAndUnmuteLayers(const std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >& muteLayers, const std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >& unmuteLayers);

    /// Returns a vector of all layers that have been muted on this stage.
    const std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >& GetMutedLayers() const;

    /// Returns true if the layer specified by *layerIdentifier* is
    /// muted in this cache, false otherwise.  See documentation on
    /// MuteLayer for details on how *layerIdentifier* is compared to the 
    /// layers that have been muted.
    bool IsLayerMuted(const std::string& layerIdentifier) const;

    /// Writes out the composite scene as a single flattened layer into
    /// *filename*.
    /// 
    /// If addSourceFileComment is true, a comment in the output layer
    /// will mention the input layer it was generated from.
    /// 
    /// See UsdStage::Flatten for details of the flattening transformation.
    bool Export(const std::string& filename, bool addSourceFileComment, const pxr::SdfLayer::FileFormatArguments& args) const;

    /// Writes the composite scene as a flattened Usd text
    /// representation into the given *string*.
    /// 
    /// If addSourceFileComment is true, a comment in the output layer
    /// will mention the input layer it was generated from.
    /// 
    /// See UsdStage::Flatten for details of the flattening transformation.
    bool ExportToString(std::string* result, bool addSourceFileComment) const;

    /// Returns a single, anonymous, merged layer for this composite
    /// scene.
    /// 
    /// Specifically, this function removes **most** composition metadata and
    /// authors the resolved values for each object directly into the flattened
    /// layer.
    /// 
    /// All VariantSets are removed and only the currently selected variants
    /// will be present in the resulting layer.
    /// 
    /// Class prims will still exist, however all inherits arcs will have
    /// been removed and the inherited data will be copied onto each child
    /// object. Composition arcs authored on the class itself will be flattened
    /// into the class.
    /// 
    /// Flatten preserves 
    /// \ref Usd_Page_ScenegraphInstancing "scenegraph instancing" by creating 
    /// independent roots for each master currently composed on this stage, and
    /// adding a single internal reference arc on each instance prim to its 
    /// corresponding master.
    /// 
    /// Time samples across sublayer offsets will will have the time offset and
    /// scale applied to each time index.
    /// 
    /// Finally, any deactivated prims will be pruned from the result.
    pxr::SdfLayerRefPtr Flatten(bool addSourceFileComment) const;

    template <typename T>
    bool GetMetadata(const pxr::TfToken& key, T* value) const;

    /// \overload
    bool GetMetadata(const pxr::TfToken& key, pxr::VtValue* value) const;

    /// Returns true if the *key* has a meaningful value, that is, if
    /// GetMetadata() will provide a value, either because it was authored
    /// or because the Stage metadata was defined with a meaningful fallback 
    /// value.
    /// 
    /// Returns false if *key* is not allowed as layer metadata.
    bool HasMetadata(const pxr::TfToken& key) const;

    /// Returns *true* if the *key* has an authored value, *false* if no
    /// value was authored or the only value available is the SdfSchema's
    /// metadata fallback.
    /// 
    /// > If a value for a metadatum *not* legal to author on layers 
    /// is present in the root or session layer (which could happen through
    /// hand-editing or use of certain low-level API's), this method will
    /// still return *false*.
    bool HasAuthoredMetadata(const pxr::TfToken& key) const;

    template <typename T>
    bool SetMetadata(const pxr::TfToken& key, const T& value) const;

    /// \overload
    bool SetMetadata(const pxr::TfToken& key, const pxr::VtValue& value) const;

    /// Clear the value of stage metadatum *key*, if the stage's
    /// current UsdEditTarget is the root or session layer.
    /// 
    /// If the current EditTarget is any other layer, raise a coding error.
    /// \return true if authoring was successful, false otherwise.
    /// Generates a coding error if *key* is not allowed as layer metadata.
    /// 
    /// \sa \ref Usd_OM_Metadata
    bool ClearMetadata(const pxr::TfToken& key) const;

    template <typename T>
    bool GetMetadataByDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath, T* value) const;

    /// overload
    bool GetMetadataByDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath, pxr::VtValue* value) const;

    /// Return true if there exists any authored or fallback opinion for
    /// *key* and *keyPath*.
    /// 
    /// The *keyPath* is a ':'-separated path identifying a value in
    /// subdictionaries stored in the metadata field at *key*.  If
    /// *keyPath* is empty, returns *false*.
    /// 
    /// Returns false if *key* is not allowed as layer metadata.
    /// 
    /// \sa \ref Usd_Dictionary_Type
    bool HasMetadataDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath) const;

    /// Return true if there exists any authored opinion (excluding
    /// fallbacks) for *key* and *keyPath*.  
    /// 
    /// The *keyPath* is a ':'-separated path identifying a value in
    /// subdictionaries stored in the metadata field at *key*.  If 
    /// *keyPath* is empty, returns *false*.
    /// 
    /// \sa \ref Usd_Dictionary_Type
    bool HasAuthoredMetadataDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath) const;

    template <typename T>
    bool SetMetadataByDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath, const T& value) const;

    /// \overload
    bool SetMetadataByDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath, const pxr::VtValue& value) const;

    /// Clear any authored value identified by *key* and *keyPath*
    /// at the current EditTarget.
    /// 
    /// The *keyPath* is a ':'-separated path identifying a path in
    /// subdictionaries stored in the metadata field at *key*.  If
    /// *keyPath* is empty, no action is taken.
    /// 
    /// \return true if the value is cleared successfully, false otherwise.
    /// Generates a coding error if *key* is not allowed as layer metadata.
    /// 
    /// \sa \ref Usd_Dictionary_Type
    bool ClearMetadataByDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath) const;

    /// Returns the stage's start timeCode. If the stage has an associated
    /// session layer with a start timeCode opinion, this value is returned. 
    /// Otherwise, the start timeCode opinion from the root layer is returned.
    double GetStartTimeCode() const;

    /// Sets the stage's start timeCode. 
    /// 
    /// The start timeCode is set in the current EditTarget, if it is the root 
    /// layer of the stage or the session layer associated with the stage. If 
    /// the current EditTarget is neither, a warning is issued and the start 
    /// timeCode is not set.
    void SetStartTimeCode(double );

    /// Returns the stage's end timeCode. If the stage has an associated
    /// session layer with an end timeCode opinion, this value is returned. 
    /// Otherwise, the end timeCode opinion from the root layer is returned.
    double GetEndTimeCode() const;

    /// Sets the stage's end timeCode. 
    /// 
    /// The end timeCode is set in the current EditTarget, if it is the root 
    /// layer of the stage or the session layer associated with the stage. If 
    /// the current EditTarget is neither, a warning is issued and the end 
    /// timeCode is not set.
    void SetEndTimeCode(double );

    /// Returns true if the stage has both start and end timeCodes 
    /// authored in the session layer or the root layer of the stage.
    bool HasAuthoredTimeCodeRange() const;

    /// Returns the stage's timeCodesPerSecond value.
    /// 
    /// The timeCodesPerSecond value scales the time ordinate for the samples
    /// contained in the stage to seconds. If timeCodesPerSecond is 24, then a 
    /// sample at time ordinate 24 should be viewed exactly one second after the 
    /// sample at time ordinate 0.
    /// 
    /// Like SdfLayer::GetTimeCodesPerSecond, this accessor uses a dynamic
    /// fallback to framesPerSecond.  The order of precedence is:
    /// 
    /// - timeCodesPerSecond from session layer
    /// - timeCodesPerSecond from root layer
    /// - framesPerSecond from session layer
    /// - framesPerSecond from root layer
    /// - fallback value of 24
    double GetTimeCodesPerSecond() const;

    /// Sets the stage's timeCodesPerSecond value.
    /// 
    /// The timeCodesPerSecond value is set in the current EditTarget, if it 
    /// is the root layer of the stage or the session layer associated with the 
    /// stage. If the current EditTarget is neither, a warning is issued and no 
    /// value is set.
    /// 
    /// \sa GetTimeCodesPerSecond()
    void SetTimeCodesPerSecond(double timeCodesPerSecond) const;

    /// Returns the stage's framesPerSecond value.
    /// 
    /// This makes an advisory statement about how the contained data can be 
    /// most usefully consumed and presented.  It's primarily an indication of 
    /// the expected playback rate for the data, but a timeline editing tool 
    /// might also want to use this to decide how to scale and label its 
    /// timeline.  
    /// 
    /// The default value of framesPerSecond is 24.
    double GetFramesPerSecond() const;

    /// Sets the stage's framesPerSecond value.
    /// 
    /// The framesPerSecond value is set in the current EditTarget, if it 
    /// is the root layer of the stage or the session layer associated with the 
    /// stage. If the current EditTarget is neither, a warning is issued and no 
    /// value is set.
    /// 
    /// \sa GetFramesPerSecond()
    void SetFramesPerSecond(double framesPerSecond) const;

    /// Sets the default color configuration to be used to interpret the 
    /// per-attribute color-spaces in the composed USD stage. This is specified
    /// as asset path which can be resolved to the color spec file.
    /// 
    /// \ref Usd_ColorConfigurationAPI "Color Configuration API"
    void SetColorConfiguration(const pxr::SdfAssetPath& colorConfig) const;

    /// Returns the default color configuration used to interpret the per-
    /// attribute color-spaces in the composed USD stage.
    /// 
    /// \ref Usd_ColorConfigurationAPI "Color Configuration API"
    pxr::SdfAssetPath GetColorConfiguration() const;

    /// Sets the name of the color management system used to interpret the 
    /// color configuration file pointed at by the colorConfiguration metadata.
    /// 
    /// \ref Usd_ColorConfigurationAPI "Color Configuration API"
    void SetColorManagementSystem(const pxr::TfToken& cms) const;

    /// Sets the name of the color management system to be used for loading 
    /// and interpreting the color configuration file.
    /// 
    /// \ref Usd_ColorConfigurationAPI "Color Configuration API"
    pxr::TfToken GetColorManagementSystem() const;

    /// Returns the global fallback values of 'colorConfiguration' and 
    /// 'colorManagementSystem'. These are set in the plugInfo.json file 
    /// of a plugin, but can be overridden by calling the static method 
    /// SetColorConfigFallbacks().
    /// 
    /// The python wrapping of this method returns a tuple containing 
    /// (colorConfiguration, colorManagementSystem).
    /// 
    /// 
    /// \sa SetColorConfigFallbacks,
    /// \ref Usd_ColorConfigurationAPI "Color Configuration API"
    static void GetColorConfigFallbacks(pxr::SdfAssetPath* colorConfiguration, pxr::TfToken* colorManagementSystem);

    /// Sets the global fallback values of color configuration metadata which 
    /// includes the 'colorConfiguration' asset path and the name of the 
    /// color management system. This overrides any fallback values authored 
    /// in plugInfo files.
    /// 
    /// If the specified value of *colorConfiguration* or 
    /// *colorManagementSystem* is empty, then the corresponding fallback 
    /// value isn't set. In other words, for this call to have an effect, 
    /// at least one value must be non-empty. Additionally, these can't be
    /// reset to empty values.
    /// 
    /// \sa GetColorConfigFallbacks()
    /// \ref Usd_ColorConfigurationAPI "Color Configuration API"
    static void SetColorConfigFallbacks(const pxr::SdfAssetPath& colorConfiguration, const pxr::TfToken& colorManagementSystem);

    /// Sets the interpolation type used during value resolution
    /// for all attributes on this stage.  Changing this will cause a
    /// UsdNotice::StageContentsChanged notice to be sent, as values at
    /// times where no samples are authored may have changed.
    void SetInterpolationType(pxr::UsdInterpolationType interpolationType);

    /// Returns the interpolation type used during value resolution
    /// for all attributes on this stage.
    pxr::UsdInterpolationType GetInterpolationType() const;

    /// Returns all master prims.
    std::vector<pxrInternal_v0_20__pxrReserved__::UsdPrim, std::allocator<pxrInternal_v0_20__pxrReserved__::UsdPrim> > GetMasters() const;

    UsdStage(const pxr::UsdStage& );

    pxr::UsdStage& operator=(const pxr::UsdStage& );

    template <class T>
    struct _IsEditTargetMappable {
        using BoundType = pxr::UsdStage::_IsEditTargetMappable<T>;

    } CPPMM_OPAQUEPTR; // struct _IsEditTargetMappable

    // TODO: fill in explicit instantiations, e.g.:
    // template class _IsEditTargetMappable<int>;
// using _IsEditTargetMappableInt = pxr::UsdStage::_IsEditTargetMappable<int>;


    template <class T>
    struct _HasTypeSpecificResolution {
        using BoundType = pxr::UsdStage::_HasTypeSpecificResolution<T>;

    } CPPMM_OPAQUEPTR; // struct _HasTypeSpecificResolution

    // TODO: fill in explicit instantiations, e.g.:
    // template class _HasTypeSpecificResolution<int>;
// using _HasTypeSpecificResolutionInt = pxr::UsdStage::_HasTypeSpecificResolution<int>;

*/

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct UsdStage


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::UsdStage::_IsEditTargetMappable<int>;
// template class pxr::UsdStage::_HasTypeSpecificResolution<int>;
