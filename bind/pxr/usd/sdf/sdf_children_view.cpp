#if 0
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

    bool operator()(const T& x) const;

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

    static pxr::Sdf_ChildrenViewTraits::const_iterator GetIterator(const _Owner* owner, const _InnerIterator& i, size_t size);

    static const _InnerIterator& GetBase(const pxr::Sdf_ChildrenViewTraits::const_iterator& i);

} CPPMM_OPAQUEPTR; // struct Sdf_ChildrenViewTraits

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_ChildrenViewTraits<int, int, int>;
// using Sdf_ChildrenViewTraitsInt = pxr::Sdf_ChildrenViewTraits<int, int, int>;


struct _Predicate {
    using BoundType = pxr::_Predicate;

    _Predicate();

    _Predicate(const _Owner* owner);

    bool operator()(const pxr::Sdf_ChildrenViewTraits::_Predicate::value_type& x) const;

} CPPMM_OPAQUEPTR; // struct _Predicate


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

    SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>();

    SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& path, const pxr::TfToken& childrenKey, const pxr::SdfChildrenView::KeyPolicy& keyPolicy);

    SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& path, const pxr::TfToken& childrenKey, const _InnerIterator& predicate, const pxr::SdfChildrenView::KeyPolicy& keyPolicy);

    SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>(const pxr::SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>& other);

    template <typename OtherAdapter>
    void SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>(const pxr::SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>& other);

    ~SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>();

    pxr::SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>& operator=(const pxr::SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>& other);

    /// Returns an const_iterator pointing to the beginning of the vector.
    pxr::SdfChildrenView::const_iterator begin() const;

    /// Returns an const_iterator pointing to the end of the vector.
    pxr::SdfChildrenView::const_iterator end() const;

    /// Returns an const_reverse_iterator pointing to the beginning of the
    /// reversed vector.
    pxr::SdfChildrenView::const_reverse_iterator rbegin() const;

    /// Returns an const_reverse_iterator pointing to the end of the
    /// reversed vector.
    pxr::SdfChildrenView::const_reverse_iterator rend() const;

    /// Returns the size of the vector.
    pxr::SdfChildrenView::size_type size() const;

    /// Returns \c true if the vector is empty.
    bool empty() const;

    /// Returns the \p n'th element.
    pxr::SdfChildrenView::value_type operator[](pxr::SdfChildrenView::size_type n) const;

    /// Returns the first element.
    pxr::SdfChildrenView::value_type front() const;

    /// Returns the last element.
    pxr::SdfChildrenView::value_type back() const;

    /// Finds the element with key \p x.
    pxr::SdfChildrenView::const_iterator find(const pxr::SdfChildrenView::key_type& x) const;

    /// Finds element \p x, if present in this view.
    pxr::SdfChildrenView::const_iterator find(const pxr::SdfChildrenView::value_type& x) const;

    /// Returns the key for an element.
    pxr::SdfChildrenView::key_type key(const pxr::SdfChildrenView::const_iterator& x) const;

    /// Returns the key for a value.
    pxr::SdfChildrenView::key_type key(const pxr::SdfChildrenView::value_type& x) const;

    /// Returns the elements, in order.
    UNKNOWN values() const;

    template <typename V>
    V values_as() const;

    /// Returns the keys for all elements, in order.
    UNKNOWN keys() const;

    template <typename V>
    V keys_as() const;

    template <typename Dict>
    Dict items_as() const;

    /// Returns true if an element with key \p x is in the container.
    bool has(const pxr::SdfChildrenView::key_type& x) const;

    /// Returns true if an element with the same key as \p x is in
    /// the container.
    bool has(const pxr::SdfChildrenView::value_type& x) const;

    /// Returns the number of elements with key \p x in the container.
    pxr::SdfChildrenView::size_type count(const pxr::SdfChildrenView::key_type& x) const;

    /// Returns the element with key \p x or a default constructed value
    /// if no such element exists.
    pxr::SdfChildrenView::value_type get(const pxr::SdfChildrenView::key_type& x) const;

    /// Returns the element with key \p x or the fallback if no such
    /// element exists.
    pxr::SdfChildrenView::value_type get(const pxr::SdfChildrenView::key_type& x, const pxr::SdfChildrenView::value_type& fallback) const;

    /// Returns the element with key \p x or a default constructed value
    /// if no such element exists.
    pxr::SdfChildrenView::value_type operator[](const pxr::SdfChildrenView::key_type& x) const;

    /// Compares children for equality.  Children are equal if the
    /// list edits are identical and the keys contain the same elements.
    bool operator==(const pxr::SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>& other) const;

    /// Compares children for inequality.  Children are not equal if
    /// list edits are not identical or the keys don't contain the same
    /// elements.
    bool operator!=(const pxr::SdfChildrenView<_ChildPolicy, _Predicate, _Adapter>& other) const;

    bool IsValid() const;

    pxr::SdfChildrenView::ChildrenType& GetChildren();

    const _InnerIterator& GetPredicate() const;

} CPPMM_OPAQUEPTR; // struct SdfChildrenView

// TODO: fill in explicit instantiations, e.g.:
// template class SdfChildrenView<int, int, int>;
// using SdfChildrenViewInt = pxr::SdfChildrenView<int, int, int>;


struct _InnerIterator {
    using BoundType = pxr::_InnerIterator;

    _InnerIterator();

    _InnerIterator(const pxr::SdfChildrenView::This* owner, const size_t& pos);

} CPPMM_OPAQUEPTR; // struct _InnerIterator


/// Helper class to convert a given view of type \c _View to an 
/// adapted view using \c _Adapter as the adapter class.
template <class _View, class _Adapter>
struct SdfAdaptedChildrenViewCreator {
    using BoundType = pxr::SdfAdaptedChildrenViewCreator<_View, _Adapter>;

    static pxr::SdfAdaptedChildrenViewCreator::AdaptedView Create(const T& view);

} CPPMM_OPAQUEPTR; // struct SdfAdaptedChildrenViewCreator

// TODO: fill in explicit instantiations, e.g.:
// template class SdfAdaptedChildrenViewCreator<int, int>;
// using SdfAdaptedChildrenViewCreatorInt = pxr::SdfAdaptedChildrenViewCreator<int, int>;


struct Tf_ShouldIterateOverCopy {
    using BoundType = pxr::Tf_ShouldIterateOverCopy;

    template <typename T>
    static T& dereference(T* p);

    operator const mpl_::bool_<true> &() const;

    operator bool() const;

} CPPMM_OPAQUEPTR; // struct Tf_ShouldIterateOverCopy


struct Tf_IteratorInterface {
    using BoundType = pxr::Tf_IteratorInterface;

    static pxr::Tf_IteratorInterface::IteratorType Begin(const pxr::Tf_IteratorInterface::Type& c);

    static pxr::Tf_IteratorInterface::IteratorType End(const pxr::Tf_IteratorInterface::Type& c);

} CPPMM_OPAQUEPTR; // struct Tf_IteratorInterface


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::SdfChildrenViewTrivialPredicate<int>;
// template class pxr::SdfChildrenViewTrivialAdapter<int>;
// template class pxr::Sdf_ChildrenViewTraits<int, int, int>;
// template class pxr::SdfChildrenView<int, int, int>;
// template class pxr::SdfAdaptedChildrenViewCreator<int, int>;
#endif
