#pragma once
#include <pxr/usd/pcp/pcp_namespace_edits.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/namespaceEdits.h>

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::EditType const & pxr_PcpNamespaceEdits_EditType_to_cpp_ref(
    pxr_PcpNamespaceEdits_EditType const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::EditType const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::EditType & pxr_PcpNamespaceEdits_EditType_to_cpp_ref(
    pxr_PcpNamespaceEdits_EditType * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::EditType * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::EditType const * pxr_PcpNamespaceEdits_EditType_to_cpp(
    pxr_PcpNamespaceEdits_EditType const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::EditType const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::EditType * pxr_PcpNamespaceEdits_EditType_to_cpp(
    pxr_PcpNamespaceEdits_EditType * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::EditType * >(rhs);
}

inline void to_c(
    pxr_PcpNamespaceEdits_EditType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::EditType const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_EditType const * >(&(rhs));
}

inline void to_c(
    pxr_PcpNamespaceEdits_EditType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::EditType const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_EditType const * >(rhs);
}

inline void to_c(
    pxr_PcpNamespaceEdits_EditType * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::EditType & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_EditType * >(&(rhs));
}

inline void to_c(
    pxr_PcpNamespaceEdits_EditType * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::EditType * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_EditType * >(rhs);
}

inline void to_c_copy(
    pxr_PcpNamespaceEdits_EditType * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::EditType const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits const & to_cpp_ref(
    pxr_PcpNamespaceEdits_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits & to_cpp_ref(
    pxr_PcpNamespaceEdits_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits const * to_cpp(
    pxr_PcpNamespaceEdits_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits * to_cpp(
    pxr_PcpNamespaceEdits_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits * >(rhs);
}

inline void to_c(
    pxr_PcpNamespaceEdits_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpNamespaceEdits_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_t const * >(rhs);
}

inline void to_c(
    pxr_PcpNamespaceEdits_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpNamespaceEdits_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpNamespaceEdits_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits_copy(lhs, reinterpret_cast<pxr_PcpNamespaceEdits_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite const & to_cpp_ref(
    pxr_PcpNamespaceEdits_CacheSite_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite & to_cpp_ref(
    pxr_PcpNamespaceEdits_CacheSite_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite const * to_cpp(
    pxr_PcpNamespaceEdits_CacheSite_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite * to_cpp(
    pxr_PcpNamespaceEdits_CacheSite_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite * >(rhs);
}

inline void to_c(
    pxr_PcpNamespaceEdits_CacheSite_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_CacheSite_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpNamespaceEdits_CacheSite_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_CacheSite_t const * >(rhs);
}

inline void to_c(
    pxr_PcpNamespaceEdits_CacheSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_CacheSite_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpNamespaceEdits_CacheSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_CacheSite_t * >(rhs);
}

inline void to_c_move(
    pxr_PcpNamespaceEdits_CacheSite_t * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::CacheSite(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite const & to_cpp_ref(
    pxr_PcpNamespaceEdits_LayerStackSite_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite & to_cpp_ref(
    pxr_PcpNamespaceEdits_LayerStackSite_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite const * to_cpp(
    pxr_PcpNamespaceEdits_LayerStackSite_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite * to_cpp(
    pxr_PcpNamespaceEdits_LayerStackSite_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite * >(rhs);
}

inline void to_c(
    pxr_PcpNamespaceEdits_LayerStackSite_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_LayerStackSite_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpNamespaceEdits_LayerStackSite_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_LayerStackSite_t const * >(rhs);
}

inline void to_c(
    pxr_PcpNamespaceEdits_LayerStackSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_LayerStackSite_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpNamespaceEdits_LayerStackSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNamespaceEdits_LayerStackSite_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpNamespaceEdits_LayerStackSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNamespaceEdits::LayerStackSite const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpNamespaceEdits__LayerStackSite_copy(lhs, reinterpret_cast<pxr_PcpNamespaceEdits_LayerStackSite_t const * >(&(rhs)));
}

