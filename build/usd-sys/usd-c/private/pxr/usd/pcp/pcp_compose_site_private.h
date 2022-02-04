#pragma once
#include <pxr/usd/pcp/pcp_compose_site.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/composeSite.h>

inline pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo const & to_cpp_ref(
    pxr_PcpSourceArcInfo_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo & to_cpp_ref(
    pxr_PcpSourceArcInfo_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo const * to_cpp(
    pxr_PcpSourceArcInfo_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo * to_cpp(
    pxr_PcpSourceArcInfo_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo * >(rhs);
}

inline void to_c(
    pxr_PcpSourceArcInfo_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSourceArcInfo_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpSourceArcInfo_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSourceArcInfo_t const * >(rhs);
}

inline void to_c(
    pxr_PcpSourceArcInfo_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSourceArcInfo_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpSourceArcInfo_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSourceArcInfo_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpSourceArcInfo_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSourceArcInfo const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_copy(lhs, reinterpret_cast<pxr_PcpSourceArcInfo_t const * >(&(rhs)));
}

