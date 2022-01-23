#pragma once
#include <pxr/usd/pcp/pcp_cache.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/cache.h>

inline pxrInternal_v0_21__pxrReserved__::PcpCache const & to_cpp_ref(
    pxr_PcpCache_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpCache const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpCache & to_cpp_ref(
    pxr_PcpCache_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpCache * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpCache const * to_cpp(
    pxr_PcpCache_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpCache const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpCache * to_cpp(
    pxr_PcpCache_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpCache * >(rhs);
}

inline void to_c(
    pxr_PcpCache_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpCache const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpCache_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpCache_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpCache const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpCache_t const * >(rhs);
}

inline void to_c(
    pxr_PcpCache_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpCache & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpCache_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpCache_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpCache * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpCache_t * >(rhs);
}

