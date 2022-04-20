#pragma once
#include <pxr/usd/sdf/sdf_prim_spec.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/primSpec.h>

inline pxrInternal_v0_21__pxrReserved__::SdfPrimSpec const & to_cpp_ref(
    pxr_SdfPrimSpec_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPrimSpec const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPrimSpec & to_cpp_ref(
    pxr_SdfPrimSpec_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPrimSpec * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPrimSpec const * to_cpp(
    pxr_SdfPrimSpec_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPrimSpec const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfPrimSpec * to_cpp(
    pxr_SdfPrimSpec_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPrimSpec * >(rhs);
}

inline void to_c(
    pxr_SdfPrimSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPrimSpec const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPrimSpec_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfPrimSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPrimSpec const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPrimSpec_t const * >(rhs);
}

inline void to_c(
    pxr_SdfPrimSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPrimSpec & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPrimSpec_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfPrimSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPrimSpec * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPrimSpec_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfPrimSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPrimSpec const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfPrimSpec_copy(lhs, reinterpret_cast<pxr_SdfPrimSpec_t const * >(&(rhs)));
}

