#pragma once
#include <pxr/usd/ar/ar_default_resolver_context.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/defaultResolverContext.h>

inline pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext const & to_cpp_ref(
    pxr_ArDefaultResolverContext_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext & to_cpp_ref(
    pxr_ArDefaultResolverContext_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext const * to_cpp(
    pxr_ArDefaultResolverContext_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext * to_cpp(
    pxr_ArDefaultResolverContext_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext * >(rhs);
}

inline void to_c(
    pxr_ArDefaultResolverContext_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArDefaultResolverContext_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArDefaultResolverContext_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArDefaultResolverContext_t const * >(rhs);
}

inline void to_c(
    pxr_ArDefaultResolverContext_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArDefaultResolverContext_t * >(&(rhs));
}

inline void to_c(
    pxr_ArDefaultResolverContext_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArDefaultResolverContext_t * >(rhs);
}

inline void to_c_move(
    pxr_ArDefaultResolverContext_t * lhs
    , pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::ArDefaultResolverContext(std::move(*(rhs)));
}

