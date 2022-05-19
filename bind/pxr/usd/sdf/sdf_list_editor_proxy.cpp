#include <pxr/usd/sdf/listEditorProxy.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfListEditorProxy
/// 
/// Represents a set of list editing operations. 
/// 
/// An SdfListEditorProxy allows consumers to specify a transformation to be
/// applied to a list via a set of list editing operations. Given a starting 
/// ordered list, it can either replace the result with another ordered list 
/// or apply a sequence of three operations:  deleting keys, then adding keys
/// to the end (if they aren't already in the starting list), then reordering 
/// keys.
/// 
/// The type policy defines the value type that a particular proxy can operate
/// on.
template <class _TypePolicy>
struct SdfListEditorProxy {
    using BoundType = pxr::SdfListEditorProxy<_TypePolicy>;
    using value_vector_type = typename pxr::SdfListEditorProxy<_TypePolicy>::value_vector_type;
    using value_type = typename pxr::SdfListEditorProxy<_TypePolicy>::value_type;
    using ListProxy = typename pxr::SdfListEditorProxy<_TypePolicy>::ListProxy;
    using This = pxr::SdfListEditorProxy<_TypePolicy>;

    /// Creates a default proxy object. The object evaluates to \c false in a 
    /// boolean context and all operations on this object have no effect.
    SdfListEditorProxy<_TypePolicy>();

    /// Creates a new proxy object backed by the supplied list editor.
#if 0
    SdfListEditorProxy<_TypePolicy>(const UNKNOWN& listEditor);
#endif

    /// Returns true if the list editor is expired.
    bool IsExpired() const;

    /// Returns \c true if the editor has an explicit list, \c false if
    /// it has list operations.
    bool IsExplicit() const;

    /// Returns \c true if the editor is not explicit and allows ordering
    /// only.
    bool IsOrderedOnly() const;

    /// Returns \c true if the editor has an explicit list (even if it's
    /// empty) or it has any added, prepended, appended, deleted,
    /// or ordered keys.
    bool HasKeys() const;

    /// Apply the edits to \p vec.
    void ApplyEditsToList(value_vector_type* vec) const;

    template <typename CB>
    void ApplyEditsToList(value_vector_type* vec, CB callback) const;

    /// Copies the keys from \p other.  This differs from assignment
    /// because assignment just makes two list editors refer to the
    /// same lists.
    /// 
    /// Not all list editors support changing their mode.  If the mode
    /// can't be changed to the mode of \p other then this does nothing
    /// and returns \c false, otherwise it returns \c true.
    bool CopyItems(const This& other);

    /// Removes all keys and changes the editor to have list operations.
    /// 
    /// Not all list editors support changing their mode.  If the mode
    /// can't be changed to the mode of \p other then this does nothing
    /// and returns \c false, otherwise it returns \c true.
    bool ClearEdits();

    /// Removes all keys and changes the editor to be explicit.
    /// 
    /// Not all list editors support changing their mode.  If the mode
    /// can't be changed to the mode of \p other then this does nothing
    /// and returns \c false, otherwise it returns \c true.
    bool ClearEditsAndMakeExplicit();

    template <typename CB>
    void ModifyItemEdits(CB callback);

    /// Check if the given item is explicit, added, prepended, appended,
    /// deleted, or ordered by this editor. If \p onlyAddOrExplicit is
    /// \c true we only check the added or explicit items.
    bool ContainsItemEdit(const value_type& item, bool onlyAddOrExplicit) const;

    /// Remove all occurrences of the given item, regardless of whether
    /// the item is explicit, added, prepended, appended, deleted, or ordered.
    void RemoveItemEdits(const value_type& item);

    /// Replace all occurrences of the given item, regardless of
    /// whether the item is explicit, added, prepended, appended,
    /// deleted or ordered.
    void ReplaceItemEdits(const value_type& oldItem, const value_type& newItem);

    /// Returns the explicitly set items.
    ListProxy GetExplicitItems() const;

    /// Returns the items added by this list editor
    ListProxy GetAddedItems() const;

    /// Returns the items prepended by this list editor
    ListProxy GetPrependedItems() const;

    /// Returns the items appended by this list editor
    ListProxy GetAppendedItems() const;

    /// Returns the items deleted by this list editor
    ListProxy GetDeletedItems() const;

    /// Returns the items reordered by this list editor
    ListProxy GetOrderedItems() const;

    /// Returns the added or explicitly set items.
    value_vector_type GetAddedOrExplicitItems() const;

    void Add(const value_type& value);

    void Prepend(const value_type& value);

    void Append(const value_type& value);

    void Remove(const value_type& value);

    void Erase(const value_type& value);

    /// Explicit bool conversion operator. A ListEditorProxy object 
    /// converts to \c true iff the list editor is valid, converts to \c false 
    /// otherwise.
    operator bool() const;

} CPPMM_OPAQUEPTR; // struct SdfListEditorProxy

// TODO: fill in explicit instantiations, e.g.:
// template class SdfListEditorProxy<int>;
// using SdfListEditorProxyInt = pxr::SdfListEditorProxy<int>;

#if 0
struct Vt_DefaultValueFactory {
    using BoundType = pxr::Vt_DefaultValueFactory;

    static pxr::Vt_DefaultValueHolder Invoke();

} CPPMM_OPAQUEPTR; // struct Vt_DefaultValueFactory
#endif


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::SdfListEditorProxy<int>;
