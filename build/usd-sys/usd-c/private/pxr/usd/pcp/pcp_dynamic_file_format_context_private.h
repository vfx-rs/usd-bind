#pragma once
#include <pxr/usd/pcp/pcp_dynamic_file_format_context.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/dynamicFileFormatContext.h>

inline pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatContext const & to_cpp_ref(
    pxr_PcpDynamicFileFormatContext_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatContext const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatContext & to_cpp_ref(
    pxr_PcpDynamicFileFormatContext_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatContext * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatContext const * to_cpp(
    pxr_PcpDynamicFileFormatContext_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatContext const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatContext * to_cpp(
    pxr_PcpDynamicFileFormatContext_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatContext * >(rhs);
}

inline void to_c(
    pxr_PcpDynamicFileFormatContext_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatContext const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDynamicFileFormatContext_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpDynamicFileFormatContext_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatContext const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDynamicFileFormatContext_t const * >(rhs);
}

inline void to_c(
    pxr_PcpDynamicFileFormatContext_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatContext & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDynamicFileFormatContext_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpDynamicFileFormatContext_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatContext * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDynamicFileFormatContext_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpDynamicFileFormatContext_t * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatContext const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

