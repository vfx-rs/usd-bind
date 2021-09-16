#include <pxr/usd/sdf/valueTypeName.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {
namespace pxr = ::PXR_INTERNAL_NS;

/// \struct SdfTupleDimensions
///
/// Represents the shape of a value type (or that of an element in an array).
///
struct SdfTupleDimensions {
    using BoundType = pxr::SdfTupleDimensions;

    SdfTupleDimensions();
    SdfTupleDimensions(size_t m) CPPMM_RENAME(new_1d);
    SdfTupleDimensions(size_t m, size_t n) CPPMM_RENAME(new_2d);
    /* SdfTupleDimensions(const size_t (&s)[2]) CPPMM_IGNORE; */

    bool operator==(const pxr::SdfTupleDimensions& rhs) const;

} CPPMM_VALUETYPE CPPMM_DERIVE("Copy, Clone, Debug, Hash");


/// \class SdfValueTypeName
///
/// Represents a value type name, i.e. an attribute's type name.  Usually,
/// a value type name associates a string with a *TfType* and an optional
/// role, along with additional metadata.  A schema registers all known
/// value type names and may register multiple names for the same TfType
/// and role pair.  All name strings for a given pair are collectively
/// called its aliases.
///
/// A value type name may also represent just a name string, without a
/// *TfType*, role or other metadata.  This is currently used exclusively
/// to unserialize and re-serialize an attribute's type name where that
/// name is not known to the schema.
///
/// Because value type names can have aliases and those aliases may change
/// in the future, clients should avoid using the value type name's string
/// representation except to report human readable messages and when
/// serializing.  Clients can look up a value type name by string using
/// *SdfSchemaBase*::FindType() and shouldn't otherwise need the string.
/// Aliases compare equal, even if registered by different schemas.
///
struct SdfValueTypeName {

    using BoundType = pxr::SdfValueTypeName;

    /// Constructs an invalid type name.
    SdfValueTypeName();

    /// Returns the type name as a token.  This should not be used for
    /// comparison purposes.
    pxr::TfToken GetAsToken() const;

    /// Returns the *TfType* of the type.
    const pxr::TfType& GetType() const;

    /// Returns the C++ type name for this type.  This may not be the same
    /// as the type name returned by GetType().GetTypeName(), since that
    /// method may have had additional transformations applied for
    /// readability.
    const std::string& GetCPPTypeName() const;

    /// Returns the type's role.
    const pxr::TfToken& GetRole() const;

    /// Returns the scalar version of this type name if it's an array type
    /// name, otherwise returns this type name.  If there is no scalar type
    /// name then this returns the invalid type name.
    pxr::SdfValueTypeName GetScalarType() const;

    /// Returns the array version of this type name if it's an scalar type
    /// name, otherwise returns this type name.  If there is no array type
    /// name then this returns the invalid type name.
    pxr::SdfValueTypeName GetArrayType() const;

    /// Returns *true* iff this type is a scalar.  The invalid type is
    /// considered neither scalar nor array.
    bool IsScalar() const;

    /// Returns *true* iff this type is an array.  The invalid type is
    /// considered neither scalar nor array.
    bool IsArray() const;

    /// Returns the dimensions of the scalar value, e.g. 3 for a 3D point.
    pxr::SdfTupleDimensions GetDimensions() const;

    /// Returns *true* if this type name is equal to *rhs*.  Aliases
    /// compare equal.
    bool operator==(const pxr::SdfValueTypeName& rhs) const;

    /// Returns *true* if this type name is equal to *rhs*.  Aliases
    /// compare equal.  Avoid relying on this overload.
    bool operator==(const pxr::TfToken& rhs) const CPPMM_RENAME(eq_token);

    /// Returns a hash value for this type name.
    size_t GetHash() const;

    /// Explicit bool conversion operator. Converts to *true* if this is a
    /// valid, non-empty type, *false* otherwise.
    explicit operator bool() const;


/*

    /// Returns *true* if this type name is equal to *rhs*.  Aliases
    /// compare equal.  Avoid relying on this overload.
    SDF_API
    bool operator==(const std::string& rhs) const;

    /// Returns all aliases of the type name as tokens.  These should not
    /// be used for comparison purposes.
    SDF_API
    std::vector<TfToken> GetAliasesAsTokens() const;
    /// Returns the default value for the type.
    SDF_API
    const VtValue& GetDefaultValue() const;

    /// Returns the default unit enum for the type.
    SDF_API
    const TfEnum& GetDefaultUnit() const;

    */
} CPPMM_OPAQUEBYTES;

}
}
