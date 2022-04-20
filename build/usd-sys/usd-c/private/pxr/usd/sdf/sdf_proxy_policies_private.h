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

