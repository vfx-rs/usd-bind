#include <pxr/usd/sdf/pseudoRootSpec.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

struct SdfPseudoRootSpec {
    using BoundType = pxr::SdfPseudoRootSpec;

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
    std::vector<pxr::TfToken> ListInfoKeys() const;

    /// Returns the list of metadata info keys for this object.
    /// 
    /// This is not the complete list of keys, it is only those that
    /// should be considered to be metadata by inspectors or other 
    /// presentation UI.
    /// 
    /// This is interim API which is likely to change.  Only editors with
    /// an immediate specific need (like the Inspector) should use this API.
    std::vector<pxr::TfToken> GetMetaDataInfoKeys() const;

    /// Returns this metadata key's displayGroup.
#if 0
    pxr::TfToken GetMetaDataDisplayGroup(const pxr::TfToken& key) const;
#endif

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
    std::vector<pxr::TfToken> ListFields() const;

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

    /// Create a root prim spec.
    /// 
    /// Creates a prim spec with a \p name, \p specifier and \p typeName as a
    /// root prim in the given layer.
    static pxr::SdfPrimSpecHandle New(const pxr::SdfLayerHandle& parentLayer, const std::string& name, pxr::SdfSpecifier spec, const std::string& typeName);

    /// Create a prim spec.
    /// 
    /// Creates a prim spec with a \p name, \p specifier and \p typeName as
    /// a namespace child of the given prim.
    /// 
    /// \sa SdfCreatePrimInLayer() to create a PrimSpec with all required
    /// ancestor specs as SdfSpecifierOver.
    static pxr::SdfPrimSpecHandle New(const pxr::SdfPrimSpecHandle& parentPrim, const std::string& name, pxr::SdfSpecifier spec, const std::string& typeName);

    /// Returns the prim's name.
    const std::string& GetName() const;

#if 0
    /// Returns the prim's name, as a token.
    pxr::TfToken GetNameToken() const;
#endif


    /// Returns true if setting the prim spec's name to \p newName will
    /// succeed.
    /// 
    /// Returns false if it won't, and sets \p whyNot with a string
    /// describing why not.
    bool CanSetName(const std::string& newName, std::string* whyNot) const;

    /// Sets the prim's name.
    /// 
    /// Children prims must be unique by name. It is an error to
    /// set the name to the same name as an existing child of this
    /// prim's parent.
    /// 
    /// Setting validate to false, will skip validation of the \p newName
    /// (that is, CanSetName will not be called).
    /// 
    /// Returns true if successful, false otherwise.
    bool SetName(const std::string& newName, bool validate);

    /// Returns true if the given string is a valid prim name.
    static bool IsValidName(const std::string& name);

    /// Returns the prim's namespace pseudo-root prim.
    pxr::SdfPrimSpecHandle GetNameRoot() const;

    /// Returns the prim's namespace parent.
    /// 
    /// This does not return the pseudo-root for root prims.  Most
    /// algorithms that scan the namespace hierarchy upwards don't
    /// want to process the pseudo-root the same way as actual prims.
    /// Algorithms that do can always call \c GetRealNameParent().
    pxr::SdfPrimSpecHandle GetNameParent() const;

    /// Returns the prim's namespace parent.
    pxr::SdfPrimSpecHandle GetRealNameParent() const;

    /// Returns a keyed vector view of the prim's namespace children.
    pxr::SdfPrimSpec::NameChildrenView GetNameChildren() const;

    /// Updates nameChildren to match the given vector of prims.
    void SetNameChildren(const pxr::SdfPrimSpecHandleVector& );

    /// Inserts a child.
    /// 
    /// \p index is ignored except for range checking;  -1 is permitted.
    /// 
    /// Returns true if successful, false if failed.
    bool InsertNameChild(const pxr::SdfPrimSpecHandle& child, int index);

    /// Removes the child.  Returns true if successful, false if failed.
    bool RemoveNameChild(const pxr::SdfPrimSpecHandle& child);

    /// Returns the list of child names for this prim's reorder.
    /// nameChildren statement.
    /// 
    /// See SetNameChildrenOrder() for more info.
    pxr::SdfNameChildrenOrderProxy GetNameChildrenOrder() const;

    /// Returns true if this prim has name children order specified
    bool HasNameChildrenOrder() const;

    /// Given a list of (possibly sparse) child names, authors a reorder
    /// nameChildren statement for this prim.
    /// 
    /// The reorder statement can modify the order of name children
    /// during composition.  This order doesn't affect GetNameChildren(),
    /// InsertNameChild(), SetNameChildren(), et al.
    void SetNameChildrenOrder(const std::vector<pxr::TfToken>& names);

    /// Adds a new name child \p name in the name children order.
    /// If \p index is -1, the name is inserted at the end.
    void InsertInNameChildrenOrder(const pxr::TfToken& name, int index);

    /// Removes a name child name from the name children order.
    void RemoveFromNameChildrenOrder(const pxr::TfToken& name);

    /// Removes a name child name from the name children order by index.
    void RemoveFromNameChildrenOrderByIndex(int index);

    /// Reorders the given list of child names according to the reorder
    /// nameChildren statement for this prim.
    /// 
    /// This routine employs the standard list editing operation for ordered
    /// items in a ListEditor.
    void ApplyNameChildrenOrder(std::vector<pxr::TfToken>* vec) const;

    /// Returns the prim's properties.
    pxr::SdfPrimSpec::PropertySpecView GetProperties() const;

    /// Updates properties to match the given vector of properties.
    void SetProperties(const pxr::SdfPropertySpecHandleVector& );

    /// Inserts a property.
    /// 
    /// \p index is ignored except for range checking;  -1 is permitted.
    /// 
    /// Returns true if successful, false if failed.
    bool InsertProperty(const pxr::SdfPropertySpecHandle& property, int index);

    /// Removes the property.
    void RemoveProperty(const pxr::SdfPropertySpecHandle& property);

    /// Returns a view of the attributes of this prim.
    pxr::SdfPrimSpec::AttributeSpecView GetAttributes() const;

    /// Returns a view of the relationships of this prim.
    pxr::SdfPrimSpec::RelationshipSpecView GetRelationships() const;

    /// Returns the list of property names for this prim's reorder
    /// properties statement.
    /// 
    /// See SetPropertyOrder() for more info.
    pxr::SdfPropertyOrderProxy GetPropertyOrder() const;

    /// Returns true if this prim has a property ordering specified.
    bool HasPropertyOrder() const;

    /// Given a list of (possibly sparse) property names, authors a
    /// reorder properties statement for this prim.
    /// 
    /// The reorder statement can modify the order of properties during
    /// composition.  This order doesn't affect GetProperties(),
    /// InsertProperty(), SetProperties(), et al.
    void SetPropertyOrder(const std::vector<pxr::TfToken>& names);

    /// Add a new property \p name in the property order.
    /// If \p index is -1, the name is inserted at the end.
    void InsertInPropertyOrder(const pxr::TfToken& name, int index);

    /// Remove a property name from the property order.
    void RemoveFromPropertyOrder(const pxr::TfToken& name);

    /// Remove a property name from the property order by index.
    void RemoveFromPropertyOrderByIndex(int index);

    /// Reorders the given list of property names according to the
    /// reorder properties statement for this prim.
    /// 
    /// This routine employs the standard list editing operation for ordered
    /// items in a ListEditor.
    void ApplyPropertyOrder(std::vector<pxr::TfToken>* vec) const;

    /// Returns the object for the given \p path.
    /// 
    /// If \p path is relative then it will be interpreted as
    /// relative to this prim.  If it is absolute then it will be
    /// interpreted as absolute in this prim's layer.
    /// 
    /// Returns invalid handle if there is no object at \p path.
    pxr::SdfSpecHandle GetObjectAtPath(const pxr::SdfPath& path) const;

    /// Returns a prim given its \p path.
    /// 
    /// Returns invalid handle if there is no prim at \p path.
    /// This is simply a more specifically typed version of GetObjectAtPath.
    pxr::SdfPrimSpecHandle GetPrimAtPath(const pxr::SdfPath& path) const;

    /// Returns a property given its \p path.
    /// 
    /// Returns invalid handle if there is no property at \p path.
    /// This is simply a more specifically typed version of GetObjectAtPath.
    pxr::SdfPropertySpecHandle GetPropertyAtPath(const pxr::SdfPath& path) const;

    /// Returns an attribute given its \p path.
    /// 
    /// Returns invalid handle if there is no attribute at \p path.
    /// This is simply a more specifically typed version of GetObjectAtPath.
    pxr::SdfAttributeSpecHandle GetAttributeAtPath(const pxr::SdfPath& path) const;

    /// Returns a relationship given its \p path.
    /// 
    /// Returns invalid handle if there is no relationship at \p path.
    /// This is simply a more specifically typed version of GetObjectAtPath.
    pxr::SdfRelationshipSpecHandle GetRelationshipAtPath(const pxr::SdfPath& path) const;

#if 0
    /// Returns the typeName of the model prim.
    /// 
    /// For prims this specifies the sub-class of MfPrim that
    /// this prim describes.
    /// 
    /// The default value for typeName is the empty token.
    pxr::TfToken GetTypeName() const;
#endif

    /// Sets the typeName of the model prim.
    void SetTypeName(const std::string& value);

    /// Returns the comment string for this prim spec.
    /// 
    /// The default value for comment is @"".
    std::string GetComment() const;

    /// Sets the comment string for this prim spec.
    void SetComment(const std::string& value);

    /// Returns the documentation string for this prim spec.
    /// 
    /// The default value for documentation is @"".
    std::string GetDocumentation() const;

    /// Sets the documentation string for this prim spec.
    void SetDocumentation(const std::string& value);

    /// Returns whether this prim spec is active.
    /// 
    /// The default value for active is true.
    bool GetActive() const;

    /// Sets whether this prim spec is active.
    void SetActive(bool value);

    /// Returns true if this prim spec has an opinion about active.
    bool HasActive() const;

    /// Removes the active opinion in this prim spec if there is one.
    void ClearActive();

    /// Returns whether this prim spec will be hidden in browsers.
    /// 
    /// The default value for hidden is false.
    bool GetHidden() const;

    /// Sets whether this prim spec will be hidden in browsers.
    void SetHidden(bool value);

#if 0
    /// Returns this prim spec's kind.
    /// 
    /// The default value for kind is an empty \c TfToken.
    pxr::TfToken GetKind() const;
#endif

    /// Sets this prim spec's kind.
    void SetKind(const pxr::TfToken& value);

    /// Returns true if this prim spec has an opinion about kind.
    bool HasKind() const;

    /// Remove the kind opinion from this prim spec if there is one.
    void ClearKind();

#if 0
    /// Returns the symmetry function for this prim.
    /// 
    /// The default value for symmetry function is an empty token.
    pxr::TfToken GetSymmetryFunction() const;
#endif

    /// Sets the symmetry function for this prim.
    /// 
    /// If \p functionName is an empty token, then this removes any symmetry
    /// function for the given prim.
    void SetSymmetryFunction(const pxr::TfToken& functionName);

    /// Returns the symmetry arguments for this prim.
    /// 
    /// The default value for symmetry arguments is an empty dictionary.
    pxr::SdfDictionaryProxy GetSymmetryArguments() const;

    /// Sets a symmetry argument for this prim.
    /// 
    /// If \p value is empty, then this removes the setting
    /// for the given symmetry argument \p name.
    void SetSymmetryArgument(const std::string& name, const pxr::VtValue& value);

    /// Returns the symmetric peer for this prim.
    /// 
    /// The default value for symmetric peer is an empty string.
    std::string GetSymmetricPeer() const;

    /// Sets a symmetric peer for this prim.
    /// 
    /// If \p peerName is empty, then this removes the symmetric peer
    /// for this prim.
    void SetSymmetricPeer(const std::string& peerName);

    /// Returns the prefix string for this prim spec.
    /// 
    /// The default value for prefix is "".
    std::string GetPrefix() const;

    /// Sets the prefix string for this prim spec.
    void SetPrefix(const std::string& value);

    /// Returns the suffix string for this prim spec.
    /// 
    /// The default value for suffix is "".
    std::string GetSuffix() const;

    /// Sets the suffix string for this prim spec.
    void SetSuffix(const std::string& value);

    /// Returns the custom data for this prim.
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
    pxr::SdfDictionaryProxy GetCustomData() const;

    /// Returns the asset info dictionary for this prim.
    /// 
    /// The default value is an empty dictionary. 
    /// 
    /// The asset info dictionary is used to annotate prims representing the 
    /// root-prims of assets (generally organized as models) with various 
    /// data related to asset management. For example, asset name, root layer
    /// identifier, asset version etc.
    pxr::SdfDictionaryProxy GetAssetInfo() const;

    /// Sets a custom data entry for this prim.
    /// 
    /// If \p value is empty, then this removes the given custom data entry.
    void SetCustomData(const std::string& name, const pxr::VtValue& value);

    /// Sets a asset info entry for this prim.
    /// 
    /// If \p value is empty, then this removes the given asset info entry.
    /// 
    /// \sa GetAssetInfo()
    void SetAssetInfo(const std::string& name, const pxr::VtValue& value);

    /// Returns the spec specifier (def, over or class).
    pxr::SdfSpecifier GetSpecifier() const;

    /// Sets the spec specifier (def or over).
    void SetSpecifier(pxr::SdfSpecifier value);

    /// Returns the prim's permission restriction.
    /// 
    /// The default value for permission is SdfPermissionPublic.
    pxr::SdfPermission GetPermission() const;

    /// Sets the prim's permission restriction.
    void SetPermission(pxr::SdfPermission value);

#if 0
    /// Returns the prefixSubstitutions dictionary for this prim spec.
    /// 
    /// The default value for prefixSubstitutions is an empty VtDictionary.
    pxr::VtDictionary GetPrefixSubstitutions() const;

    /// Sets the \p prefixSubstitutions dictionary for this prim spec.
    void SetPrefixSubstitutions(const pxr::VtDictionary& prefixSubstitutions);

    /// Returns the suffixSubstitutions dictionary for this prim spec.
    /// 
    /// The default value for suffixSubstitutions is an empty VtDictionary.
    pxr::VtDictionary GetSuffixSubstitutions() const;

    /// Sets the \p suffixSubstitutions dictionary for this prim spec.
    void SetSuffixSubstitutions(const pxr::VtDictionary& suffixSubstitutions);

    /// Sets the value for the prim's instanceable flag.
    void SetInstanceable(bool instanceable);

    /// Returns the value for the prim's instanceable flag.
    bool GetInstanceable() const;

    /// Returns true if this prim spec has a value authored for its
    /// instanceable flag, false otherwise.
    bool HasInstanceable() const;

    /// Clears the value for the prim's instanceable flag.
    void ClearInstanceable();

    /// Returns a proxy for the prim's payloads.
    /// 
    /// Payloads for this prim may be modified through the proxy.
    pxr::SdfPayloadsProxy GetPayloadList() const;

    /// Returns true if this prim has payloads set.
    bool HasPayloads() const;

    /// Clears the payloads for this prim.
    void ClearPayloadList();

    /// Returns a proxy for the prim's inherit paths.
    /// 
    /// Inherit paths for this prim may be modified through the proxy.
    pxr::SdfInheritsProxy GetInheritPathList() const;

    /// Returns true if this prim has inherit paths set.
    bool HasInheritPaths() const;

    /// Clears the inherit paths for this prim.
    void ClearInheritPathList();

    /// Returns a proxy for the prim's specializes paths.
    /// 
    /// Specializes for this prim may be modified through the proxy.
    pxr::SdfSpecializesProxy GetSpecializesList() const;

    /// Returns true if this prim has specializes set.
    bool HasSpecializes() const;

    /// Clears the specializes for this prim.
    void ClearSpecializesList();

    /// Returns a proxy for the prim's references.
    /// 
    /// References for this prim may be modified through the proxy.
    pxr::SdfReferencesProxy GetReferenceList() const;

    /// Returns true if this prim has references set.
    bool HasReferences() const;

    /// Clears the references for this prim.
    void ClearReferenceList();

    /// Returns a proxy for the prim's variant sets.
    /// 
    /// Variant sets for this prim may be modified through the proxy.
    pxr::SdfVariantSetNamesProxy GetVariantSetNameList() const;

    /// Returns true if this prim has variant sets set.
    bool HasVariantSetNames() const;

    /// Returns list of variant names for the given variant set.
    std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > > GetVariantNames(const std::string& name) const;

    /// Returns the variant sets.
    /// 
    /// The result maps variant set names to variant sets.  Variant sets
    /// may be removed through the proxy.
    pxr::SdfVariantSetsProxy GetVariantSets() const;

    /// Removes the variant set with the given \a name.
    /// 
    /// Note that the set's name should probably also be removed from
    /// the variant set names list.
    void RemoveVariantSet(const std::string& name);

    /// Returns an editable map whose keys are variant set names and
    /// whose values are the variants selected for each set.
    pxr::SdfVariantSelectionProxy GetVariantSelections() const;

    /// Sets the variant selected for the given variant set.
    /// If \p variantName is empty, then this removes the variant
    /// selection opinion for the variant set \p variantSetName. To 
    /// explicitly set the variant selection to be empty, use
    /// BlockVariantSelection instead.
    void SetVariantSelection(const std::string& variantSetName, const std::string& variantName);

    /// Blocks the variant selected for the given variant set by setting
    /// the variant selection to empty.
    void BlockVariantSelection(const std::string& variantSetName);

    /// Get an editing proxy for the map of namespace relocations
    /// specified on this prim.
    /// 
    /// The map of namespace relocation paths is editable in-place via
    /// this editing proxy.  Individual source-target pairs can be added,
    /// removed, or altered using common map operations.
    /// 
    /// The map is organized as target \c SdfPath indexed by source \c SdfPath.
    /// Key and value paths are stored as absolute regardless of how they're
    /// added.
    pxr::SdfRelocatesMapProxy GetRelocates() const;

    /// Set the entire map of namespace relocations specified on this prim.
    /// Use the editing proxy for modifying single paths in the map.
    void SetRelocates(const pxr::SdfRelocatesMap& newMap);

    /// Returns true if this prim has any relocates opinion, including
    /// that there should be no relocates (i.e. an empty map).  An empty
    /// map (no relocates) does not mean the same thing as a missing map
    /// (no opinion).
    bool HasRelocates() const;

    /// Clears the relocates opinion for this prim.
    void ClearRelocates();

    SdfPseudoRootSpec();

    SdfPseudoRootSpec(const pxr::SdfPseudoRootSpec& spec);

    SdfPseudoRootSpec(const pxr::Sdf_IdentityRefPtr& identity);
#endif

} CPPMM_OPAQUEPTR; // struct SdfPseudoRootSpec


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
