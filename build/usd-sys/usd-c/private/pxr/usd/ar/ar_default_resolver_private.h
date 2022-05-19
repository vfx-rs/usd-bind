#pragma once
#include <pxr/usd/ar/ar_default_resolver.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/defaultResolver.h>

inline pxrInternal_v0_21__pxrReserved__::ArDefaultResolver const & to_cpp_ref(
    pxr_ArDefaultResolver_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArDefaultResolver const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArDefaultResolver & to_cpp_ref(
    pxr_ArDefaultResolver_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArDefaultResolver * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArDefaultResolver const * to_cpp(
    pxr_ArDefaultResolver_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArDefaultResolver const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArDefaultResolver * to_cpp(
    pxr_ArDefaultResolver_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArDefaultResolver * >(rhs);
}

inline void to_c(
    pxr_ArDefaultResolver_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArDefaultResolver const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArDefaultResolver_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArDefaultResolver_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArDefaultResolver const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArDefaultResolver_t const * >(rhs);
}

inline void to_c(
    pxr_ArDefaultResolver_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArDefaultResolver & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArDefaultResolver_t * >(&(rhs));
}

inline void to_c(
    pxr_ArDefaultResolver_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArDefaultResolver * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArDefaultResolver_t * >(rhs);
}

