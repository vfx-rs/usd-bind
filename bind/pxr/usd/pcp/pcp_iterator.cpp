#if 0
#include <pxr/usd/pcp/iterator.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpNodeIterator
/// 
/// Object used to iterate over nodes in the prim index graph in strong-to-weak
/// order.
struct PcpNodeIterator {
    using BoundType = pxr::PcpNodeIterator;

    boost::iterators::detail::iterator_facade_base::reference operator*() const;

    boost::iterators::detail::iterator_facade_base::pointer operator->() const;

    pxr::PcpNodeIterator& operator++();

    pxr::PcpNodeIterator& operator--();

    pxr::PcpNodeIterator operator--(int );

    boost::iterators::detail::operator_brackets_result::type operator[](boost::iterators::detail::iterator_facade_base::difference_type n) const;

    pxr::PcpNodeIterator& operator+=(boost::iterators::detail::iterator_facade_base::difference_type n);

    pxr::PcpNodeIterator& operator-=(boost::iterators::detail::iterator_facade_base::difference_type n);

    pxr::PcpNodeIterator operator-(boost::iterators::detail::iterator_facade_base::difference_type x) const;

    /// Constructs an invalid iterator.
    PcpNodeIterator();

    pxr::Pcp_CompressedSdSite GetCompressedSdSite(size_t layerIndex) const;

    PcpNodeIterator(const pxr::PcpNodeIterator& );

    PcpNodeIterator(pxr::PcpNodeIterator&& ) CPPMM_IGNORE;

    ~PcpNodeIterator();

    pxr::PcpNodeIterator& operator=(const pxr::PcpNodeIterator& );

    pxr::PcpNodeIterator& operator=(pxr::PcpNodeIterator&& ) CPPMM_IGNORE;

} CPPMM_OPAQUEPTR; // struct PcpNodeIterator


/// \class PcpNodeReverseIterator
/// 
/// Object used to iterate over nodes in the prim index graph in weak-to-strong
/// order.
struct PcpNodeReverseIterator {
    using BoundType = pxr::PcpNodeReverseIterator;

    boost::iterators::detail::iterator_facade_base::reference operator*() const;

    boost::iterators::detail::iterator_facade_base::pointer operator->() const;

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpNodeIterator>& operator++();

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpNodeIterator>& operator--();

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpNodeIterator> operator--(int );

    boost::iterators::detail::operator_brackets_result::type operator[](boost::iterators::detail::iterator_facade_base::difference_type n) const;

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpNodeIterator>& operator+=(boost::iterators::detail::iterator_facade_base::difference_type n);

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpNodeIterator>& operator-=(boost::iterators::detail::iterator_facade_base::difference_type n);

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpNodeIterator> operator-(boost::iterators::detail::iterator_facade_base::difference_type x) const;

    const pxr::PcpNodeIterator& base() const;

    template <typename OtherIterator>
    void reverse_iterator(const reverse_iterator<Iterator>& r, UNKNOWN* );

    PcpNodeReverseIterator();

    PcpNodeReverseIterator(const pxr::PcpNodeIterator& iter);

    PcpNodeReverseIterator(const pxr::PcpNodeReverseIterator& );

    PcpNodeReverseIterator(pxr::PcpNodeReverseIterator&& ) CPPMM_IGNORE;

    ~PcpNodeReverseIterator();

} CPPMM_OPAQUEPTR; // struct PcpNodeReverseIterator


/// \class PcpPrimIterator
/// 
/// Object used to iterate over prim specs in the prim index graph in 
/// strong-to-weak order.
struct PcpPrimIterator {
    using BoundType = pxr::PcpPrimIterator;

    boost::iterators::detail::iterator_facade_base::reference operator*() const;

    boost::iterators::detail::iterator_facade_base::pointer operator->() const;

    pxr::PcpPrimIterator& operator++();

    pxr::PcpPrimIterator& operator--();

    pxr::PcpPrimIterator operator--(int );

    boost::iterators::detail::operator_brackets_result::type operator[](boost::iterators::detail::iterator_facade_base::difference_type n) const;

    pxr::PcpPrimIterator& operator+=(boost::iterators::detail::iterator_facade_base::difference_type n);

    pxr::PcpPrimIterator& operator-=(boost::iterators::detail::iterator_facade_base::difference_type n);

    pxr::PcpPrimIterator operator-(boost::iterators::detail::iterator_facade_base::difference_type x) const;

    /// Constructs an invalid iterator.
    PcpPrimIterator();

    /// Constructs a prim iterator beginning at position \p pos in the
    /// prim stack of prim index \p primIndex.
    PcpPrimIterator(const pxr::PcpPrimIndex* primIndex, size_t pos);

    /// Returns the PcpNode from which the current prim originated.
    pxr::PcpNodeRef GetNode() const;

    pxr::Pcp_SdSiteRef _GetSiteRef() const;

    PcpPrimIterator(const pxr::PcpPrimIterator& );

    PcpPrimIterator(pxr::PcpPrimIterator&& ) CPPMM_IGNORE;

    ~PcpPrimIterator();

    pxr::PcpPrimIterator& operator=(const pxr::PcpPrimIterator& );

    pxr::PcpPrimIterator& operator=(pxr::PcpPrimIterator&& ) CPPMM_IGNORE;

} CPPMM_OPAQUEPTR; // struct PcpPrimIterator


/// \class PcpPrimReverseIterator
/// 
/// Object used to iterate over prim specs in the prim index graph in 
/// weak-to-strong order.
struct PcpPrimReverseIterator {
    using BoundType = pxr::PcpPrimReverseIterator;

    boost::iterators::detail::iterator_facade_base::reference operator*() const;

    boost::iterators::detail::iterator_facade_base::pointer operator->() const;

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpPrimIterator>& operator++();

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpPrimIterator>& operator--();

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpPrimIterator> operator--(int );

    boost::iterators::detail::operator_brackets_result::type operator[](boost::iterators::detail::iterator_facade_base::difference_type n) const;

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpPrimIterator>& operator+=(boost::iterators::detail::iterator_facade_base::difference_type n);

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpPrimIterator>& operator-=(boost::iterators::detail::iterator_facade_base::difference_type n);

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpPrimIterator> operator-(boost::iterators::detail::iterator_facade_base::difference_type x) const;

    const pxr::PcpPrimIterator& base() const;

    template <typename OtherIterator>
    void reverse_iterator(const reverse_iterator<Iterator>& r, UNKNOWN* );

    PcpPrimReverseIterator();

    PcpPrimReverseIterator(const pxr::PcpPrimIterator& iter);

    pxr::PcpNodeRef GetNode() const;

    pxr::Pcp_SdSiteRef _GetSiteRef() const;

    PcpPrimReverseIterator(const pxr::PcpPrimReverseIterator& );

    PcpPrimReverseIterator(pxr::PcpPrimReverseIterator&& ) CPPMM_IGNORE;

    ~PcpPrimReverseIterator();

} CPPMM_OPAQUEPTR; // struct PcpPrimReverseIterator


/// \class PcpPropertyIterator
/// 
/// Object used to iterate over property specs in a property index in
/// strong-to-weak order.
struct PcpPropertyIterator {
    using BoundType = pxr::PcpPropertyIterator;

    const pxr::SdfHandle<pxr::SdfPropertySpec>& operator*() const;

    const pxr::SdfHandle<pxr::SdfPropertySpec>* operator->() const;

    pxr::PcpPropertyIterator& operator++();

    pxr::PcpPropertyIterator& operator--();

    pxr::PcpPropertyIterator operator--(int );

    boost::iterators::detail::operator_brackets_result::type operator[](boost::iterators::detail::iterator_facade_base::difference_type n) const;

    pxr::PcpPropertyIterator& operator+=(boost::iterators::detail::iterator_facade_base::difference_type n);

    pxr::PcpPropertyIterator& operator-=(boost::iterators::detail::iterator_facade_base::difference_type n);

    pxr::PcpPropertyIterator operator-(boost::iterators::detail::iterator_facade_base::difference_type x) const;

    /// Constructs an invalid iterator.
    PcpPropertyIterator();

    /// Constructs a property iterator for \p index beginning at position
    /// \p pos in the property stack.
    PcpPropertyIterator(const pxr::PcpPropertyIndex& index, size_t pos);

    /// Returns the PcpNode from which the current property originated.
    pxr::PcpNodeRef GetNode() const;

    /// Returns true if the current property is local to the owning
    /// property index's layer stack, false otherwise.
    bool IsLocal() const;

    PcpPropertyIterator(const pxr::PcpPropertyIterator& );

    PcpPropertyIterator(pxr::PcpPropertyIterator&& ) CPPMM_IGNORE;

    ~PcpPropertyIterator();

    pxr::PcpPropertyIterator& operator=(const pxr::PcpPropertyIterator& );

    pxr::PcpPropertyIterator& operator=(pxr::PcpPropertyIterator&& ) CPPMM_IGNORE;

} CPPMM_OPAQUEPTR; // struct PcpPropertyIterator


/// \class PcpPropertyReverseIterator
/// 
/// Object used to iterate over property specs in a property index in
/// weak-to-strong order.
struct PcpPropertyReverseIterator {
    using BoundType = pxr::PcpPropertyReverseIterator;

    const pxr::SdfHandle<pxr::SdfPropertySpec>& operator*() const;

    const pxr::SdfHandle<pxr::SdfPropertySpec>* operator->() const;

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator>& operator++();

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator>& operator--();

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator> operator--(int );

    boost::iterators::detail::operator_brackets_result::type operator[](boost::iterators::detail::iterator_facade_base::difference_type n) const;

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator>& operator+=(boost::iterators::detail::iterator_facade_base::difference_type n);

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator>& operator-=(boost::iterators::detail::iterator_facade_base::difference_type n);

    boost::iterators::reverse_iterator<pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator> operator-(boost::iterators::detail::iterator_facade_base::difference_type x) const;

    const pxr::PcpPropertyIterator& base() const;

    template <typename OtherIterator>
    void reverse_iterator(const reverse_iterator<Iterator>& r, UNKNOWN* );

    PcpPropertyReverseIterator();

    PcpPropertyReverseIterator(const pxr::PcpPropertyIterator& iter);

    pxr::PcpNodeRef GetNode() const;

    bool IsLocal() const;

    PcpPropertyReverseIterator(const pxr::PcpPropertyReverseIterator& );

    PcpPropertyReverseIterator(pxr::PcpPropertyReverseIterator&& ) CPPMM_IGNORE;

    ~PcpPropertyReverseIterator();

} CPPMM_OPAQUEPTR; // struct PcpPropertyReverseIterator


struct PcpIteratorTraits {
    using BoundType = pxr::PcpIteratorTraits;

} CPPMM_OPAQUEPTR; // struct PcpIteratorTraits


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
