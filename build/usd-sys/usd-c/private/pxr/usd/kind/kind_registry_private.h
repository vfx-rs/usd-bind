#pragma once
#include <pxr/usd/kind/kind_registry.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/kind/registry.h>

inline pxrInternal_v0_21__pxrReserved__::KindRegistry const & to_cpp_ref(
    pxr_KindRegistry_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::KindRegistry const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::KindRegistry & to_cpp_ref(
    pxr_KindRegistry_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::KindRegistry * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::KindRegistry const * to_cpp(
    pxr_KindRegistry_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::KindRegistry const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::KindRegistry * to_cpp(
    pxr_KindRegistry_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::KindRegistry * >(rhs);
}

inline void to_c(
    pxr_KindRegistry_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::KindRegistry const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_KindRegistry_t const * >(&(rhs));
}

inline void to_c(
    pxr_KindRegistry_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::KindRegistry const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_KindRegistry_t const * >(rhs);
}

inline void to_c(
    pxr_KindRegistry_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::KindRegistry & rhs)
{
        *(lhs) = reinterpret_cast<pxr_KindRegistry_t * >(&(rhs));
}

inline void to_c(
    pxr_KindRegistry_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::KindRegistry * rhs)
{
        *(lhs) = reinterpret_cast<pxr_KindRegistry_t * >(rhs);
}

