#include <pxr/usd/sdf/proxyPolicies.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfNameKeyPolicy
/// 
/// Key policy for \c std::string names.
struct SdfNameKeyPolicy {
    using BoundType = pxr::SdfNameKeyPolicy;
    using value_type = typename pxr::SdfNameKeyPolicy::value_type;

    static const value_type& Canonicalize(const value_type& x);

    static const std::vector<std::string>& Canonicalize(const std::vector<std::string>& x);

} CPPMM_OPAQUEPTR; // struct SdfNameKeyPolicy

/// \class SdfNameTokenKeyPolicy
/// 
/// Key policy for \c TfToken names.
struct SdfNameTokenKeyPolicy {
    using BoundType = pxr::SdfNameTokenKeyPolicy;
    using value_type = typename pxr::SdfNameTokenKeyPolicy::value_type;

    static const value_type& Canonicalize(const value_type& x);

    static const std::vector<pxr::TfToken>& Canonicalize(const std::vector<pxr::TfToken>& x);

} CPPMM_OPAQUEPTR; // struct SdfNameTokenKeyPolicy

/// \class SdfPathKeyPolicy
/// 
/// Key policy for \c SdfPath; converts all SdfPaths to absolute.
struct SdfPathKeyPolicy {
    using BoundType = pxr::SdfPathKeyPolicy;
    using value_type = typename pxr::SdfPathKeyPolicy::value_type;

    SdfPathKeyPolicy();

    SdfPathKeyPolicy(const pxr::SdfSpecHandle& owner);

    value_type Canonicalize(const value_type& x) const;

    std::vector<pxr::SdfPath> Canonicalize(const std::vector<pxr::SdfPath>& x) const;

    SdfPathKeyPolicy(pxr::SdfPathKeyPolicy&& rhs) CPPMM_IGNORE;

    pxr::SdfPathKeyPolicy& operator=(const pxr::SdfPathKeyPolicy& rhs);

    pxr::SdfPathKeyPolicy& operator=(pxr::SdfPathKeyPolicy&& rhs) CPPMM_IGNORE;

} CPPMM_OPAQUEPTR; // struct SdfPathKeyPolicy

#if 0
struct Vt_DefaultValueFactory {
    using BoundType = pxr::Vt_DefaultValueFactory;

    static pxr::Vt_DefaultValueHolder Invoke();

} CPPMM_OPAQUEPTR; // struct Vt_DefaultValueFactory


/// \class SdfPayloadTypePolicy
/// 
/// List editor type policy for \c SdfPayload.
struct SdfPayloadTypePolicy {
    using BoundType = pxr::SdfPayloadTypePolicy;

    static const pxr::SdfPayloadTypePolicy::value_type& Canonicalize(const pxr::SdfPayloadTypePolicy::value_type& x);

    static const std::vector<pxrInternal_v0_21__pxrReserved__::SdfPayload, std::allocator<pxrInternal_v0_21__pxrReserved__::SdfPayload> >& Canonicalize(const std::vector<pxrInternal_v0_21__pxrReserved__::SdfPayload, std::allocator<pxrInternal_v0_21__pxrReserved__::SdfPayload> >& x);

} CPPMM_OPAQUEPTR; // struct SdfPayloadTypePolicy


/// \class SdfReferenceTypePolicy
/// 
/// List editor type policy for \c SdfReference.
struct SdfReferenceTypePolicy {
    using BoundType = pxr::SdfReferenceTypePolicy;

    static const pxr::SdfReferenceTypePolicy::value_type& Canonicalize(const pxr::SdfReferenceTypePolicy::value_type& x);

    static const std::vector<pxrInternal_v0_21__pxrReserved__::SdfReference, std::allocator<pxrInternal_v0_21__pxrReserved__::SdfReference> >& Canonicalize(const std::vector<pxrInternal_v0_21__pxrReserved__::SdfReference, std::allocator<pxrInternal_v0_21__pxrReserved__::SdfReference> >& x);

} CPPMM_OPAQUEPTR; // struct SdfReferenceTypePolicy


/// \class SdfSubLayerTypePolicy
/// 
/// List editor type policy for sublayers.
struct SdfSubLayerTypePolicy {
    using BoundType = pxr::SdfSubLayerTypePolicy;

    static const pxr::SdfNameKeyPolicy::value_type& Canonicalize(const pxr::SdfNameKeyPolicy::value_type& x);

    static const std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >& Canonicalize(const std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >& x);

} CPPMM_OPAQUEPTR; // struct SdfSubLayerTypePolicy


/// \class SdfRelocatesMapProxyValuePolicy
/// 
/// Map edit proxy value policy for relocates maps.  This absolutizes all
/// paths.
struct SdfRelocatesMapProxyValuePolicy {
    using BoundType = pxr::SdfRelocatesMapProxyValuePolicy;

    static pxr::SdfRelocatesMapProxyValuePolicy::Type CanonicalizeType(const pxr::SdfSpecHandle& v, const pxr::SdfRelocatesMapProxyValuePolicy::Type& x);

    static pxr::SdfRelocatesMapProxyValuePolicy::key_type CanonicalizeKey(const pxr::SdfSpecHandle& v, const pxr::SdfPathKeyPolicy::value_type& x);

    static pxr::SdfRelocatesMapProxyValuePolicy::mapped_type CanonicalizeValue(const pxr::SdfSpecHandle& v, const pxr::SdfPathKeyPolicy::value_type& x);

    static pxr::SdfRelocatesMapProxyValuePolicy::value_type CanonicalizePair(const pxr::SdfSpecHandle& v, const pxr::SdfRelocatesMapProxyValuePolicy::value_type& x);

} CPPMM_OPAQUEPTR; // struct SdfRelocatesMapProxyValuePolicy


/// \class SdfGenericSpecViewPredicate
/// 
/// Predicate for viewing properties.
struct SdfGenericSpecViewPredicate {
    using BoundType = pxr::SdfGenericSpecViewPredicate;

    SdfGenericSpecViewPredicate(pxr::SdfSpecType type);

    template <typename T>
    bool operator()(const SdfHandle<T>& x) const;

} CPPMM_OPAQUEPTR; // struct SdfGenericSpecViewPredicate


/// \class SdfAttributeViewPredicate
/// 
/// Predicate for viewing attributes.
struct SdfAttributeViewPredicate {
    using BoundType = pxr::SdfAttributeViewPredicate;

    template <typename T>
    bool operator()(const SdfHandle<T>& x) const;

    SdfAttributeViewPredicate();

} CPPMM_OPAQUEPTR; // struct SdfAttributeViewPredicate


/// \class SdfRelationshipViewPredicate
/// 
/// Predicate for viewing relationships.
struct SdfRelationshipViewPredicate {
    using BoundType = pxr::SdfRelationshipViewPredicate;

    template <typename T>
    bool operator()(const SdfHandle<T>& x) const;

    SdfRelationshipViewPredicate();

} CPPMM_OPAQUEPTR; // struct SdfRelationshipViewPredicate
#endif

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
