#include <pxr/usd/sdf/attributeSpec.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfAttributeSpec
/// 
/// A subclass of SdfPropertySpec that holds typed data.
/// 
/// Attributes are typed data containers that can optionally hold any
/// and all of the following:
/// \li A single default value.
/// \li An array of knot values describing how the value varies over time.
/// \li A dictionary of posed values, indexed by name.
/// 
/// The values contained in an attribute must all be of the same type.  In the
/// Python API the \c typeName property holds the attribute type.  In the C++
/// API, you can get the attribute type using the GetTypeName() method.  In
/// addition, all values, including all knot values, must be the same shape.
/// For information on shapes, see the VtShape class reference in the C++
/// documentation.
struct SdfAttributeSpec {
    using BoundType = pxr::SdfAttributeSpec;

    /// Returns the SdfSchemaBase for the layer that owns this spec.
    const pxr::SdfSchemaBase& GetSchema() const;

    /// Returns the SdfSpecType specifying the spec type this object
    /// represents.
    pxr::SdfSpecType GetSpecType() const;

    /// Returns true if this object is invalid or expired.
    bool IsDormant() const;

    /// Returns the layer that this object belongs to.
    pxr::SdfLayerHandle GetLayer() const;

    /// Returns the scene path of this object.
    pxr::SdfPath GetPath() const;

    /// Returns whether this object's layer can be edited.
    bool PermissionToEdit() const;

    /// Returns the full list of info keys currently set on this object.
    /// \note This does not include fields that represent names of children.
    std::vector<pxr::TfToken, std::allocator<pxr::TfToken> > ListInfoKeys() const;

    /// Returns the list of metadata info keys for this object.
    /// 
    /// This is not the complete list of keys, it is only those that
    /// should be considered to be metadata by inspectors or other 
    /// presentation UI.
    /// 
    /// This is interim API which is likely to change.  Only editors with
    /// an immediate specific need (like the Inspector) should use this API.
    std::vector<pxr::TfToken, std::allocator<pxr::TfToken> > GetMetaDataInfoKeys() const;

    /// Returns this metadata key's displayGroup.
    pxr::TfToken GetMetaDataDisplayGroup(const pxr::TfToken& key) const;

    /// Gets the value for the given metadata key.
    /// 
    /// This is interim API which is likely to change.  Only editors with
    /// an immediate specific need (like the Inspector) should use this API.
#if 0
    pxr::VtValue GetInfo(const pxr::TfToken& key) const;
#endif

    /// Sets the value for the given metadata key.
    /// 
    /// It is an error to pass a value that is not the correct type for
    /// that given key.
    /// 
    /// This is interim API which is likely to change.  Only editors with
    /// an immediate specific need (like the Inspector) should use this API.
    void SetInfo(const pxr::TfToken& key, const pxr::VtValue& value);

    /// Sets the value for \p entryKey to \p value within the dictionary 
    ///        with the given metadata key \p dictionaryKey
    void SetInfoDictionaryValue(const pxr::TfToken& dictionaryKey, const pxr::TfToken& entryKey, const pxr::VtValue& value);

    /// Returns whether there is a setting for the scene spec info 
    /// with the given key.
    /// 
    /// When asked for a value for one of its scene spec info, a valid value
    /// will always be returned. But if this API returns \b false for a scene
    /// spec info, the value of that info will be the defined default value.
    /// 
    /// When dealing with a composedLayer, it is not necessary to worry about
    /// whether a scene spec info "has a value" because the composed layer will
    /// always have a valid value, even if it is the default.
    /// 
    /// A spec may or may not have an expressed value for some of its
    /// scene spec info.
    /// 
    /// This is interim API which is likely to change.  Only editors with
    /// an immediate specific need (like the Inspector) should use this API.
    bool HasInfo(const pxr::TfToken& key) const;

    /// Clears the value for scene spec info with the given \a key.
    /// 
    /// After calling this, HasInfo() will return \b false.
    /// To make HasInfo() return \b true just set a value for that
    /// scene spec info.
    /// 
    /// This is interim API which is likely to change.  Only editors with
    /// an immediate specific need (like the Inspector) should use this API.
    void ClearInfo(const pxr::TfToken& key);

    /// Returns the data type for the info with the given \a key.
    pxr::TfType GetTypeForInfo(const pxr::TfToken& key) const;

    /// Returns the fallback for the info with the given \a key.
    const pxr::VtValue& GetFallbackForInfo(const pxr::TfToken& key) const;

    /// Writes this spec to the given stream.
    bool WriteToStream(std::ostream& , size_t indent) const;

    /// Returns whether this object has no significant data.
    /// 
    /// "Significant" here means that the object contributes opinions to
    /// a scene. If this spec has any child scenegraph objects (e.g.,
    /// prim or property spec), it will be considered significant even if
    /// those child objects are not.
    /// However, if \p ignoreChildren is \c true, these child objects
    /// will be ignored. 
    bool IsInert(bool ignoreChildren) const;

    /// Returns all fields with values.
    std::vector<pxr::TfToken, std::allocator<pxr::TfToken> > ListFields() const;

    /// Returns \c true if the spec has a non-empty value with field
    /// name \p name.
    bool HasField(const pxr::TfToken& name) const;

    template <typename T>
    bool HasField(const pxr::TfToken& name, T* value) const;

    /// Returns a field value by name.
#if 0
    pxr::VtValue GetField(const pxr::TfToken& name) const;
#endif

    template <typename T>
    T GetFieldAs(const pxr::TfToken& name, const T& defaultValue) const;

    /// Sets a field value as a boxed VtValue.
    bool SetField(const pxr::TfToken& name, const pxr::VtValue& value);

    template <typename T>
    bool SetField(const pxr::TfToken& name, const T& value);

    /// Clears a field.
    bool ClearField(const pxr::TfToken& name);

    /// \name Comparison operators
    /// @{
    bool operator==(const pxr::SdfSpec& rhs) const;

    bool operator<(const pxr::SdfSpec& rhs) const;

    /// Returns the property's name.
    const std::string& GetName() const;

    /// Returns the property's name, as a token.
    pxr::TfToken GetNameToken() const;

    /// Returns true if setting the property spec's name to \p newName
    /// will succeed.
    /// 
    /// Returns false if it won't, and sets \p whyNot with a string
    /// describing why not.
    bool CanSetName(const std::string& newName, std::string* whyNot) const;

    /// Sets the property's name.
    /// 
    /// A Prim's properties must be unique by name. Setting the
    /// name to the same name as an existing property is an error.
    /// 
    /// Setting \p validate to false, will skip validation of the newName
    /// (that is, CanSetName will not be called).
    bool SetName(const std::string& newName, bool validate);

    /// Returns true if the given name is considered a valid name for a
    /// property.  A valid name is not empty, and does not use invalid
    /// characters (such as '/', '[', or '.').
    static bool IsValidName(const std::string& name);

    /// Returns the owner prim or relationship of this property.
#if 0
    pxr::SdfSpecHandle GetOwner() const;
#endif

    /// Returns the property's custom data.
    /// 
    /// The default value for custom data is an empty dictionary.
    /// 
    /// Custom data is for use by plugins or other non-tools supplied
    /// extensions that need to be able to store data attached to arbitrary
    /// scene objects.  Note that if the only objects you want to store data
    /// on are prims, using custom attributes is probably a better choice.
    /// But if you need to possibly store this data on attributes or
    /// relationships or as annotations on reference arcs, then custom data
    /// is an appropriate choice.
#if 0
    pxr::SdfDictionaryProxy GetCustomData() const;
#endif

    /// Returns the asset info dictionary for this property.
    /// 
    /// The default value is an empty dictionary. 
    /// 
    /// The asset info dictionary is used to annotate SdfAssetPath-valued 
    /// attributes pointing to the root-prims of assets (generally organized 
    /// as models) with various data related to asset management. For example, 
    /// asset name, root layer identifier, asset version etc.
    /// 
    /// \note It is only valid to author assetInfo on attributes that are of 
    /// type SdfAssetPath.
#if 0
    pxr::SdfDictionaryProxy GetAssetInfo() const;
#endif

    /// Sets a property custom data entry.
    /// 
    /// If \p value is empty, then this removes the given custom data entry.
    void SetCustomData(const std::string& name, const pxr::VtValue& value);

    /// Sets a asset info entry for this property.
    /// 
    /// If \p value is empty, then this removes the given asset info entry.
    /// 
    /// \sa GetAssetInfo()
    void SetAssetInfo(const std::string& name, const pxr::VtValue& value);

    /// Returns the displayGroup string for this property spec.
    /// 
    /// The default value for displayGroup is empty string.
    std::string GetDisplayGroup() const;

    /// Sets the displayGroup string for this property spec.
    void SetDisplayGroup(const std::string& value);

    /// Returns the displayName string for this property spec.
    /// 
    /// The default value for displayName is empty string.
    std::string GetDisplayName() const;

    /// Sets the displayName string for this property spec.
    void SetDisplayName(const std::string& value);

    /// Returns the documentation string for this property spec.
    /// 
    /// The default value for documentation is empty string.
    std::string GetDocumentation() const;

    /// Sets the documentation string for this property spec.
    void SetDocumentation(const std::string& value);

    /// Returns whether this property spec will be hidden in browsers.
    /// 
    /// The default value for hidden is false.
    bool GetHidden() const;

    /// Sets whether this property spec will be hidden in browsers.
    void SetHidden(bool value);

    /// Returns the property's permission restriction.
    /// 
    /// The default value for permission is SdfPermissionPublic.
#if 0
    pxr::SdfPermission GetPermission() const;
#endif

    /// Sets the property's permission restriction.
    void SetPermission(pxr::SdfPermission value);

    /// Returns the prefix string for this property spec.
    /// 
    /// The default value for prefix is "".
    std::string GetPrefix() const;

    /// Sets the prefix string for this property spec.
    void SetPrefix(const std::string& value);

    /// Returns the suffix string for this property spec.
    /// 
    /// The default value for suffix is "".
    std::string GetSuffix() const;

    /// Sets the suffix string for this property spec.
    void SetSuffix(const std::string& value);

    /// Returns the property's symmetric peer.
    /// 
    /// The default value for the symmetric peer is an empty string.
    std::string GetSymmetricPeer() const;

    /// Sets the property's symmetric peer.
    /// 
    /// If \p peerName is empty, then this removes any symmetric peer for the
    /// given property.
    void SetSymmetricPeer(const std::string& peerName);

    /// Returns the property's symmetry arguments.
    /// 
    /// The default value for symmetry arguments is an empty dictionary.
#if 0
    pxr::SdfDictionaryProxy GetSymmetryArguments() const;
#endif

    /// Sets a property symmetry argument.
    /// 
    /// If \p value is empty, then this removes the argument with the given
    /// \p name.
    void SetSymmetryArgument(const std::string& name, const pxr::VtValue& value);

    /// Returns the property's symmetry function.
    /// 
    /// The default value for the symmetry function is an empty token.
    pxr::TfToken GetSymmetryFunction() const;

    /// Sets the property's symmetry function.
    /// 
    /// If \p functionName is empty, then this removes any symmetry function
    /// for the given property.
    void SetSymmetryFunction(const pxr::TfToken& functionName);

    /// Returns the entire set of time samples.
#if 0
    pxr::SdfTimeSampleMap GetTimeSampleMap() const;
#endif

    /// Returns the TfType representing the value type this property holds.
    pxr::TfType GetValueType() const;

    /// Returns the name of the value type that this property holds.
    /// 
    /// Returns the typename used to represent the types of value held by
    /// this attribute.
#if 0
    pxr::SdfValueTypeName GetTypeName() const;
#endif

    /// Returns the attribute's default value.
    /// 
    /// If it doesn't have a default value, an empty VtValue is returned.
#if 0
    pxr::VtValue GetDefaultValue() const;
#endif

    /// Sets the attribute's default value.
    /// 
    /// Returns true if successful, false otherwise.  Fails if \p defaultValue
    /// has wrong type.
    bool SetDefaultValue(const pxr::VtValue& defaultValue);

    /// Returns true if a default value is set for this attribute.
    bool HasDefaultValue() const;

    /// Clear the attribute's default value.
    void ClearDefaultValue();

    /// Returns the comment string for this property spec.
    /// 
    /// The default value for comment is "".
    std::string GetComment() const;

    /// Sets the comment string for this property spec.
    void SetComment(const std::string& value);

    /// Returns true if this spec declares a custom property
    bool IsCustom() const;

    /// Sets whether this spec declares a custom property
    void SetCustom(bool custom);

    /// Returns the variability of the property.
    /// 
    /// An attribute's variability may be \c Varying (the default),
    /// \c Uniform, \c Config, or \c Computed.
    /// 
    /// A relationship's variability may be \c Varying or \c Uniform (the
    /// default)
    /// 
    /// <ul>
    ///     <li>\c Varying attributes may be directly authored, animated and
    ///         affected by \p Actions.  They are the most flexible.
    ///         Varying relationships can have a default and an anim spline,
    ///         in addition to a list of targets.
    /// 
    ///     <li>\c Uniform attributes may be authored only with non-animated
    ///         values (default values).  They cannot be affected by \p Actions,
    ///         but they can be connected to other Uniform attributes.
    ///         Uniform relationships have a list of targets but do not have
    ///         default or anim spline values.
    /// 
    ///     <li>\c Config attributes are the same as Uniform except that a Prim
    ///         can choose to alter its collection of built-in properties based
    ///         on the values of its Config attributes.
    /// 
    ///     <li>\c Computed attributes may not be authored in scene description.
    ///         Prims determine the values of their Computed attributes through
    ///         Prim-specific computation.  They may not be connected.
    /// </ul>
    pxr::SdfVariability GetVariability() const;

    /// Returns true if this PropertySpec has no significant data other than
    /// just what is necessary for instantiation.
    /// 
    /// For example, "double foo" has only required fields, but "double foo = 3"
    /// has more than just what is required.
    /// 
    /// This is similar to IsInert except that IsInert will always return false 
    /// even for properties that have only required fields; PropertySpecs are 
    /// never considered inert because even a spec with only required fields 
    /// will cause instantiation of on-demand properties.
    bool HasOnlyRequiredFields() const;

    SdfAttributeSpec();

    SdfAttributeSpec(const pxr::SdfAttributeSpec& spec);

    SdfAttributeSpec(const pxr::Sdf_IdentityRefPtr& identity);

    /// Constructs a new prim attribute instance.
    /// 
    /// Creates and returns a new attribute for the given prim.
    /// The \p owner will own the newly created attribute.
#if 0
    static pxr::SdfAttributeSpecHandle New(const pxr::SdfPrimSpecHandle& owner, const std::string& name, const pxr::SdfValueTypeName& typeName, pxr::SdfVariability variability, bool custom);
#endif

    /// Returns a proxy for editing the attribute's connection paths.
    /// 
    /// The returned proxy, which is an SdfListEditorProxy, modifies the
    /// SdfListOp that represents this attribute's connections.
    pxr::SdfConnectionsProxy GetConnectionPathList() const;

    /// Returns \c true if any connection paths are set on this attribute.
    bool HasConnectionPaths() const;

    /// Clears the connection paths for this attribute.
    void ClearConnectionPaths();

    /// Returns the allowed tokens metadata for this attribute.
    /// Consumers may use this metadata to define a set of predefined
    /// options for this attribute's value. However, this metadata is
    /// purely advisory. It is up to the consumer to perform any
    /// validation against this set of tokens, if desired.
#if 0
    pxr::VtTokenArray GetAllowedTokens() const;
#endif

    /// Sets the allowed tokens metadata for this attribute.
    void SetAllowedTokens(const pxr::VtTokenArray& allowedTokens);

    /// Returns true if allowed tokens metadata is set for this attribute.
    bool HasAllowedTokens() const;

    /// Clears the allowed tokens metadata for this attribute.
    void ClearAllowedTokens();

    /// Returns the display unit of the attribute.
    pxr::TfEnum GetDisplayUnit() const;

    /// Sets the display unit of the attribute.
    void SetDisplayUnit(const pxr::TfEnum& displayUnit);

    /// Returns true if a display unit is set for this attribute.
    bool HasDisplayUnit() const;

    /// Clears the display unit of the attribute.
    void ClearDisplayUnit();

    /// Returns the color-space in which a color or texture valued attribute 
    /// is authored.
    pxr::TfToken GetColorSpace() const;

    /// Sets the color-space in which a color or texture valued attribute is 
    /// authored.
    void SetColorSpace(const pxr::TfToken& colorSpace);

    /// Returns true if this attribute has a colorSpace value authored.
    bool HasColorSpace() const;

    /// Clears the colorSpace metadata value set on this attribute.
    void ClearColorSpace();

    /// Returns the roleName for this attribute's typeName.
    /// 
    /// If the typeName has no roleName, return empty token.
    pxr::TfToken GetRoleName() const;

} CPPMM_OPAQUEPTR; // struct SdfAttributeSpec


/// Convenience function to create an attributeSpec on a primSpec at the given
/// path, and any necessary parent primSpecs, in the given layer.
/// 
/// If an attributeSpec already exists at the given path, just author typeName,
/// variability, and custom according to passed arguments and return true.
/// 
/// Any newly created prim specs have SdfSpecifierOver and an empty type (as if
/// created by SdfJustCreatePrimInLayer()).  attrPath must be a valid prim
/// property path (see SdfPath::IsPrimPropertyPath()).  Return false and issue
/// an error if we fail to author the required scene description.
bool SdfJustCreatePrimAttributeInLayer(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& attrPath, const pxr::SdfValueTypeName& typeName, pxr::SdfVariability variability, bool isCustom);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
