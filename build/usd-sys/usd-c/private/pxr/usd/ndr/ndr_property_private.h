#pragma once
#include <pxr/usd/ndr/ndr_property.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ndr/property.h>

inline pxrInternal_v0_21__pxrReserved__::NdrProperty const & to_cpp_ref(
    pxr_NdrProperty_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrProperty const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrProperty & to_cpp_ref(
    pxr_NdrProperty_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrProperty * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrProperty const * to_cpp(
    pxr_NdrProperty_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrProperty const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::NdrProperty * to_cpp(
    pxr_NdrProperty_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrProperty * >(rhs);
}

inline void to_c(
    pxr_NdrProperty_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrProperty const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrProperty_t const * >(&(rhs));
}

inline void to_c(
    pxr_NdrProperty_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrProperty const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrProperty_t const * >(rhs);
}

inline void to_c(
    pxr_NdrProperty_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrProperty & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrProperty_t * >(&(rhs));
}

inline void to_c(
    pxr_NdrProperty_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrProperty * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrProperty_t * >(rhs);
}

