#if 0
#include <pxr/usd/sdf/childrenPolicies.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

template <class SpecType>
struct Sdf_TokenChildPolicy {
    using BoundType = pxr::Sdf_TokenChildPolicy<SpecType>;

    static pxr::Sdf_TokenChildPolicy::KeyType GetKey(const pxr::Sdf_TokenChildPolicy::ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static pxr::Sdf_TokenChildPolicy::FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

} CPPMM_OPAQUEPTR; // struct Sdf_TokenChildPolicy

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_TokenChildPolicy<int>;
// using Sdf_TokenChildPolicyInt = pxr::Sdf_TokenChildPolicy<int>;


struct Sdf_PrimChildPolicy {
    using BoundType = pxr::Sdf_PrimChildPolicy;

    static pxr::Sdf_TokenChildPolicy::KeyType GetKey(const pxr::Sdf_TokenChildPolicy::ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static pxr::Sdf_TokenChildPolicy::FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const pxr::Sdf_TokenChildPolicy::FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_PrimChildPolicy


struct Sdf_PropertyChildPolicy {
    using BoundType = pxr::Sdf_PropertyChildPolicy;

    static pxr::Sdf_TokenChildPolicy::KeyType GetKey(const pxr::Sdf_TokenChildPolicy::ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static pxr::Sdf_TokenChildPolicy::FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const pxr::Sdf_TokenChildPolicy::FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_PropertyChildPolicy


struct Sdf_AttributeChildPolicy {
    using BoundType = pxr::Sdf_AttributeChildPolicy;

    static pxr::Sdf_TokenChildPolicy::KeyType GetKey(const pxr::Sdf_TokenChildPolicy::ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static pxr::Sdf_TokenChildPolicy::FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const pxr::Sdf_TokenChildPolicy::FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_AttributeChildPolicy


struct Sdf_RelationshipChildPolicy {
    using BoundType = pxr::Sdf_RelationshipChildPolicy;

    static pxr::Sdf_TokenChildPolicy::KeyType GetKey(const pxr::Sdf_TokenChildPolicy::ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static pxr::Sdf_TokenChildPolicy::FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const pxr::Sdf_TokenChildPolicy::FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_RelationshipChildPolicy


struct Sdf_MapperArgChildPolicy {
    using BoundType = pxr::Sdf_MapperArgChildPolicy;

    static pxr::Sdf_TokenChildPolicy::KeyType GetKey(const pxr::Sdf_TokenChildPolicy::ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static pxr::Sdf_TokenChildPolicy::FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const pxr::Sdf_TokenChildPolicy::FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_MapperArgChildPolicy


struct Sdf_ExpressionChildPolicy {
    using BoundType = pxr::Sdf_ExpressionChildPolicy;

    static pxr::Sdf_TokenChildPolicy::KeyType GetKey(const pxr::Sdf_TokenChildPolicy::ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static pxr::Sdf_TokenChildPolicy::FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const pxr::Sdf_TokenChildPolicy::FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_ExpressionChildPolicy


struct Sdf_VariantChildPolicy {
    using BoundType = pxr::Sdf_VariantChildPolicy;

    static pxr::Sdf_TokenChildPolicy::KeyType GetKey(const pxr::Sdf_TokenChildPolicy::ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static pxr::Sdf_TokenChildPolicy::FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const pxr::Sdf_TokenChildPolicy::FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_VariantChildPolicy


struct Sdf_VariantSetChildPolicy {
    using BoundType = pxr::Sdf_VariantSetChildPolicy;

    static pxr::Sdf_TokenChildPolicy::KeyType GetKey(const pxr::Sdf_TokenChildPolicy::ValueType& spec);

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static pxr::Sdf_TokenChildPolicy::FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const std::string& name);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const pxr::Sdf_TokenChildPolicy::FieldType& key);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_VariantSetChildPolicy


template <class SpecType>
struct Sdf_PathChildPolicy {
    using BoundType = pxr::Sdf_PathChildPolicy<SpecType>;

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static pxr::Sdf_PathChildPolicy::KeyType GetKey(const pxr::Sdf_TokenChildPolicy::ValueType& value);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const pxr::SdfPath& key);

    static pxr::Sdf_PathChildPolicy::FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const pxr::SdfPath& path);

    static bool IsValidIdentifier(const std::string& path);

} CPPMM_OPAQUEPTR; // struct Sdf_PathChildPolicy

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_PathChildPolicy<int>;
// using Sdf_PathChildPolicyInt = pxr::Sdf_PathChildPolicy<int>;


struct Sdf_MapperChildPolicy {
    using BoundType = pxr::Sdf_MapperChildPolicy;

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static pxr::Sdf_PathChildPolicy::KeyType GetKey(const pxr::Sdf_TokenChildPolicy::ValueType& value);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const pxr::SdfPath& key);

    static pxr::Sdf_PathChildPolicy::FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const pxr::SdfPath& path);

    static bool IsValidIdentifier(const std::string& path);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_MapperChildPolicy


struct Sdf_AttributeConnectionChildPolicy {
    using BoundType = pxr::Sdf_AttributeConnectionChildPolicy;

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static pxr::Sdf_PathChildPolicy::KeyType GetKey(const pxr::Sdf_TokenChildPolicy::ValueType& value);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const pxr::SdfPath& key);

    static pxr::Sdf_PathChildPolicy::FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const pxr::SdfPath& path);

    static bool IsValidIdentifier(const std::string& path);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_AttributeConnectionChildPolicy


struct Sdf_RelationshipTargetChildPolicy {
    using BoundType = pxr::Sdf_RelationshipTargetChildPolicy;

    static pxr::SdfPath GetParentPath(const pxr::SdfPath& childPath);

    static pxr::Sdf_PathChildPolicy::KeyType GetKey(const pxr::Sdf_TokenChildPolicy::ValueType& value);

    static pxr::SdfPath GetChildPath(const pxr::SdfPath& parentPath, const pxr::SdfPath& key);

    static pxr::Sdf_PathChildPolicy::FieldType GetFieldValue(const pxr::SdfPath& childPath);

    static bool IsValidIdentifier(const pxr::SdfPath& path);

    static bool IsValidIdentifier(const std::string& path);

    static pxr::TfToken GetChildrenToken(const pxr::SdfPath& parentPath);

} CPPMM_OPAQUEPTR; // struct Sdf_RelationshipTargetChildPolicy


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::Sdf_TokenChildPolicy<int>;
// template class pxr::Sdf_PathChildPolicy<int>;
#endif
