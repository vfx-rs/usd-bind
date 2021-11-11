#pragma once
#include <pxr/usd/usd/usd_prim.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/usd/prim.h>

inline pxrInternal_v0_21__pxrReserved__::UsdPrim const & to_cpp_ref(
    pxr_UsdPrim_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrim const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrim & to_cpp_ref(
    pxr_UsdPrim_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrim * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrim const * to_cpp(
    pxr_UsdPrim_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrim const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrim * to_cpp(
    pxr_UsdPrim_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrim * >(rhs);
}

inline void to_c(
    pxr_UsdPrim_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrim const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrim_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdPrim_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrim const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrim_t const * >(rhs);
}

inline void to_c(
    pxr_UsdPrim_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrim & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrim_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdPrim_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrim * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrim_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdPrim_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrim const & rhs)
{
        pxrInternal_v0_21__pxrReserved____UsdPrim_copy(lhs, reinterpret_cast<pxr_UsdPrim_t const * >(&(rhs)));
}

