#include <pxr/usd/usd/property.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class UsdProperty
/// 
/// Base class for UsdAttribute and UsdRelationship scenegraph objects.
/// 
/// UsdProperty has a bool conversion operator that validates that the property
/// IsDefined() and thus valid for querying and authoring values and metadata.
/// This is a fairly expensive query that we do <b>not</b> cache, so if client
/// code retains UsdProperty objects it should manage its object validity
/// closely for performance.  An ideal pattern is to listen for
/// UsdNotice::StageContentsChanged notifications, and revalidate/refetch
/// retained UsdObjects only then and otherwise use them without validity
/// checking.
struct UsdProperty {
    using BoundType = pxr::UsdProperty;

    UsdProperty(const pxr::UsdProperty&) CPPMM_MANUAL CPPMM_COPY_CTOR;

    /// Return true if this is a valid object, false otherwise.
    bool IsValid() const;

    /// Returns *true* if this object is valid, *false* otherwise.
    operator bool() const CPPMM_IGNORE;

    /// Return the stage that owns the object, and to whose state and lifetime
    /// this object's validity is tied.
    pxr::UsdStagePtr GetStage() const;

    /// Return the complete scene path to this object on its UsdStage,
    /// which may (UsdPrim) or may not (all other subclasses) return a 
    /// cached result
    pxr::SdfPath GetPath() const;

    /// Return this object's path if this object is a prim, otherwise this
    /// object's nearest owning prim's path.  Equivalent to GetPrim().GetPath().
    const pxr::SdfPath& GetPrimPath() const;

    /// Return this object if it is a prim, otherwise return this object's
    /// nearest owning prim.
    pxr::UsdPrim GetPrim() const;

    /// Return the full name of this object, i.e. the last component of its
    /// SdfPath in namespace.
    /// 
    /// This is equivalent to, but generally cheaper than,
    /// GetPath().GetNameToken()
    const pxr::TfToken& GetName() const;

    template <typename T>
    T As() const CPPMM_IGNORE;

    template <typename T>
    bool Is() const CPPMM_IGNORE;

    /// Return a string that provides a brief summary description of the
    /// object.  This method, along with IsValid()/bool_operator,
    /// is always safe to call on a possibly-expired object, and the 
    /// description will specify whether the object is valid or expired,
    /// along with a few other bits of data.
    std::string GetDescription() const;

    template <typename T>
    bool GetMetadata(const pxr::TfToken& key, T* value) const;

    /// \overload
    /// 
    /// Type-erased access
    bool GetMetadata(const pxr::TfToken& key, pxr::VtValue* value) const;

    template <typename T>
    bool SetMetadata(const pxr::TfToken& key, const T& value) const;

    /// \overload
    bool SetMetadata(const pxr::TfToken& key, const pxr::VtValue& value) const;

    /// Clears the authored *key*'s value at the current EditTarget,
    /// returning false on error.
    /// 
    /// If no value is present, this method is a no-op and returns true. It is
    /// considered an error to call ClearMetadata when no spec is present for 
    /// this UsdObject, i.e. if the object has no presence in the
    /// current UsdEditTarget.
    /// 
    /// \sa \ref Usd_OM_Metadata
    bool ClearMetadata(const pxr::TfToken& key) const;

    /// Returns true if the *key* has a meaningful value, that is, if
    /// GetMetadata() will provide a value, either because it was authored
    /// or because a prim's metadata fallback will be provided.
    bool HasMetadata(const pxr::TfToken& key) const;

    /// Returns true if the *key* has an authored value, false if no
    /// value was authored or the only value available is a prim's metadata 
    /// fallback.
    bool HasAuthoredMetadata(const pxr::TfToken& key) const;

    /// Gets the value of the 'hidden' metadata field, false if not 
    /// authored.
    /// 
    /// When an object is marked as hidden, it is an indicator to clients who 
    /// generically display objects (such as GUI widgets) that this object 
    /// should not be included, unless explicitly asked for.  Although this
    /// is just a hint and thus up to each application to interpret, we
    /// use it primarily as a way of simplifying hierarchy displays, by
    /// hiding *only* the representation of the object itself, *not* its
    /// subtree, instead "pulling up" everything below it one level in the
    /// hierarchical nesting.
    /// 
    /// Note again that this is a hint for UI only - it should not be 
    /// interpreted by any renderer as making a prim invisible to drawing.
    bool IsHidden() const;

    /// Sets the value of the 'hidden' metadata field. See IsHidden()
    /// for details.
    bool SetHidden(bool hidden) const;

    /// Clears the opinion for "Hidden" at the current EditTarget.
    bool ClearHidden() const;

    /// Returns true if hidden was explicitly authored and GetMetadata()
    /// will return a meaningful value for Hidden. 
    /// 
    /// Note that IsHidden returns a fallback value (false) when hidden is not
    /// authored.
    bool HasAuthoredHidden() const;

    /// Return this property's name with all namespace prefixes removed,
    /// i.e. the last component of the return value of GetName()
    /// 
    /// This is generally the property's "client name"; property namespaces are
    /// often used to group related properties together.  The namespace prefixes
    /// the property name but many consumers will care only about un-namespaced
    /// name, i.e. its BaseName.  For more information, see \ref Usd_Ordering
    pxr::TfToken GetBaseName() const;

    /// Return this property's complete namespace prefix.  Return the empty
    /// token if this property has no namespaces.
    /// 
    /// This is the complement of GetBaseName(), although it does *not*
    /// contain a trailing namespace delimiter
    pxr::TfToken GetNamespace() const;

    /// Return this property's name elements including namespaces and its base
    /// name as the final element.
    std::vector<std::string> SplitName() const;

    /// Return this property's display group (metadata).  This returns the
    /// empty token if no display group has been set.
    /// \sa SetDisplayGroup()
    std::string GetDisplayGroup() const;

    /// Sets this property's display group (metadata).  Returns true on success.
    /// 
    /// DisplayGroup provides UI hinting for grouping related properties
    /// together for display.  We define a convention for specifying nesting
    /// of groups by recognizing the property namespace separator in 
    /// displayGroup as denoting group-nesting.
    /// \sa SetNestedDisplayGroups()
    bool SetDisplayGroup(const std::string& displayGroup) const;

    /// Clears this property's display group (metadata) in
    /// the current EditTarget (only).  Returns true on success.
    bool ClearDisplayGroup() const;

    /// Returns true if displayGroup was explicitly authored and GetMetadata()
    /// will return a meaningful value for displayGroup. 
    bool HasAuthoredDisplayGroup() const;

    /// Return this property's displayGroup as a sequence of groups to be
    /// nested, or an empty vector if displayGroup is empty or not authored.
    std::vector<std::string> GetNestedDisplayGroups() const;

    /// Sets this property's display group (metadata) to the nested sequence.  
    /// Returns true on success.
    /// 
    /// A displayGroup set with this method can still be retrieved with
    /// GetDisplayGroup(), with the namespace separator embedded in the result.
    /// If *nestedGroups* is empty, we author an empty string for displayGroup.
    /// \sa SetDisplayGroup()
    bool SetNestedDisplayGroups(const std::vector<std::string>& nestedGroups) const;

    /// Return this property's display name (metadata).  This returns the
    /// empty string if no display name has been set.
    /// \sa SetDisplayName()
    std::string GetDisplayName() const;

    /// Sets this property's display name (metadata).  Returns true on success.
    /// 
    /// DisplayName is meant to be a descriptive label, not necessarily an
    /// alternate identifier; therefore there is no restriction on which
    /// characters can appear in it.
    bool SetDisplayName(const std::string& name) const;

    /// Clears this property's display name (metadata) in the current EditTarget
    /// (only).  Returns true on success.
    bool ClearDisplayName() const;

    /// Returns true if displayName was explicitly authored and GetMetadata()
    /// will return a meaningful value for displayName. 
    bool HasAuthoredDisplayName() const;

    /// Return true if this is a custom property (i.e., not part of a
    /// prim schema).
    /// 
    /// The 'custom' modifier in USD serves the same function as Alembic's
    /// 'userProperties', which is to say as a categorization for ad hoc
    /// client data not formalized into any schema, and therefore not 
    /// carrying an expectation of specific processing by consuming applications.
    bool IsCustom() const;

    /// Set the value for custom at the current EditTarget, return true on
    /// success, false if the value can not be written.
    /// 
    /// **Note** that this value should not be changed as it is typically either
    /// automatically authored or provided by a property definition. This method
    /// is provided primarily for fixing invalid scene description.
    bool SetCustom(bool isCustom) const;

    /// Return true if this is a builtin property or if the strongest
    /// authored SdfPropertySpec for this property's path matches this
    /// property's dynamic type.  That is, SdfRelationshipSpec in case this is a
    /// UsdRelationship, and SdfAttributeSpec in case this is a UsdAttribute.
    /// Return *false* if this property's prim has expired.
    /// 
    /// For attributes, a *true* return does not imply that this attribute
    /// possesses a value, only that has been declared, is of a certain type and
    /// variability, and that it is safe to use to query and author values and
    /// metadata.
    bool IsDefined() const;

    /// Return true if there are any authored opinions for this property
    /// in any layer that contributes to this stage, false otherwise.
    bool IsAuthored() const;

    /// Flattens this property to a property spec with the same name 
    /// beneath the given *parent* prim in the current edit target.
    /// 
    /// Flattening authors all authored resolved values and metadata for 
    /// this property into the destination property spec. If this property
    /// is a builtin property, fallback values and metadata will also be
    /// authored if the destination property has a different fallback 
    /// value or no fallback value, or if the destination property has an
    /// authored value that overrides its fallback.
    /// 
    /// Attribute connections and relationship targets that target an
    /// object beneath this property's owning prim will be remapped to
    /// target objects beneath the destination *parent* prim.
    /// 
    /// If the destination spec already exists, it will be overwritten.
    /// 
    /// \sa UsdStage::Flatten
    pxr::UsdProperty FlattenTo(const pxr::UsdPrim& parent) const CPPMM_RENAME(FlattenTo_parent);

    /// \overload
    /// Flattens this property to a property spec with the given
    /// *propName* beneath the given *parent* prim in the current
    /// edit target.
    pxr::UsdProperty FlattenTo(const pxr::UsdPrim& parent, const pxr::TfToken& propName) const CPPMM_RENAME(FlattenTo_parent_property);

    /// \overload
    /// Flattens this property to a property spec for the given
    /// *property* in the current edit target.
    pxr::UsdProperty FlattenTo(const pxr::UsdProperty& property) const CPPMM_RENAME(FlattenTo_property);


    /// Return this object's documentation (metadata).  This returns the
    /// empty string if no documentation has been set.
    /// \sa SetDocumentation()
    std::string GetDocumentation() const;

    /// Sets this object's documentation (metadata).  Returns true on success.
    bool SetDocumentation(const std::string& doc) const;

    /// Clears this object's documentation (metadata) in the current EditTarget
    /// (only).  Returns true on success.
    bool ClearDocumentation() const;

    /// Returns true if documentation was explicitly authored and GetMetadata()
    /// will return a meaningful value for documentation. 
    bool HasAuthoredDocumentation() const;

    /// @}
    static char GetNamespaceDelimiter();

    /// Construct an invalid property.
    UsdProperty();
/*
    template <typename T>
    bool GetMetadataByDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath, T* value) const;

    /// \overload
    bool GetMetadataByDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath, pxr::VtValue* value) const;

    template <typename T>
    bool SetMetadataByDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath, const T& value) const;

    /// \overload
    bool SetMetadataByDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath, const pxr::VtValue& value) const;

    /// Clear any authored value identified by *key* and *keyPath*
    /// at the current EditTarget.  The *keyPath* is a ':'-separated path
    /// identifying a path in subdictionaries stored in the metadata field at
    /// *key*.  Return true if the value is cleared successfully, false
    /// otherwise.
    /// 
    /// \sa \ref Usd_Dictionary_Type
    bool ClearMetadataByDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath) const;

    /// Return true if there exists any authored or fallback opinion for
    /// *key* and *keyPath*.  The *keyPath* is a ':'-separated path
    /// identifying a value in subdictionaries stored in the metadata field at
    /// *key*.
    /// 
    /// \sa \ref Usd_Dictionary_Type
    bool HasMetadataDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath) const;

    /// Return true if there exists any authored opinion (excluding
    /// fallbacks) for *key* and *keyPath*.  The *keyPath* is a ':'-separated
    /// path identifying a value in subdictionaries stored in the metadata field
    /// at *key*.
    /// 
    /// \sa \ref Usd_Dictionary_Type
    bool HasAuthoredMetadataDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath) const;

    /// Resolve and return all metadata (including both authored and
    /// fallback values) on this object, sorted lexicographically.
    /// 
    /// > This method does not return field keys for composition arcs,
    /// such as references, inherits, payloads, sublayers, variants, or
    /// primChildren, nor does it return the default value or timeSamples.
    pxr::UsdMetadataValueMap GetAllMetadata() const;

    /// Resolve and return all user-authored metadata on this object,
    /// sorted lexicographically.
    /// 
    /// > This method does not return field keys for composition arcs,
    /// such as references, inherits, payloads, sublayers, variants, or
    /// primChildren, nor does it return the default value or timeSamples.
    pxr::UsdMetadataValueMap GetAllAuthoredMetadata() const;

    /// Return this object's composed customData dictionary.
    /// 
    /// CustomData is "custom metadata", a place for applications and users
    /// to put uniform data that is entirely dynamic and subject to no schema
    /// known to Usd.  Unlike metadata like 'hidden', 'displayName' etc,
    /// which must be declared in code or a data file that is considered part
    /// of one's Usd distribution (e.g. a plugInfo.json file) to be used,
    /// customData keys and the datatypes of their corresponding values are
    /// ad hoc.  No validation will ever be performed that values for the
    /// same key in different layers are of the same type - strongest simply
    /// wins.
    /// 
    /// Dictionaries like customData are composed element-wise, and are 
    /// nestable.
    /// 
    /// There is no means to query a customData field's valuetype other
    /// than fetching the value and interrogating it.
    /// \sa GetCustomDataByKey()
    pxr::VtDictionary GetCustomData() const;

    /// Return the element identified by *keyPath* in this object's
    /// composed customData dictionary.  The *keyPath* is a ':'-separated path
    /// identifying a value in subdictionaries.  This is in general more
    /// efficient than composing the entire customData dictionary and then
    /// pulling out one sub-element.
    pxr::VtValue GetCustomDataByKey(const pxr::TfToken& keyPath) const;

    /// Author this object's customData dictionary to *customData* at
    /// the current EditTarget.
    void SetCustomData(const pxr::VtDictionary& customData) const;

    /// Author the element identified by *keyPath* in this object's
    /// customData dictionary at the current EditTarget.  The *keyPath* is a
    /// ':'-separated path identifying a value in subdictionaries.
    void SetCustomDataByKey(const pxr::TfToken& keyPath, const pxr::VtValue& value) const;

    /// Clear the authored opinion for this object's customData
    /// dictionary at the current EditTarget.  Do nothing if there is no such
    /// authored opinion.
    void ClearCustomData() const;

    /// Clear the authored opinion identified by *keyPath* in this
    /// object's customData dictionary at the current EditTarget.  The \p
    /// keyPath is a ':'-separated path identifying a value in subdictionaries.
    /// Do nothing if there is no such authored opinion.
    void ClearCustomDataByKey(const pxr::TfToken& keyPath) const;

    /// Return true if there are any authored or fallback opinions for
    /// this object's customData dictionary, false otherwise.
    bool HasCustomData() const;

    /// Return true if there are any authored or fallback opinions for
    /// the element identified by *keyPath* in this object's customData
    /// dictionary, false otherwise.  The *keyPath* is a ':'-separated path
    /// identifying a value in subdictionaries.
    bool HasCustomDataKey(const pxr::TfToken& keyPath) const;

    /// Return true if there are any authored opinions (excluding
    /// fallback) for this object's customData dictionary, false otherwise.
    bool HasAuthoredCustomData() const;

    /// Return true if there are any authored opinions (excluding
    /// fallback) for the element identified by *keyPath* in this object's
    /// customData dictionary, false otherwise.  The *keyPath* is a
    /// ':'-separated path identifying a value in subdictionaries.
    bool HasAuthoredCustomDataKey(const pxr::TfToken& keyPath) const;

    /// Return this object's composed assetInfo dictionary.
    /// 
    /// The asset info dictionary is used to annotate objects representing the 
    /// root-prims of assets (generally organized as models) with various 
    /// data related to asset management. For example, asset name, root layer
    /// identifier, asset version etc.
    /// 
    /// The elements of this dictionary are composed element-wise, and are 
    /// nestable.
    /// 
    /// There is no means to query an assetInfo field's valuetype other
    /// than fetching the value and interrogating it.
    /// \sa GetAssetInfoByKey()
    pxr::VtDictionary GetAssetInfo() const;

    /// Return the element identified by *keyPath* in this object's
    /// composed assetInfo dictionary.  The *keyPath* is a ':'-separated path
    /// identifying a value in subdictionaries.  This is in general more
    /// efficient than composing the entire assetInfo dictionary than 
    /// pulling out one sub-element.
    pxr::VtValue GetAssetInfoByKey(const pxr::TfToken& keyPath) const;

    /// Author this object's assetInfo dictionary to *assetInfo* at
    /// the current EditTarget.
    void SetAssetInfo(const pxr::VtDictionary& customData) const;

    /// Author the element identified by *keyPath* in this object's
    /// assetInfo dictionary at the current EditTarget.  The *keyPath* is a
    /// ':'-separated path identifying a value in subdictionaries.
    void SetAssetInfoByKey(const pxr::TfToken& keyPath, const pxr::VtValue& value) const;

    /// Clear the authored opinion for this object's assetInfo
    /// dictionary at the current EditTarget.  Do nothing if there is no such
    /// authored opinion.
    void ClearAssetInfo() const;

    /// Clear the authored opinion identified by *keyPath* in this
    /// object's assetInfo dictionary at the current EditTarget.  The \p
    /// keyPath is a ':'-separated path identifying a value in subdictionaries.
    /// Do nothing if there is no such authored opinion.
    void ClearAssetInfoByKey(const pxr::TfToken& keyPath) const;

    /// Return true if there are any authored or fallback opinions for
    /// this object's assetInfo dictionary, false otherwise.
    bool HasAssetInfo() const;

    /// Return true if there are any authored or fallback opinions for
    /// the element identified by *keyPath* in this object's assetInfo
    /// dictionary, false otherwise.  The *keyPath* is a ':'-separated path
    /// identifying a value in subdictionaries.
    bool HasAssetInfoKey(const pxr::TfToken& keyPath) const;

    /// Return true if there are any authored opinions (excluding
    /// fallback) for this object's assetInfo dictionary, false otherwise.
    bool HasAuthoredAssetInfo() const;

    /// Return true if there are any authored opinions (excluding
    /// fallback) for the element identified by *keyPath* in this object's
    /// assetInfo dictionary, false otherwise.  The *keyPath* is a
    /// ':'-separated path identifying a value in subdictionaries.
    bool HasAuthoredAssetInfoKey(const pxr::TfToken& keyPath) const;

    /// Returns a strength-ordered list of property specs that provide
    /// opinions for this property.
    /// 
    /// If *time* is UsdTimeCode::Default(), *or* this property 
    /// is a UsdRelationship (which are never affected by clips), we will 
    /// not consider value clips for opinions. For any other *time*, for 
    /// a UsdAttribute, clips whose samples may contribute an opinion will 
    /// be included. These specs are ordered from strongest to weakest opinion, 
    /// although if *time* requires interpolation between two adjacent clips, 
    /// both clips will appear, sequentially.
    /// 
    /// > The results returned by this method are meant for debugging
    /// and diagnostic purposes.  It is **not** advisable to retain a 
    /// PropertyStack for the purposes of expedited value resolution for 
    /// properties, since the makeup of an attribute's PropertyStack may
    /// itself be time-varying.  To expedite repeated value resolution of
    /// attributes, you should instead retain a *UsdAttributeQuery* .
    /// 
    /// \sa UsdClipsAPI
    pxr::SdfPropertySpecHandleVector GetPropertyStack(pxr::UsdTimeCode time) const;

    /// Return true if there is an SdfPropertySpec authored for this
    /// property at the given *editTarget*, otherwise return false.  Note
    /// that this method does not do partial composition.  It does not consider
    /// whether authored scene description exists at *editTarget* or weaker,
    /// only <b>exactly at</b> the given *editTarget*.
    bool IsAuthoredAt(const pxr::UsdEditTarget& editTarget) const;
*/

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct UsdProperty


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
