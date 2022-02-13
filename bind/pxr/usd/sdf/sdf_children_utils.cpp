#if 0
#include <pxr/usd/sdf/childrenUtils.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class Sdf_ChildrenUtils
/// 
/// Helper functions for creating and manipulating the children
/// of a spec. A ChildPolicy must be provided that specifies which type
/// of children to edit. (See childrenPolicies.h for details).
template <class ChildPolicy>
struct Sdf_ChildrenUtils {
    using BoundType = pxr::Sdf_ChildrenUtils<ChildPolicy>;

    /// Create a new spec in \a layer at \childPath and add it to its parent's
    /// field named \childrenKey. Emit an error and return false if the new spec
    /// couldn't be created.
    static bool CreateSpec(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& childPath, pxr::SdfSpecType specType, bool inert);

    static bool CreateSpec(pxr::SdfLayer* layer, const pxr::SdfPath& childPath, pxr::SdfSpecType specType, bool inert);

    /// Return whether \a newName is a valid name for a child.
    static bool IsValidName(const pxr::Sdf_ChildrenUtils::FieldType& newName);

    /// Return whether \a newName is a valid name for a child.
    static bool IsValidName(const std::string& newName);

    /// Return whether \a spec can be renamed to \a newName.
    static pxr::SdfAllowed CanRename(const pxr::SdfSpec& spec, const pxr::Sdf_ChildrenUtils::FieldType& newName);

    /// Rename \a spec to \a newName. If \a fixPrimListEdits is true,
    /// then also fix up the name children order. It's an error for
    /// \a fixPrimListEdits to be true if spec is not a PrimSpec.
    static bool Rename(const pxr::SdfSpec& spec, const pxr::Sdf_ChildrenUtils::FieldType& newName);

    /// Replace the children of the spec at \a path with the specs in \a
    /// values. This will delete existing children that aren't in \a values and
    /// reparent children from other locations in the layer.
    static bool SetChildren(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& path, const UNKNOWN& values);

    /// Insert \a value as a child of \a path at the specified index.
    static bool InsertChild(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& path, const UNKNOWN& value, int index);

    /// Remove the child identified by \a key.
    static bool RemoveChild(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& path, const UNKNOWN& key);

    /// Insert \a value as a child of \a path at the specified index with
    /// the new name \p newName.
    static bool MoveChildForBatchNamespaceEdit(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& path, const UNKNOWN& value, const pxr::Sdf_ChildrenUtils::FieldType& newName, int index);

    /// Remove the child identified by \a key.
    static bool RemoveChildForBatchNamespaceEdit(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& path, const UNKNOWN& key);

    /// Returns \c true if \p value can be inserted as a child of \p path
    /// with the new name \p newName at the index \p index, otherwise
    /// returns \c false and sets \p whyNot.
    static bool CanMoveChildForBatchNamespaceEdit(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& path, const UNKNOWN& value, const pxr::Sdf_ChildrenUtils::FieldType& newName, int index, std::string* whyNot);

    /// Returns \c true if the child of \p path identified by \p key can
    /// be removed, otherwise returns \c false and sets \p whyNot.
    static bool CanRemoveChildForBatchNamespaceEdit(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& path, const pxr::Sdf_ChildrenUtils::FieldType& key, std::string* whyNot);

} CPPMM_OPAQUEPTR; // struct Sdf_ChildrenUtils

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_ChildrenUtils<int>;
// using Sdf_ChildrenUtilsInt = pxr::Sdf_ChildrenUtils<int>;


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::Sdf_ChildrenUtils<int>;
#endif
