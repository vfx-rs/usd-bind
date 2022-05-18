#pragma once
#include <pxr/usd/sdf/sdf_spec.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/spec.h>

inline pxrInternal_v0_21__pxrReserved__::SdfSpec const & to_cpp_ref(
    pxr_SdfSpec_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpec const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSpec & to_cpp_ref(
    pxr_SdfSpec_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpec * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSpec const * to_cpp(
    pxr_SdfSpec_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpec const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfSpec * to_cpp(
    pxr_SdfSpec_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpec * >(rhs);
}

inline void to_c(
    pxr_SdfSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpec const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpec_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpec const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpec_t const * >(rhs);
}

inline void to_c(
    pxr_SdfSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpec & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpec_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpec * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpec_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpec const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfSpec_copy(lhs, reinterpret_cast<pxr_SdfSpec_t const * >(&(rhs)));
}

