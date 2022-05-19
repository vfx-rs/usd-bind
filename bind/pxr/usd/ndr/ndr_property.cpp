#include <cppmm_bind.hpp>
#include <pxr/usd/ndr/property.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class NdrProperty
struct NdrProperty
{
public:
    using BoundType = pxr::NdrProperty;

    /// Constructor.
    NdrProperty(
        const pxr::TfToken& name,
        const pxr::TfToken& type,
        const pxr::VtValue& defaultValue,
        bool isOutput,
        size_t arraySize,
        bool isDynamicArray,
        const pxr::NdrTokenMap& metadata
    );

    /// Destructor.
    ~NdrProperty();

    /// \name The Basics
    /// @{

    /// Gets the name of the property.
    const pxr::TfToken& GetName() const ;

    /// Gets the type of the property.
    const pxr::TfToken& GetType() const ;

    /// Gets this property's default value.
    const pxr::VtValue& GetDefaultValue() const ;

    /// Whether this property is an output.
    bool IsOutput() const ;

    /// Whether this property's type is an array type.
    bool IsArray() const ;

    /// Whether this property's array type is dynamically-sized.
    bool IsDynamicArray() const ;;

    /// Gets this property's array size.
    ///
    /// If this property is a fixed-size array type, the array size is returned.
    /// In the case of a dynamically-sized array, this method returns the array
    /// size that the parser reports, and should not be relied upon to be
    /// accurate. A parser may report -1 for the array size, for example, to
    /// indicate a dynamically-sized array. For types that are not a fixed-size
    /// array or dynamic array, this returns 0.
    int GetArraySize() const ;

    /// Gets a string with basic information about this property. Helpful for
    /// things like adding this property to a log.
    std::string GetInfoString() const;

    /// @}


    /// \name Metadata
    /// The metadata returned here is a direct result of what the parser plugin
    /// is able to determine about the node. See the documentation for a
    /// specific parser plugin to get help on what the parser is looking for to
    /// populate these values.
    /// @{

    /// All of the metadata that came from the parse process.
    const pxr::NdrTokenMap& GetMetadata() const ;

    /// @}


    /// \name Connection Information
    /// @{
    /// Whether this property can be connected to other properties.
    bool IsConnectable() const;

    /// Determines if this property can be connected to the specified property.
    bool CanConnectTo(const pxr::NdrProperty& other) const;

    /// @}


    /// \name Utilities
    /// @{

    /// Converts the property's type from `GetType()` into a `SdfValueTypeName`.
    ///
    /// Two scenarios can result: an exact mapping from property type to Sdf
    /// type, and an inexact mapping. In the first scenario, the first element
    /// in the pair will be the cleanly-mapped Sdf type, and the second element,
    /// a TfToken, will be empty. In the second scenario, the Sdf type will be
    /// set to `Token` to indicate an unclean mapping, and the second element
    /// will be set to the original type returned by `GetType()`.
    ///
    /// This base property class is generic and cannot know ahead of time how to
    /// perform this mapping reliably, thus it will always fall into the second
    /// scenario. It is up to specialized properties to perform the mapping.
    ///
    /// \sa GetDefaultValueAsSdfType
    const pxr::NdrSdfTypeIndicator GetTypeAsSdfType() const;

    /// Provides default value corresponding to the SdfValueTypeName returned 
    /// by GetTypeAsSdfType.
    /// 
    /// Derived classes providing an implementation for GetTypeAsSdfType should
    /// also provide an implementation for this.
    ///
    /// \sa GetTypeAsSdfType
    const pxr::VtValue& GetDefaultValueAsSdfType() const;

    /// @}

} CPPMM_OPAQUEPTR; // struct NdrProperty

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

