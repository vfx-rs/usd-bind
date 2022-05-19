#pragma once
#include <pxr/usd/pcp/pcp_changes.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/changes.h>

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges const & to_cpp_ref(
    pxr_PcpLayerStackChanges_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges & to_cpp_ref(
    pxr_PcpLayerStackChanges_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges const * to_cpp(
    pxr_PcpLayerStackChanges_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges * to_cpp(
    pxr_PcpLayerStackChanges_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackChanges_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackChanges_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackChanges_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackChanges_t const * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackChanges_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackChanges_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackChanges_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackChanges_t * >(rhs);
}

inline void to_c_move(
    pxr_PcpLayerStackChanges_t * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::PcpLayerStackChanges(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpCacheChanges const & to_cpp_ref(
    pxr_PcpCacheChanges_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpCacheChanges const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpCacheChanges & to_cpp_ref(
    pxr_PcpCacheChanges_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpCacheChanges * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpCacheChanges const * to_cpp(
    pxr_PcpCacheChanges_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpCacheChanges const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpCacheChanges * to_cpp(
    pxr_PcpCacheChanges_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpCacheChanges * >(rhs);
}

inline void to_c(
    pxr_PcpCacheChanges_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpCacheChanges const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpCacheChanges_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpCacheChanges_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpCacheChanges const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpCacheChanges_t const * >(rhs);
}

inline void to_c(
    pxr_PcpCacheChanges_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpCacheChanges & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpCacheChanges_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpCacheChanges_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpCacheChanges * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpCacheChanges_t * >(rhs);
}

inline void to_c_move(
    pxr_PcpCacheChanges_t * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpCacheChanges * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::PcpCacheChanges(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLifeboat const & to_cpp_ref(
    pxr_PcpLifeboat_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLifeboat const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLifeboat & to_cpp_ref(
    pxr_PcpLifeboat_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLifeboat * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLifeboat const * to_cpp(
    pxr_PcpLifeboat_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLifeboat const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpLifeboat * to_cpp(
    pxr_PcpLifeboat_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLifeboat * >(rhs);
}

inline void to_c(
    pxr_PcpLifeboat_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLifeboat const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLifeboat_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpLifeboat_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLifeboat const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLifeboat_t const * >(rhs);
}

inline void to_c(
    pxr_PcpLifeboat_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLifeboat & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLifeboat_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpLifeboat_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLifeboat * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLifeboat_t * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpChanges const & to_cpp_ref(
    pxr_PcpChanges_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpChanges const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpChanges & to_cpp_ref(
    pxr_PcpChanges_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpChanges * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpChanges const * to_cpp(
    pxr_PcpChanges_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpChanges const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpChanges * to_cpp(
    pxr_PcpChanges_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpChanges * >(rhs);
}

inline void to_c(
    pxr_PcpChanges_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpChanges const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpChanges_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpChanges_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpChanges const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpChanges_t const * >(rhs);
}

inline void to_c(
    pxr_PcpChanges_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpChanges & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpChanges_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpChanges_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpChanges * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpChanges_t * >(rhs);
}

