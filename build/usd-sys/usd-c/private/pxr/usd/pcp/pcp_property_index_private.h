#pragma once
#include <pxr/usd/pcp/pcp_property_index.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/propertyIndex.h>

inline pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex const & to_cpp_ref(
    pxr_PcpPropertyIndex_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex & to_cpp_ref(
    pxr_PcpPropertyIndex_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex const * to_cpp(
    pxr_PcpPropertyIndex_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex * to_cpp(
    pxr_PcpPropertyIndex_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex * >(rhs);
}

inline void to_c(
    pxr_PcpPropertyIndex_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPropertyIndex_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpPropertyIndex_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPropertyIndex_t const * >(rhs);
}

inline void to_c(
    pxr_PcpPropertyIndex_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPropertyIndex_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpPropertyIndex_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPropertyIndex_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpPropertyIndex_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyIndex const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_copy(lhs, reinterpret_cast<pxr_PcpPropertyIndex_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo const & to_cpp_ref(
    pxr_Pcp_PropertyInfo_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo & to_cpp_ref(
    pxr_Pcp_PropertyInfo_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo const * to_cpp(
    pxr_Pcp_PropertyInfo_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo * to_cpp(
    pxr_Pcp_PropertyInfo_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo * >(rhs);
}

inline void to_c(
    pxr_Pcp_PropertyInfo_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Pcp_PropertyInfo_t const * >(&(rhs));
}

inline void to_c(
    pxr_Pcp_PropertyInfo_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Pcp_PropertyInfo_t const * >(rhs);
}

inline void to_c(
    pxr_Pcp_PropertyInfo_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Pcp_PropertyInfo_t * >(&(rhs));
}

inline void to_c(
    pxr_Pcp_PropertyInfo_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Pcp_PropertyInfo_t * >(rhs);
}

inline void to_c_move(
    pxr_Pcp_PropertyInfo_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::Pcp_PropertyInfo(std::move(*(rhs)));
}

