#pragma once
#include <pxr/usd/ar/ar_resolver_context.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/resolverContext.h>

inline pxrInternal_v0_21__pxrReserved__::ArResolverContext const & to_cpp_ref(
    pxr_ArResolverContext_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolverContext const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArResolverContext & to_cpp_ref(
    pxr_ArResolverContext_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolverContext * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArResolverContext const * to_cpp(
    pxr_ArResolverContext_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolverContext const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArResolverContext * to_cpp(
    pxr_ArResolverContext_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolverContext * >(rhs);
}

inline void to_c(
    pxr_ArResolverContext_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolverContext const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolverContext_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArResolverContext_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolverContext const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolverContext_t const * >(rhs);
}

inline void to_c(
    pxr_ArResolverContext_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolverContext & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolverContext_t * >(&(rhs));
}

inline void to_c(
    pxr_ArResolverContext_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolverContext * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolverContext_t * >(rhs);
}

inline void to_c_copy(
    pxr_ArResolverContext_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolverContext const & rhs)
{
        pxrInternal_v0_21__pxrReserved____ArResolverContext_copy(lhs, reinterpret_cast<pxr_ArResolverContext_t const * >(&(rhs)));
}

