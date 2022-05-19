#pragma once
#include <pxr/usd/ar/ar_resolver.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/resolver.h>

inline pxrInternal_v0_21__pxrReserved__::ArResolver const & to_cpp_ref(
    pxr_ArResolver_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolver const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArResolver & to_cpp_ref(
    pxr_ArResolver_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolver * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArResolver const * to_cpp(
    pxr_ArResolver_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolver const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArResolver * to_cpp(
    pxr_ArResolver_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolver * >(rhs);
}

inline void to_c(
    pxr_ArResolver_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolver const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolver_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArResolver_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolver const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolver_t const * >(rhs);
}

inline void to_c(
    pxr_ArResolver_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolver & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolver_t * >(&(rhs));
}

inline void to_c(
    pxr_ArResolver_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolver * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolver_t * >(rhs);
}

