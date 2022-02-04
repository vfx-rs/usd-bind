#pragma once
#include <pxr/usd/pcp/pcp_dependency.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/dependency.h>

inline pxrInternal_v0_21__pxrReserved__::PcpDependencyType const & pxr_PcpDependencyType_to_cpp_ref(
    pxr_PcpDependencyType const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDependencyType const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpDependencyType & pxr_PcpDependencyType_to_cpp_ref(
    pxr_PcpDependencyType * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDependencyType * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpDependencyType const * pxr_PcpDependencyType_to_cpp(
    pxr_PcpDependencyType const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDependencyType const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpDependencyType * pxr_PcpDependencyType_to_cpp(
    pxr_PcpDependencyType * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDependencyType * >(rhs);
}

inline void to_c(
    pxr_PcpDependencyType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDependencyType const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDependencyType const * >(&(rhs));
}

inline void to_c(
    pxr_PcpDependencyType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDependencyType const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDependencyType const * >(rhs);
}

inline void to_c(
    pxr_PcpDependencyType * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDependencyType & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDependencyType * >(&(rhs));
}

inline void to_c(
    pxr_PcpDependencyType * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDependencyType * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDependencyType * >(rhs);
}

inline void to_c_copy(
    pxr_PcpDependencyType * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDependencyType const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpDependency const & to_cpp_ref(
    pxr_PcpDependency_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDependency const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpDependency & to_cpp_ref(
    pxr_PcpDependency_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDependency * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpDependency const * to_cpp(
    pxr_PcpDependency_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDependency const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpDependency * to_cpp(
    pxr_PcpDependency_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDependency * >(rhs);
}

inline void to_c(
    pxr_PcpDependency_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDependency const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDependency_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpDependency_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDependency const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDependency_t const * >(rhs);
}

inline void to_c(
    pxr_PcpDependency_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDependency & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDependency_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpDependency_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDependency * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDependency_t * >(rhs);
}

inline void to_c_move(
    pxr_PcpDependency_t * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDependency * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::PcpDependency(std::move(*(rhs)));
}

