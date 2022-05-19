#pragma once
#include <pxr/usd/pcp/pcp_target_index.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/targetIndex.h>

inline pxrInternal_v0_21__pxrReserved__::PcpTargetIndex const & to_cpp_ref(
    pxr_PcpTargetIndex_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpTargetIndex const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpTargetIndex & to_cpp_ref(
    pxr_PcpTargetIndex_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpTargetIndex * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpTargetIndex const * to_cpp(
    pxr_PcpTargetIndex_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpTargetIndex const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpTargetIndex * to_cpp(
    pxr_PcpTargetIndex_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpTargetIndex * >(rhs);
}

inline void to_c(
    pxr_PcpTargetIndex_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpTargetIndex const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpTargetIndex_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpTargetIndex_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpTargetIndex const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpTargetIndex_t const * >(rhs);
}

inline void to_c(
    pxr_PcpTargetIndex_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpTargetIndex & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpTargetIndex_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpTargetIndex_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpTargetIndex * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpTargetIndex_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpTargetIndex_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpTargetIndex const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpTargetIndex_copy(lhs, reinterpret_cast<pxr_PcpTargetIndex_t const * >(&(rhs)));
}

