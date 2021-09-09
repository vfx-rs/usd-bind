#include <pxr/usd/usd/attribute.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class UsdAttribute
/// 
/// Scenegraph object for authoring and retrieving numeric, string, and array
/// valued data, sampled over time.
/// 
/// The allowed value types for UsdAttribute are dictated by the Sdf
/// ("Scene Description Foundations") core's data model, which we summarize in
/// \ref Usd_Page_Datatypes .
/// 
/// \section Usd_AttributeQualities Attribute Defining Qualities
/// 
/// In addition to its value type, an Attribute has two other defining
/// qualities:
/// \li <b>Variability</b> Expresses whether an attribute is intended to
/// have time samples (GetVariability() == \c SdfVariabilityVarying), or only
/// a default (GetVariability() == \c SdfVariabilityUniform).  For more on
/// reasoning about time samples, 
/// see \ref Usd_AttributeValueMethods "Value & Time-Sample Accessors".
/// 
/// \li <b>Custom</b> Determines whether an attribute belongs to a
/// schema (IsCustom() == \c false), or is a user-defined, custom attribute.
/// schema attributes will always be defined on a prim of the schema type,
/// ans may possess fallback values from the schema, whereas custom 
/// attributes must always first be authored in order to be defined.  Note
/// that \em custom is actually an aspect of UsdProperty, as UsdRelationship
/// can also be custom or provided by a schema.
/// 
/// \section Usd_AttributeExistence Attribute Creation and Existence
/// 
/// One can always create an attribute generically via 
/// UsdPrim::CreateAttribute(), which ensures that an attribute "is defined"
/// in the current \ref UsdEditTarget .  In order to author any metadata or
/// a default or timesample for an attribute, <em>it must first be defined</em>.
/// It is sufficient that the attribute be defined in any one of the layers
/// participating in the stage's current composition; for \em builtin 
/// attributes (those belonging to the owning prim's defining schema, i.e.
/// the most specific subclass of UsdTypedSchema for which prim.IsA<schema>()
/// will evaluate to true) there need be no authored scene description, because
/// a definition is provided by the prim's schema definition.
/// 
/// <b>Creating</b> an attribute does not imply that the attribute has a value.
/// More broadly, in the following code:
/// \code
/// if (UsdAttribute attr = prim.GetAttribute(TfToken("myAttr"))){
///    ...
/// }
/// \endcode
/// 
/// The UsdAttribute passes the bool test, because it is defined; however, 
/// inside the clause, we have no guarantee that attr has a value.
/// 
/// \section Usd_AttributeInterpolation Attribute Value Interpolation
/// 
/// UsdAttribute supports two interpolation behaviors when retrieving
/// attribute values at times where no value is explicitly authored.
/// The desired behavior may be specified via UsdStage::SetInterpolationType.
/// That behavior will be used for all calls to UsdAttribute::Get.
/// 
/// The supported interpolation types are:
/// 
/// \li <b>Held</b> Attribute values are held constant between authored
/// values.  An attribute's value will be equal to the nearest preceding
/// authored value.  If there is no preceding authored value, the value 
/// will be equal to the nearest subsequent value.
/// 
/// \li <b>Linear</b> Attribute values are linearly interpolated between
/// authored values.
/// 
/// Linear interpolation is only supported for certain data types.  See 
/// \ref USD_LINEAR_INTERPOLATION_TYPES for the list of these types.  Types 
/// that do not support linear interpolation will use held interpolation 
/// instead.
/// 
/// Linear interpolation is done element-by-element for array, vector, 
/// and matrix data types.  If linear interpolation is requested for
/// two array values with different sizes, held interpolation will
/// be used instead.
/// 
/// \section Usd_AttributeBlocking Attribute Value Blocking
/// 
/// While prims can effectively be removed from a scene by
/// \ref Usd_ActiveInactive "deactivating them," properties cannot.  However,
/// it is possible to **block an attribute's value**, thus making the attribute
/// behave as if it has a definition (and possibly metadata), but no authored
/// value.  
/// 
/// 
/// One blocks an attribute using UsdAttribute::Block(), which will block the
/// attribute in the stage's current UsdEditTarget, by authoring an
/// SdfValueBlock in the attribute's *default*, and only values authored in
/// weaker layers than the editTarget will be blocked.  If the value block is
/// the strongest authored opinion for the attribute, the HasAuthoredValue()
/// method will return *false*, and the HasValue() and Get() methods will
/// only return *true* if the attribute possesses a fallback value from the
/// prim's schema.  "Unblocking" a blocked attribute is as simple as setting
/// a *default* or timeSample value for the attribute in the same or stronger
/// layer.
/// 
/// \subsection Usd_TimeVaryingAttributeBlocks Time-varying Blocks
/// 
/// The semantics of \ref Usd_ValueClips_Overview "Value Clips" necessitate
/// the ability to selectively block an attribute's value for only some intervals
/// in its authored range of samples.  One can block an attribute's value at
/// time *t* by calling `attr.Set(SdfValueBlock, t)` When an attribute is thusly
/// "partially blocked", UsdAttribute::Get() will succeed only for those time
/// intervals whose left/earlier bracketing timeSample is **not** SdfValueBlock.
/// 
/// Due to this time-varying potential of value blocking, it may be the case 
/// that an attribute's  HasAuthoredValue() and HasValue() methods both return
/// *true* (because they do not and cannot consider time-varying blocks), but
/// Get() may yet return *false* over some intervals.
/// 
/// \section Usd_AssetPathValuedAttributes Attributes of type SdfAssetPath and UsdAttribute::Get()
/// 
/// If an attribute's value type is SdfAssetPath or SdfAssetPathArray, Get()
/// performs extra work to compute the resolved asset paths, using the layer
/// that has the strongest value opinion as the anchor for "relative" asset
/// paths.  Both the unresolved and resolved results are available through
/// SdfAssetPath::GetAssetPath() and SdfAssetPath::GetResolvedPath(),
/// respectively.
/// 
/// Clients that call Get() on many asset-path-valued attributes may wish to
/// employ an ArResolverScopedCache to improve asset path resolution
/// performance.
struct UsdAttribute {
    using BoundType = pxr::UsdAttribute;

    /// Construct an invalid attribute.
    UsdAttribute();

    UsdAttribute(const pxr::UsdAttribute& rhs);

    /// Return true if this is a valid object, false otherwise.
    bool IsValid() const;

    /// Returns \c true if this object is valid, \c false otherwise.
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

    /// Gets the value of the 'hidden' metadata field, false if not 
    /// authored.
    /// 
    /// When an object is marked as hidden, it is an indicator to clients who 
    /// generically display objects (such as GUI widgets) that this object 
    /// should not be included, unless explicitly asked for.  Although this
    /// is just a hint and thus up to each application to interpret, we
    /// use it primarily as a way of simplifying hierarchy displays, by
    /// hiding \em only the representation of the object itself, \em not its
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
    /// This is the complement of GetBaseName(), although it does \em not
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
    /// If \p nestedGroups is empty, we author an empty string for displayGroup.
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
    /// \b Note that this value should not be changed as it is typically either
    /// automatically authored or provided by a property definition. This method
    /// is provided primarily for fixing invalid scene description.
    bool SetCustom(bool isCustom) const;

    /// Return true if this is a builtin property or if the strongest
    /// authored SdfPropertySpec for this property's path matches this
    /// property's dynamic type.  That is, SdfRelationshipSpec in case this is a
    /// UsdRelationship, and SdfAttributeSpec in case this is a UsdAttribute.
    /// Return \c false if this property's prim has expired.
    /// 
    /// For attributes, a \c true return does not imply that this attribute
    /// possesses a value, only that has been declared, is of a certain type and
    /// variability, and that it is safe to use to query and author values and
    /// metadata.
    bool IsDefined() const;

    /// Gets the color space in which the attribute is authored.
    /// \sa SetColorSpace()
    /// \ref Usd_ColorConfigurationAPI "UsdStage Color Configuration API"
    pxr::TfToken GetColorSpace() const;

    /// Sets the color space of the attribute to \p colorSpace.
    /// \sa GetColorSpace()
    /// \ref Usd_ColorConfigurationAPI "UsdStage Color Configuration API"
    void SetColorSpace(const pxr::TfToken& colorSpace) const;

    /// Returns whether color-space is authored on the attribute.
    /// \sa GetColorSpace()
    bool HasColorSpace() const;

    /// Clears authored color-space value on the attribute.
    /// \sa SetColorSpace()
    bool ClearColorSpace() const;

    /// Return the "scene description" value type name for this attribute.
    pxr::SdfValueTypeName GetTypeName() const;

    /// Set the value for typeName at the current EditTarget, return true on
    /// success, false if the value can not be written.
    /// 
    /// \b Note that this value should not be changed as it is typically either
    /// automatically authored or provided by a property definition. This method
    /// is provided primarily for fixing invalid scene description.
    bool SetTypeName(const pxr::SdfValueTypeName& typeName) const;

    /// Return the roleName for this attribute's typeName.
    pxr::TfToken GetRoleName() const;

    /*
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

    /// Clear any authored value identified by \p key and \p keyPath
    /// at the current EditTarget.  The \p keyPath is a ':'-separated path
    /// identifying a path in subdictionaries stored in the metadata field at
    /// \p key.  Return true if the value is cleared successfully, false
    /// otherwise.
    /// 
    /// \sa \ref Usd_Dictionary_Type
    bool ClearMetadataByDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath) const;

    /// Return true if there exists any authored or fallback opinion for
    /// \p key and \p keyPath.  The \p keyPath is a ':'-separated path
    /// identifying a value in subdictionaries stored in the metadata field at
    /// \p key.
    /// 
    /// \sa \ref Usd_Dictionary_Type
    bool HasMetadataDictKey(const pxr::TfToken& key, const pxr::TfToken& keyPath) const;

    /// Return true if there exists any authored opinion (excluding
    /// fallbacks) for \p key and \p keyPath.  The \p keyPath is a ':'-separated
    /// path identifying a value in subdictionaries stored in the metadata field
    /// at \p key.
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

    /// Return the element identified by \p keyPath in this object's
    /// composed customData dictionary.  The \p keyPath is a ':'-separated path
    /// identifying a value in subdictionaries.  This is in general more
    /// efficient than composing the entire customData dictionary and then
    /// pulling out one sub-element.
    pxr::VtValue GetCustomDataByKey(const pxr::TfToken& keyPath) const;

    /// Author this object's customData dictionary to \p customData at
    /// the current EditTarget.
    void SetCustomData(const pxr::VtDictionary& customData) const;

    /// Author the element identified by \p keyPath in this object's
    /// customData dictionary at the current EditTarget.  The \p keyPath is a
    /// ':'-separated path identifying a value in subdictionaries.
    void SetCustomDataByKey(const pxr::TfToken& keyPath, const pxr::VtValue& value) const;

    /// Clear the authored opinion for this object's customData
    /// dictionary at the current EditTarget.  Do nothing if there is no such
    /// authored opinion.
    void ClearCustomData() const;

    /// Clear the authored opinion identified by \p keyPath in this
    /// object's customData dictionary at the current EditTarget.  The \p
    /// keyPath is a ':'-separated path identifying a value in subdictionaries.
    /// Do nothing if there is no such authored opinion.
    void ClearCustomDataByKey(const pxr::TfToken& keyPath) const;

    /// Return true if there are any authored or fallback opinions for
    /// this object's customData dictionary, false otherwise.
    bool HasCustomData() const;

    /// Return true if there are any authored or fallback opinions for
    /// the element identified by \p keyPath in this object's customData
    /// dictionary, false otherwise.  The \p keyPath is a ':'-separated path
    /// identifying a value in subdictionaries.
    bool HasCustomDataKey(const pxr::TfToken& keyPath) const;

    /// Return true if there are any authored opinions (excluding
    /// fallback) for this object's customData dictionary, false otherwise.
    bool HasAuthoredCustomData() const;

    /// Return true if there are any authored opinions (excluding
    /// fallback) for the element identified by \p keyPath in this object's
    /// customData dictionary, false otherwise.  The \p keyPath is a
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

    /// Return the element identified by \p keyPath in this object's
    /// composed assetInfo dictionary.  The \p keyPath is a ':'-separated path
    /// identifying a value in subdictionaries.  This is in general more
    /// efficient than composing the entire assetInfo dictionary than 
    /// pulling out one sub-element.
    pxr::VtValue GetAssetInfoByKey(const pxr::TfToken& keyPath) const;

    /// Author this object's assetInfo dictionary to \p assetInfo at
    /// the current EditTarget.
    void SetAssetInfo(const pxr::VtDictionary& customData) const;

    /// Author the element identified by \p keyPath in this object's
    /// assetInfo dictionary at the current EditTarget.  The \p keyPath is a
    /// ':'-separated path identifying a value in subdictionaries.
    void SetAssetInfoByKey(const pxr::TfToken& keyPath, const pxr::VtValue& value) const;

    /// Clear the authored opinion for this object's assetInfo
    /// dictionary at the current EditTarget.  Do nothing if there is no such
    /// authored opinion.
    void ClearAssetInfo() const;

    /// Clear the authored opinion identified by \p keyPath in this
    /// object's assetInfo dictionary at the current EditTarget.  The \p
    /// keyPath is a ':'-separated path identifying a value in subdictionaries.
    /// Do nothing if there is no such authored opinion.
    void ClearAssetInfoByKey(const pxr::TfToken& keyPath) const;

    /// Return true if there are any authored or fallback opinions for
    /// this object's assetInfo dictionary, false otherwise.
    bool HasAssetInfo() const;

    /// Return true if there are any authored or fallback opinions for
    /// the element identified by \p keyPath in this object's assetInfo
    /// dictionary, false otherwise.  The \p keyPath is a ':'-separated path
    /// identifying a value in subdictionaries.
    bool HasAssetInfoKey(const pxr::TfToken& keyPath) const;

    /// Return true if there are any authored opinions (excluding
    /// fallback) for this object's assetInfo dictionary, false otherwise.
    bool HasAuthoredAssetInfo() const;

    /// Return true if there are any authored opinions (excluding
    /// fallback) for the element identified by \p keyPath in this object's
    /// assetInfo dictionary, false otherwise.  The \p keyPath is a
    /// ':'-separated path identifying a value in subdictionaries.
    bool HasAuthoredAssetInfoKey(const pxr::TfToken& keyPath) const;

    /// @}
    static char GetNamespaceDelimiter();

    /// Returns a strength-ordered list of property specs that provide
    /// opinions for this property.
    /// 
    /// If \p time is UsdTimeCode::Default(), *or* this property 
    /// is a UsdRelationship (which are never affected by clips), we will 
    /// not consider value clips for opinions. For any other \p time, for 
    /// a UsdAttribute, clips whose samples may contribute an opinion will 
    /// be included. These specs are ordered from strongest to weakest opinion, 
    /// although if \p time requires interpolation between two adjacent clips, 
    /// both clips will appear, sequentially.
    /// 
    /// \note The results returned by this method are meant for debugging
    /// and diagnostic purposes.  It is **not** advisable to retain a 
    /// PropertyStack for the purposes of expedited value resolution for 
    /// properties, since the makeup of an attribute's PropertyStack may
    /// itself be time-varying.  To expedite repeated value resolution of
    /// attributes, you should instead retain a \c UsdAttributeQuery .
    /// 
    /// \sa UsdClipsAPI
    pxr::SdfPropertySpecHandleVector GetPropertyStack(pxr::UsdTimeCode time) const;

    /// Return true if there are any authored opinions for this property
    /// in any layer that contributes to this stage, false otherwise.
    bool IsAuthored() const;

    /// Return true if there is an SdfPropertySpec authored for this
    /// property at the given \a editTarget, otherwise return false.  Note
    /// that this method does not do partial composition.  It does not consider
    /// whether authored scene description exists at \a editTarget or weaker,
    /// only <b>exactly at</b> the given \a editTarget.
    bool IsAuthoredAt(const pxr::UsdEditTarget& editTarget) const;

    /// Flattens this property to a property spec with the same name 
    /// beneath the given \p parent prim in the current edit target.
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
    /// target objects beneath the destination \p parent prim.
    /// 
    /// If the destination spec already exists, it will be overwritten.
    /// 
    /// \sa UsdStage::Flatten
    pxr::UsdProperty FlattenTo(const pxr::UsdPrim& parent) const;

    /// \overload
    /// Flattens this property to a property spec with the given
    /// \p propName beneath the given \p parent prim in the current
    /// edit target.
    pxr::UsdProperty FlattenTo(const pxr::UsdPrim& parent, const pxr::TfToken& propName) const;

    /// \overload
    /// Flattens this property to a property spec for the given
    /// \p property in the current edit target.
    pxr::UsdProperty FlattenTo(const pxr::UsdProperty& property) const;

    /// An attribute's variability expresses whether it is intended to have
    /// time-samples (\c SdfVariabilityVarying), or only a single default 
    /// value (\c SdfVariabilityUniform).
    /// 
    /// Variability is required meta-data of all attributes, and its fallback
    /// value is SdfVariabilityVarying.
    pxr::SdfVariability GetVariability() const;

    /// Set the value for variability at the current EditTarget, return true
    /// on success, false if the value can not be written.
    /// 
    /// \b Note that this value should not be changed as it is typically either
    /// automatically authored or provided by a property definition. This method
    /// is provided primarily for fixing invalid scene description.
    bool SetVariability(pxr::SdfVariability variability) const;

    /// Populates a vector with authored sample times.
    /// Returns false only on error.
    /// 
    /// This method uses the standard resolution semantics, so if a stronger
    /// default value is authored over weaker time samples, the default value
    /// will hide the underlying timesamples.
    /// 
    /// \note This function will query all value clips that may contribute 
    /// time samples for this attribute, opening them if needed. This may be
    /// expensive, especially if many clips are involved.     
    /// 
    /// \param times - on return, will contain the \em sorted, ascending
    /// timeSample ordinates.  Any data in \p times will be lost, as this
    /// method clears \p times. 
    /// 
    /// \sa UsdAttribute::GetTimeSamplesInInterval
    bool GetTimeSamples(std::vector<double>* times) const;

    /// Populates a vector with authored sample times in \p interval. 
    /// Returns false only on an error.
    /// 
    /// \note This function will only query the value clips that may 
    /// contribute time samples for this attribute in the given interval, 
    /// opening them if necessary.
    /// 
    /// \param interval - the \ref GfInterval on which to gather time samples.     
    /// 
    /// \param times - on return, will contain the \em sorted, ascending
    /// timeSample ordinates.  Any data in \p times will be lost, as this
    /// method clears \p times. 
    /// 
    /// \sa UsdAttribute::GetTimeSamples
    bool GetTimeSamplesInInterval(const pxr::GfInterval& interval, std::vector<double>* times) const;

    /// Populates the given vector, \p times with the union of all the 
    /// authored sample times on all of the given attributes, \p attrs.
    /// 
    /// \note This function will query all value clips that may contribute 
    /// time samples for the attributes in \p attrs, opening them if needed. 
    /// This may be expensive, especially if many clips are involved.
    /// 
    /// The accumulated sample times will be in sorted (increasing) order and 
    /// will not contain any duplicates.
    /// 
    /// This clears any existing values in the \p times vector before 
    /// accumulating sample times of the given attributes.
    /// 
    /// \return false if any of the attributes in \p attr are invalid or  if 
    /// there's an error when fetching time-samples for any of the attributes.
    /// 
    /// \sa UsdAttribute::GetTimeSamples
    /// \sa UsdAttribute::GetUnionedTimeSamplesInInterval
    static bool GetUnionedTimeSamples(const std::vector<pxr::UsdAttribute>& attrs, std::vector<double>* times);

    /// Populates the given vector, \p times with the union of all the 
    /// authored sample times in the GfInterval, \p interval on all of the 
    /// given attributes, \p attrs.
    /// 
    /// \note This function will only query the value clips that may 
    /// contribute time samples for the attributes in \p attrs, in the 
    /// given \p interval, opening them if necessary.
    /// 
    /// The accumulated sample times will be in sorted (increasing) order and 
    /// will not contain any duplicates.
    /// 
    /// This clears any existing values in the \p times vector before 
    /// accumulating sample times of the given attributes.
    /// 
    /// \return false if any of the attributes in \p attr are invalid or if 
    /// there's an error fetching time-samples for any of the attributes.
    /// 
    /// \sa UsdAttribute::GetTimeSamplesInInterval
    /// \sa UsdAttribute::GetUnionedTimeSamples
    static bool GetUnionedTimeSamplesInInterval(const std::vector<UsdAttribute>& attrs, const pxr::GfInterval& interval, std::vector<double>* times);

    /// Returns the number of time samples that have been authored.
    /// 
    /// This method uses the standard resolution semantics, so if a stronger
    /// default value is authored over weaker time samples, the default value
    /// will hide the underlying timesamples.
    /// 
    /// \note This function will query all value clips that may contribute 
    /// time samples for this attribute, opening them if needed. This may be
    /// expensive, especially if many clips are involved.
    size_t GetNumTimeSamples() const;

    /// Populate \a lower and \a upper with the next greater and lesser
    /// value relative to the \a desiredTime. Return false if no value exists
    /// or an error occurs, true if either a default value or timeSamples exist.
    /// 
    /// Use standard resolution semantics: if a stronger default value is
    /// authored over weaker time samples, the default value hides the
    /// underlying timeSamples.
    /// 
    /// 1) If a sample exists at the \a desiredTime, set both upper and lower
    /// to \a desiredTime.
    /// 
    /// 2) If samples exist surrounding, but not equal to the \a desiredTime,
    /// set lower and upper to the bracketing samples nearest to the
    /// \a desiredTime. 
    /// 
    /// 3) If the \a desiredTime is outside of the range of authored samples, 
    /// clamp upper and lower to the nearest time sample.
    /// 
    /// 4) If no samples exist, do not modify upper and lower and set
    /// \a hasTimeSamples to false.
    /// 
    /// In cases (1), (2) and (3), set \a hasTimeSamples to true.
    /// 
    /// All four cases above are considered to be successful, thus the return
    /// value will be true and no error message will be emitted.
    bool GetBracketingTimeSamples(double desiredTime, double* lower, double* upper, bool* hasTimeSamples) const;

    /// Return true if this attribute has an authored default value, authored
    /// time samples or a fallback value provided by a registered schema. If
    /// the attribute has been \ref Usd_AttributeBlocking "blocked", then
    /// return `true` if and only if it has a fallback value.
    bool HasValue() const;

    /// \deprecated This method is deprecated because it returns `true` even when
    /// an attribute is blocked.  Please use HasAuthoredValue() instead.  If 
    /// you truly need to know whether the attribute has **any** authored
    /// value opinions, *including blocks*, you can make the following query:
    /// `attr.GetResolveInfo().HasAuthoredValueOpinion()`
    /// 
    /// Return true if this attribute has either an authored default value or
    /// authored time samples.
    bool HasAuthoredValueOpinion() const;

    /// Return true if this attribute has either an authored default value or
    /// authored time samples.  If the attribute has been 
    /// \ref Usd_AttributeBlocking "blocked", then return `false`
    bool HasAuthoredValue() const;

    /// Return true if this attribute has a fallback value provided by 
    /// a registered schema.
    bool HasFallbackValue() const;

    /// Return true if it is possible, but not certain, that this attribute's
    /// value changes over time, false otherwise. 
    /// 
    /// If this function returns false, it is certain that this attribute's
    /// value remains constant over time.
    /// 
    /// This function is equivalent to checking if GetNumTimeSamples() > 1,
    /// but may be more efficient since it does not actually need to get a
    /// full count of all time samples.
    bool ValueMightBeTimeVarying() const;

    template <typename T>
    bool Get(T* value, pxr::UsdTimeCode time) const;

    /// \overload 
    /// Type-erased access, often not as efficient as typed access.
    bool Get(pxr::VtValue* value, pxr::UsdTimeCode time) const;

    /// Perform value resolution to determine the source of the resolved
    /// value of this attribute at the requested UsdTimeCode \p time,
    /// which defaults to \em default.
    pxr::UsdResolveInfo GetResolveInfo(pxr::UsdTimeCode time) const;

    template <typename T>
    bool Set(const T& value, pxr::UsdTimeCode time) const;

    /// \overload
    /// As a convenience, we allow the setting of string value typed attributes
    /// via a C string value.
    bool Set(const char* value, pxr::UsdTimeCode time) const;

    /// \overload 
    bool Set(const pxr::VtValue& value, pxr::UsdTimeCode time) const;

    /// Clears the authored default value and all time samples for this
    /// attribute at the current EditTarget and returns true on success.
    /// 
    /// Calling clear when either no value is authored or no spec is present,
    /// is a silent no-op returning true.    
    /// 
    /// This method does not affect any other data authored on this attribute.
    bool Clear() const;

    /// Clear the authored value for this attribute at the given 
    /// \a time, at the current EditTarget and return true on success. 
    /// UsdTimeCode::Default() can be used to clear the default value.
    /// 
    /// Calling clear when either no value is authored or no spec is present,
    /// is a silent no-op returning true. 
    bool ClearAtTime(pxr::UsdTimeCode time) const;

    /// Shorthand for ClearAtTime(UsdTimeCode::Default()).
    bool ClearDefault() const;

    /// Remove all time samples on an attribute and author a *block*
    /// \c default value. This causes the attribute to resolve as 
    /// if there were no authored value opinions in weaker layers.
    /// 
    /// See \ref Usd_AttributeBlocking for more information, including
    /// information on time-varying blocking.
    void Block() const;

    /// Adds \p source to the list of connections, in the position
    /// specified by \p position.
    /// 
    /// Issue an error if \p source identifies a master prim or an object
    /// descendant to a master prim.  It is not valid to author connections to
    /// these objects. 
    /// 
    /// What data this actually authors depends on what data is currently
    /// authored in the authoring layer, with respect to list-editing
    /// semantics, which we will document soon 
    bool AddConnection(const pxr::SdfPath& source, pxr::UsdListPosition position) const;

    /// Removes \p target from the list of targets.
    /// 
    /// Issue an error if \p source identifies a master prim or an object
    /// descendant to a master prim.  It is not valid to author connections to
    /// these objects.
    bool RemoveConnection(const pxr::SdfPath& source) const;

    /// Clears all connection edits from the current EditTarget, and makes
    /// the opinion explicit, which means we are effectively resetting the
    /// composed value of the targets list to empty.
    bool BlockConnections() const;

    /// Make the authoring layer's opinion of the connection list explicit,
    /// and set exactly to \p sources.
    /// 
    /// Issue an error if \p source identifies a master prim or an object
    /// descendant to a master prim.  It is not valid to author connections to
    /// these objects.
    /// 
    /// If any path in \p sources is invalid, issue an error and return false.
    bool SetConnections(const pxr::SdfPathVector& sources) const;

    /// Remove all opinions about the connections list from the current edit
    /// target.
    bool ClearConnections() const;

    /// Compose this attribute's connections and fill \p sources with the
    /// result.  All preexisting elements in \p sources are lost.
    /// 
    /// See \ref Usd_ScenegraphInstancing_TargetsAndConnections for details on 
    /// behavior when targets point to objects beneath instance prims.
    /// 
    /// The result is not cached, and thus recomputed on each query.
    bool GetConnections(pxr::SdfPathVector* sources) const;

    /// Return true if this attribute has any authored opinions regarding
    /// connections.  Note that this includes opinions that remove connections,
    /// so a true return does not necessarily indicate that this attribute has
    /// connections.
    bool HasAuthoredConnections() const;
    */
} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct UsdAttribute


using UsdAttributeVector = pxr::UsdAttributeVector;

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
