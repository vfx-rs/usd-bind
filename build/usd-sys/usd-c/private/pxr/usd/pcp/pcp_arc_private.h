#pragma once
#include <pxr/usd/pcp/pcp_arc.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/arc.h>

inline pxrInternal_v0_21__pxrReserved__::PcpArc const & to_cpp_ref(
    pxr_PcpArc_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpArc const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpArc & to_cpp_ref(
    pxr_PcpArc_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpArc * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpArc const * to_cpp(
    pxr_PcpArc_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpArc const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpArc * to_cpp(
    pxr_PcpArc_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpArc * >(rhs);
}

inline void to_c(
    pxr_PcpArc_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpArc const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpArc_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpArc_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpArc const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpArc_t const * >(rhs);
}

inline void to_c(
    pxr_PcpArc_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpArc & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpArc_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpArc_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpArc * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpArc_t * >(rhs);
}

inline void to_c_move(
    pxr_PcpArc_t * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpArc * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::PcpArc(std::move(*(rhs)));
}

