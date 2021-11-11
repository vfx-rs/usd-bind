#pragma once
#include <pxr/base/gf/gf_ilmbase_half.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/gf/half.h>

inline pxrInternal_v0_20__pxrReserved__::pxr_half::half const & to_cpp_ref(
    pxr_pxr_half_half_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::pxr_half::half const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::pxr_half::half & to_cpp_ref(
    pxr_pxr_half_half_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::pxr_half::half * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::pxr_half::half const * to_cpp(
    pxr_pxr_half_half_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::pxr_half::half const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::pxr_half::half * to_cpp(
    pxr_pxr_half_half_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::pxr_half::half * >(rhs);
}

inline void to_c(
    pxr_pxr_half_half_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::pxr_half::half const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_pxr_half_half_t const * >(&(rhs));
}

inline void to_c(
    pxr_pxr_half_half_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::pxr_half::half const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_pxr_half_half_t const * >(rhs);
}

inline void to_c(
    pxr_pxr_half_half_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::pxr_half::half & rhs)
{
        *(lhs) = reinterpret_cast<pxr_pxr_half_half_t * >(&(rhs));
}

inline void to_c(
    pxr_pxr_half_half_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::pxr_half::half * rhs)
{
        *(lhs) = reinterpret_cast<pxr_pxr_half_half_t * >(rhs);
}

inline void to_c_copy(
    pxr_pxr_half_half_t * lhs
    , pxrInternal_v0_20__pxrReserved__::pxr_half::half const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

