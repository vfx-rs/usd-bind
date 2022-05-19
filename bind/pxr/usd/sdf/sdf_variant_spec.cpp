#include <pxr/usd/sdf/variantSpec.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfVariantSpec 
/// 
/// Represents a single variant in a variant set.
/// 
/// A variant contains a prim.  This prim is the root prim of the variant.
/// 
/// SdfVariantSpecs are value objects.  This means they are immutable 
/// once created and they are passed by copy-in APIs.  To change a variant 
/// spec, you make a new one and replace the existing one.
struct SdfVariantSpec {
    using BoundType = pxr::SdfVariantSpec;

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

    SdfVariantSpec();

    SdfVariantSpec(const pxr::SdfVariantSpec& spec);

    SdfVariantSpec(const pxr::Sdf_IdentityRefPtr& identity);

    /// Constructs a new instance.
    static pxr::SdfVariantSpecHandle New(const pxr::SdfVariantSetSpecHandle& owner, const std::string& name);

    /// Returns the name of this variant.
    std::string GetName() const;

    /// Returns the name of this variant.
#if 0
    pxr::TfToken GetNameToken() const;
#endif

    /// Return the SdfVariantSetSpec that owns this variant.
    pxr::SdfVariantSetSpecHandle GetOwner() const;

    /// Get the prim spec owned by this variant.
    pxr::SdfPrimSpecHandle GetPrimSpec() const;

    /// Returns the nested variant sets.
    /// 
    /// The result maps variant set names to variant sets.  Variant sets
    /// may be removed through the proxy.
    pxr::SdfVariantSetsProxy GetVariantSets() const;

    /// Returns list of variant names for the given variant set.
    std::vector<std::string> GetVariantNames(const std::string& name) const;

    pxr::SdfVariantSpec& operator=(const pxr::SdfVariantSpec& );

    ~SdfVariantSpec();

} CPPMM_OPAQUEPTR; // struct SdfVariantSpec


/// Convenience function to create a variant spec for a given variant set and
/// a prim at the given path with.
/// 
/// The function creates the prim spec if it doesn't exist already and any
/// necessary parent prims, in the given layer.
/// 
/// It adds the variant set to the variant set list if it doesn't already exist.
/// 
/// It creates a variant spec with the given name under the specified variant
/// set if it doesn't already exist.
pxr::SdfVariantSpecHandle SdfCreateVariantInLayer(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& primPath, const std::string& variantSetName, const std::string& variantName);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
