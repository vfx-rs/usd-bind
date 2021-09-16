#include <pxr/usd/usd/prim.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class UsdPrim
/// 
/// UsdPrim is the sole persistent scenegraph object on a UsdStage, and
/// is the embodiment of a "Prim" as described in the <em>Universal Scene
/// Description Composition Compendium</em>
/// 
/// A UsdPrim is the principal container of other types of scene description.
/// It provides API for accessing and creating all of the contained kinds
/// of scene description, which include:
/// \li UsdVariantSets - all VariantSets on the prim (GetVariantSets(), GetVariantSet())
/// \li UsdReferences - all references on the prim (GetReferences())
/// \li UsdInherits - all inherits on the prim (GetInherits())
/// \li UsdSpecializes - all specializes on the prim (GetSpecializes())
/// 
/// As well as access to the API objects for properties contained within the 
/// prim - UsdPrim as well as all of the following classes are subclasses
/// of UsdObject:
/// \li UsdProperty - generic access to all attributes and relationships.
/// A UsdProperty can be queried and cast to a UsdAttribute or UsdRelationship
/// using UsdObject::Is<>() and UsdObject::As<>(). (GetPropertyNames(), 
/// GetProperties(), GetPropertiesInNamespace(), GetPropertyOrder(),
/// SetPropertyOrder())
/// \li UsdAttribute - access to default and timesampled attribute values, as 
/// well as value resolution information, and attribute-specific metadata 
/// (CreateAttribute(), GetAttribute(), GetAttributes(), HasAttribute())
/// \li UsdRelationship - access to authoring and resolving relationships
/// to other prims and properties (CreateRelationship(), GetRelationship(), 
/// GetRelationships(), HasRelationship())
/// 
/// UsdPrim also provides access to iteration through its prim children,
/// optionally making use of the \ref primFlags.h "prim predicates facility" 
/// (GetChildren(), GetAllChildren(), GetFilteredChildren()).
/// 
/// \section Lifetime Management
/// 
/// Clients acquire UsdPrim objects, which act like weak/guarded pointers
/// to persistent objects owned and managed by their originating UsdStage.
/// We provide the following guarantees for a UsdPrim acquired via 
/// UsdStage::GetPrimAtPath() or UsdStage::OverridePrim() or 
/// UsdStage::DefinePrim():
/// \li As long as no further mutations to the structure of the UsdStage
///     are made, the UsdPrim will still be valid.  Loading and
///     Unloading are considered structural mutations.
/// \li When the UsdStage's structure *is* mutated, the thread performing
///     the mutation will receive a UsdNotice::ObjectsChanged notice
///     after the stage has been reconfigured, which provides details as to
///     what prims may have been created or destroyed, and what prims
///     may simply have changed in some structural way.
/// 
/// Prim access in "reader" threads should be limited to GetPrimAtPath(), which
/// will never cause a mutation to the Stage or its layers.
/// 
/// Please refer to \ref UsdNotice for a listing of
/// the events that could cause UsdNotice::ObjectsChanged to be emitted.
struct UsdPrim {
    using BoundType = pxr::UsdPrim;

    /// Construct an invalid prim.
    UsdPrim();

    UsdPrim(const pxr::UsdPrim& );

    UsdPrim(pxr::UsdPrim&& ) CPPMM_IGNORE;

    ~UsdPrim();

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

    /// Return this prim's composed type name.  Note that this value is
    /// cached and is efficient to query.
    const pxr::TfToken& GetTypeName() const;

    /// Return a UsdAttribute with the name \a attrName. The attribute 
    /// returned may or may not **actually** exist so it must be checked for
    /// validity. Suggested use:
    /// 
    /// ```
    /// if (UsdAttribute myAttr = prim.GetAttribute("myAttr")) {
    ///    // myAttr is safe to use. 
    ///    // Edits to the owning stage requires subsequent validation.
    /// } else {
    ///    // myAttr was not defined/authored
    /// }
    /// ```
    pxr::UsdAttribute GetAttribute(const pxr::TfToken& attrName) const;

    /// Return true if this prim has an attribute named *attrName*, false
    /// otherwise.
    bool HasAttribute(const pxr::TfToken& attrName) const;


    /// Returns the attribute at *path* on the same stage as this prim.
    /// If path is relative, it will be anchored to the path of this prim.
    /// 
    /// \note There is no guarantee that this method returns an attribute on
    /// this prim. This is only guaranteed if path is a purely relative
    /// property path.
    /// \sa GetAttribute(const TfToken&) const
    /// \sa UsdStage::GetAttributeAtPath(const SdfPath&) const
    pxr::UsdAttribute GetAttributeAtPath(const pxr::SdfPath& path) const;


    /// Like GetProperties(), but exclude all relationships from the result.
    std::vector<pxr::UsdAttribute > GetAttributes() const;

    /// Like GetAttributes(), but exclude attributes without authored scene
    /// description from the result.  See UsdProperty::IsAuthored().
    std::vector<pxr::UsdAttribute > GetAuthoredAttributes() const;

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

/*
    template <typename T>
    T As() const;

    template <typename T>
    bool Is() const;

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

    /// Clears the authored \a key's value at the current EditTarget,
    /// returning false on error.
    /// 
    /// If no value is present, this method is a no-op and returns true. It is
    /// considered an error to call ClearMetadata when no spec is present for 
    /// this UsdObject, i.e. if the object has no presence in the
    /// current UsdEditTarget.
    /// 
    /// \sa \ref Usd_OM_Metadata
    bool ClearMetadata(const pxr::TfToken& key) const;

    /// Returns true if the \a key has a meaningful value, that is, if
    /// GetMetadata() will provide a value, either because it was authored
    /// or because a prim's metadata fallback will be provided.
    bool HasMetadata(const pxr::TfToken& key) const;

    /// Returns true if the \a key has an authored value, false if no
    /// value was authored or the only value available is a prim's metadata 
    /// fallback.
    bool HasAuthoredMetadata(const pxr::TfToken& key) const;

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
    /// \note This method does not return field keys for composition arcs,
    /// such as references, inherits, payloads, sublayers, variants, or
    /// primChildren, nor does it return the default value or timeSamples.
    pxr::UsdMetadataValueMap GetAllMetadata() const;

    /// Resolve and return all user-authored metadata on this object,
    /// sorted lexicographically.
    /// 
    /// \note This method does not return field keys for composition arcs,
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


    /// Return this prim's definition based on the prim's type if the type
    /// is a registered prim type. Returns an empty prim definition if it is 
    /// not.
    const pxr::UsdPrimDefinition& GetPrimDefinition() const;

    /// Return this prim's composed specifier.
    pxr::SdfSpecifier GetSpecifier() const;

    /// Return a list of PrimSpecs that provide opinions for this prim
    /// (i.e. the prim's metadata fields, including composition
    /// metadata). These specs are ordered from strongest to weakest opinion.
    /// 
    /// \note The results returned by this method are meant for debugging
    /// and diagnostic purposes.  It is **not** advisable to retain a 
    /// PrimStack for the purposes of expedited value resolution for prim
    /// metadata, since not all metadata resolves with simple "strongest
    /// opinion wins" semantics.
    pxr::SdfPrimSpecHandleVector GetPrimStack() const;

    /// Author an opinion for this Prim's specifier at the current edit
    /// target.
    bool SetSpecifier(pxr::SdfSpecifier specifier) const;

    /// Author this Prim's typeName at the current EditTarget.
    bool SetTypeName(const pxr::TfToken& typeName) const;

    /// Clear the opinion for this Prim's typeName at the current edit
    /// target.
    bool ClearTypeName() const;

    /// Return true if a typeName has been authored.
    bool HasAuthoredTypeName() const;

    /// Return true if this prim is active, meaning neither it nor any of its
    /// ancestors have active=false.  Return false otherwise.
    /// 
    /// See \ref Usd_ActiveInactive for what it means for a prim to be active.
    bool IsActive() const;

    /// Author 'active' metadata for this prim at the current EditTarget.
    /// 
    /// See \ref Usd_ActiveInactive for the effects of activating or deactivating
    /// a prim.
    bool SetActive(bool active) const;

    /// Remove the authored 'active' opinion at the current EditTarget.  Do
    /// nothing if there is no authored opinion.
    /// 
    /// See \ref Usd_ActiveInactive for the effects of activating or deactivating
    /// a prim.
    bool ClearActive() const;

    /// Return true if this prim has an authored opinion for 'active', false
    /// otherwise.
    /// 
    /// See \ref Usd_ActiveInactive for what it means for a prim to be active.
    bool HasAuthoredActive() const;

    /// Return true if this prim is active, and *either* it is loadable and
    /// it is loaded, *or* its nearest loadable ancestor is loaded, *or* it
    /// has no loadable ancestor; false otherwise.
    bool IsLoaded() const;

    /// Return true if this prim is a model based on its kind metadata, false
    /// otherwise.
    bool IsModel() const;

    /// Return true if this prim is a model group based on its kind metadata,
    /// false otherwise.  If this prim is a group, it is also necessarily a
    /// model.
    bool IsGroup() const;

    /// Return true if this prim or any of its ancestors is a class.
    bool IsAbstract() const;

    /// Return true if this prim and all its ancestors have defining specifiers,
    /// false otherwise. \sa SdfIsDefiningSpecifier.
    bool IsDefined() const;

    /// Return true if this prim has a specifier of type SdfSpecifierDef
    /// or SdfSpecifierClass. \sa SdfIsDefiningSpecifier
    bool HasDefiningSpecifier() const;

    /// Return a vector containing the names of API schemas which have
    /// been applied to this prim, using the Apply() method on
    /// the particular schema class. 
    pxr::TfTokenVector GetAppliedSchemas() const;

    /// Return all of this prim's property names (attributes and relationships),
    /// including all builtin properties.
    /// 
    /// If a valid *predicate* is passed in, then only properties whose names 
    /// pass the predicate are included in the result. This is useful if the 
    /// client is interested only in a subset of properties on the prim. For 
    /// example, only the ones in a given namespace or only the ones needed to 
    /// compute a value.
    /// 
    /// \sa GetAuthoredPropertyNames()
    /// \sa UsdProperty::IsAuthored()
    pxr::TfTokenVector GetPropertyNames(const pxr::UsdPrim::PropertyPredicateFunc& predicate) const;

    /// Return this prim's property names (attributes and relationships) that
    /// have authored scene description, ordered according to the strongest
    /// propertyOrder statement in scene description if one exists, otherwise
    /// ordered according to TfDictionaryLessThan.
    /// 
    /// If a valid *predicate* is passed in, then only the authored properties 
    /// whose names pass the predicate are included in the result. This is 
    /// useful if the client is interested only in a subset of authored 
    /// properties on the prim. For example, only the ones in a given namespace 
    /// or only the ones needed to compute a value.
    /// 
    /// \sa GetPropertyNames()
    /// \sa UsdProperty::IsAuthored() 
    pxr::TfTokenVector GetAuthoredPropertyNames(const pxr::UsdPrim::PropertyPredicateFunc& predicate) const;

    /// Return all of this prim's properties (attributes and relationships),
    /// including all builtin properties, ordered by name according to the
    /// strongest propertyOrder statement in scene description if one exists,
    /// otherwise ordered according to TfDictionaryLessThan.
    /// 
    /// If a valid *predicate* is passed in, then only properties whose names  
    /// pass the predicate are included in the result. This is useful if the 
    /// client is interested only in a subset of properties on the prim. For 
    /// example, only the ones in a given namespace or only the ones needed to 
    /// compute a value.
    /// 
    /// To obtain only either attributes or relationships, use either
    /// GetAttributes() or GetRelationships().
    /// 
    /// To determine whether a property is either an attribute or a
    /// relationship, use the UsdObject::As() and UsdObject::Is() methods in
    /// C++:
    /// 
    /// ```
    /// // Use As<>() to obtain a subclass instance.
    /// if (UsdAttribute attr = property.As<UsdAttribute>()) {
    ///     // use attribute 'attr'.
    /// else if (UsdRelationship rel = property.As<UsdRelationship>()) {
    ///     // use relationship 'rel'.
    /// }
    /// 
    /// // Use Is<>() to discriminate only.
    /// if (property.Is<UsdAttribute>()) {
    ///     // property is an attribute.
    /// }
    /// ```
    /// 
    /// In Python, use the standard isinstance() function:
    /// 
    /// ```
    /// if isinstance(property, Usd.Attribute):
    ///     # property is a Usd.Attribute.
    /// elif isinstance(property, Usd.Relationship):
    ///     # property is a Usd.Relationship.
    /// ```
    /// 
    /// \sa GetAuthoredProperties()
    /// \sa UsdProperty::IsAuthored()
    std::vector<pxr::UsdProperty> GetProperties(const pxr::UsdPrim::PropertyPredicateFunc& predicate) const;

    /// Return this prim's properties (attributes and relationships) that have
    /// authored scene description, ordered by name according to the strongest
    /// propertyOrder statement in scene description if one exists, otherwise
    /// ordered according to TfDictionaryLessThan.
    /// 
    /// If a valid *predicate* is passed in, then only authored properties 
    /// whose names pass the predicate are included in the result. This is 
    /// useful if the client is interested only in a subset of authored 
    /// properties on the prim. For example, only the ones in a given namespace 
    /// or only the ones needed to compute a value.
    /// 
    /// \sa GetProperties()
    /// \sa UsdProperty::IsAuthored()
    std::vector<pxr::UsdProperty> GetAuthoredProperties(const pxr::UsdPrim::PropertyPredicateFunc& predicate) const;

    /// Return this prim's properties that are inside the given property
    /// namespace ordered according to the strongest propertyOrder statement in
    /// scene description if one exists, otherwise ordered according to
    /// TfDictionaryLessThan.
    /// 
    /// A *namespaces* argument whose elements are ["ri", "attribute"] will
    /// return all the properties under the namespace "ri:attribute",
    /// i.e. "ri:attribute:*". An empty *namespaces* argument is equivalent to
    /// GetProperties().
    /// 
    /// For details of namespaced properties, see \ref Usd_Ordering
    std::vector<pxr::UsdProperty> GetPropertiesInNamespace(const std::vector<std::string>& namespaces) const;

    /// \overload
    /// *namespaces* must be an already-concatenated ordered set of namespaces,
    /// and may or may not terminate with the namespace-separator character. If
    /// *namespaces* is empty, this method is equivalent to GetProperties().
    std::vector<pxr::UsdProperty> GetPropertiesInNamespace(const std::string& namespaces) const;

    /// Like GetPropertiesInNamespace(), but exclude properties that do not have
    /// authored scene description from the result.  See
    /// UsdProperty::IsAuthored().
    /// 
    /// For details of namespaced properties, see \ref Usd_Ordering
    std::vector<pxr::UsdProperty> GetAuthoredPropertiesInNamespace(const std::vector<std::string>& namespaces) const;

    /// \overload
    /// *namespaces* must be an already-concatenated ordered set of namespaces,
    /// and may or may not terminate with the namespace-separator character. If
    /// *namespaces* is empty, this method is equivalent to
    /// GetAuthoredProperties().
    std::vector<pxr::UsdProperty> GetAuthoredPropertiesInNamespace(const std::string& namespaces) const;

    /// Return the strongest propertyOrder metadata value authored on this prim.
    pxr::TfTokenVector GetPropertyOrder() const;

    /// Author an opinion for propertyOrder metadata on this prim at the current
    /// EditTarget.
    void SetPropertyOrder(const pxr::TfTokenVector& order) const;

    /// Remove all scene description for the property with the
    /// given *propName* <em>in the current UsdEditTarget</em>.
    /// Return true if the property is removed, false otherwise.
    bool RemoveProperty(const pxr::TfToken& propName);

    /// Return a UsdProperty with the name \a propName. The property 
    /// returned may or may not **actually** exist so it must be checked for
    /// validity. Suggested use:
    /// 
    /// ```
    /// if (UsdProperty myProp = prim.GetProperty("myProp")) {
    ///    // myProp is safe to use. 
    ///    // Edits to the owning stage requires subsequent validation.
    /// } else {
    ///    // myProp was not defined/authored
    /// }
    /// ```
    pxr::UsdProperty GetProperty(const pxr::TfToken& propName) const;

    /// Return true if this prim has an property named *propName*, false
    /// otherwise.
    bool HasProperty(const pxr::TfToken& propName) const;

    template <typename T>
    bool IsA() const;

    /// Return true if prim type is/inherits a Schema with TfType *schemaType*
    bool IsA(const pxr::TfType& schemaType) const;

    template <typename T>
    bool HasAPI(const pxr::TfToken& instanceName) const;

    /// Return true if a prim has an API schema with TfType *schemaType*.
    /// 
    /// *instanceName*, if non-empty is used to determine if a particular 
    /// instance of a multiple-apply API schema (eg. UsdCollectionAPI) has been 
    /// applied to the prim. A coding error is issued if a non-empty 
    /// *instanceName* is passed in and <b>T</b> represents a single-apply API 
    /// schema.
    bool HasAPI(const pxr::TfType& schemaType, const pxr::TfToken& instanceName) const;

    /// Return this prim's direct child named *name* if it has one, otherwise
    /// return an invalid UsdPrim.  Equivalent to:
    /// ```
    /// prim.GetStage()->GetPrimAtPath(prim.GetPath().AppendChild(name))
    /// ```
    pxr::UsdPrim GetChild(const pxr::TfToken& name) const;

    /// Return this prim's active, loaded, defined, non-abstract children as an
    /// iterable range.  Equivalent to:
    /// ```
    /// GetFilteredChildren(UsdPrimDefaultPredicate)
    /// ```
    /// 
    /// See \ref Usd_PrimFlags "Prim predicate flags" 
    /// and #UsdPrimDefaultPredicate for more information.
    pxr::UsdPrim::SiblingRange GetChildren() const;

    /// Return all this prim's children as an iterable range.
    pxr::UsdPrim::SiblingRange GetAllChildren() const;

    /// Return a subset of all of this prim's children filtered by *predicate*
    /// as an iterable range.  The *predicate* is generated by combining a
    /// series of prim flag terms with either && or || and !.
    /// 
    /// Example usage:
    /// ```
    /// // Get all active model children.
    /// GetFilteredChildren(UsdPrimIsActive && UsdPrimIsModel);
    /// 
    /// // Get all model children that pass the default predicate.
    /// GetFilteredChildren(UsdPrimDefaultPredicate && UsdPrimIsModel);
    /// ```
    /// 
    /// If this prim is an instance, no children will be returned unless
    /// #UsdTraverseInstanceProxies is used to allow instance proxies to be
    /// returned, or if this prim is itself an instance proxy.
    /// 
    /// See \ref Usd_PrimFlags "Prim predicate flags" 
    /// and #UsdPrimDefaultPredicate for more information.
    pxr::UsdPrim::SiblingRange GetFilteredChildren(const pxr::Usd_PrimFlagsPredicate& predicate) const;

    /// Return this prim's active, loaded, defined, non-abstract descendants as
    /// an iterable range.  Equivalent to:
    /// ```
    /// GetFilteredDescendants(UsdPrimDefaultPredicate)
    /// ```
    /// 
    /// \note This method is not yet available in python, pending some
    /// refactoring to make it more feasible.
    /// 
    /// See \ref Usd_PrimFlags "Prim predicate flags" and 
    /// #UsdPrimDefaultPredicate for more information, UsdStage::Traverse(), 
    /// and *UsdPrimRange* for more general Stage traversal behaviors.
    pxr::UsdPrim::SubtreeRange GetDescendants() const;

    /// Return all this prim's descendants as an iterable range.
    /// 
    /// \note This method is not yet available in python, pending some
    /// refactoring to make it more feasible.
    /// 
    /// See \ref Usd_PrimFlags "Prim predicate flags" and 
    /// #UsdPrimDefaultPredicate for more information, UsdStage::Traverse(), 
    /// and *UsdPrimRange* for more general Stage traversal behaviors.
    pxr::UsdPrim::SubtreeRange GetAllDescendants() const;

    /// Return a subset of all of this prim's descendants filtered by
    /// *predicate* as an iterable range.  The *predicate* is generated by
    /// combining a series of prim flag terms with either && or || and !.
    /// 
    /// Example usage:
    /// ```
    /// // Get all active model descendants.
    /// GetFilteredDescendants(UsdPrimIsActive && UsdPrimIsModel);
    /// 
    /// // Get all model descendants that pass the default predicate.
    /// GetFilteredDescendants(UsdPrimDefaultPredicate && UsdPrimIsModel);
    /// ```
    /// 
    /// If this prim is an instance, no descendants will be returned unless
    /// #UsdTraverseInstanceProxies is used to allow instance proxies to be
    /// returned, or if this prim is itself an instance proxy.
    /// 
    /// \note This method is not yet available in python, pending some
    /// refactoring to make it more feasible.
    /// 
    /// See \ref Usd_PrimFlags "Prim predicate flags" and 
    /// #UsdPrimDefaultPredicate for more information, UsdStage::Traverse(), 
    /// and *UsdPrimRange* for more general Stage traversal behaviors.
    pxr::UsdPrim::SubtreeRange GetFilteredDescendants(const pxr::Usd_PrimFlagsPredicate& predicate) const;

    /// Return this prim's parent prim.  Return an invalid UsdPrim if this is a
    /// root prim.
    pxr::UsdPrim GetParent() const;

    /// Return this prim's next active, loaded, defined, non-abstract sibling 
    /// if it has one, otherwise return an invalid UsdPrim.  Equivalent to:
    /// ```
    /// GetFilteredNextSibling(UsdPrimDefaultPredicate)
    /// ```
    /// 
    /// See \ref Usd_PrimFlags "Prim predicate flags" 
    /// and #UsdPrimDefaultPredicate for more information.
    pxr::UsdPrim GetNextSibling() const;

    /// Return this prim's next sibling that matches *predicate* if it has one,
    /// otherwise return the invalid UsdPrim.
    /// 
    /// See \ref Usd_PrimFlags "Prim predicate flags" 
    /// and #UsdPrimDefaultPredicate for more information.
    pxr::UsdPrim GetFilteredNextSibling(const pxr::Usd_PrimFlagsPredicate& predicate) const;

    /// Returns true if the prim is the pseudo root.  
    /// 
    /// Equivalent to 
    /// ```
    /// prim.GetPath() == SdfPath::AbsoluteRootPath()
    /// ```
    bool IsPseudoRoot() const;

    /// Returns the prim at *path* on the same stage as this prim.
    /// If path is is relative, it will be anchored to the path of this prim.
    /// \sa UsdStage::GetPrimAtPath(const SdfPath&) const
    pxr::UsdPrim GetPrimAtPath(const pxr::SdfPath& path) const;

    /// Returns the object at *path* on the same stage as this prim.
    /// If path is is relative, it will be anchored to the path of this prim.
    /// \sa UsdStage::GetObjectAtPath(const SdfPath&) const
    pxr::UsdObject GetObjectAtPath(const pxr::SdfPath& path) const;

    /// Returns the property at *path* on the same stage as this prim.
    /// If path is relative, it will be anchored to the path of this prim.
    /// 
    /// \note There is no guarantee that this method returns a property on
    /// this prim. This is only guaranteed if path is a purely relative
    /// property path.
    /// \sa GetProperty(const TfToken&) const
    /// \sa UsdStage::GetPropertyAtPath(const SdfPath&) const
    pxr::UsdProperty GetPropertyAtPath(const pxr::SdfPath& path) const;

    /// Returns the relationship at *path* on the same stage as this prim.
    /// If path is relative, it will be anchored to the path of this prim.
    /// 
    /// \note There is no guarantee that this method returns a relationship on
    /// this prim. This is only guaranteed if path is a purely relative
    /// property path.
    /// \sa GetRelationship(const TfToken&) const
    /// \sa UsdStage::GetRelationshipAtPath(const SdfPath&) const
    pxr::UsdRelationship GetRelationshipAtPath(const pxr::SdfPath& path) const;

    /// Return a UsdVariantSets object representing all the VariantSets
    /// present on this prim.
    /// 
    /// The returned object also provides the API for adding new VariantSets
    /// to the prim.
    pxr::UsdVariantSets GetVariantSets() const;

    /// Retrieve a specifically named VariantSet for editing or constructing
    /// a UsdEditTarget.
    /// 
    /// This is a shortcut for 
    /// ```
    /// prim.GetVariantSets().GetVariantSet(variantSetName)
    /// ```
    pxr::UsdVariantSet GetVariantSet(const std::string& variantSetName) const;

    /// Return true if this prim has any authored VariantSets.
    /// 
    /// \note this connotes only the *existence* of one of more VariantSets,
    /// *not* that such VariantSets necessarily contain any variants or
    /// variant opinions.
    bool HasVariantSets() const;

    /// Author scene description for the attribute named \a attrName at the
    /// current EditTarget if none already exists.  Return a valid attribute if
    /// scene description was successfully authored or if it already existed,
    /// return invalid attribute otherwise.  Note that the supplied \a typeName
    /// and \a custom arguments are only used in one specific case.  See below
    /// for details.
    /// 
    /// Suggested use:
    /// ```
    /// if (UsdAttribute myAttr = prim.CreateAttribute(...)) {
    ///    // success. 
    /// }
    /// ```
    /// 
    /// To call this, GetPrim() must return a valid prim.
    /// 
    /// - If a spec for this attribute already exists at the current edit
    /// target, do nothing.
    /// 
    /// - If a spec for \a attrName of a different spec type (e.g. a
    /// relationship) exists at the current EditTarget, issue an error.
    /// 
    /// - If \a name refers to a builtin attribute according to the prim's
    /// definition, author an attribute spec with required metadata from the
    /// definition.
    /// 
    /// - If \a name refers to a builtin relationship, issue an error.
    /// 
    /// - If there exists an absolute strongest authored attribute spec for
    /// \a attrName, author an attribute spec at the current EditTarget by
    /// copying required metadata from that strongest spec.
    /// 
    /// - If there exists an absolute strongest authored relationship spec for
    /// \a attrName, issue an error.
    /// 
    /// - Otherwise author an attribute spec at the current EditTarget using
    /// the provided \a typeName and \a custom for the required metadata fields.
    /// Note that these supplied arguments are only ever used in this particular
    /// circumstance, in all other cases they are ignored.
    pxr::UsdAttribute CreateAttribute(const pxr::TfToken& name, const pxr::SdfValueTypeName& typeName, bool custom, pxr::SdfVariability variability) const;

    /// \overload
    /// Create a custom attribute with *name*, *typeName* and *variability*.
    pxr::UsdAttribute CreateAttribute(const pxr::TfToken& name, const pxr::SdfValueTypeName& typeName, pxr::SdfVariability variability) const;

    /// \overload
    /// This overload of CreateAttribute() accepts a vector of name components
    /// used to construct a *namespaced* property name.  For details, see
    /// \ref Usd_Ordering
    pxr::UsdAttribute CreateAttribute(const std::vector<std::string>& nameElts, const pxr::SdfValueTypeName& typeName, bool custom, pxr::SdfVariability variability) const;

    /// \overload
    /// Create a custom attribute with *nameElts*, *typeName*, and
    /// *variability*.
    pxr::UsdAttribute CreateAttribute(const std::vector<std::string>& nameElts, const pxr::SdfValueTypeName& typeName, pxr::SdfVariability variability) const;
    
    /// Search the prim subtree rooted at this prim for attributes for which
    /// *predicate* returns true, collect their connection source paths and
    /// return them in an arbitrary order.  If *recurseOnSources* is true,
    /// act as if this function was invoked on the connected prims and owning
    /// prims of connected properties also and return the union.
    pxr::SdfPathVector FindAllAttributeConnectionPaths(const std::function<_Bool (const pxrInternal_v0_20__pxrReserved__::UsdAttribute &)>& pred, bool recurseOnSources) const;

    /// Author scene description for the relationship named \a relName at the
    /// current EditTarget if none already exists.  Return a valid relationship
    /// if scene description was successfully authored or if it already existed,
    /// return an invalid relationship otherwise.
    /// 
    /// Suggested use:
    /// ```
    /// if (UsdRelationship myRel = prim.CreateRelationship(...)) {
    ///    // success. 
    /// }
    /// ```
    /// 
    /// To call this, GetPrim() must return a valid prim.
    /// 
    /// - If a spec for this relationship already exists at the current edit
    /// target, do nothing.
    /// 
    /// - If a spec for \a relName of a different spec type (e.g. an
    /// attribute) exists at the current EditTarget, issue an error.
    /// 
    /// - If \a name refers to a builtin relationship according to the prim's
    /// definition, author a relationship spec with required metadata from the
    /// definition.
    /// 
    /// - If \a name refers to a builtin attribute, issue an error.
    /// 
    /// - If there exists an absolute strongest authored relationship spec for
    /// \a relName, author a relationship spec at the current EditTarget by
    /// copying required metadata from that strongest spec.
    /// 
    /// - If there exists an absolute strongest authored attribute spec for \a
    /// relName, issue an error.
    /// 
    /// - Otherwise author a uniform relationship spec at the current
    /// EditTarget, honoring *custom* .
    pxr::UsdRelationship CreateRelationship(const pxr::TfToken& relName, bool custom) const;

    /// \overload 
    /// This overload of CreateRelationship() accepts a vector of
    /// name components used to construct a *namespaced* property name.
    /// For details, see \ref Usd_Ordering
    pxr::UsdRelationship CreateRelationship(const std::vector<std::string>& nameElts, bool custom) const;

    /// Like GetProperties(), but exclude all attributes from the result.
    std::vector<pxr::UsdRelationship> GetRelationships() const;

    /// Like GetRelationships(), but exclude relationships without authored
    /// scene description from the result.  See UsdProperty::IsAuthored().
    std::vector<pxr::UsdRelationship> GetAuthoredRelationships() const;

    /// Return a UsdRelationship with the name \a relName. The relationship
    /// returned may or may not **actually** exist so it must be checked for
    /// validity. Suggested use:
    /// 
    /// ```
    /// if (UsdRelationship myRel = prim.GetRelationship("myRel")) {
    ///    // myRel is safe to use.
    ///    // Edits to the owning stage requires subsequent validation.
    /// } else {
    ///    // myRel was not defined/authored
    /// }
    /// ```
    pxr::UsdRelationship GetRelationship(const pxr::TfToken& relName) const;

    /// Return true if this prim has a relationship named *relName*, false
    /// otherwise.
    bool HasRelationship(const pxr::TfToken& relName) const;

    /// Search the prim subtree rooted at this prim for relationships for which
    /// *predicate* returns true, collect their target paths and return them in
    /// an arbitrary order.  If *recurseOnTargets* is true, act as if this
    /// function was invoked on the targeted prims and owning prims of targeted
    /// properties also (but not of forwarding relationships) and return the
    /// union.
    pxr::SdfPathVector FindAllRelationshipTargetPaths(const std::function<_Bool (const pxrInternal_v0_20__pxrReserved__::UsdRelationship &)>& pred, bool recurseOnTargets) const;

    /// \deprecated 
    /// Clears the payload at the current EditTarget for this prim. Return false 
    /// if the payload could not be cleared. 
    bool ClearPayload() const;

    /// \deprecated 
    /// Return true if a payload is present on this prim.
    /// 
    /// \sa \ref Usd_Payloads
    bool HasPayload() const;

    /// \deprecated 
    /// Author payload metadata for this prim at the current edit
    /// target. Return true on success, false if the value could not be set. 
    /// 
    /// \sa \ref Usd_Payloads
    bool SetPayload(const pxr::SdfPayload& payload) const;

    /// \deprecated 
    /// Shorthand for SetPayload(SdfPayload(assetPath, primPath)).
    bool SetPayload(const std::string& assetPath, const pxr::SdfPath& primPath) const;

    /// \deprecated 
    /// Shorthand for SetPayload(SdfPayload(layer->GetIdentifier(),
    /// primPath)).
    bool SetPayload(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& primPath) const;

    /// Return a UsdPayloads object that allows one to add, remove, or
    /// mutate payloads <em>at the currently set UsdEditTarget</em>.
    /// 
    /// There is currently no facility for *listing* the currently authored
    /// payloads on a prim... the problem is somewhat ill-defined, and
    /// requires some thought.
    pxr::UsdPayloads GetPayloads() const;

    /// Return true if this prim has any authored payloads.
    bool HasAuthoredPayloads() const;

    /// Load this prim, all its ancestors, and by default all its descendants.
    /// If *loadPolicy* is UsdLoadWithoutDescendants, then load only this prim
    /// and its ancestors.
    /// 
    /// See UsdStage::Load for additional details.
    void Load(pxr::UsdLoadPolicy policy) const;

    /// Unloads this prim and all its descendants.
    /// 
    /// See UsdStage::Unload for additional details.
    void Unload() const;

    /// Return a UsdReferences object that allows one to add, remove, or
    /// mutate references <em>at the currently set UsdEditTarget</em>.
    /// 
    /// There is currently no facility for *listing* the currently authored
    /// references on a prim... the problem is somewhat ill-defined, and
    /// requires some thought.
    pxr::UsdReferences GetReferences() const;

    /// Return true if this prim has any authored references.
    bool HasAuthoredReferences() const;

    /// Return a UsdInherits object that allows one to add, remove, or
    /// mutate inherits <em>at the currently set UsdEditTarget</em>.
    /// 
    /// There is currently no facility for *listing* the currently authored
    /// inherits on a prim... the problem is somewhat ill-defined, and
    /// requires some thought.
    pxr::UsdInherits GetInherits() const;

    /// Return true if this prim has any authored inherits.
    bool HasAuthoredInherits() const;

    /// Return a UsdSpecializes object that allows one to add, remove, or
    /// mutate specializes <em>at the currently set UsdEditTarget</em>.
    /// 
    /// There is currently no facility for *listing* the currently authored
    /// specializes on a prim... the problem is somewhat ill-defined, and
    /// requires some thought.
    pxr::UsdSpecializes GetSpecializes() const;

    /// Returns true if this prim has any authored specializes.
    bool HasAuthoredSpecializes() const;

    /// Return true if this prim has been marked as instanceable.
    /// 
    /// Note that this is not the same as IsInstance(). A prim may return
    /// true for IsInstanceable() and false for IsInstance() if this prim
    /// is not active or if it is marked as instanceable but contains no 
    /// instanceable data.
    bool IsInstanceable() const;

    /// Author 'instanceable' metadata for this prim at the current
    /// EditTarget.
    bool SetInstanceable(bool instanceable) const;

    /// Remove the authored 'instanceable' opinion at the current EditTarget.
    /// Do nothing if there is no authored opinion.
    bool ClearInstanceable() const;

    /// Return true if this prim has an authored opinion for 'instanceable', 
    /// false otherwise.
    bool HasAuthoredInstanceable() const;

    /// Return true if this prim is an instance of a master, false
    /// otherwise.
    /// 
    /// If this prim is an instance, calling GetMaster() will return
    /// the UsdPrim for the corresponding master prim.
    bool IsInstance() const;

    /// Return true if this prim is an instance proxy, false otherwise.
    /// An instance proxy prim represents a descendent of an instance
    /// prim.
    bool IsInstanceProxy() const;

    /// Return true if this prim is a master prim, false otherwise.
    bool IsMaster() const;

    /// Return true if this prim is located in a subtree of prims
    /// rooted at a master prim, false otherwise.
    /// 
    /// If this function returns true, this prim is either a master prim
    /// or a descendent of a master prim.
    bool IsInMaster() const;

    /// If this prim is an instance, return the UsdPrim for the corresponding
    /// master. Otherwise, return an invalid UsdPrim.
    pxr::UsdPrim GetMaster() const;

    /// If this prim is an instance proxy, return the UsdPrim for the
    /// corresponding prim in the instance's master. Otherwise, return an
    /// invalid UsdPrim.
    pxr::UsdPrim GetPrimInMaster() const;

    /// If this prim is a master prim, returns all prims that are instances of 
    /// this master. Otherwise, returns an empty vector.
    /// 
    /// Note that this function will return prims in masters for instances that 
    /// are nested beneath other instances.
    std::vector<pxr::UsdPrim> GetInstances() const;

    /// Return the cached prim index containing all sites that contribute 
    /// opinions to this prim.
    /// 
    /// The prim index can be used to examine the composition arcs and scene 
    /// description sites that contribute to this prim's property and metadata 
    /// values. 
    /// 
    /// The prim index returned by this function is optimized and may not
    /// include sites that do not contribute opinions to this prim. Use 
    /// UsdPrim::ComputeExpandedPrimIndex to compute a prim index that includes 
    /// all possible sites that could contribute opinions.
    /// 
    /// This prim index will be empty for master prims. This ensures that these 
    /// prims do not provide any attribute or metadata values. For all other 
    /// prims in masters, this is the prim index that was chosen to be shared 
    /// with all other instances. In either case, the prim index's path will 
    /// not be the same as the prim's path.
    /// 
    /// Prim indexes may be invalidated by changes to the UsdStage and cannot
    /// detect if they are expired. Clients should avoid keeping copies of the 
    /// prim index across such changes, which include scene description
    /// changes or changes to load state.
    const pxr::PcpPrimIndex& GetPrimIndex() const;

    /// Compute the prim index containing all sites that could contribute
    /// opinions to this prim.
    /// 
    /// This function is similar to UsdPrim::GetPrimIndex. However, the
    /// returned prim index includes all sites that could possibly contribute 
    /// opinions to this prim, not just the sites that currently do so. This is 
    /// useful in certain situations; for example, this could be used to 
    /// generate a list of sites where clients could make edits to affect this 
    /// prim, or for debugging purposes.
    /// 
    /// This function may be relatively slow, since it will recompute the prim
    /// index on every call. Clients should prefer UsdPrim::GetPrimIndex unless 
    /// the additional site information is truly needed.
    pxr::PcpPrimIndex ComputeExpandedPrimIndex() const;

*/

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct UsdPrim


/*
struct UsdPrimSiblingIterator {
    using BoundType = pxr::UsdPrimSiblingIterator;

    boost::iterators::detail::iterator_facade_base::reference operator*() const;

    boost::iterators::detail::iterator_facade_base::pointer operator->() const;

    pxr::UsdPrimSiblingIterator& operator++();

    const const pxr::Usd_PrimData*& base() const;

    UsdPrimSiblingIterator();

    ~UsdPrimSiblingIterator();

    UsdPrimSiblingIterator(const pxr::UsdPrimSiblingIterator& );

    UsdPrimSiblingIterator(pxr::UsdPrimSiblingIterator&& ) CPPMM_IGNORE;

} CPPMM_OPAQUEPTR; // struct UsdPrimSiblingIterator


    using UsdPrimSiblingRange = pxr::UsdPrimSiblingRange;


struct UsdPrimSubtreeIterator {
    using BoundType = pxr::UsdPrimSubtreeIterator;

    boost::iterators::detail::iterator_facade_base::reference operator*() const;

    boost::iterators::detail::iterator_facade_base::pointer operator->() const;

    pxr::UsdPrimSubtreeIterator& operator++();

    const const pxr::Usd_PrimData*& base() const;

    UsdPrimSubtreeIterator();

    ~UsdPrimSubtreeIterator();

    UsdPrimSubtreeIterator(const pxr::UsdPrimSubtreeIterator& );

    UsdPrimSubtreeIterator(pxr::UsdPrimSubtreeIterator&& ) CPPMM_IGNORE;

} CPPMM_OPAQUEPTR; // struct UsdPrimSubtreeIterator


    using UsdPrimSubtreeRange = pxr::UsdPrimSubtreeRange;


struct Tf_ShouldIterateOverCopy {
    using BoundType = pxr::Tf_ShouldIterateOverCopy;

    operator const mpl_::bool_<true> &() const;

    operator bool() const;

} CPPMM_OPAQUEPTR; // struct Tf_ShouldIterateOverCopy
*/


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
