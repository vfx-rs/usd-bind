#include <pxr/usd/sdf/layer.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfLayer 
/// 
/// A unit of scene description that you combine with other units of scene
/// description to form a shot, model, set, shader, and so on.
/// 
/// SdfLayer objects provide a persistent way to store layers on the
/// filesystem in .menva files.  Currently the supported file format is 
/// <c>.menva</c>, the ASCII file format. 
/// 
/// The FindOrOpen() method returns a new SdfLayer object with scene description
/// from a <c>.menva</c> file. Once read, a layer remembers which asset it was
/// read from. The Save() method saves the layer back out to the original file.
/// You can use the Export() method to write the layer to a different
/// location. You can use the GetIdentifier() method to get the layer's Id or
/// GetRealPath() to get the resolved, full file path.
/// 
/// Layers can have a timeCode range (startTimeCode and endTimeCode). This range
/// represents the suggested playback range, but has no impact on the extent of 
/// the animation data that may be stored in the layer. The metadatum 
/// "timeCodesPerSecond" is used to annotate how the time ordinate for samples
/// contained in the file scales to seconds. For example, if timeCodesPerSecond
/// is 24, then a sample at time ordinate 24 should be viewed exactly one second
/// after the sample at time ordinate 0.
/// 
/// Compared to Menv2x, layers are most closely analogous to 
/// hooksets, <c>.hook</c> files, and <c>.cue</c> files.
/// 
/// \todo 
/// \li Insert a discussion of subLayers semantics here.
/// 
/// \todo
/// \li Should have validate... methods for rootPrims
struct SdfLayer {
    using BoundType = pxr::SdfLayer;

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

    /// Destructor
    ~SdfLayer();

    /// Noncopyable
    SdfLayer(const pxr::SdfLayer& );

    pxr::SdfLayer& operator=(const pxr::SdfLayer& );

    /// Returns the schema this layer adheres to. This schema provides details
    /// about the scene description that may be authored in this layer.
    const pxr::SdfSchemaBase& GetSchema() const;

    /// Returns the file format used by this layer.
    const pxr::SdfFileFormatConstPtr& GetFileFormat() const;

    /// Returns the file format-specific arguments used during the construction
    /// of this layer.
    const pxr::SdfLayer::FileFormatArguments& GetFileFormatArguments() const;

    /// Creates a new empty layer with the given identifier.
    /// 
    /// Additional arguments may be supplied via the \p args parameter.
    /// These arguments may control behavior specific to the layer's
    /// file format.
    static pxr::SdfLayerRefPtr CreateNew(const std::string& identifier, const pxr::SdfLayer::FileFormatArguments& args);

    /// Creates a new empty layer with the given identifier for a given file
    /// format class.
    /// 
    /// This function has the same behavior as the other CreateNew function,
    /// but uses the explicitly-specified \p fileFormat instead of attempting
    /// to discern the format from \p identifier.
    static pxr::SdfLayerRefPtr CreateNew(const pxr::SdfFileFormatConstPtr& fileFormat, const std::string& identifier, const pxr::SdfLayer::FileFormatArguments& args);

    /// Creates a new empty layer with the given identifier for a given file
    /// format class.
    /// 
    /// The new layer will not be dirty and will not be saved.
    /// 
    /// Additional arguments may be supplied via the \p args parameter. 
    /// These arguments may control behavior specific to the layer's
    /// file format.
    static pxr::SdfLayerRefPtr New(const pxr::SdfFileFormatConstPtr& fileFormat, const std::string& identifier, const pxr::SdfLayer::FileFormatArguments& args);

    /// Return an existing layer with the given \p identifier and \p args.  If
    /// the layer can't be found, an error is posted and a null layer is
    /// returned.
    /// 
    /// Arguments in \p args will override any arguments specified in
    /// \p identifier.
    static pxr::SdfLayerHandle Find(const std::string& identifier, const pxr::SdfLayer::FileFormatArguments& args);

    /// Return an existing layer with the given \p identifier and \p args.
    /// The given \p identifier will be resolved relative to the \p anchor
    /// layer. If the layer can't be found, an error is posted and a null
    /// layer is returned.
    /// 
    /// If the \p anchor layer is invalid, a coding error is raised, and a null
    /// handle is returned.
    /// 
    /// Arguments in \p args will override any arguments specified in
    /// \p identifier.
    static pxr::SdfLayerHandle FindRelativeToLayer(const pxr::SdfLayerHandle& anchor, const std::string& identifier, const pxr::SdfLayer::FileFormatArguments& args);

    /// Return an existing layer with the given \p identifier and \p args, or
    /// else load it. If the layer can't be found or loaded, an error is posted
    /// and a null layer is returned.
    /// 
    /// Arguments in \p args will override any arguments specified in
    /// \p identifier.
    static pxr::SdfLayerRefPtr FindOrOpen(const std::string& identifier, const pxr::SdfLayer::FileFormatArguments& args);

    /// Return an existing layer with the given \p identifier and \p args, or
    /// else load it. The given \p identifier will be resolved relative to the
    /// \p anchor layer. If the layer can't be found or loaded, an error is
    /// posted and a null layer is returned.
    /// 
    /// If the \p anchor layer is invalid, issues a coding error and returns
    /// a null handle.
    /// 
    /// Arguments in \p args will override any arguments specified in
    /// \p identifier.
    static pxr::SdfLayerRefPtr FindOrOpenRelativeToLayer(const pxr::SdfLayerHandle& anchor, const std::string& identifier, const pxr::SdfLayer::FileFormatArguments& args);

    /// Load the given layer from disk as a new anonymous layer. If the
    /// layer can't be found or loaded, an error is posted and a null
    /// layer is returned.
    /// 
    /// The anonymous layer does not retain any knowledge of the backing
    /// file on the filesystem.
    /// 
    /// \p metadataOnly is a flag that asks for only the layer metadata
    /// to be read in, which can be much faster if that is all that is
    /// required.  Note that this is just a hint: some FileFormat readers
    /// may disregard this flag and still fully populate the layer contents.
    /// 
    /// An optional \p tag may be specified.  See CreateAnonymous for details.
    static pxr::SdfLayerRefPtr OpenAsAnonymous(const std::string& layerPath, bool metadataOnly, const std::string& tag);

    /// Returns the data from the absolute root path of this layer.
    pxr::SdfDataRefPtr GetMetadata() const;

    /// Return hints about the layer's current contents.  Any operation that
    /// dirties the layer will invalidate all hints.
    /// \sa SdfLayerHints
    pxr::SdfLayerHints GetHints() const;

    /// Returns handles for all layers currently held by the layer registry.
    static pxr::SdfLayerHandleSet GetLoadedLayers();

    /// Returns whether this layer has no significant data.
    bool IsEmpty() const;

    /// Copies the content of the given layer into this layer.
    /// Source layer is unmodified.
    void TransferContent(const pxr::SdfLayerHandle& layer);

    /// Creates a new \e anonymous layer with an optional \p tag. An anonymous
    /// layer is a layer with a system assigned identifier, that cannot be
    /// saved to disk via Save(). Anonymous layers have an identifier, but no
    /// real path or other asset information fields.
    /// 
    /// Anonymous layers may be tagged, which can be done to aid debugging
    /// subsystems that make use of anonymous layers.  The tag becomes the
    /// display name of an anonymous layer, and is also included in the
    /// generated identifier. Untagged anonymous layers have an empty display
    /// name.
    /// 
    /// Additional arguments may be supplied via the \p args parameter.
    /// These arguments may control behavior specific to the layer's
    /// file format.
    static pxr::SdfLayerRefPtr CreateAnonymous(const std::string& tag, const pxr::SdfLayer::FileFormatArguments& args);

    /// Create an anonymous layer with a specific \p format.
    static pxr::SdfLayerRefPtr CreateAnonymous(const std::string& tag, const pxr::SdfFileFormatConstPtr& format, const pxr::SdfLayer::FileFormatArguments& args);

    /// Returns true if this layer is an anonymous layer.
    bool IsAnonymous() const;

    /// Returns true if the \p identifier is an anonymous layer unique
    /// identifier.
    static bool IsAnonymousLayerIdentifier(const std::string& identifier);

    /// Returns the display name for the given \p identifier, using the same 
    /// rules as GetDisplayName.
    static std::string GetDisplayNameFromIdentifier(const std::string& identifier);

    /// Returns \c true if successful, \c false if an error occurred.
    /// Returns \c false if the layer has no remembered file name or the 
    /// layer type cannot be saved. The layer will not be overwritten if the 
    /// file exists and the layer is not dirty unless \p force is true.
    bool Save(bool force) const;

    /// Exports this layer to a file.
    /// Returns \c true if successful, \c false if an error occurred.
    /// 
    /// If \p comment is not empty, the layer gets exported with the given
    /// comment. Additional arguments may be supplied via the \p args parameter.
    /// These arguments may control behavior specific to the exported layer's
    /// file format.
    /// 
    /// Note that the file name or comment of the original layer is not
    /// updated. This only saves a copy of the layer to the given filename.
    /// Subsequent calls to Save() will still save the layer to it's
    /// previously remembered file name.
    bool Export(const std::string& filename, const std::string& comment, const pxr::SdfLayer::FileFormatArguments& args) const;

    /// Writes this layer to the given string.
    /// 
    /// Returns \c true if successful and sets \p result, otherwise
    /// returns \c false.
    bool ExportToString(std::string* result) const;

    /// Reads this layer from the given string.
    /// 
    /// Returns \c true if successful, otherwise returns \c false.
    bool ImportFromString(const std::string& string);

    /// Clears the layer of all content.
    /// 
    /// This restores the layer to a state as if it had just been created
    /// with CreateNew().  This operation is Undo-able.
    /// 
    /// The fileName and whether journaling is enabled are not affected
    /// by this method.
    void Clear();

    /// Reloads the layer from its persistent representation.
    /// 
    /// This restores the layer to a state as if it had just been created
    /// with FindOrOpen().  This operation is Undo-able.
    /// 
    /// The fileName and whether journaling is enabled are not affected
    /// by this method.
    /// 
    /// When called with force = false (the default), Reload attempts to
    /// avoid reloading layers that have not changed on disk. It does so
    /// by comparing the file's modification time (mtime) to when the
    /// file was loaded. If the layer has unsaved modifications, this
    /// mechanism is not used, and the layer is reloaded from disk. If the 
    /// layer has any 
    /// \ref GetExternalAssetDependencies "external asset dependencies"
    /// their modification state will also be consulted when determining if 
    /// the layer needs to be reloaded.
    /// 
    /// Passing true to the \p force parameter overrides this behavior,
    /// forcing the layer to be reloaded from disk regardless of whether
    /// it has changed.
    bool Reload(bool force);

    /// Reloads the specified layers.
    /// 
    /// Returns \c false if one or more layers failed to reload.
    /// 
    /// See \c Reload() for a description of the \p force flag.
    static bool ReloadLayers(const std::set<pxr::SdfLayer>& layers, bool force);

    /// Imports the content of the given layer path, replacing the content
    /// of the current layer.
    /// Note: If the layer path is the same as the current layer's real path,
    /// no action is taken (and a warning occurs). For this case use
    /// Reload().
    bool Import(const std::string& layerPath);

    /// \deprecated 
    /// Use GetCompositionAssetDependencies instead.
    std::set<std::string> GetExternalReferences() const;

    /// \deprecated 
    /// Use UpdateCompositionAssetDependency instead.
    bool UpdateExternalReference(const std::string& oldAssetPath, const std::string& newAssetPath);

    /// Return paths of all assets this layer depends on due to composition 
    /// fields.
    /// 
    /// This includes the paths of all layers referred to by reference, 
    /// payload, and sublayer fields in this layer. This function only returns 
    /// direct composition dependencies of this layer, i.e. it does not recurse 
    /// to find composition dependencies from its dependent layer assets.
    std::set<std::string> GetCompositionAssetDependencies() const;

    /// Updates the asset path of a composation dependency in this layer.
    /// 
    /// If \p newAssetPath is supplied, the update works as "rename", updating
    /// any occurrence of \p oldAssetPath to \p newAssetPath in all reference,
    /// payload, and sublayer fields.
    /// 
    /// If \p newAssetPath is not given, this update behaves as a "delete", 
    /// removing all occurrences of \p oldAssetPath from all reference, payload,
    /// and sublayer fields.
    bool UpdateCompositionAssetDependency(const std::string& oldAssetPath, const std::string& newAssetPath);

    /// Returns a set of resolved paths to all external asset dependencies
    /// the layer needs to generate its contents. These are additional asset 
    /// dependencies that are determined by the layer's 
    /// \ref SdfFileFormat::GetExternalAssetDependencies "file format" and
    /// will be consulted during Reload() when determining if the layer needs 
    /// to be reloaded. This specifically does not include dependencies related 
    /// to composition, i.e. this will not include assets from references, 
    /// payloads, and sublayers.
    std::set<std::string> GetExternalAssetDependencies() const;

    /// Splits the given layer identifier into its constituent layer path
    /// and arguments.
    static bool SplitIdentifier(const std::string& identifier, std::string* layerPath, pxr::SdfLayer::FileFormatArguments* arguments);

    /// Joins the given layer path and arguments into an identifier.
    static std::string CreateIdentifier(const std::string& layerPath, const pxr::SdfLayer::FileFormatArguments& arguments);

    /// Returns the layer identifier.
    const std::string& GetIdentifier() const;

    /// Sets the layer identifier. 
    /// Note that the new identifier must have the same arguments (if any)
    /// as the old identifier.
    void SetIdentifier(const std::string& identifier);

    void UpdateAssetInfo();

    /// Returns the layer's display name.
    /// 
    /// The display name is the base filename of the identifier.
    std::string GetDisplayName() const;

    /// Returns the resolved path for this layer. This is the path where
    /// this layer exists or may exist after a call to Save().
    const pxr::ArResolvedPath& GetResolvedPath() const;

    /// Returns the resolved path for this layer. This is equivalent to
    /// GetResolvedPath().GetPathString().
    const std::string& GetRealPath() const;

    /// Returns the file extension to use for this layer.
    /// If this layer was loaded from disk, it should match the extension
    /// of the file format it was loaded as; if this is an anonymous
    /// in-memory layer it will be the default extension.
    std::string GetFileExtension() const;

    /// Returns the asset system version of this layer. If a layer is loaded
    /// from a location that is not version managed, or a configured asset
    /// system is not present when the layer is loaded or created, the version
    /// is empty. By default, asset version tracking is disabled; this method
    /// returns empty unless asset version tracking is enabled.
    const std::string& GetVersion() const;

    /// Returns the layer identifier in asset path form. In the presence of a
    /// properly configured path resolver, the asset path is a double-slash
    /// prefixed depot path. If the path resolver is not configured, the asset
    /// path of a layer is empty.
    const std::string& GetRepositoryPath() const;

    /// Returns the asset name associated with this layer.
    const std::string& GetAssetName() const;

    /// Returns resolve information from the last time the layer identifier
    /// was resolved.
    const pxr::VtValue& GetAssetInfo() const;

    /// Returns the path to the asset specified by \p assetPath using this layer
    /// to anchor the path if necessary. Returns \p assetPath if it's empty or
    /// an anonymous layer identifier.
    /// 
    /// This method can be used on asset paths that are authored in this layer
    /// to create new asset paths that can be copied to other layers.  These new
    /// asset paths should refer to the same assets as the original asset
    /// paths. For example, if the underlying ArResolver is filesystem-based and
    /// \p assetPath is a relative filesystem path, this method might return the
    /// absolute filesystem path using this layer's location as the anchor.
    /// 
    /// The returned path should in general not be assumed to be an absolute
    /// filesystem path or any other specific form. It is "absolute" in that it
    /// should resolve to the same asset regardless of what layer it's authored
    /// in.
    std::string ComputeAbsolutePath(const std::string& assetPath) const;

    /// Return the spec type for \a path. This returns SdfSpecTypeUnknown if no
    /// spec exists at \a path.
    pxr::SdfSpecType GetSpecType(const pxr::SdfPath& path) const;

    /// Return whether a spec exists at \a path.
    bool HasSpec(const pxr::SdfPath& path) const;

    /// Return the names of all the fields that are set at \p path.
    std::vector<pxr::TfToken> ListFields(const pxr::SdfPath& path) const;

    /// Return whether a value exists for the given \a path and \a fieldName.
    /// Optionally returns the value if it exists.
    bool HasField(const pxr::SdfPath& path, const pxr::TfToken& fieldName, pxr::VtValue* value) const;

    bool HasField(const pxr::SdfPath& path, const pxr::TfToken& fieldName, pxr::SdfAbstractDataValue* value) const;

    template <typename T>
    bool HasField(const pxr::SdfPath& path, const pxr::TfToken& name, T* value) const;

    /// Return the type of the value for \p name on spec \p path.  If no such
    /// field exists, return typeid(void).
    const std::type_info& GetFieldTypeid(const pxr::SdfPath& path, const pxr::TfToken& name) const;

    /// Return whether a value exists for the given \a path and \a fieldName and
    /// \a keyPath.  The \p keyPath is a ':'-separated path addressing an
    /// element in sub-dictionaries.  Optionally returns the value if it exists.
    bool HasFieldDictKey(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath, pxr::VtValue* value) const;

    bool HasFieldDictKey(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath, pxr::SdfAbstractDataValue* value) const;

    template <typename T>
    bool HasFieldDictKey(const pxr::SdfPath& path, const pxr::TfToken& name, const pxr::TfToken& keyPath, T* value) const;

    /// Return the value for the given \a path and \a fieldName. Returns an
    /// empty value if none is set.
    pxr::VtValue GetField(const pxr::SdfPath& path, const pxr::TfToken& fieldName) const;

    template <typename T>
    T GetFieldAs(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const T& defaultValue) const;

    /// Return the value for the given \a path and \a fieldName at \p
    /// keyPath. Returns an empty value if none is set.  The \p keyPath is a
    /// ':'-separated path addressing an element in sub-dictionaries.
    pxr::VtValue GetFieldDictValueByKey(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath) const;

    /// Set the value of the given \a path and \a fieldName.
    void SetField(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::VtValue& value);

    void SetField(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::SdfAbstractDataConstValue& value);

    template <typename T>
    void SetField(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const T& val);

    /// Set the value of the given \a path and \a fieldName.  The \p keyPath is a
    /// ':'-separated path addressing an element in sub-dictionaries.
    void SetFieldDictValueByKey(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath, const pxr::VtValue& value);

    void SetFieldDictValueByKey(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath, const pxr::SdfAbstractDataConstValue& value);

    template <typename T>
    void SetFieldDictValueByKey(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath, const T& val);

    /// Remove the field at \p path and \p fieldName, if one exists.
    void EraseField(const pxr::SdfPath& path, const pxr::TfToken& fieldName);

    /// Remove the field at \p path and \p fieldName and \p keyPath, if one
    /// exists.  The \p keyPath is a ':'-separated path addressing an
    /// element in sub-dictionaries.
    void EraseFieldDictValueByKey(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath);

    void Traverse(const pxr::SdfPath& path, const pxr::SdfLayer::TraversalFunction& func);

    /// Returns the color configuration asset-path for this layer.
    /// 
    /// The default value is an empty asset-path.
    pxr::SdfAssetPath GetColorConfiguration() const;

    /// Sets the color configuration asset-path for this layer.
    void SetColorConfiguration(const pxr::SdfAssetPath& colorConfiguration);

    /// Returns true if color configuration metadata is set in this layer.
    /// \sa GetColorConfiguration(), SetColorConfiguration()
    bool HasColorConfiguration() const;

    /// Clears the color configuration metadata authored in this layer. 
    /// \sa HasColorConfiguration(), SetColorConfiguration()
    void ClearColorConfiguration();

    /// Returns the color management system used to interpret the color 
    /// configuration asset-path authored in this layer.
    /// 
    /// The default value is an empty token, which implies that the clients 
    /// will have to determine the color management system from the color 
    /// configuration asset path (i.e. from its file extension), if it's 
    /// specified. 
    pxr::TfToken GetColorManagementSystem() const;

    /// Sets the color management system used to interpret the color 
    /// configuration asset-path authored this layer.
    void SetColorManagementSystem(const pxr::TfToken& cms);

    /// Returns true if colorManagementSystem metadata is set in this layer.
    /// \sa GetColorManagementSystem(), SetColorManagementSystem()
    bool HasColorManagementSystem() const;

    /// Clears the 'colorManagementSystem' metadata authored in this layer. 
    /// \sa HascolorManagementSystem(), SetColorManagementSystem()
    void ClearColorManagementSystem();

    /// Returns the comment string for this layer.
    /// 
    /// The default value for comment is "".
    std::string GetComment() const;

    /// Sets the comment string for this layer.
    void SetComment(const std::string& comment);

    /// Return the defaultPrim metadata for this layer.  This field
    /// indicates the name of which root prim should be targeted by a reference
    /// or payload to this layer that doesn't specify a prim path.
    /// 
    /// The default value is the empty token.
    pxr::TfToken GetDefaultPrim() const;

    /// Set the default prim metadata for this layer.  The root prim with this
    /// name will be targeted by a reference or a payload to this layer that
    /// doesn't specify a prim path.  Note that this must be a root prim
    /// <b>name</b> not a path.  E.g. "rootPrim" rather than "/rootPrim".  See
    /// GetDefaultPrim().
    void SetDefaultPrim(const pxr::TfToken& name);

    /// Clear the default prim metadata for this layer.  See GetDefaultPrim()
    /// and SetDefaultPrim().
    void ClearDefaultPrim();

    /// Return true if the default prim metadata is set in this layer.  See
    /// GetDefaultPrim() and SetDefaultPrim().
    bool HasDefaultPrim();

    /// Returns the documentation string for this layer.
    /// 
    /// The default value for documentation is "".
    std::string GetDocumentation() const;

    /// Sets the documentation string for this layer.
    void SetDocumentation(const std::string& documentation);

    /// Returns the layer's start timeCode.
    /// 
    /// The start and end timeCodes of a layer represent the suggested playback 
    /// range.  However, time-varying content is not limited to the timeCode range 
    /// of the layer.
    /// 
    /// The default value for startTimeCode is 0.
    double GetStartTimeCode() const;

    /// Sets the layer's start timeCode.
    void SetStartTimeCode(double startTimecode);

    /// Returns true if the layer has a startTimeCode opinion.
    bool HasStartTimeCode() const;

    /// Clear the startTimeCode opinion.
    void ClearStartTimeCode();

    /// Returns the layer's end timeCode.
    /// The start and end timeCode of a layer represent a suggested playback range.  
    /// However, time-varying content is not limited to the timeCode range of the 
    /// layer.
    /// 
    /// The default value for endTimeCode is 0.
    double GetEndTimeCode() const;

    /// Sets the layer's end timeCode.
    void SetEndTimeCode(double endTimeCode);

    /// Returns true if the layer has an endTimeCode opinion.
    bool HasEndTimeCode() const;

    /// Clear the endTimeCode opinion.
    void ClearEndTimeCode();

    /// Returns the layer's timeCodes per second.
    /// 
    /// Scales the time ordinate for samples contained in the file to seconds.  
    /// If timeCodesPerSecond is 24, then a sample at time ordinate 24 should 
    /// be viewed exactly one second after the sample at time ordinate 0.
    /// 
    /// If this layer doesn't have an authored value for timeCodesPerSecond, but
    /// it does have an authored value for framesPerSecond, this method will
    /// return the value of framesPerSecond.  This "dynamic fallback" allows
    /// layers to lock framesPerSecond and timeCodesPerSecond to the same value
    /// by specifying only framesPerSecond.
    /// 
    /// The default value of timeCodesPerSecond (which is used only if there is
    /// no authored value for either timeCodesPerSecond or framesPerSecond) is
    /// 24.
    double GetTimeCodesPerSecond() const;

    /// Sets the layer's timeCodes per second
    void SetTimeCodesPerSecond(double timeCodesPerSecond);

    /// Returns true if the layer has a timeCodesPerSecond opinion.
    bool HasTimeCodesPerSecond() const;

    /// Clear the timeCodesPerSecond opinion.
    void ClearTimeCodesPerSecond();

    /// Returns the layer's frames per second.
    /// 
    /// This makes an advisory statement about how the contained data can be 
    /// most usefully consumed and presented.  It's primarily an indication of 
    /// the expected playback rate for the data, but a timeline editing tool 
    /// might also want to use this to decide how to scale and label its 
    /// timeline.  
    /// 
    /// The default  value for framesPerSecond is 24.
    double GetFramesPerSecond() const;

    /// Sets the layer's frames per second
    void SetFramesPerSecond(double framesPerSecond);

    /// Returns true if the layer has a frames per second opinion.
    bool HasFramesPerSecond() const;

    /// Clear the framesPerSecond opinion.
    void ClearFramesPerSecond();

    /// Returns the layer's frame precision.
    int GetFramePrecision() const;

    /// Sets the layer's frame precision.
    void SetFramePrecision(int framePrecision);

    /// Returns true if the layer has a frames precision opinion.
    bool HasFramePrecision() const;

    /// Clear the framePrecision opinion.
    void ClearFramePrecision();

    /// Returns the layer's owner.
    std::string GetOwner() const;

    /// Sets the layer's owner.
    void SetOwner(const std::string& owner);

    /// Returns true if the layer has an owner opinion.
    bool HasOwner() const;

    /// Clear the owner opinion.
    void ClearOwner();

    /// Returns the layer's session owner.
    /// Note: This should only be used by session layers.
    std::string GetSessionOwner() const;

    /// Sets the layer's session owner.
    /// Note: This should only be used by session layers.
    void SetSessionOwner(const std::string& owner);

    /// Returns true if the layer has a session owner opinion.
    bool HasSessionOwner() const;

    void ClearSessionOwner();

    /// Returns true if the layer's sublayers are expected to have owners.
    bool GetHasOwnedSubLayers() const;

    /// Sets whether the layer's sublayers are expected to have owners.
    void SetHasOwnedSubLayers(bool );

    /// Returns the CustomLayerData dictionary associated with this layer.
    /// 
    /// This is a dictionary is custom metadata that is associated with
    /// this layer. It allows users to encode any set of information for
    /// human or program consumption.
#if 0
    pxr::VtDictionary GetCustomLayerData() const;
#endif

    /// Sets the CustomLayerData dictionary associated with this layer.
    void SetCustomLayerData(const pxr::VtDictionary& value);

    /// Returns true if CustomLayerData is authored on the layer.
    bool HasCustomLayerData() const;

    /// Clears out the CustomLayerData dictionary associated with this layer.
    void ClearCustomLayerData();

    /// Returns a vector of the layer's root prims
    pxr::SdfLayer::RootPrimsView GetRootPrims() const;

    /// Sets a new vector of root prims.
    /// You can re-order, insert and remove prims but cannot 
    /// rename them this way.  If any of the listed prims have 
    /// an existing owner, they will be reparented.
    void SetRootPrims(const pxr::SdfPrimSpecHandleVector& rootPrims);

    /// Adds a new root prim at the given index.
    /// If the index is -1, the prim is inserted at the end.
    /// The layer will take ownership of the prim, via a TfRefPtr.
    /// Returns true if successful, false if failed (for example,
    /// due to a duplicate name).
    bool InsertRootPrim(const pxr::SdfPrimSpecHandle& prim, int index);

    /// Remove a root prim.
    void RemoveRootPrim(const pxr::SdfPrimSpecHandle& prim);

    /// Cause \p spec to be removed if it no longer affects the scene when the 
    /// last change block is closed, or now if there are no change blocks.
    void ScheduleRemoveIfInert(const pxr::SdfSpec& spec);

    /// Removes scene description that does not affect the scene in the 
    /// layer namespace beginning with \p prim.
    /// 
    /// Calling this method on a prim will only clean up prims with specifier
    /// 'over' that are not contributing any opinions.  The \p prim will only
    /// be removed if all of its nameChildren are also inert. The hierarchy 
    /// \p prim is defined in will be pruned up to the layer root for each 
    /// successive inert parent that has specifier 'over'.
    /// 
    /// note: PrimSpecs that contain any PropertySpecs, even PropertySpecs with 
    ///       required fields only (see PropertySpec::HasRequiredFieldsOnly) 
    ///       are not considered inert, and thus the prim won't be removed.
    void RemovePrimIfInert(pxr::SdfPrimSpecHandle prim);

    /// Removes prop if it has only required fields (i.e. is not 
    /// contributing any opinions to the scene other than property 
    /// instantiation).
    /// 
    /// The hierarchy \p prop is defined in will then be pruned up to the 
    /// layer root for each successive inert parent.
    void RemovePropertyIfHasOnlyRequiredFields(pxr::SdfPropertySpecHandle prop);

    /// Removes all scene description in this layer that does not affect the
    /// scene.
    /// 
    /// This method walks the layer namespace hierarchy and removes any prims
    /// and that are not contributing any opinions.
    void RemoveInertSceneDescription();

    /// Returns the list of prim names for this layer's reorder rootPrims
    /// statement.
    /// 
    /// See SetRootPrimOrder() for more info.
    pxr::SdfNameOrderProxy GetRootPrimOrder() const;

    /// Given a list of (possible sparse) prim names, authors a reorder
    /// rootPrims statement for this prim. 
    /// 
    /// This reorder statement can modify the order of root prims that have 
    /// already been explicitly ordered with InsertRootPrim() or SetRootPrims();
    /// but only during composition.  Therefore, GetRootPrims(), 
    /// InsertRootPrim(), SetRootPrims(), etc. do not read, author, or pay any 
    /// attention to this statement.
    void SetRootPrimOrder(const std::vector<pxr::TfToken>& names);

    /// Adds a new root prim name in the root prim order.
    /// If the index is -1, the name is inserted at the end.
    void InsertInRootPrimOrder(const pxr::TfToken& name, int index);

    /// Removes a root prim name from the root prim order.
    void RemoveFromRootPrimOrder(const pxr::TfToken& name);

    /// Removes a root prim name from the root prim order by index.
    void RemoveFromRootPrimOrderByIndex(int index);

    /// Reorders the given list of prim names according to the reorder rootPrims
    /// statement for this layer.
    /// 
    /// This routine employs the standard list editing operations for ordered
    /// items in a ListEditor.
    void ApplyRootPrimOrder(std::vector<pxr::TfToken>* vec) const;

    /// Returns a proxy for this layer's sublayers.
    /// 
    /// Sub-layers are the weaker layers directly included by this layer.
    /// They're in order from strongest to weakest and they're all weaker
    /// than this layer.
    /// 
    /// Edits through the proxy changes the sublayers.  If this layer does
    /// not have any sublayers the proxy is empty.
    /// 
    /// Sub-layer paths are asset paths, and thus must contain valid asset path
    /// characters (UTF-8 without C0 and C1 controls).  See SdfAssetPath for
    /// more details.
    pxr::SdfSubLayerProxy GetSubLayerPaths() const;

    /// Sets the paths of the layer's sublayers.
    void SetSubLayerPaths(const std::vector<std::string>& newPaths);

    /// Returns the number of sublayer paths (and offsets).
    size_t GetNumSubLayerPaths() const;

    /// Inserts new sublayer path at the given index.
    /// 
    /// The default index of -1 means to insert at the end.
    void InsertSubLayerPath(const std::string& path, int index);

    /// Removes sublayer path at the given index.
    void RemoveSubLayerPath(int index);

    /// Returns the layer offsets for all the subLayer paths.
    pxr::SdfLayerOffsetVector GetSubLayerOffsets() const;

    /// Returns the layer offset for the subLayer path at the given index.
    pxr::SdfLayerOffset GetSubLayerOffset(int index) const;

    /// Sets the layer offset for the subLayer path at the given index.
    void SetSubLayerOffset(const pxr::SdfLayerOffset& offset, int index);

    /// Returns the set of muted layer paths.
    static std::set<std::__cxx11::basic_string<char>, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::__cxx11::basic_string<char> > > GetMutedLayers();

    /// Returns \c true if the current layer is muted.
    bool IsMuted() const;

    /// Returns \c true if the specified layer path is muted.
    static bool IsMuted(const std::string& path);

    /// Mutes the current layer if \p muted is \c true, and unmutes it
    /// otherwise.
    void SetMuted(bool muted);

    /// Add the specified path to the muted layers set.
    static void AddToMutedLayers(const std::string& mutedPath);

    /// Remove the specified path from the muted layers set.
    static void RemoveFromMutedLayers(const std::string& mutedPath);

    /// Returns the layer's pseudo-root prim.
    /// 
    /// The layer's root prims are namespace children of the pseudo-root.
    /// The pseudo-root exists to make the namespace hierarchy a tree
    /// instead of a forest.  This simplifies the implementation of
    /// some algorithms.
    /// 
    /// A layer always has a pseudo-root prim.
    pxr::SdfPrimSpecHandle GetPseudoRoot() const;

    /// Returns the object at the given \p path.
    /// 
    /// There is no distinction between an absolute and relative path
    /// at the SdLayer level.
    /// 
    /// Returns \c NULL if there is no object at \p path.
    pxr::SdfSpecHandle GetObjectAtPath(const pxr::SdfPath& path);

    /// Returns the prim at the given \p path.
    /// 
    /// Returns \c NULL if there is no prim at \p path.
    /// This is simply a more specifically typed version of
    /// \c GetObjectAtPath().
    pxr::SdfPrimSpecHandle GetPrimAtPath(const pxr::SdfPath& path);

    /// Returns a property at the given \p path.
    /// 
    /// Returns \c NULL if there is no property at \p path.
    /// This is simply a more specifically typed version of
    /// \c GetObjectAtPath().
    pxr::SdfPropertySpecHandle GetPropertyAtPath(const pxr::SdfPath& path);

    /// Returns an attribute at the given \p path.
    /// 
    /// Returns \c NULL if there is no attribute at \p path.
    /// This is simply a more specifically typed version of
    /// \c GetObjectAtPath().
    pxr::SdfAttributeSpecHandle GetAttributeAtPath(const pxr::SdfPath& path);

    /// Returns a relationship at the given \p path.
    /// 
    /// Returns \c NULL if there is no relationship at \p path.
    /// This is simply a more specifically typed version of
    /// \c GetObjectAtPath().
    pxr::SdfRelationshipSpecHandle GetRelationshipAtPath(const pxr::SdfPath& path);

    /// Returns true if the caller is allowed to modify the layer and 
    /// false otherwise.  A layer may have to perform some action to acquire 
    /// permission to be edited.
    bool PermissionToEdit() const;

    /// Returns true if the caller is allowed to save the layer to its 
    /// existing fileName and false otherwise.
    bool PermissionToSave() const;

    /// Sets permission to edit.
    void SetPermissionToEdit(bool allow);

    /// Sets permission to save.
    void SetPermissionToSave(bool allow);

    /// Check if a batch of namespace edits will succeed.  This returns
    /// \c SdfNamespaceEditDetail::Okay if they will succeed as a batch,
    /// \c SdfNamespaceEditDetail::Unbatched if the edits will succeed but
    /// will be applied unbatched, and \c SdfNamespaceEditDetail::Error
    /// if they will not succeed.  No edits will be performed in any case.
    /// 
    /// If \p details is not \c NULL and the method does not return \c Okay
    /// then details about the problems will be appended to \p details.  A
    /// problem may cause the method to return early, so \p details may not
    /// list every problem.
    /// 
    /// Note that Sdf does not track backpointers so it's unable to fix up
    /// targets/connections to namespace edited objects.  Clients must fix
    /// those to prevent them from falling off.  In addition, this method
    /// will report failure if any relational attribute with a target to
    /// a namespace edited object is subsequently edited (in the same
    /// batch).  Clients should perform edits on relational attributes
    /// first.
    /// 
    /// Clients may wish to report unbatch details to the user to confirm
    /// that the edits should be applied unbatched.  This will give the
    /// user a chance to correct any problems that cause batching to fail
    /// and try again.
    pxr::SdfNamespaceEditDetail::Result CanApply(const pxr::SdfBatchNamespaceEdit& , pxr::SdfNamespaceEditDetailVector* details) const;

    /// Performs a batch of namespace edits.  Returns \c true on success
    /// and \c false on failure.  On failure, no namespace edits will have
    /// occurred.
    bool Apply(const pxr::SdfBatchNamespaceEdit& );

    /// Returns the state delegate used to manage this layer's authoring
    /// state.
    pxr::SdfLayerStateDelegateBasePtr GetStateDelegate() const;

    /// Sets the state delegate used to manage this layer's authoring
    /// state. The 'dirty' state of this layer will be transferred to
    /// the new delegate.
    void SetStateDelegate(const pxr::SdfLayerStateDelegateBaseRefPtr& delegate);

    /// Returns \c true if the layer is dirty, i.e. has changed from
    /// its persistent representation.
    bool IsDirty() const;

    /// \name Time-sample API
    /// @{
    std::set<double> ListAllTimeSamples() const;

    std::set<double> ListTimeSamplesForPath(const pxr::SdfPath& path) const;

    bool GetBracketingTimeSamples(double time, double* tLower, double* tUpper);

    size_t GetNumTimeSamplesForPath(const pxr::SdfPath& path) const;

    bool GetBracketingTimeSamplesForPath(const pxr::SdfPath& path, double time, double* tLower, double* tUpper);

    bool QueryTimeSample(const pxr::SdfPath& path, double time, pxr::VtValue* value) const;

    bool QueryTimeSample(const pxr::SdfPath& path, double time, pxr::SdfAbstractDataValue* value) const;

    template <typename T>
    bool QueryTimeSample(const pxr::SdfPath& path, double time, T* data) const;

    void SetTimeSample(const pxr::SdfPath& path, double time, const pxr::VtValue& value);

    void SetTimeSample(const pxr::SdfPath& path, double time, const pxr::SdfAbstractDataConstValue& value);

    template <typename T>
    void SetTimeSample(const pxr::SdfPath& path, double time, const T& value);

    void EraseTimeSample(const pxr::SdfPath& path, double time);

    static void DumpLayerInfo();

    bool WriteDataFile(const std::string& filename);

#if 0
    enum _ReloadResult {
        _ReloadFailed = 0,
        _ReloadSucceeded = 1,
        _ReloadSkipped = 2,
    };
#endif
} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct SdfLayer


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
