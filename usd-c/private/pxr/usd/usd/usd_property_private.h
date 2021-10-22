#pragma once
#include <pxr/usd/usd/usd_property.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/usd/property.h>

inline pxrInternal_v0_20__pxrReserved__::UsdProperty const & to_cpp_ref(
    pxr_UsdProperty_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdProperty const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::UsdProperty & to_cpp_ref(
    pxr_UsdProperty_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdProperty * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::UsdProperty const * to_cpp(
    pxr_UsdProperty_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdProperty const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::UsdProperty * to_cpp(
    pxr_UsdProperty_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdProperty * >(rhs);
}

inline void to_c(
    pxr_UsdProperty_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdProperty const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdProperty_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdProperty_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdProperty const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdProperty_t const * >(rhs);
}

inline void to_c(
    pxr_UsdProperty_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdProperty & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdProperty_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdProperty_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdProperty * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdProperty_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdProperty_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdProperty const & rhs)
{
        pxrInternal_v0_20__pxrReserved____UsdProperty_copy(lhs, reinterpret_cast<pxr_UsdProperty_t const * >(&(rhs)));
}

