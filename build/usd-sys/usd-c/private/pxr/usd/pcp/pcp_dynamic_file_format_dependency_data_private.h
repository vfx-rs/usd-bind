#pragma once
#include <pxr/usd/pcp/pcp_dynamic_file_format_dependency_data.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/vt/value.h>
#include <pxr/usd/pcp/dynamicFileFormatDependencyData.h>

inline pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData const & to_cpp_ref(
    pxr_PcpDynamicFileFormatDependencyData_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData & to_cpp_ref(
    pxr_PcpDynamicFileFormatDependencyData_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData const * to_cpp(
    pxr_PcpDynamicFileFormatDependencyData_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData * to_cpp(
    pxr_PcpDynamicFileFormatDependencyData_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData * >(rhs);
}

inline void to_c(
    pxr_PcpDynamicFileFormatDependencyData_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDynamicFileFormatDependencyData_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpDynamicFileFormatDependencyData_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDynamicFileFormatDependencyData_t const * >(rhs);
}

inline void to_c(
    pxr_PcpDynamicFileFormatDependencyData_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDynamicFileFormatDependencyData_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpDynamicFileFormatDependencyData_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpDynamicFileFormatDependencyData_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpDynamicFileFormatDependencyData_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpDynamicFileFormatDependencyData const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpDynamicFileFormatDependencyData_copy(lhs, reinterpret_cast<pxr_PcpDynamicFileFormatDependencyData_t const * >(&(rhs)));
}

