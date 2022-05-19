#pragma once
#include <pxr/usd/pcp/pcp_map_expression.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/mapExpression.h>

inline pxrInternal_v0_21__pxrReserved__::PcpMapExpression const & to_cpp_ref(
    pxr_PcpMapExpression_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpMapExpression const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpMapExpression & to_cpp_ref(
    pxr_PcpMapExpression_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpMapExpression * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpMapExpression const * to_cpp(
    pxr_PcpMapExpression_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpMapExpression const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpMapExpression * to_cpp(
    pxr_PcpMapExpression_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpMapExpression * >(rhs);
}

inline void to_c(
    pxr_PcpMapExpression_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapExpression const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpMapExpression_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpMapExpression_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapExpression const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpMapExpression_t const * >(rhs);
}

inline void to_c(
    pxr_PcpMapExpression_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapExpression & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpMapExpression_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpMapExpression_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapExpression * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpMapExpression_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpMapExpression_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapExpression const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpMapExpression_copy(lhs, reinterpret_cast<pxr_PcpMapExpression_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Variable const & to_cpp_ref(
    pxr_PcpMapExpression_Variable_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Variable const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Variable & to_cpp_ref(
    pxr_PcpMapExpression_Variable_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Variable * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Variable const * to_cpp(
    pxr_PcpMapExpression_Variable_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Variable const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Variable * to_cpp(
    pxr_PcpMapExpression_Variable_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Variable * >(rhs);
}

inline void to_c(
    pxr_PcpMapExpression_Variable_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Variable const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpMapExpression_Variable_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpMapExpression_Variable_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Variable const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpMapExpression_Variable_t const * >(rhs);
}

inline void to_c(
    pxr_PcpMapExpression_Variable_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Variable & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpMapExpression_Variable_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpMapExpression_Variable_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Variable * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpMapExpression_Variable_t * >(rhs);
}

