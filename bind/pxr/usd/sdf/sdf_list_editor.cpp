#if 0
#include <pxr/usd/sdf/listEditor.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class Sdf_ListEditor
/// 
/// Base class for list editor implementations in which list editing operations 
/// are stored in data field(s) associated with an owning spec.
template <class TypePolicy>
struct Sdf_ListEditor {
    using BoundType = pxr::Sdf_ListEditor<TypePolicy>;

    pxr::SdfLayerHandle GetLayer() const;

    pxr::SdfPath GetPath() const;

    bool IsValid() const;

    bool IsExpired() const;

    bool HasKeys() const;

    bool IsExplicit() const;

    bool IsOrderedOnly() const;

    pxr::SdfAllowed PermissionToEdit(pxr::SdfListOpType op) const;

    bool CopyEdits(const pxr::Sdf_ListEditor<TypePolicy>& rhs);

    bool ClearEdits();

    bool ClearEditsAndMakeExplicit();

    /// Modifies the operations stored in all operation lists.
    /// \p callback is called for every key.  If the returned key is
    /// invalid then the key is removed, otherwise it's replaced with the
    /// returned key.
    void ModifyItemEdits(const pxr::Sdf_ListEditor::ModifyCallback& cb);

    /// Apply the list operations represented by this interface to the given
    /// vector of values \p vec. If \p callback is valid then it's called
    /// for every key in the editor before applying it to \p vec.  If the
    /// returned key is empty then the key will not be applied.  Otherwise
    /// the returned key is applied, allowing callbacks to perform key
    /// translation.  Note that this means list editors can't meaningfully
    /// hold the empty key.
    void ApplyEditsToList(pxr::Sdf_ListEditor::value_vector_type* vec, const pxr::Sdf_ListEditor::ApplyCallback& cb);

    /// Returns the number of elements in the specified list of operations.
    size_t GetSize(pxr::SdfListOpType op) const;

    /// Returns the \p i'th value in the specified list of operations.
    pxr::Sdf_ListEditor::value_type Get(pxr::SdfListOpType op, size_t i) const;

    /// Returns the specified list of operations.
    pxr::Sdf_ListEditor::value_vector_type GetVector(pxr::SdfListOpType op) const;

    /// Returns the number of occurrences of \p val in the specified list of 
    /// operations.
    size_t Count(pxr::SdfListOpType op, const pxr::Sdf_ListEditor::value_type& val) const;

    /// Returns the index of \p val in the specified list of operations, -1
    /// if \p val is not found.
    size_t Find(pxr::SdfListOpType op, const pxr::Sdf_ListEditor::value_type& val) const;

    /// Replaces the operations in the specified list of operations in range
    /// [index, index + n) with the given \p elems. 
    bool ReplaceEdits(pxr::SdfListOpType op, size_t index, size_t n, const pxr::Sdf_ListEditor::value_vector_type& elems);

    /// Applies a \p rhs opinions about a given operation list to this one.
    void ApplyList(pxr::SdfListOpType op, const pxr::Sdf_ListEditor<TypePolicy>& rhs);

} CPPMM_OPAQUEPTR; // struct Sdf_ListEditor

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_ListEditor<int>;
// using Sdf_ListEditorInt = pxr::Sdf_ListEditor<int>;


template <typename TypePolicy>
std::ostream& operator<<(std::ostream& s, const pxr::Sdf_ListEditor<TypePolicy>& x);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::Sdf_ListEditor<int>;
#endif
