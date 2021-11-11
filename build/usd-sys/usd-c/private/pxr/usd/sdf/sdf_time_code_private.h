#pragma once
#include <pxr/usd/sdf/sdf_time_code.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/timeCode.h>

inline pxrInternal_v0_21__pxrReserved__::SdfTimeCode const & to_cpp_ref(
    pxr_SdfTimeCode_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfTimeCode const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfTimeCode & to_cpp_ref(
    pxr_SdfTimeCode_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfTimeCode * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfTimeCode const * to_cpp(
    pxr_SdfTimeCode_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfTimeCode const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfTimeCode * to_cpp(
    pxr_SdfTimeCode_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfTimeCode * >(rhs);
}

inline void to_c(
    pxr_SdfTimeCode_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfTimeCode const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfTimeCode_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfTimeCode_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfTimeCode const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfTimeCode_t const * >(rhs);
}

inline void to_c(
    pxr_SdfTimeCode_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfTimeCode & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfTimeCode_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfTimeCode_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfTimeCode * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfTimeCode_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfTimeCode_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfTimeCode const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfTimeCode_copy(lhs, reinterpret_cast<pxr_SdfTimeCode_t const * >(&(rhs)));
}

