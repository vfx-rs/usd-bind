#pragma once
#include <pxr/usd/pcp/pcp_instance_key.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/instanceKey.h>

inline pxrInternal_v0_21__pxrReserved__::PcpInstanceKey const & to_cpp_ref(
    pxr_PcpInstanceKey_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpInstanceKey const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpInstanceKey & to_cpp_ref(
    pxr_PcpInstanceKey_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpInstanceKey * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpInstanceKey const * to_cpp(
    pxr_PcpInstanceKey_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpInstanceKey const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpInstanceKey * to_cpp(
    pxr_PcpInstanceKey_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpInstanceKey * >(rhs);
}

inline void to_c(
    pxr_PcpInstanceKey_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpInstanceKey const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpInstanceKey_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpInstanceKey_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpInstanceKey const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpInstanceKey_t const * >(rhs);
}

inline void to_c(
    pxr_PcpInstanceKey_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpInstanceKey & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpInstanceKey_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpInstanceKey_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpInstanceKey * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpInstanceKey_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpInstanceKey_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpInstanceKey const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpInstanceKey_copy(lhs, reinterpret_cast<pxr_PcpInstanceKey_t const * >(&(rhs)));
}

