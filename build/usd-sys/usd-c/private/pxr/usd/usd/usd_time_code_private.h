#pragma once
#include <pxr/usd/usd/usd_time_code.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/usd/timeCode.h>

inline pxrInternal_v0_21__pxrReserved__::UsdTimeCode const & to_cpp_ref(
    pxr_UsdTimeCode_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdTimeCode const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdTimeCode & to_cpp_ref(
    pxr_UsdTimeCode_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdTimeCode * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdTimeCode const * to_cpp(
    pxr_UsdTimeCode_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdTimeCode const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::UsdTimeCode * to_cpp(
    pxr_UsdTimeCode_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdTimeCode * >(rhs);
}

inline void to_c(
    pxr_UsdTimeCode_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdTimeCode const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdTimeCode_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdTimeCode_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdTimeCode const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdTimeCode_t const * >(rhs);
}

inline void to_c(
    pxr_UsdTimeCode_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdTimeCode & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdTimeCode_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdTimeCode_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdTimeCode * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdTimeCode_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdTimeCode_t * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdTimeCode const & rhs)
{
        pxrInternal_v0_21__pxrReserved____UsdTimeCode_copy(lhs, reinterpret_cast<pxr_UsdTimeCode_t const * >(&(rhs)));
}

