#include <pxr/usd/sdf/specType.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfSpecTypeRegistration
/// 
/// Provides functions to register spec types with the runtime typing system
/// used to cast between C++ spec types. Implementations of C++ spec types
/// should use as follows:
/// 
/// For a concrete spec type that corresponds to a specific SdfSpecType:
/// TF_REGISTRY_FUNCTION(SdfSpecTypeRegistration) {
///    SdfSpecTypeRegistration::RegisterSpecType<MyPrimSpec>();
/// }
/// 
/// For an abstract spec type that has no corresponding SdfSpecType:
/// TF_REGISTRY_FUNCTION(SdfSpecTypeRegistration) {
///    SdfSpecTypeRegistration::RegisterAbstractSpecType<MyPropertySpec>();
/// }
struct SdfSpecTypeRegistration {
    using BoundType = pxr::SdfSpecTypeRegistration;

    template <typename SchemaType, typename SpecType>
    static void RegisterSpecType(pxr::SdfSpecType specTypeEnum);

    template <typename SchemaType, typename SpecType>
    static void RegisterAbstractSpecType();

} CPPMM_OPAQUEPTR; // struct SdfSpecTypeRegistration


struct Sdf_SpecType {
    using BoundType = pxr::Sdf_SpecType;

    static pxr::TfType Cast(const pxr::SdfSpec& spec, const std::type_info& to);

    static bool CanCast(const pxr::SdfSpec& spec, const std::type_info& to);

    static bool CanCast(pxr::SdfSpecType from, const std::type_info& to);

} CPPMM_OPAQUEPTR; // struct Sdf_SpecType


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
