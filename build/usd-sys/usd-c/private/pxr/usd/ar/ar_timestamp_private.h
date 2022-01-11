#pragma once
#include <pxr/usd/ar/ar_timestamp.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/timestamp.h>

inline pxrInternal_v0_21__pxrReserved__::ArTimestamp const & to_cpp_ref(
    pxr_ArTimestamp_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArTimestamp const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArTimestamp & to_cpp_ref(
    pxr_ArTimestamp_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArTimestamp * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArTimestamp const * to_cpp(
    pxr_ArTimestamp_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArTimestamp const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArTimestamp * to_cpp(
    pxr_ArTimestamp_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArTimestamp * >(rhs);
}

inline void to_c(
    pxr_ArTimestamp_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArTimestamp const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArTimestamp_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArTimestamp_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArTimestamp const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArTimestamp_t const * >(rhs);
}

inline void to_c(
    pxr_ArTimestamp_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArTimestamp & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArTimestamp_t * >(&(rhs));
}

inline void to_c(
    pxr_ArTimestamp_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArTimestamp * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArTimestamp_t * >(rhs);
}

inline void to_c_copy(
    pxr_ArTimestamp_t * lhs
    , pxrInternal_v0_21__pxrReserved__::ArTimestamp const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

