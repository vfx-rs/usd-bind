#include <pxr/usd/sdf/pathTable.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

void Sdf_VisitPathTableInParallel(void** , size_t , pxr::TfFunctionRef<void (void *&)> );


/// \class SdfPathTable
/// 
/// A mapping from SdfPath to \a MappedType, somewhat similar to map<SdfPath,
/// MappedType> and TfHashMap<SdfPath, MappedType>, but with key
/// differences.  Notably:
/// 
/// Works exclusively with absolute paths.
/// 
/// Inserting a path \a p also implicitly inserts all of \a p's ancestors.
/// 
/// Erasing a path \a p also implicitly erases all of \a p's descendants.
/// 
/// The table has an order: it's a preordering of the paths in the table, but
/// with arbitrary sibling order.  Given a path \a p in the table, all other
/// paths in the table with \a p as a prefix appear contiguously, immediately
/// following \a p.  For example, suppose a table contains the paths:
/// 
///   {'/a/b/c', '/a', '/a/d', '/', '/a/b'}
/// 
/// Then there are two possible valid orderings:
/// 
///   ['/', '/a', '/a/d', '/a/b', '/a/b/c']
///   ['/', '/a', '/a/b', '/a/b/c', '/a/d']
/// 
/// In addition to the ordinary map and TfHashMap methods, this class
/// provides a method \a FindSubtreeRange, which, given a path \a p, returns
/// a pair of iterators [\a b, \a e) defining a range such that for every
/// iterator \a i in [\a b, \a e), i->first is either equal to \a p or is
/// prefixed by \a p.
/// 
/// Iterator Invalidation
/// 
/// Like most other node-based containers, iterators are only invalidated when
/// the element they refer to is removed from the table.  Note however, that
/// since removing the element with path \a p also implicitly removes all
/// elements with paths prefixed by \a p, a call to erase(\a i) may invalidate
/// many iterators.
template <class MappedType>
struct SdfPathTable {
    using BoundType = pxr::SdfPathTable<MappedType>;
    using iterator = typename pxr::SdfPathTable<MappedType>::iterator;
    using const_iterator = typename pxr::SdfPathTable<MappedType>::const_iterator;
    using value_type = typename pxr::SdfPathTable<MappedType>::value_type;
    using mapped_type = typename pxr::SdfPathTable<MappedType>::mapped_type;
    using _IterBoolPair = typename pxr::SdfPathTable<MappedType>::_IterBoolPair;

    /// Default constructor.
    SdfPathTable<MappedType>();

    /// Copy constructor.
    SdfPathTable<MappedType>(const pxr::SdfPathTable<MappedType>& other);

    /// Move constructor.
    SdfPathTable<MappedType>(pxr::SdfPathTable<MappedType>&& other) CPPMM_IGNORE;

    /// Destructor.
    ~SdfPathTable<MappedType>();

    /// Copy assignment.
    pxr::SdfPathTable<MappedType>& operator=(const pxr::SdfPathTable<MappedType>& other);

    /// Move assignment.
    pxr::SdfPathTable<MappedType>& operator=(pxr::SdfPathTable<MappedType>&& other) CPPMM_IGNORE;

    /// Return an iterator to the start of the table.
    iterator begin();

    /// Return a const_iterator to the start of the table.
    const_iterator begin() const;

    /// Return an iterator denoting the end of the table.
    iterator end();

    /// Return a const_iterator denoting the end of the table.
    const_iterator end() const;

    /// Remove the element with path \a path from the table as well as all
    /// elements whose paths are prefixed by \a path.  Return true if any
    /// elements were removed, false otherwise.
    /// 
    /// Note that since descendant paths are also erased, size() may be
    /// decreased by more than one after calling this function.
    bool erase(const pxr::SdfPath& path);

    /// Remove the element pointed to by \p i from the table as well as all
    /// elements whose paths are prefixed by \a i->first.  \a i must be a valid
    /// iterator for this table.
    /// 
    /// Note that since descendant paths are also erased, size() may be
    /// decreased by more than one after calling this function.
    void erase(const iterator& i);

    /// Return an iterator to the element corresponding to \a path, or \a end()
    /// if there is none.
    iterator find(const pxr::SdfPath& path);

    /// Return a const_iterator to the element corresponding to \a path, or
    /// \a end() if there is none.
    const_iterator find(const pxr::SdfPath& path) const;

#if 0
    /// Return a pair of iterators [\a b, \a e), describing the maximal range
    /// such that for all \a i in the range, \a i->first is \a b->first or
    /// is prefixed by \a b->first.
    UNKNOWN FindSubtreeRange(const pxr::SdfPath& path);

    /// Return a pair of const_iterators [\a b, \a e), describing the maximal
    /// range such that for all \a i in the range, \a i->first is \a b->first or
    /// is prefixed by \a b->first.
    UNKNOWN FindSubtreeRange(const pxr::SdfPath& path) const;
#endif

    /// Return 1 if there is an element for \a path in the table, otherwise 0.
    size_t count(const pxr::SdfPath& path) const;

    /// Return the number of elements in the table.
    size_t size() const;

    /// Return true if this table is empty.
    bool empty() const;

    /// Insert \a value into the table, and additionally insert default entries
    /// for all ancestral paths of \a value.first that do not already exist in
    /// the table.
    /// 
    /// Return a pair of iterator and bool.  The iterator points to the inserted
    /// element, the bool indicates whether insertion was successful.  The bool
    /// is true if \a value was successfully inserted and false if an element
    /// with path \a value.first was already present in the map.
    /// 
    /// Note that since ancestral paths are also inserted, size() may be
    /// increased by more than one after calling this function.
    _IterBoolPair insert(const value_type& value);

    /// Shorthand for the following, where \a t is an SdfPathTable<T>.
    /// \code
    ///     t.insert(value_type(path, mapped_type())).first->second
    /// \endcode
    mapped_type& operator[](const pxr::SdfPath& path);

    /// Remove all elements from the table, leaving size() == 0.  Note that this
    /// function will not shrink the number of buckets used for the hash table.
    /// To do that, swap this instance with a default constructed instance.
    /// See also \a TfReset.
    void clear();

    /// Equivalent to clear(), but destroy contained objects in parallel.  This
    /// requires that running the contained objects' destructors is thread-safe.
    void ClearInParallel();

    /// Swap this table's contents with \a other.
    void swap(pxr::SdfPathTable<MappedType>& other);

    /// Return a vector of the count of elements in each bucket.
    std::vector<unsigned long> GetBucketSizes() const;

    /// Replaces all prefixes from \p oldName to \p newName.
    /// Note that \p oldName and \p newName need to be silbing paths (ie. 
    /// their parent paths must be the same).
    void UpdateForRename(const pxr::SdfPath& oldName, const pxr::SdfPath& newName);

    template <typename Callback>
    void ParallelForEach(const Callback& visitFn);

    template <typename Callback>
    void ParallelForEach(const Callback& visitFn) const;

} CPPMM_OPAQUEPTR; // struct SdfPathTable

// TODO: fill in explicit instantiations, e.g.:
// template class SdfPathTable<int>;
// using SdfPathTableInt = pxr::SdfPathTable<int>;

#if 0

struct _Entry {
    using BoundType = pxr::_Entry;

    _Entry(const pxr::SdfPathTable::value_type& value, pxr::_Entry* n);

    pxr::_Entry* GetNextSibling();

    const pxr::_Entry* GetNextSibling() const;

    pxr::_Entry* GetParentLink();

    const pxr::_Entry* GetParentLink() const;

    void SetSibling(pxr::_Entry* sibling);

    void SetParentLink(pxr::_Entry* parent);

    void AddChild(pxr::_Entry* child);

    void RemoveChild(pxr::_Entry* child);

} CPPMM_OPAQUEPTR; // struct _Entry
#endif

#if 0
template <class ValType, class EntryPtr>
struct Iterator {
    using BoundType = pxr::Iterator<ValType, EntryPtr>;

    /// The standard requires default construction but places practically no
    /// requirements on the semantics of default-constructed iterators.
    Iterator();

    template <typename OtherVal, typename OtherEntryPtr>
    void Iterator(const pxr::Iterator<ValType, EntryPtr>& other);

    /// Return an iterator \a e, defining a maximal range [\a *this, \a e)
    /// such that for all \a i in the range, \a i->first is \a
    /// (*this)->first or is prefixed by \a (*this)->first.
    pxr::Iterator GetNextSubtree() const;

} CPPMM_OPAQUEPTR; // struct Iterator
#endif

#if 0
// TODO: fill in explicit instantiations, e.g.:
// template class Iterator<int, int>;
// using IteratorInt = pxr::Iterator<int, int>;

#endif


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::SdfPathTable<int>;
// template class pxr::Iterator<int, int>;
