#pragma once
#include <pxr/usd/pcp/pcp_layer_stack.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/layerStack.h>

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStack const & to_cpp_ref(
    pxr_PcpLayerStack_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStack const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStack & to_cpp_ref(
    pxr_PcpLayerStack_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStack * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStack const * to_cpp(
    pxr_PcpLayerStack_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStack const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStack * to_cpp(
    pxr_PcpLayerStack_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStack * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStack_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStack const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStack_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStack_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStack const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStack_t const * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStack_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStack & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStack_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStack_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStack * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStack_t * >(rhs);
}

