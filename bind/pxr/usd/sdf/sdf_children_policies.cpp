#include <pxr/usd/sdf/childrenPolicies.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

template <class SpecType>
struct Sdf_TokenChildPolicy {
    using BoundType = pxr::Sdf_TokenChildPolicy<SpecType>;
    using ValueType = typename pxr::Sdf_TokenChildPolicy<SpecType>::ValueType;
    using FieldType = typename pxr::Sdf_TokenChildPolicy<SpecType>::FieldType;
    using KeyType = typename pxr::Sdf_TokenChildPolicy<SpecType>::KeyType;

    static KeyType GetKey(const ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

} CPPMM_OPAQUEPTR; // struct Sdf_TokenChildPolicy

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_TokenChildPolicy<int>;
// using Sdf_TokenChildPolicyInt = pxr::Sdf_TokenChildPolicy<int>;


struct Sdf_PrimChildPolicy {
    using BoundType = pxr::Sdf_PrimChildPolicy;
    using FieldType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfPrimSpecHandle>::FieldType;
    using KeyType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfPrimSpecHandle>::KeyType;
    using ValueType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfPrimSpecHandle>::ValueType;

    static KeyType GetKey(const ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_PrimChildPolicy


struct Sdf_PropertyChildPolicy {
    using BoundType = pxr::Sdf_PropertyChildPolicy;
    using FieldType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfPropertySpecHandle>::FieldType;
    using KeyType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfPropertySpecHandle>::KeyType;
    using ValueType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfPropertySpecHandle>::ValueType;

    static KeyType GetKey(const ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_PropertyChildPolicy

struct Sdf_AttributeChildPolicy {
    using BoundType = pxr::Sdf_AttributeChildPolicy;
    using FieldType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfAttributeSpecHandle>::FieldType;
    using KeyType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfAttributeSpecHandle>::KeyType;
    using ValueType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfAttributeSpecHandle>::ValueType;

    static KeyType GetKey(const ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_AttributeChildPolicy


struct Sdf_RelationshipChildPolicy {
    using BoundType = pxr::Sdf_RelationshipChildPolicy;
    using FieldType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfRelationshipSpecHandle>::FieldType;
    using KeyType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfRelationshipSpecHandle>::KeyType;
    using ValueType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfRelationshipSpecHandle>::ValueType;

    static KeyType GetKey(const ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_RelationshipChildPolicy


struct Sdf_MapperArgChildPolicy {
    using BoundType = pxr::Sdf_MapperArgChildPolicy;
    using FieldType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::FieldType;
    using KeyType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::KeyType;
    using ValueType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::ValueType;

    static KeyType GetKey(const ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_MapperArgChildPolicy


struct Sdf_ExpressionChildPolicy {
    using BoundType = pxr::Sdf_ExpressionChildPolicy;
    using FieldType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::FieldType;
    using KeyType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::KeyType;
    using ValueType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::ValueType;

    static KeyType GetKey(const ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_ExpressionChildPolicy


struct Sdf_VariantChildPolicy {
    using BoundType = pxr::Sdf_VariantChildPolicy;
    using FieldType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfVariantSpecHandle>::FieldType;
    using KeyType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfVariantSpecHandle>::KeyType;
    using ValueType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfVariantSpecHandle>::ValueType;

    static KeyType GetKey(const ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_VariantChildPolicy


struct Sdf_VariantSetChildPolicy {
    using BoundType = pxr::Sdf_VariantSetChildPolicy;
    using FieldType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfVariantSetSpecHandle>::FieldType;
    using KeyType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfVariantSetSpecHandle>::KeyType;
    using ValueType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfVariantSetSpecHandle>::ValueType;

    static KeyType GetKey(const ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_VariantSetChildPolicy

template <class SpecType>
struct Sdf_PathChildPolicy {
    using BoundType = pxr::Sdf_PathChildPolicy<SpecType>;

    using FieldType = typename pxr::Sdf_PathChildPolicy<SpecType>::FieldType;
    using KeyType = typename pxr::Sdf_PathChildPolicy<SpecType>::KeyType;
    using ValueType = typename pxr::Sdf_PathChildPolicy<SpecType>::ValueType;

    static KeyType GetKey(const ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& path);
    static bool IsValidIdentifier(const FieldType& path);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const FieldType& key);

} CPPMM_OPAQUEPTR; // struct Sdf_PathChildPolicy

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_PathChildPolicy<int>;
// using Sdf_PathChildPolicyInt = pxr::Sdf_PathChildPolicy<int>;

struct Sdf_MapperChildPolicy {
    using BoundType = pxr::Sdf_MapperChildPolicy;
    using FieldType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::FieldType;
    using KeyType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::KeyType;
    using ValueType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::ValueType;

    static KeyType GetKey(const ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_MapperChildPolicy

struct Sdf_AttributeConnectionChildPolicy {
    using BoundType = pxr::Sdf_AttributeConnectionChildPolicy;
    using FieldType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::FieldType;
    using KeyType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::KeyType;
    using ValueType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::ValueType;

    static KeyType GetKey(const ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_AttributeConnectionChildPolicy

struct Sdf_RelationshipTargetChildPolicy {
    using BoundType = pxr::Sdf_RelationshipTargetChildPolicy;
    using FieldType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::FieldType;
    using KeyType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::KeyType;
    using ValueType = typename pxr::Sdf_TokenChildPolicy<pxr::SdfSpecHandle>::ValueType;

    static KeyType GetKey(const ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_RelationshipTargetChildPolicy

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::Sdf_TokenChildPolicy<int>;
// template class pxr::Sdf_PathChildPolicy<int>;
