#include <pxr/usd/sdf/listOp.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

enum SdfListOpType {
    SdfListOpTypeExplicit = 0,
    SdfListOpTypeAdded = 1,
    SdfListOpTypeDeleted = 2,
    SdfListOpTypeOrdered = 3,
    SdfListOpTypePrepended = 4,
    SdfListOpTypeAppended = 5,
};

/// \struct Sdf_ListOpTraits
/// 
/// Trait classes for specializing behaviors of SdfListOp for a given item
/// type.
template <class T>
struct Sdf_ListOpTraits {
    using BoundType = pxr::Sdf_ListOpTraits<T>;

} CPPMM_OPAQUEPTR; // struct Sdf_ListOpTraits

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_ListOpTraits<int>;
// using Sdf_ListOpTraitsInt = pxr::Sdf_ListOpTraits<int>;


/// \class SdfListOp
/// 
/// Value type representing a list-edit operation.
/// 
/// SdfListOp is a value type representing an operation that edits a list.
/// It may add or remove items, reorder them, or replace the list entirely.
template <class T>
struct SdfListOp {
    using BoundType = pxr::SdfListOp<T>;
    using ItemVector = typename pxr::SdfListOp<T>::ItemVector;
    using ApplyCallback = typename pxr::SdfListOp<T>::ApplyCallback;
    using ModifyCallback = typename pxr::SdfListOp<T>::ModifyCallback;

    /// Create a ListOp in explicit mode with the given \p explicitItems.
    static pxr::SdfListOp<T> CreateExplicit(const ItemVector& explicitItems);

    /// Create a ListOp in non-explicit mode with the given 
    /// \p prependedItems, \p appendedItems, and \p deletedItems
    static pxr::SdfListOp<T> Create(const ItemVector& prependedItems, const ItemVector& appendedItems, const ItemVector& deletedItems);

    /// Create an empty ListOp in non-explicit mode.
    SdfListOp<T>();

    void Swap(pxr::SdfListOp<T>& rhs);

    /// Returns \c true if the editor has an explicit list (even if it's
    /// empty) or it has any added, prepended, appended, deleted,
    /// or ordered keys.
    bool HasKeys() const;

    /// Returns \c true if the given item is in any of the item lists.
    bool HasItem(const T& item) const;

    /// Returns \c true if the list is explicit.
    bool IsExplicit() const;

    /// Returns the explicit items.
    const ItemVector& GetExplicitItems() const;

    /// Returns the explicit items.
    const ItemVector& GetAddedItems() const;

    /// Returns the explicit items.
    const ItemVector& GetPrependedItems() const;

    /// Returns the explicit items.
    const ItemVector& GetAppendedItems() const;

    /// Returns the deleted items.
    const ItemVector& GetDeletedItems() const;

    /// Returns the ordered items.
    const ItemVector& GetOrderedItems() const;

    /// Return the item vector identified by \p type.
    const ItemVector& GetItems(pxr::SdfListOpType type) const;

    void SetExplicitItems(const ItemVector& items);

    void SetAddedItems(const ItemVector& items);

    void SetPrependedItems(const ItemVector& items);

    void SetAppendedItems(const ItemVector& items);

    void SetDeletedItems(const ItemVector& items);

    void SetOrderedItems(const ItemVector& items);

    /// Sets the item vector for the given operation \p type.
    void SetItems(const ItemVector& items, pxr::SdfListOpType type);

    /// Removes all items and changes the list to be non-explicit.
    void Clear();

    /// Removes all items and changes the list to be explicit.
    void ClearAndMakeExplicit();

    /// Applies edit operations to the given ItemVector.
    /// If supplied, \p cb will be called on each item in the operation vectors
    /// before they are applied to \p vec. Consumers can use this to transform
    /// the items stored in the operation vectors to match what's stored in
    /// \p vec.
    void ApplyOperations(ItemVector* vec, const ApplyCallback& cb) const;

    /// Applies edit operations to the given ListOp.
    /// 
    /// The result is a ListOp that, when applied to a list, has the same
    /// effect as applying \p inner and then \p this in sequence.
    /// 
    /// The result will be empty if the result is not well defined.
    /// The result is well-defined when \p inner and \p this do not
    /// use the 'ordered' or 'added' item lists.  In other words, only
    /// the explicit, prepended, appended, and deleted portions of
    /// SdfListOp are closed under composition with ApplyOperations().
#if 0
    UNKNOWN ApplyOperations(const pxr::SdfListOp<T>& inner) const;
#endif

    /// Modifies operations specified in this object.
    /// \p callback is called for every item in all operation vectors.  If the 
    /// returned key is empty then the key is removed, otherwise it's replaced 
    /// with the returned key.
    /// 
    /// Returns true if a change was made, false otherwise.
    bool ModifyOperations(const ModifyCallback& callback);

    /// Replaces the items in the specified operation vector in the range
    /// (index, index + n] with the given \p newItems. If \p newItems is empty
    /// the items in the range will simply be removed.
    bool ReplaceOperations(const pxr::SdfListOpType op, size_t index, size_t n, const ItemVector& newItems);

    /// Composes a stronger SdfListOp's opinions for a given operation list
    /// over this one.
    void ComposeOperations(const pxr::SdfListOp<T>& stronger, pxr::SdfListOpType op);

    bool operator==(const pxr::SdfListOp<T>& rhs) const;

    bool operator!=(const pxr::SdfListOp<T>& rhs) const;

} CPPMM_OPAQUEPTR; // struct SdfListOp

// TODO: fill in explicit instantiations, e.g.:
// template class SdfListOp<int>;
// using SdfListOpInt = pxr::SdfListOp<int>;


template <typename T>
void swap(pxr::SdfListOp<T>& x, pxr::SdfListOp<T>& y);


template <typename ItemType>
void SdfApplyListOrdering(typename pxr::SdfListOp<ItemType>::ItemVector* v, const typename pxr::SdfListOp<ItemType>::ItemVector& order);


template <typename T>
std::ostream& operator<<(std::ostream& , const pxr::SdfListOp<T>& );

#if 0
using SdfIntListOp = pxr::SdfIntListOp;


using SdfUIntListOp = pxr::SdfUIntListOp;


using SdfInt64ListOp = pxr::SdfInt64ListOp;


using SdfUInt64ListOp = pxr::SdfUInt64ListOp;


using SdfTokenListOp = pxr::SdfTokenListOp;


using SdfStringListOp = pxr::SdfStringListOp;


using SdfPathListOp = pxr::SdfPathListOp;


using SdfReferenceListOp = pxr::SdfReferenceListOp;


using SdfPayloadListOp = pxr::SdfPayloadListOp;


using SdfUnregisteredValueListOp = pxr::SdfUnregisteredValueListOp;
#endif


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::Sdf_ListOpTraits<int>;
// template class pxr::SdfListOp<int>;
