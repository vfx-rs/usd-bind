#pragma once
#include <pxr/usd/pcp/pcp_types.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/types.h>

inline pxrInternal_v0_21__pxrReserved__::PcpArcType const & pxr_PcpArcType_to_cpp_ref(
    pxr_PcpArcType const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpArcType const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpArcType & pxr_PcpArcType_to_cpp_ref(
    pxr_PcpArcType * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpArcType * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpArcType const * pxr_PcpArcType_to_cpp(
    pxr_PcpArcType const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpArcType const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpArcType * pxr_PcpArcType_to_cpp(
    pxr_PcpArcType * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpArcType * >(rhs);
}

inline void to_c(
    pxr_PcpArcType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpArcType const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpArcType const * >(&(rhs));
}

inline void to_c(
    pxr_PcpArcType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpArcType const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpArcType const * >(rhs);
}

inline void to_c(
    pxr_PcpArcType * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpArcType & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpArcType * >(&(rhs));
}

inline void to_c(
    pxr_PcpArcType * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpArcType * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpArcType * >(rhs);
}

inline void to_c_copy(
    pxr_PcpArcType * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpArcType const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpRangeType const & pxr_PcpRangeType_to_cpp_ref(
    pxr_PcpRangeType const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpRangeType const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpRangeType & pxr_PcpRangeType_to_cpp_ref(
    pxr_PcpRangeType * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpRangeType * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpRangeType const * pxr_PcpRangeType_to_cpp(
    pxr_PcpRangeType const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpRangeType const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpRangeType * pxr_PcpRangeType_to_cpp(
    pxr_PcpRangeType * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpRangeType * >(rhs);
}

inline void to_c(
    pxr_PcpRangeType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpRangeType const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpRangeType const * >(&(rhs));
}

inline void to_c(
    pxr_PcpRangeType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpRangeType const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpRangeType const * >(rhs);
}

inline void to_c(
    pxr_PcpRangeType * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpRangeType & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpRangeType * >(&(rhs));
}

inline void to_c(
    pxr_PcpRangeType * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpRangeType * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpRangeType * >(rhs);
}

inline void to_c_copy(
    pxr_PcpRangeType * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpRangeType const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment const & to_cpp_ref(
    pxr_PcpSiteTrackerSegment_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment & to_cpp_ref(
    pxr_PcpSiteTrackerSegment_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment const * to_cpp(
    pxr_PcpSiteTrackerSegment_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment * to_cpp(
    pxr_PcpSiteTrackerSegment_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment * >(rhs);
}

inline void to_c(
    pxr_PcpSiteTrackerSegment_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSiteTrackerSegment_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpSiteTrackerSegment_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSiteTrackerSegment_t const * >(rhs);
}

inline void to_c(
    pxr_PcpSiteTrackerSegment_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSiteTrackerSegment_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpSiteTrackerSegment_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSiteTrackerSegment_t * >(rhs);
}

inline void to_c_move(
    pxr_PcpSiteTrackerSegment_t * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::PcpSiteTrackerSegment(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Pcp_SdSiteRef const & to_cpp_ref(
    pxr_Pcp_SdSiteRef_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Pcp_SdSiteRef const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Pcp_SdSiteRef & to_cpp_ref(
    pxr_Pcp_SdSiteRef_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Pcp_SdSiteRef * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Pcp_SdSiteRef const * to_cpp(
    pxr_Pcp_SdSiteRef_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Pcp_SdSiteRef const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Pcp_SdSiteRef * to_cpp(
    pxr_Pcp_SdSiteRef_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Pcp_SdSiteRef * >(rhs);
}

inline void to_c(
    pxr_Pcp_SdSiteRef_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_SdSiteRef const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Pcp_SdSiteRef_t const * >(&(rhs));
}

inline void to_c(
    pxr_Pcp_SdSiteRef_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_SdSiteRef const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Pcp_SdSiteRef_t const * >(rhs);
}

inline void to_c(
    pxr_Pcp_SdSiteRef_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_SdSiteRef & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Pcp_SdSiteRef_t * >(&(rhs));
}

inline void to_c(
    pxr_Pcp_SdSiteRef_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_SdSiteRef * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Pcp_SdSiteRef_t * >(rhs);
}

inline void to_c_copy(
    pxr_Pcp_SdSiteRef_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_SdSiteRef const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite const & to_cpp_ref(
    pxr_Pcp_CompressedSdSite_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite & to_cpp_ref(
    pxr_Pcp_CompressedSdSite_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite const * to_cpp(
    pxr_Pcp_CompressedSdSite_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite * to_cpp(
    pxr_Pcp_CompressedSdSite_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite * >(rhs);
}

inline void to_c(
    pxr_Pcp_CompressedSdSite_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Pcp_CompressedSdSite_t const * >(&(rhs));
}

inline void to_c(
    pxr_Pcp_CompressedSdSite_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Pcp_CompressedSdSite_t const * >(rhs);
}

inline void to_c(
    pxr_Pcp_CompressedSdSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Pcp_CompressedSdSite_t * >(&(rhs));
}

inline void to_c(
    pxr_Pcp_CompressedSdSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Pcp_CompressedSdSite_t * >(rhs);
}

inline void to_c_copy(
    pxr_Pcp_CompressedSdSite_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Pcp_CompressedSdSite const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

