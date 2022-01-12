#pragma once
#include <pxr/usd/ndr/ndr_node_discovery_result.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ndr/nodeDiscoveryResult.h>

inline pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult const & to_cpp_ref(
    pxr_NdrNodeDiscoveryResult_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult & to_cpp_ref(
    pxr_NdrNodeDiscoveryResult_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult const * to_cpp(
    pxr_NdrNodeDiscoveryResult_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult * to_cpp(
    pxr_NdrNodeDiscoveryResult_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult * >(rhs);
}

inline void to_c(
    pxr_NdrNodeDiscoveryResult_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrNodeDiscoveryResult_t const * >(&(rhs));
}

inline void to_c(
    pxr_NdrNodeDiscoveryResult_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrNodeDiscoveryResult_t const * >(rhs);
}

inline void to_c(
    pxr_NdrNodeDiscoveryResult_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrNodeDiscoveryResult_t * >(&(rhs));
}

inline void to_c(
    pxr_NdrNodeDiscoveryResult_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrNodeDiscoveryResult_t * >(rhs);
}

inline void to_c_move(
    pxr_NdrNodeDiscoveryResult_t * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::NdrNodeDiscoveryResult(std::move(*(rhs)));
}

