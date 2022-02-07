#pragma once
#include <pxr/usd/pcp/pcp_site.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/site.h>

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite const & to_cpp_ref(
    pxr_PcpLayerStackSite_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite & to_cpp_ref(
    pxr_PcpLayerStackSite_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite const * to_cpp(
    pxr_PcpLayerStackSite_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite * to_cpp(
    pxr_PcpLayerStackSite_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackSite_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackSite_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackSite_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackSite_t const * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackSite_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackSite_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpLayerStackSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_copy(lhs, reinterpret_cast<pxr_PcpLayerStackSite_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash const & to_cpp_ref(
    pxr_PcpLayerStackSite_Hash_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash & to_cpp_ref(
    pxr_PcpLayerStackSite_Hash_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash const * to_cpp(
    pxr_PcpLayerStackSite_Hash_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash * to_cpp(
    pxr_PcpLayerStackSite_Hash_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackSite_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackSite_Hash_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackSite_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackSite_Hash_t const * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackSite_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackSite_Hash_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackSite_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackSite_Hash_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpLayerStackSite_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_copy(lhs, reinterpret_cast<pxr_PcpLayerStackSite_Hash_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSite const & to_cpp_ref(
    pxr_PcpSite_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSite const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSite & to_cpp_ref(
    pxr_PcpSite_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSite * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSite const * to_cpp(
    pxr_PcpSite_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSite const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpSite * to_cpp(
    pxr_PcpSite_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSite * >(rhs);
}

inline void to_c(
    pxr_PcpSite_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSite const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSite_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpSite_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSite const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSite_t const * >(rhs);
}

inline void to_c(
    pxr_PcpSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSite & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSite_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSite * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSite_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSite const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpSite_copy(lhs, reinterpret_cast<pxr_PcpSite_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSite::Hash const & to_cpp_ref(
    pxr_PcpSite_Hash_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSite::Hash const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSite::Hash & to_cpp_ref(
    pxr_PcpSite_Hash_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSite::Hash * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSite::Hash const * to_cpp(
    pxr_PcpSite_Hash_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSite::Hash const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpSite::Hash * to_cpp(
    pxr_PcpSite_Hash_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSite::Hash * >(rhs);
}

inline void to_c(
    pxr_PcpSite_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSite::Hash const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSite_Hash_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpSite_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSite::Hash const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSite_Hash_t const * >(rhs);
}

inline void to_c(
    pxr_PcpSite_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSite::Hash & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSite_Hash_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpSite_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSite::Hash * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSite_Hash_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpSite_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSite::Hash const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpSite__Hash_copy(lhs, reinterpret_cast<pxr_PcpSite_Hash_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSiteStr const & to_cpp_ref(
    pxr_PcpSiteStr_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSiteStr const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSiteStr & to_cpp_ref(
    pxr_PcpSiteStr_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSiteStr * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSiteStr const * to_cpp(
    pxr_PcpSiteStr_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSiteStr const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpSiteStr * to_cpp(
    pxr_PcpSiteStr_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSiteStr * >(rhs);
}

inline void to_c(
    pxr_PcpSiteStr_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteStr const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSiteStr_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpSiteStr_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteStr const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSiteStr_t const * >(rhs);
}

inline void to_c(
    pxr_PcpSiteStr_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteStr & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSiteStr_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpSiteStr_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteStr * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSiteStr_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpSiteStr_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteStr const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpSiteStr_copy(lhs, reinterpret_cast<pxr_PcpSiteStr_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash const & to_cpp_ref(
    pxr_PcpSiteStr_Hash_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash & to_cpp_ref(
    pxr_PcpSiteStr_Hash_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash const * to_cpp(
    pxr_PcpSiteStr_Hash_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash * to_cpp(
    pxr_PcpSiteStr_Hash_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash * >(rhs);
}

inline void to_c(
    pxr_PcpSiteStr_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSiteStr_Hash_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpSiteStr_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSiteStr_Hash_t const * >(rhs);
}

inline void to_c(
    pxr_PcpSiteStr_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSiteStr_Hash_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpSiteStr_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpSiteStr_Hash_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpSiteStr_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_copy(lhs, reinterpret_cast<pxr_PcpSiteStr_Hash_t const * >(&(rhs)));
}

