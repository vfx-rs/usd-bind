#pragma once
#include <pxr/usd/sdf/sdf_allowed.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/allowed.h>

inline pxrInternal_v0_21__pxrReserved__::SdfAllowed const & to_cpp_ref(
    pxr_SdfAllowed_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAllowed const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAllowed & to_cpp_ref(
    pxr_SdfAllowed_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAllowed * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAllowed const * to_cpp(
    pxr_SdfAllowed_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAllowed const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfAllowed * to_cpp(
    pxr_SdfAllowed_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAllowed * >(rhs);
}

inline void to_c(
    pxr_SdfAllowed_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAllowed const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAllowed_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfAllowed_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAllowed const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAllowed_t const * >(rhs);
}

inline void to_c(
    pxr_SdfAllowed_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAllowed & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAllowed_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfAllowed_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAllowed * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAllowed_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfAllowed_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAllowed const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfAllowed_copy(lhs, reinterpret_cast<pxr_SdfAllowed_t const * >(&(rhs)));
}

