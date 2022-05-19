#pragma once
#include <pxr/usd/pcp/pcp_map_function.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/mapFunction.h>

inline pxrInternal_v0_21__pxrReserved__::PcpMapFunction const & to_cpp_ref(
    pxr_PcpMapFunction_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpMapFunction const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpMapFunction & to_cpp_ref(
    pxr_PcpMapFunction_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpMapFunction * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpMapFunction const * to_cpp(
    pxr_PcpMapFunction_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpMapFunction const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpMapFunction * to_cpp(
    pxr_PcpMapFunction_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpMapFunction * >(rhs);
}

inline void to_c(
    pxr_PcpMapFunction_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapFunction const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpMapFunction_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpMapFunction_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapFunction const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpMapFunction_t const * >(rhs);
}

inline void to_c(
    pxr_PcpMapFunction_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapFunction & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpMapFunction_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpMapFunction_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapFunction * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpMapFunction_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpMapFunction_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapFunction const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpMapFunction_copy(lhs, reinterpret_cast<pxr_PcpMapFunction_t const * >(&(rhs)));
}

