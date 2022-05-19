#pragma once
#include <pxr/usd/sdf/sdf_proxy_policies.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/proxyPolicies.h>

inline pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy const & to_cpp_ref(
    pxr_SdfNameKeyPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy & to_cpp_ref(
    pxr_SdfNameKeyPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy const * to_cpp(
    pxr_SdfNameKeyPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy * to_cpp(
    pxr_SdfNameKeyPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy * >(rhs);
}

inline void to_c(
    pxr_SdfNameKeyPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNameKeyPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNameKeyPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNameKeyPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNameKeyPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNameKeyPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNameKeyPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNameKeyPolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNameKeyPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy const & to_cpp_ref(
    pxr_SdfNameTokenKeyPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy & to_cpp_ref(
    pxr_SdfNameTokenKeyPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy const * to_cpp(
    pxr_SdfNameTokenKeyPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy * to_cpp(
    pxr_SdfNameTokenKeyPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy * >(rhs);
}

inline void to_c(
    pxr_SdfNameTokenKeyPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNameTokenKeyPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNameTokenKeyPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNameTokenKeyPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNameTokenKeyPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNameTokenKeyPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNameTokenKeyPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNameTokenKeyPolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNameTokenKeyPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy const & to_cpp_ref(
    pxr_SdfPathKeyPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy & to_cpp_ref(
    pxr_SdfPathKeyPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy const * to_cpp(
    pxr_SdfPathKeyPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy * to_cpp(
    pxr_SdfPathKeyPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy * >(rhs);
}

inline void to_c(
    pxr_SdfPathKeyPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPathKeyPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfPathKeyPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPathKeyPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_SdfPathKeyPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPathKeyPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfPathKeyPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPathKeyPolicy_t * >(rhs);
}

inline void to_c_move(
    pxr_SdfPathKeyPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy const & to_cpp_ref(
    pxr_SdfPayloadTypePolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy & to_cpp_ref(
    pxr_SdfPayloadTypePolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy const * to_cpp(
    pxr_SdfPayloadTypePolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy * to_cpp(
    pxr_SdfPayloadTypePolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy * >(rhs);
}

inline void to_c(
    pxr_SdfPayloadTypePolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPayloadTypePolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfPayloadTypePolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPayloadTypePolicy_t const * >(rhs);
}

inline void to_c(
    pxr_SdfPayloadTypePolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPayloadTypePolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfPayloadTypePolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPayloadTypePolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfPayloadTypePolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy const & to_cpp_ref(
    pxr_SdfReferenceTypePolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy & to_cpp_ref(
    pxr_SdfReferenceTypePolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy const * to_cpp(
    pxr_SdfReferenceTypePolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy * to_cpp(
    pxr_SdfReferenceTypePolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy * >(rhs);
}

inline void to_c(
    pxr_SdfReferenceTypePolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReferenceTypePolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfReferenceTypePolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReferenceTypePolicy_t const * >(rhs);
}

inline void to_c(
    pxr_SdfReferenceTypePolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReferenceTypePolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfReferenceTypePolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReferenceTypePolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfReferenceTypePolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy const & to_cpp_ref(
    pxr_SdfSubLayerTypePolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy & to_cpp_ref(
    pxr_SdfSubLayerTypePolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy const * to_cpp(
    pxr_SdfSubLayerTypePolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy * to_cpp(
    pxr_SdfSubLayerTypePolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy * >(rhs);
}

inline void to_c(
    pxr_SdfSubLayerTypePolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSubLayerTypePolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfSubLayerTypePolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSubLayerTypePolicy_t const * >(rhs);
}

inline void to_c(
    pxr_SdfSubLayerTypePolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSubLayerTypePolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfSubLayerTypePolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSubLayerTypePolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfSubLayerTypePolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfRelocatesMapProxyValuePolicy const & to_cpp_ref(
    pxr_SdfRelocatesMapProxyValuePolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfRelocatesMapProxyValuePolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfRelocatesMapProxyValuePolicy & to_cpp_ref(
    pxr_SdfRelocatesMapProxyValuePolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfRelocatesMapProxyValuePolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfRelocatesMapProxyValuePolicy const * to_cpp(
    pxr_SdfRelocatesMapProxyValuePolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfRelocatesMapProxyValuePolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfRelocatesMapProxyValuePolicy * to_cpp(
    pxr_SdfRelocatesMapProxyValuePolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfRelocatesMapProxyValuePolicy * >(rhs);
}

inline void to_c(
    pxr_SdfRelocatesMapProxyValuePolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelocatesMapProxyValuePolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfRelocatesMapProxyValuePolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfRelocatesMapProxyValuePolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelocatesMapProxyValuePolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfRelocatesMapProxyValuePolicy_t const * >(rhs);
}

inline void to_c(
    pxr_SdfRelocatesMapProxyValuePolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelocatesMapProxyValuePolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfRelocatesMapProxyValuePolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfRelocatesMapProxyValuePolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelocatesMapProxyValuePolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfRelocatesMapProxyValuePolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfRelocatesMapProxyValuePolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelocatesMapProxyValuePolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfGenericSpecViewPredicate const & to_cpp_ref(
    pxr_SdfGenericSpecViewPredicate_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfGenericSpecViewPredicate const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfGenericSpecViewPredicate & to_cpp_ref(
    pxr_SdfGenericSpecViewPredicate_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfGenericSpecViewPredicate * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfGenericSpecViewPredicate const * to_cpp(
    pxr_SdfGenericSpecViewPredicate_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfGenericSpecViewPredicate const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfGenericSpecViewPredicate * to_cpp(
    pxr_SdfGenericSpecViewPredicate_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfGenericSpecViewPredicate * >(rhs);
}

inline void to_c(
    pxr_SdfGenericSpecViewPredicate_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfGenericSpecViewPredicate const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfGenericSpecViewPredicate_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfGenericSpecViewPredicate_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfGenericSpecViewPredicate const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfGenericSpecViewPredicate_t const * >(rhs);
}

inline void to_c(
    pxr_SdfGenericSpecViewPredicate_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfGenericSpecViewPredicate & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfGenericSpecViewPredicate_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfGenericSpecViewPredicate_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfGenericSpecViewPredicate * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfGenericSpecViewPredicate_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfGenericSpecViewPredicate_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfGenericSpecViewPredicate const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate const & to_cpp_ref(
    pxr_SdfAttributeViewPredicate_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate & to_cpp_ref(
    pxr_SdfAttributeViewPredicate_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate const * to_cpp(
    pxr_SdfAttributeViewPredicate_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate * to_cpp(
    pxr_SdfAttributeViewPredicate_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate * >(rhs);
}

inline void to_c(
    pxr_SdfAttributeViewPredicate_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAttributeViewPredicate_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfAttributeViewPredicate_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAttributeViewPredicate_t const * >(rhs);
}

inline void to_c(
    pxr_SdfAttributeViewPredicate_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAttributeViewPredicate_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfAttributeViewPredicate_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAttributeViewPredicate_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfAttributeViewPredicate_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate const & to_cpp_ref(
    pxr_SdfRelationshipViewPredicate_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate & to_cpp_ref(
    pxr_SdfRelationshipViewPredicate_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate const * to_cpp(
    pxr_SdfRelationshipViewPredicate_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate * to_cpp(
    pxr_SdfRelationshipViewPredicate_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate * >(rhs);
}

inline void to_c(
    pxr_SdfRelationshipViewPredicate_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfRelationshipViewPredicate_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfRelationshipViewPredicate_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfRelationshipViewPredicate_t const * >(rhs);
}

inline void to_c(
    pxr_SdfRelationshipViewPredicate_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfRelationshipViewPredicate_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfRelationshipViewPredicate_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfRelationshipViewPredicate_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfRelationshipViewPredicate_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

