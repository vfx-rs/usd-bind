#pragma once
#include <pxr/usd/pcp/pcp_prim_index.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/primIndex.h>

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs::PayloadState const & pxr_PcpPrimIndexOutputs_PayloadState_to_cpp_ref(
    pxr_PcpPrimIndexOutputs_PayloadState const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs::PayloadState const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs::PayloadState & pxr_PcpPrimIndexOutputs_PayloadState_to_cpp_ref(
    pxr_PcpPrimIndexOutputs_PayloadState * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs::PayloadState * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs::PayloadState const * pxr_PcpPrimIndexOutputs_PayloadState_to_cpp(
    pxr_PcpPrimIndexOutputs_PayloadState const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs::PayloadState const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs::PayloadState * pxr_PcpPrimIndexOutputs_PayloadState_to_cpp(
    pxr_PcpPrimIndexOutputs_PayloadState * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs::PayloadState * >(rhs);
}

inline void to_c(
    pxr_PcpPrimIndexOutputs_PayloadState const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs::PayloadState const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndexOutputs_PayloadState const * >(&(rhs));
}

inline void to_c(
    pxr_PcpPrimIndexOutputs_PayloadState const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs::PayloadState const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndexOutputs_PayloadState const * >(rhs);
}

inline void to_c(
    pxr_PcpPrimIndexOutputs_PayloadState * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs::PayloadState & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndexOutputs_PayloadState * >(&(rhs));
}

inline void to_c(
    pxr_PcpPrimIndexOutputs_PayloadState * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs::PayloadState * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndexOutputs_PayloadState * >(rhs);
}

inline void to_c_copy(
    pxr_PcpPrimIndexOutputs_PayloadState * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs::PayloadState const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndex const & to_cpp_ref(
    pxr_PcpPrimIndex_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndex const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndex & to_cpp_ref(
    pxr_PcpPrimIndex_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndex * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndex const * to_cpp(
    pxr_PcpPrimIndex_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndex const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndex * to_cpp(
    pxr_PcpPrimIndex_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndex * >(rhs);
}

inline void to_c(
    pxr_PcpPrimIndex_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndex const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndex_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpPrimIndex_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndex const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndex_t const * >(rhs);
}

inline void to_c(
    pxr_PcpPrimIndex_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndex & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndex_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpPrimIndex_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndex * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndex_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpPrimIndex_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndex const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpPrimIndex_copy(lhs, reinterpret_cast<pxr_PcpPrimIndex_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs const & to_cpp_ref(
    pxr_PcpPrimIndexInputs_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs & to_cpp_ref(
    pxr_PcpPrimIndexInputs_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs const * to_cpp(
    pxr_PcpPrimIndexInputs_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs * to_cpp(
    pxr_PcpPrimIndexInputs_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs * >(rhs);
}

inline void to_c(
    pxr_PcpPrimIndexInputs_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndexInputs_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpPrimIndexInputs_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndexInputs_t const * >(rhs);
}

inline void to_c(
    pxr_PcpPrimIndexInputs_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndexInputs_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpPrimIndexInputs_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndexInputs_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpPrimIndexInputs_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexInputs const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpPrimIndexInputs_copy(lhs, reinterpret_cast<pxr_PcpPrimIndexInputs_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs const & to_cpp_ref(
    pxr_PcpPrimIndexOutputs_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs & to_cpp_ref(
    pxr_PcpPrimIndexOutputs_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs const * to_cpp(
    pxr_PcpPrimIndexOutputs_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs * to_cpp(
    pxr_PcpPrimIndexOutputs_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs * >(rhs);
}

inline void to_c(
    pxr_PcpPrimIndexOutputs_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndexOutputs_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpPrimIndexOutputs_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndexOutputs_t const * >(rhs);
}

inline void to_c(
    pxr_PcpPrimIndexOutputs_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndexOutputs_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpPrimIndexOutputs_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIndexOutputs_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpPrimIndexOutputs_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIndexOutputs const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpPrimIndexOutputs_copy(lhs, reinterpret_cast<pxr_PcpPrimIndexOutputs_t const * >(&(rhs)));
}

