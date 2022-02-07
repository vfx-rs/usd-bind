#pragma once
#include <pxr/usd/pcp/pcp_dynamic_file_format_interface.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/dynamicFileFormatInterface.h>

inline pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatInterface const & to_cpp_ref(
    pxr_PcpDynamicFileFormatInterface_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatInterface const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatInterface & to_cpp_ref(
    pxr_PcpDynamicFileFormatInterface_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatInterface * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatInterface const * to_cpp(
    pxr_PcpDynamicFileFormatInterface_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatInterface const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatInterface * to_cpp(
    pxr_PcpDynamicFileFormatInterface_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatInterface * >(rhs);
}

inline void to_c(
    pxr_PcpDynamicFileFormatInterface_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatInterface const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDynamicFileFormatInterface_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpDynamicFileFormatInterface_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatInterface const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDynamicFileFormatInterface_t const * >(rhs);
}

inline void to_c(
    pxr_PcpDynamicFileFormatInterface_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatInterface & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDynamicFileFormatInterface_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpDynamicFileFormatInterface_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatInterface * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDynamicFileFormatInterface_t * >(rhs);
}

