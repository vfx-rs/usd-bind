#include <pxr/usd/sdf/childrenView.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfChildrenViewTrivialPredicate
/// 
/// Special case predicate that always passes.
/// 
/// \c T is the type exposed by the value traits.
/// 
/// This predicate is compiled out.
template <class T>
struct SdfChildrenViewTrivialPredicate {
    using BoundType = pxr::SdfChildrenViewTrivialPredicate<T>;

    bool operator()(const T& x) const CPPMM_RENAME(call);

} CPPMM_OPAQUEPTR; // struct SdfChildrenViewTrivialPredicate

// TODO: fill in explicit instantiations, e.g.:
// template class SdfChildrenViewTrivialPredicate<int>;
// using SdfChildrenViewTrivialPredicateInt = pxr::SdfChildrenViewTrivialPredicate<int>;


/// \class SdfChildrenViewTrivialAdapter
/// 
/// Special case adapter that does no conversions.
template <class T>
struct SdfChildrenViewTrivialAdapter {
    using BoundType = pxr::SdfChildrenViewTrivialAdapter<T>;

    static const T& Convert(const T& t);

} CPPMM_OPAQUEPTR; // struct SdfChildrenViewTrivialAdapter

// TODO: fill in explicit instantiations, e.g.:
// template class SdfChildrenViewTrivialAdapter<int>;
// using SdfChildrenViewTrivialAdapterInt = pxr::SdfChildrenViewTrivialAdapter<int>;


/// \class Sdf_ChildrenViewTraits
/// This traits class defines the iterator for a particular ChildrenView
/// along with conversions to and from the view's internal un-filtered iterator.
/// 
/// A specialization of the traits for trivial predicates allows the
/// internal iterator to be used directly.
template <class _Owner, class _InnerIterator, class _DummyPredicate>
struct Sdf_ChildrenViewTraits {
    using BoundType = pxr::Sdf_ChildrenViewTraits<_Owner, _InnerIterator, _DummyPredicate>;
    using const_iterator = typename pxr::Sdf_ChildrenViewTraits<_Owner, _InnerIterator, _DummyPredicate>::const_iterator;

    static const_iterator GetIterator(const _Owner* owner, const _InnerIterator& i, size_t size);

    static const _InnerIterator& GetBase(const const_iterator& i);

} CPPMM_OPAQUEPTR; // struct Sdf_ChildrenViewTraits

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_ChildrenViewTraits<int, int, int>;
// using Sdf_ChildrenViewTraitsInt = pxr::Sdf_ChildrenViewTraits<int, int, int>;

/// \class SdfChildrenView
/// 
/// Provides a view onto an object's children.
/// 
/// The \c _ChildPolicy dictates the type of children being viewed by this
/// object. This policy defines the key type by which children are referenced
/// (e.g. a TfToken, or an SdfPath) and the value type of the children objects.
/// 
/// The \c _Predicate takes a value type argument and returns \c true if the
/// object should be included in the view and \c false otherwise.
/// 
/// The \c _Adapter allows the view to present the children objects as a
/// different type. The _Adapter class must provide functions to convert the
/// children object type defined by \c _ChildPolicy to the desired public
/// type and vice-versa. See SdfChildrenViewTrivialAdapter for an example.
/// By default, the view presents children objects as the value type defined
/// in \c _ChildPolicy.
/// 
/// Note that all methods are const, i.e. the children cannot be changed
/// through a view.
template <class _ChildPolicy, class _Predicate, class _Adapter>
struct SdfChildrenView {
    using BoundType = pxr::SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>;
    using KeyPolicy = typename BoundType::KeyPolicy;
    using const_iterator = typename BoundType::const_iterator;
    using const_reverse_iterator = typename BoundType::const_reverse_iterator;
    using size_type = typename BoundType::size_type;
    using value_type = typename BoundType::value_type;
    using key_type = typename BoundType::key_type;
    using ChildrenType = typename BoundType::ChildrenType;

    SdfChildrenView();

    SdfChildrenView(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& path,
                    const pxr::TfToken& childrenKey, const KeyPolicy& keyPolicy);

    SdfChildrenView(const BoundType& other);

    ~SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>();

    BoundType& operator=(const BoundType& other);


    /// Returns an const_iterator pointing to the beginning of the vector.
    const_iterator begin() const;

    /// Returns an const_iterator pointing to the end of the vector.
    const_iterator end() const;

    /// Returns an const_reverse_iterator pointing to the beginning of the
    /// reversed vector.
    const_reverse_iterator rbegin() const;

    /// Returns an const_reverse_iterator pointing to the end of the
    /// reversed vector.
    const_reverse_iterator rend() const;

    /// Returns the size of the vector.
    size_type size() const;

    /// Returns \c true if the vector is empty.
    bool empty() const;

    /// Returns the \p n'th element.
    value_type operator[](size_type n) const;

    /// Returns the first element.
    value_type front() const;

    /// Returns the last element.
    value_type back() const;

    /// Finds the element with key \p x.
    const_iterator find(const key_type& x) const;

    /// Finds element \p x, if present in this view.
    const_iterator find(const value_type& x) const;

    /// Returns the key for an element.
    key_type key(const const_iterator& x) const;

    /// Returns the key for a value.
    key_type key(const value_type& x) const;

#if 0
    /// Returns the elements, in order.
    UNKNOWN values() const;
#endif

    template <typename V>
    V values_as() const;

#if 0
    /// Returns the keys for all elements, in order.
    UNKNOWN keys() const;
#endif

    template <typename V>
    V keys_as() const;

    template <typename Dict>
    Dict items_as() const;

    /// Returns true if an element with key \p x is in the container.
    bool has(const key_type& x) const;

    /// Returns true if an element with the same key as \p x is in
    /// the container.
    bool has(const value_type& x) const;

    /// Returns the number of elements with key \p x in the container.
    size_type count(const key_type& x) const;

    /// Returns the element with key \p x or a default constructed value
    /// if no such element exists.
    value_type get(const key_type& x) const;

    /// Returns the element with key \p x or the fallback if no such
    /// element exists.
    value_type get(const key_type& x, const value_type& fallback) const;

    /// Returns the element with key \p x or a default constructed value
    /// if no such element exists.
    value_type operator[](const key_type& x) const;

    /// Compares children for equality.  Children are equal if the
    /// list edits are identical and the keys contain the same elements.
    bool operator==(const BoundType& other) const;

    /// Compares children for inequality.  Children are not equal if
    /// list edits are not identical or the keys don't contain the same
    /// elements.
    bool operator!=(const BoundType& other) const;

    bool IsValid() const;

    ChildrenType& GetChildren();

} CPPMM_OPAQUEPTR; // struct SdfChildrenView

// TODO: fill in explicit instantiations, e.g.:
// template class SdfChildrenView<int, int, int>;
// using SdfChildrenViewInt = pxr::SdfChildrenView<int, int, int>;


/// Helper class to convert a given view of type \c _View to an 
/// adapted view using \c _Adapter as the adapter class.
template <class _View, class _Adapter>
struct SdfAdaptedChildrenViewCreator {
    using BoundType = pxr::SdfAdaptedChildrenViewCreator<_View, _Adapter>;
    using AdaptedView = typename BoundType::AdaptedView;
    using OriginalView = typename BoundType::OriginalView;

    static AdaptedView Create(const OriginalView& view);

} CPPMM_OPAQUEPTR; // struct SdfAdaptedChildrenViewCreator

// TODO: fill in explicit instantiations, e.g.:
// template class SdfAdaptedChildrenViewCreator<int, int>;
// using SdfAdaptedChildrenViewCreatorInt = pxr::SdfAdaptedChildrenViewCreator<int, int>;


#if 0
struct Tf_ShouldIterateOverCopy {
    using BoundType = pxr::Tf_ShouldIterateOverCopy;

    template <typename T>
    static T& dereference(T* p);

    operator const mpl_::bool_<true> &() const;

    operator bool() const;

} CPPMM_OPAQUEPTR; // struct Tf_ShouldIterateOverCopy

struct Tf_IteratorInterface {
    using BoundType = pxr::Tf_IteratorInterface;
    using IteratorType = typename BoundType::IteratorType;
    using Type = typename BoundType::Type;

    static IteratorType Begin(const Type& c);
    static IteratorType End(const Type& c);

} CPPMM_OPAQUEPTR; // struct Tf_IteratorInterface
#endif


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::SdfChildrenViewTrivialPredicate<int>;
// template class pxr::SdfChildrenViewTrivialAdapter<int>;
// template class pxr::Sdf_ChildrenViewTraits<int, int, int>;
// template class pxr::SdfChildrenView<int, int, int>;
// template class pxr::SdfAdaptedChildrenViewCreator<int, int>;
