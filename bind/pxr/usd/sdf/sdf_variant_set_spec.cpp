#include <pxr/usd/sdf/variantSetSpec.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfVariantSetSpec 
/// 
/// Represents a coherent set of alternate representations for part of a
/// scene.
/// 
/// An SdfPrimSpec object may contain one or more named SdfVariantSetSpec
/// objects that define variations on the prim.
/// 
/// An SdfVariantSetSpec object contains one or more named SdfVariantSpec
/// objects. It may also define the name of one of its variants to be used by
/// default. 
/// 
/// When a prim references another prim, the referencing prim may specify
/// one of the variants from each of the variant sets of the target prim.
/// The chosen variant from each set (or the default variant from those sets
/// that the referencing prim does not explicitly specify) is composited 
/// over the target prim, and then the referencing prim is composited over 
/// the result.
struct SdfVariantSetSpec {
    using BoundType = pxr::SdfVariantSetSpec;

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
    std::vector<pxr::TfToken> ListFields() const;

    /// Returns \c true if the spec has a non-empty value with field
    /// name \p name.
    bool HasField(const pxr::TfToken& name) const;

    template <typename T>
    bool HasField(const pxr::TfToken& name, T* value) const;

#if 0
    /// Returns a field value by name.
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

    SdfVariantSetSpec();

    SdfVariantSetSpec(const pxr::SdfVariantSetSpec& spec);

    SdfVariantSetSpec(const pxr::Sdf_IdentityRefPtr& identity);

    /// Constructs a new instance.
    static pxr::SdfVariantSetSpecHandle New(const pxr::SdfPrimSpecHandle& prim, const std::string& name);

    /// Constructs a new instance.
    static pxr::SdfVariantSetSpecHandle New(const pxr::SdfVariantSpecHandle& prim, const std::string& name);

    /// Returns the name of this variant set.
    std::string GetName() const;

    /// Returns the name of this variant set.
    pxr::TfToken GetNameToken() const;

    /// Returns the prim or variant that this variant set belongs to.
    pxr::SdfSpecHandle GetOwner() const;

    /// Returns the variants as a map.
    pxr::SdfVariantView GetVariants() const;

    /// Returns the variants as a vector.
    pxr::SdfVariantSpecHandleVector GetVariantList() const;

    /// Removes \p variant from the list of variants.
    /// 
    /// If the variant set does not currently own \p variant, no action
    /// is taken.
    void RemoveVariant(const pxr::SdfVariantSpecHandle& variant);

    pxr::SdfVariantSetSpec& operator=(const pxr::SdfVariantSetSpec& );

    ~SdfVariantSetSpec();

} CPPMM_OPAQUEPTR; // struct SdfVariantSetSpec


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
