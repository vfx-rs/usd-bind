#include <pxr/base/js/value.h>
#include <pxr/usd/sdf/schema.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfSchemaBase
/// 
/// Generic class that provides information about scene description fields
/// but doesn't actually provide any fields.
struct SdfSchemaBase {
    using BoundType = pxr::SdfSchemaBase;

#if 0
    const pxr::TfWeakBase& __GetTfWeakBase__() const;
#endif

    void EnableNotification2() const;

    const void* GetUniqueIdentifier() const;

#if 1
    /// Returns the field definition for the given field. 
    /// Returns NULL if no definition exists for given field.
    const pxr::SdfSchemaBase::FieldDefinition* GetFieldDefinition(const pxr::TfToken& fieldKey) const;

    /// Returns the spec definition for the given spec type.
    /// Returns NULL if no definition exists for the given spec type.
    const pxr::SdfSchemaBase::SpecDefinition* GetSpecDefinition(pxr::SdfSpecType specType) const;

    /// Return whether the specified field has been registered. Also
    /// optionally return the fallback value.
    bool IsRegistered(const pxr::TfToken& fieldKey, pxr::VtValue* fallback) const;

    /// Returns whether the given field is a 'children' field -- that is, it
    /// indexes certain children beneath the owning spec.
    bool HoldsChildren(const pxr::TfToken& fieldKey) const;

    /// Return the fallback value for the specified \p fieldKey or the
    /// empty value if \p fieldKey is not registered.
    const pxr::VtValue& GetFallback(const pxr::TfToken& fieldKey) const;

    /// Coerce \p value to the correct type for the specified field.
#if 0
    pxr::VtValue CastToTypeOf(const pxr::TfToken& fieldKey, const pxr::VtValue& value) const;
#endif

    /// Return whether the given field is valid for the given spec type.
    bool IsValidFieldForSpec(const pxr::TfToken& fieldKey, pxr::SdfSpecType specType) const;

    /// Returns all fields registered for the given spec type.
    pxr::TfTokenVector GetFields(pxr::SdfSpecType specType) const;

    /// Returns all metadata fields registered for the given spec type.
    pxr::TfTokenVector GetMetadataFields(pxr::SdfSpecType specType) const;

    /// Return the metadata field display group for metadata \a metadataField on
    /// \a specType.  Return the empty token if \a metadataField is not a
    /// metadata field, or if it has no display group.
#if 0
    pxr::TfToken GetMetadataFieldDisplayGroup(pxr::SdfSpecType specType, const pxr::TfToken& metadataField) const;
#endif

    /// Returns all required fields registered for the given spec type.
    const pxr::TfTokenVector& GetRequiredFields(pxr::SdfSpecType specType) const;

    /// Return true if \p fieldName is a required field name for at least one
    /// spec type, return false otherwise.  The main use of this function is to
    /// quickly rule out field names that aren't required (and thus don't need
    /// special handling).
    bool IsRequiredFieldName(const pxr::TfToken& fieldName) const;

    /// Specific validation functions for various fields. These are internally
    /// registered as validators for the associated field, but can also be
    /// used directly.
    /// @{
    static pxr::SdfAllowed IsValidAttributeConnectionPath(const pxr::SdfPath& path);

    static pxr::SdfAllowed IsValidIdentifier(const std::string& name);

    static pxr::SdfAllowed IsValidNamespacedIdentifier(const std::string& name);

    static pxr::SdfAllowed IsValidInheritPath(const pxr::SdfPath& path);

    static pxr::SdfAllowed IsValidPayload(const pxr::SdfPayload& payload);

    static pxr::SdfAllowed IsValidReference(const pxr::SdfReference& ref);

    static pxr::SdfAllowed IsValidRelationshipTargetPath(const pxr::SdfPath& path);

    static pxr::SdfAllowed IsValidRelocatesPath(const pxr::SdfPath& path);

    static pxr::SdfAllowed IsValidSpecializesPath(const pxr::SdfPath& path);

    static pxr::SdfAllowed IsValidSubLayer(const std::string& sublayer);

    static pxr::SdfAllowed IsValidVariantIdentifier(const std::string& name);

    /// Given a value, check if it is a valid value type.
    /// This function only checks that the type of the value is valid
    /// for this schema. It does not imply that the value is valid for
    /// a particular field -- the field's validation function must be
    /// used for that.
    pxr::SdfAllowed IsValidValue(const pxr::VtValue& value) const;

    /// Returns all registered type names.
    std::vector<pxr::SdfValueTypeName> GetAllTypes() const;

    /// Return the type name object for the given type name token.
    pxr::SdfValueTypeName FindType(const pxr::TfToken& typeName) const;

    /// \overload
    pxr::SdfValueTypeName FindType(const char* typeName) const;

    /// \overload
    pxr::SdfValueTypeName FindType(const std::string& typeName) const;

    /// Return the type name object for the given type and optional role.
    pxr::SdfValueTypeName FindType(const pxr::TfType& type, const pxr::TfToken& role) const;

    /// Return the type name object for the value's type and optional role.
    pxr::SdfValueTypeName FindType(const pxr::VtValue& value, const pxr::TfToken& role) const;

    /// Return the type name object for the given type name string if it
    /// exists otherwise create a temporary type name object.  Clients
    /// should not normally need to call this.
    pxr::SdfValueTypeName FindOrCreateType(const pxr::TfToken& typeName) const;

    SdfSchemaBase(const pxr::SdfSchemaBase& );

    pxr::SdfSchemaBase& operator=(const pxr::SdfSchemaBase& );
#endif

#if 0
    /// \class _SpecDefiner
    /// 
    /// Class that defines fields for a spec type.
    struct _SpecDefiner {
        using BoundType = pxr::SdfSchemaBase::_SpecDefiner;

        /// Functions for setting spec attributes during registration
        /// @{
        pxr::SdfSchemaBase::_SpecDefiner& Field(const pxr::TfToken& name, bool required);

        pxr::SdfSchemaBase::_SpecDefiner& MetadataField(const pxr::TfToken& name, bool required);

        pxr::SdfSchemaBase::_SpecDefiner& MetadataField(const pxr::TfToken& name, const pxr::TfToken& displayGroup, bool required);

        pxr::SdfSchemaBase::_SpecDefiner& CopyFrom(const pxr::SdfSchemaBase::SpecDefinition& other);

        _SpecDefiner(const pxr::SdfSchemaBase::_SpecDefiner& );

        _SpecDefiner(pxr::SdfSchemaBase::_SpecDefiner&& ) CPPMM_IGNORE;

        ~_SpecDefiner();

    } CPPMM_OPAQUEPTR; // struct _SpecDefiner
#endif


    /// \class FieldDefinition
    /// 
    /// Class defining various attributes for a field.
    struct FieldDefinition {
        using BoundType = pxr::SdfSchemaBase::FieldDefinition;

        FieldDefinition(const pxr::SdfSchemaBase& schema, const pxr::TfToken& name, const pxr::VtValue& fallbackValue);

        const pxr::TfToken& GetName() const;

        const pxr::VtValue& GetFallbackValue() const;

        const pxr::SdfSchemaBase::FieldDefinition::InfoVec& GetInfo() const;

        bool IsPlugin() const;

        bool IsReadOnly() const;

        bool HoldsChildren() const;

        template <typename T>
        pxr::SdfAllowed IsValidValue(const T& value) const;

        template <typename T>
        pxr::SdfAllowed IsValidListValue(const T& value) const;

        template <typename T>
        pxr::SdfAllowed IsValidMapKey(const T& value) const;

        template <typename T>
        pxr::SdfAllowed IsValidMapValue(const T& value) const;

        /// Functions for setting field attributes during registration.
        /// @{
        pxr::SdfSchemaBase::FieldDefinition& FallbackValue(const pxr::VtValue& v);

        pxr::SdfSchemaBase::FieldDefinition& Plugin();

        pxr::SdfSchemaBase::FieldDefinition& Children();

        pxr::SdfSchemaBase::FieldDefinition& ReadOnly();

#if 0
        pxr::SdfSchemaBase::FieldDefinition& AddInfo(const pxr::TfToken& tok, const pxr::JsValue& val);
#endif

        typedef pxr::SdfAllowed Validator(const pxr::SdfSchemaBase &, const pxr::VtValue &);

        pxr::SdfSchemaBase::FieldDefinition& ValueValidator(Validator * v);

        pxr::SdfSchemaBase::FieldDefinition& ListValueValidator(Validator * v);

        pxr::SdfSchemaBase::FieldDefinition& MapKeyValidator(Validator * v);

        pxr::SdfSchemaBase::FieldDefinition& MapValueValidator(Validator * v);
        /// @}

        FieldDefinition(const pxr::SdfSchemaBase::FieldDefinition& );

        FieldDefinition(pxr::SdfSchemaBase::FieldDefinition&& ) CPPMM_IGNORE;

        pxr::SdfSchemaBase::FieldDefinition& operator=(const pxr::SdfSchemaBase::FieldDefinition& );

        pxr::SdfSchemaBase::FieldDefinition& operator=(pxr::SdfSchemaBase::FieldDefinition&& ) CPPMM_IGNORE;

        ~FieldDefinition();

    } CPPMM_OPAQUEPTR; // struct FieldDefinition

#if 0
    struct _FieldInfo {
        using BoundType = pxr::SdfSchemaBase::_FieldInfo;

        _FieldInfo();

        _FieldInfo(const pxr::SdfSchemaBase::_FieldInfo& );

        _FieldInfo(pxr::SdfSchemaBase::_FieldInfo&& ) CPPMM_IGNORE;

        pxr::SdfSchemaBase::_FieldInfo& operator=(const pxr::SdfSchemaBase::_FieldInfo& );

        pxr::SdfSchemaBase::_FieldInfo& operator=(pxr::SdfSchemaBase::_FieldInfo&& ) CPPMM_IGNORE;

        ~_FieldInfo();

    } CPPMM_OPAQUEPTR; // struct _FieldInfo


    /// \class SpecDefinition
    /// 
    /// Class representing fields and other information for a spec type.
    struct SpecDefinition {
        using BoundType = pxr::SdfSchemaBase::SpecDefinition;

        /// Returns all fields for this spec.
        pxr::TfTokenVector GetFields() const;

        /// Returns all value fields marked as required for this spec.
        const pxr::TfTokenVector& GetRequiredFields() const;

        /// Returns all value fields marked as metadata for this spec.
        pxr::TfTokenVector GetMetadataFields() const;

        /// Returns whether the given field is valid for this spec.
        bool IsValidField(const pxr::TfToken& name) const;

        /// Returns whether the given field is metadata for this spec.
        bool IsMetadataField(const pxr::TfToken& name) const;

        /// Returns the display group for this metadata field.  Returns the
        /// empty token if this field is not a metadata field or if this
        /// metadata field has no display group.
        pxr::TfToken GetMetadataFieldDisplayGroup(const pxr::TfToken& name) const;

        /// Returns whether the given field is required for this spec.
        bool IsRequiredField(const pxr::TfToken& name) const;

        SpecDefinition(const pxr::SdfSchemaBase::SpecDefinition& );

        SpecDefinition(pxr::SdfSchemaBase::SpecDefinition&& ) CPPMM_IGNORE;

        pxr::SdfSchemaBase::SpecDefinition& operator=(const pxr::SdfSchemaBase::SpecDefinition& );

        pxr::SdfSchemaBase::SpecDefinition& operator=(pxr::SdfSchemaBase::SpecDefinition&& ) CPPMM_IGNORE;

        ~SpecDefinition();

    } CPPMM_OPAQUEPTR; // struct SpecDefinition


    /// A helper for registering value types.
    struct _ValueTypeRegistrar {
        using BoundType = pxr::SdfSchemaBase::_ValueTypeRegistrar;

        _ValueTypeRegistrar(pxr::Sdf_ValueTypeRegistry* );

        /// Register a value type and its corresponding array value type.
        void AddType(const pxr::SdfSchemaBase::_ValueTypeRegistrar::Type& type);


        struct Type {
            using BoundType = pxr::SdfSchemaBase::_ValueTypeRegistrar::Type;

            ~Type();

            template <typename T>
            void Type(const pxr::TfToken& name, const T& defaultValue);

            template <typename T>
            void Type(const char* name, const T& defaultValue);

            Type(const pxr::TfToken& name, const pxr::TfType& type);

            pxr::SdfSchemaBase::_ValueTypeRegistrar::Type& CPPTypeName(const std::string& cppTypeName);

            pxr::SdfSchemaBase::_ValueTypeRegistrar::Type& Dimensions(const pxr::SdfTupleDimensions& dims);

            pxr::SdfSchemaBase::_ValueTypeRegistrar::Type& DefaultUnit(pxr::TfEnum unit);

            pxr::SdfSchemaBase::_ValueTypeRegistrar::Type& Role(const pxr::TfToken& role);

            pxr::SdfSchemaBase::_ValueTypeRegistrar::Type& NoArrays();

            Type(const pxr::SdfSchemaBase::_ValueTypeRegistrar::Type& );

            pxr::SdfSchemaBase::_ValueTypeRegistrar::Type& operator=(const pxr::SdfSchemaBase::_ValueTypeRegistrar::Type& );

        } CPPMM_OPAQUEPTR; // struct Type

    } CPPMM_OPAQUEPTR; // struct _ValueTypeRegistrar


    /// Construct an SdfSchemaBase but does not populate it with standard
    /// fields and types.
    struct EmptyTag {
        using BoundType = pxr::SdfSchemaBase::EmptyTag;

    } CPPMM_OPAQUEPTR; // struct EmptyTag
#endif

} CPPMM_OPAQUEPTR; // struct SdfSchemaBase


/// \class SdfSchema
/// 
/// Class that provides information about the various scene description 
/// fields.
struct SdfSchema {
    using BoundType = pxr::SdfSchema;
#if 0

    const pxr::TfWeakBase& __GetTfWeakBase__() const;

    void EnableNotification2() const;

    const void* GetUniqueIdentifier() const;

    /// Returns the field definition for the given field. 
    /// Returns NULL if no definition exists for given field.
    const pxr::SdfSchemaBase::FieldDefinition* GetFieldDefinition(const pxr::TfToken& fieldKey) const;

    /// Returns the spec definition for the given spec type.
    /// Returns NULL if no definition exists for the given spec type.
    const pxr::SdfSchemaBase::SpecDefinition* GetSpecDefinition(pxr::SdfSpecType specType) const;

    /// Return whether the specified field has been registered. Also
    /// optionally return the fallback value.
    bool IsRegistered(const pxr::TfToken& fieldKey, pxr::VtValue* fallback) const;

    /// Returns whether the given field is a 'children' field -- that is, it
    /// indexes certain children beneath the owning spec.
    bool HoldsChildren(const pxr::TfToken& fieldKey) const;

    /// Return the fallback value for the specified \p fieldKey or the
    /// empty value if \p fieldKey is not registered.
    const pxr::VtValue& GetFallback(const pxr::TfToken& fieldKey) const;

    /// Coerce \p value to the correct type for the specified field.
    pxr::VtValue CastToTypeOf(const pxr::TfToken& fieldKey, const pxr::VtValue& value) const;

    /// Return whether the given field is valid for the given spec type.
    bool IsValidFieldForSpec(const pxr::TfToken& fieldKey, pxr::SdfSpecType specType) const;

    /// Returns all fields registered for the given spec type.
    pxr::TfTokenVector GetFields(pxr::SdfSpecType specType) const;

    /// Returns all metadata fields registered for the given spec type.
    pxr::TfTokenVector GetMetadataFields(pxr::SdfSpecType specType) const;

    /// Return the metadata field display group for metadata \a metadataField on
    /// \a specType.  Return the empty token if \a metadataField is not a
    /// metadata field, or if it has no display group.
    pxr::TfToken GetMetadataFieldDisplayGroup(pxr::SdfSpecType specType, const pxr::TfToken& metadataField) const;

    /// Returns all required fields registered for the given spec type.
    const pxr::TfTokenVector& GetRequiredFields(pxr::SdfSpecType specType) const;

    /// Return true if \p fieldName is a required field name for at least one
    /// spec type, return false otherwise.  The main use of this function is to
    /// quickly rule out field names that aren't required (and thus don't need
    /// special handling).
    bool IsRequiredFieldName(const pxr::TfToken& fieldName) const;

    /// Specific validation functions for various fields. These are internally
    /// registered as validators for the associated field, but can also be
    /// used directly.
    /// @{
    static pxr::SdfAllowed IsValidAttributeConnectionPath(const pxr::SdfPath& path);

    static pxr::SdfAllowed IsValidIdentifier(const std::string& name);

    static pxr::SdfAllowed IsValidNamespacedIdentifier(const std::string& name);

    static pxr::SdfAllowed IsValidInheritPath(const pxr::SdfPath& path);

    static pxr::SdfAllowed IsValidPayload(const pxr::SdfPayload& payload);

    static pxr::SdfAllowed IsValidReference(const pxr::SdfReference& ref);

    static pxr::SdfAllowed IsValidRelationshipTargetPath(const pxr::SdfPath& path);

    static pxr::SdfAllowed IsValidRelocatesPath(const pxr::SdfPath& path);

    static pxr::SdfAllowed IsValidSpecializesPath(const pxr::SdfPath& path);

    static pxr::SdfAllowed IsValidSubLayer(const std::string& sublayer);

    static pxr::SdfAllowed IsValidVariantIdentifier(const std::string& name);

    /// Given a value, check if it is a valid value type.
    /// This function only checks that the type of the value is valid
    /// for this schema. It does not imply that the value is valid for
    /// a particular field -- the field's validation function must be
    /// used for that.
    pxr::SdfAllowed IsValidValue(const pxr::VtValue& value) const;

    /// Returns all registered type names.
    std::vector<pxrInternal_v0_21__pxrReserved__::SdfValueTypeName, std::allocator<pxrInternal_v0_21__pxrReserved__::SdfValueTypeName> > GetAllTypes() const;

    /// Return the type name object for the given type name token.
    pxr::SdfValueTypeName FindType(const pxr::TfToken& typeName) const;

    /// \overload
    pxr::SdfValueTypeName FindType(const char* typeName) const;

    /// \overload
    pxr::SdfValueTypeName FindType(const std::string& typeName) const;

    /// Return the type name object for the given type and optional role.
    pxr::SdfValueTypeName FindType(const pxr::TfType& type, const pxr::TfToken& role) const;

    /// Return the type name object for the value's type and optional role.
    pxr::SdfValueTypeName FindType(const pxr::VtValue& value, const pxr::TfToken& role) const;

    /// Return the type name object for the given type name string if it
    /// exists otherwise create a temporary type name object.  Clients
    /// should not normally need to call this.
    pxr::SdfValueTypeName FindOrCreateType(const pxr::TfToken& typeName) const;

    static const pxr::SdfSchema& GetInstance();

    SdfSchema(const pxr::SdfSchema& );

    pxr::SdfSchema& operator=(const pxr::SdfSchema& );
#endif

} CPPMM_OPAQUEPTR; // struct SdfSchema


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
