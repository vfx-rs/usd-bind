#pragma once
#include <pxr/usd/ndr/ndr_registry.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ndr/registry.h>

inline pxrInternal_v0_21__pxrReserved__::NdrRegistry const & to_cpp_ref(
    pxr_NdrRegistry_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrRegistry const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrRegistry & to_cpp_ref(
    pxr_NdrRegistry_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrRegistry * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrRegistry const * to_cpp(
    pxr_NdrRegistry_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrRegistry const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::NdrRegistry * to_cpp(
    pxr_NdrRegistry_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrRegistry * >(rhs);
}

inline void to_c(
    pxr_NdrRegistry_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrRegistry const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrRegistry_t const * >(&(rhs));
}

inline void to_c(
    pxr_NdrRegistry_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrRegistry const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrRegistry_t const * >(rhs);
}

inline void to_c(
    pxr_NdrRegistry_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrRegistry & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrRegistry_t * >(&(rhs));
}

inline void to_c(
    pxr_NdrRegistry_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrRegistry * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrRegistry_t * >(rhs);
}

