#pragma once
#include <pxr/usd/ar/ar_resolver_scoped_cache.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/resolverScopedCache.h>

inline pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache const & to_cpp_ref(
    pxr_ArResolverScopedCache_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache & to_cpp_ref(
    pxr_ArResolverScopedCache_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache const * to_cpp(
    pxr_ArResolverScopedCache_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache * to_cpp(
    pxr_ArResolverScopedCache_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache * >(rhs);
}

inline void to_c(
    pxr_ArResolverScopedCache_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolverScopedCache_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArResolverScopedCache_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolverScopedCache_t const * >(rhs);
}

inline void to_c(
    pxr_ArResolverScopedCache_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolverScopedCache_t * >(&(rhs));
}

inline void to_c(
    pxr_ArResolverScopedCache_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolverScopedCache * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolverScopedCache_t * >(rhs);
}

