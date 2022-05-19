#pragma once
#include <pxr/usd/pcp/pcp_layer_prefetch_request.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/layerPrefetchRequest.h>

inline pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest const & to_cpp_ref(
    pxr_PcpLayerPrefetchRequest_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest & to_cpp_ref(
    pxr_PcpLayerPrefetchRequest_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest const * to_cpp(
    pxr_PcpLayerPrefetchRequest_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest * to_cpp(
    pxr_PcpLayerPrefetchRequest_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest * >(rhs);
}

inline void to_c(
    pxr_PcpLayerPrefetchRequest_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerPrefetchRequest_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerPrefetchRequest_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerPrefetchRequest_t const * >(rhs);
}

inline void to_c(
    pxr_PcpLayerPrefetchRequest_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerPrefetchRequest_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerPrefetchRequest_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerPrefetchRequest_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpLayerPrefetchRequest_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerPrefetchRequest const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpLayerPrefetchRequest_copy(lhs, reinterpret_cast<pxr_PcpLayerPrefetchRequest_t const * >(&(rhs)));
}

