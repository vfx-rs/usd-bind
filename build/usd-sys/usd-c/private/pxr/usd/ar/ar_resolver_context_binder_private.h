#pragma once
#include <pxr/usd/ar/ar_resolver_context_binder.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/resolverContextBinder.h>

inline pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder const & to_cpp_ref(
    pxr_ArResolverContextBinder_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder & to_cpp_ref(
    pxr_ArResolverContextBinder_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder const * to_cpp(
    pxr_ArResolverContextBinder_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder * to_cpp(
    pxr_ArResolverContextBinder_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder * >(rhs);
}

inline void to_c(
    pxr_ArResolverContextBinder_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolverContextBinder_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArResolverContextBinder_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolverContextBinder_t const * >(rhs);
}

inline void to_c(
    pxr_ArResolverContextBinder_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolverContextBinder_t * >(&(rhs));
}

inline void to_c(
    pxr_ArResolverContextBinder_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolverContextBinder * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolverContextBinder_t * >(rhs);
}

