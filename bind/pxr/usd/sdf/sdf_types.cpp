#if 0
#include <pxr/usd/sdf/types.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfUnregisteredValue
/// Stores a representation of the value for an unregistered metadata
/// field encountered during text layer parsing. 
/// 
/// This provides the ability to serialize this data to a layer, as
/// well as limited inspection and editing capabilities (e.g., moving
/// this data to a different spec or field) even when the data type
/// of the value isn't known.
struct SdfUnregisteredValue {
    using BoundType = pxr::SdfUnregisteredValue;

    /// Wraps an empty VtValue
    SdfUnregisteredValue();

    /// Wraps a std::string
    SdfUnregisteredValue(const std::string& value);

    /// Wraps a VtDictionary
    SdfUnregisteredValue(const pxr::VtDictionary& value);

    /// Wraps a SdfUnregisteredValueListOp
    SdfUnregisteredValue(const pxr::SdfUnregisteredValueListOp& value);

    /// Returns the wrapped VtValue specified in the constructor
    const pxr::VtValue& GetValue() const;

    /// Returns true if the wrapped VtValues are equal
    bool operator==(const pxr::SdfUnregisteredValue& other) const;

    SdfUnregisteredValue(const pxr::SdfUnregisteredValue& );

    SdfUnregisteredValue(pxr::SdfUnregisteredValue&& ) CPPMM_IGNORE;

    pxr::SdfUnregisteredValue& operator=(const pxr::SdfUnregisteredValue& );

    pxr::SdfUnregisteredValue& operator=(pxr::SdfUnregisteredValue&& ) CPPMM_IGNORE;

    ~SdfUnregisteredValue();

} CPPMM_OPAQUEPTR; // struct SdfUnregisteredValue


enum SdfSpecType {
    SdfSpecTypeUnknown = 0,
    SdfSpecTypeAttribute = 1,
    SdfSpecTypeConnection = 2,
    SdfSpecTypeExpression = 3,
    SdfSpecTypeMapper = 4,
    SdfSpecTypeMapperArg = 5,
    SdfSpecTypePrim = 6,
    SdfSpecTypePseudoRoot = 7,
    SdfSpecTypeRelationship = 8,
    SdfSpecTypeRelationshipTarget = 9,
    SdfSpecTypeVariant = 10,
    SdfSpecTypeVariantSet = 11,
    SdfNumSpecTypes = 12,
};

enum SdfSpecifier {
    SdfSpecifierDef = 0,
    SdfSpecifierOver = 1,
    SdfSpecifierClass = 2,
    SdfNumSpecifiers = 3,
};

/// Returns true if the specifier defines a prim.
bool SdfIsDefiningSpecifier(pxr::SdfSpecifier spec);


enum SdfPermission {
    SdfPermissionPublic = 0,
    SdfPermissionPrivate = 1,
    SdfNumPermissions = 2,
};

enum SdfVariability {
    SdfVariabilityVarying = 0,
    SdfVariabilityUniform = 1,
    SdfNumVariabilities = 2,
};

enum SdfAuthoringError {
    SdfAuthoringErrorUnrecognizedFields = 0,
    SdfAuthoringErrorUnrecognizedSpecType = 1,
};

    using SdfMapperParametersMap = pxr::SdfMapperParametersMap;


    using SdfVariantSelectionMap = pxr::SdfVariantSelectionMap;


    using SdfVariantsMap = pxr::SdfVariantsMap;


    using SdfRelocatesMap = pxr::SdfRelocatesMap;


    using SdfTimeSampleMap = pxr::SdfTimeSampleMap;


/// Gets the show default unit for the given /a typeName.
pxr::TfEnum SdfDefaultUnit(const pxr::TfToken& typeName);


/// Gets the show default unit for the given /a unit.
const pxr::TfEnum& SdfDefaultUnit(const pxr::TfEnum& unit);


/// Gets the unit category for a given /a unit.
const std::string& SdfUnitCategory(const pxr::TfEnum& unit);


/// Converts from one unit of measure to another. The \a fromUnit and \a toUnit
/// units must be of the same type (for example, both of type SdfLengthUnit).
double SdfConvertUnit(const pxr::TfEnum& fromUnit, const pxr::TfEnum& toUnit);


/// Gets the name for a given /a unit.
const std::string& SdfGetNameForUnit(const pxr::TfEnum& unit);


/// Gets a unit for the given /a name
const pxr::TfEnum& SdfGetUnitFromName(const std::string& name);


/// Given a value, returns if there is a valid corresponding valueType.
bool SdfValueHasValidType(const pxr::VtValue& value);


/// Given an sdf valueType name, produce TfType if the type name specifies a
/// valid sdf value type.
pxr::TfType SdfGetTypeForValueTypeName(const pxr::TfToken& name);


/// Given a value, produce the sdf valueType name.  If you provide a value that
/// does not return true for SdfValueHasValidType, the return value is
/// unspecified.
pxr::SdfValueTypeName SdfGetValueTypeNameForValue(const pxr::VtValue& value);


/// Return role name for \p typeName.  Return empty token if \p typeName has no
/// associated role name.
pxr::TfToken SdfGetRoleNameForValueTypeName(const pxr::TfToken& typeName);


template <class T>
struct SdfValueTypeTraits {
    using BoundType = pxr::SdfValueTypeTraits<T>;

} CPPMM_OPAQUEPTR; // struct SdfValueTypeTraits

// TODO: fill in explicit instantiations, e.g.:
// template class SdfValueTypeTraits<int>;
// using SdfValueTypeTraitsInt = pxr::SdfValueTypeTraits<int>;


/// Convert \p dict to a valid metadata dictionary for scene description.  Valid
/// metadata dictionaries have values that are any of SDF_VALUE_TYPES (or
/// VtArrays of those), plus VtDictionary with values of those types (or
/// similarly nested VtDictionaries).
/// 
/// Certain conversions are performed in an attempt to produce a valid metadata
/// dictionary.  For example:
/// 
/// Convert std::vector<VtValue> to VtArray<T> where T is the type of the first
/// element in the vector.  Fail conversion for empty vectors where a concrete
/// type cannot be inferred.
/// 
/// Convert python sequences to VtArray<T> where T is the type of the first
/// element in the python sequence, when converted to VtValue, if that T is an
/// SDF_VALUE_TYPE).  Fail conversion for empty sequences where a concrete type
/// cannot be inferred.
/// 
/// If any values cannot be converted to valid SDF_VALUE_TYPES, omit those
/// elements and add a message to \p errMsg indicating which values were
/// omitted.
bool SdfConvertToValidMetadataDictionary(pxr::VtDictionary* dict, std::string* errMsg);


    using SdfVariantSetSpecHandleMap = pxr::SdfVariantSetSpecHandleMap;


/// Writes the string representation of \c SdfSpecifier to \a out.
std::ostream& operator<<(std::ostream& out, const pxr::SdfSpecifier& spec);


/// Writes the string representation of \c SdfRelocatesMap to \a out.
std::ostream& operator<<(std::ostream& out, const pxr::SdfRelocatesMap& reloMap);


/// Writes the string representation of \c SdfTimeSampleMap to \a out.
std::ostream& operator<<(std::ostream& out, const pxr::SdfTimeSampleMap& sampleMap);


std::ostream& VtStreamOut(const pxr::SdfVariantSelectionMap& , std::ostream& );


/// Writes the string representation of \c SdfUnregisteredValue to \a out.
std::ostream& operator<<(std::ostream& out, const pxr::SdfUnregisteredValue& value);


struct Sdf_ValueTypeNamesType {
    using BoundType = pxr::Sdf_ValueTypeNamesType;

    ~Sdf_ValueTypeNamesType();

    pxr::TfToken GetSerializationName(const pxr::SdfValueTypeName& ) const;

    pxr::TfToken GetSerializationName(const pxr::VtValue& ) const;

    pxr::TfToken GetSerializationName(const pxr::TfToken& ) const;

    Sdf_ValueTypeNamesType(const pxr::Sdf_ValueTypeNamesType& );

    pxr::Sdf_ValueTypeNamesType& operator=(const pxr::Sdf_ValueTypeNamesType& );


    struct _Init {
        using BoundType = pxr::Sdf_ValueTypeNamesType::_Init;

        static const pxr::Sdf_ValueTypeNamesType* New();

    } CPPMM_OPAQUEPTR; // struct _Init

} CPPMM_OPAQUEPTR; // struct Sdf_ValueTypeNamesType


/// \class SdfValueBlock
/// A special value type that can be used to explicitly author an
/// opinion for an attribute's default value or time sample value
/// that represents having no value. Note that this is different
/// from not having a value authored.
/// 
/// One could author such a value in two ways.
/// 
/// \code
/// attribute->SetDefaultValue(VtValue(SdfValueBlock());
/// ...
/// layer->SetTimeSample(attribute->GetPath(), 101, VtValue(SdfValueBlock()));
/// \endcode
struct SdfValueBlock {
    using BoundType = pxr::SdfValueBlock;

    bool operator==(const pxr::SdfValueBlock& block) const;

    bool operator!=(const pxr::SdfValueBlock& block) const;

} CPPMM_OPAQUEPTR; // struct SdfValueBlock


std::ostream& operator<<(std::ostream& , const pxr::SdfValueBlock& );


struct SdfHumanReadableValue {
    using BoundType = pxr::SdfHumanReadableValue;

    SdfHumanReadableValue();

    SdfHumanReadableValue(const std::string& text);

    bool operator==(const pxr::SdfHumanReadableValue& other) const;

    bool operator!=(const pxr::SdfHumanReadableValue& other) const;

    const std::string& GetText() const;

    SdfHumanReadableValue(const pxr::SdfHumanReadableValue& );

    SdfHumanReadableValue(pxr::SdfHumanReadableValue&& ) CPPMM_IGNORE;

    pxr::SdfHumanReadableValue& operator=(const pxr::SdfHumanReadableValue& );

    pxr::SdfHumanReadableValue& operator=(pxr::SdfHumanReadableValue&& ) CPPMM_IGNORE;

    ~SdfHumanReadableValue();

} CPPMM_OPAQUEPTR; // struct SdfHumanReadableValue


std::ostream& operator<<(std::ostream& out, const pxr::SdfHumanReadableValue& hrval);


size_t hash_value(const pxr::SdfHumanReadableValue& hrval);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::SdfValueTypeTraits<int>;
#endif
