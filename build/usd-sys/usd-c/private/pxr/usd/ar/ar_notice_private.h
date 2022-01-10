#pragma once
#include <pxr/usd/ar/ar_notice.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/notice.h>

inline pxrInternal_v0_21__pxrReserved__::ArNotice const & to_cpp_ref(
    pxr_ArNotice_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArNotice const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArNotice & to_cpp_ref(
    pxr_ArNotice_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArNotice * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArNotice const * to_cpp(
    pxr_ArNotice_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArNotice const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArNotice * to_cpp(
    pxr_ArNotice_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArNotice * >(rhs);
}

inline void to_c(
    pxr_ArNotice_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArNotice const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArNotice_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArNotice_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArNotice const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArNotice_t const * >(rhs);
}

inline void to_c(
    pxr_ArNotice_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArNotice & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArNotice_t * >(&(rhs));
}

inline void to_c(
    pxr_ArNotice_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArNotice * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArNotice_t * >(rhs);
}

inline void to_c_copy(
    pxr_ArNotice_t * lhs
    , pxrInternal_v0_21__pxrReserved__::ArNotice const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverNotice const & to_cpp_ref(
    pxr_ArNotice_ResolverNotice_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverNotice const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverNotice & to_cpp_ref(
    pxr_ArNotice_ResolverNotice_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverNotice * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverNotice const * to_cpp(
    pxr_ArNotice_ResolverNotice_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverNotice const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverNotice * to_cpp(
    pxr_ArNotice_ResolverNotice_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverNotice * >(rhs);
}

inline void to_c(
    pxr_ArNotice_ResolverNotice_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverNotice const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArNotice_ResolverNotice_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArNotice_ResolverNotice_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverNotice const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArNotice_ResolverNotice_t const * >(rhs);
}

inline void to_c(
    pxr_ArNotice_ResolverNotice_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverNotice & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArNotice_ResolverNotice_t * >(&(rhs));
}

inline void to_c(
    pxr_ArNotice_ResolverNotice_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverNotice * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArNotice_ResolverNotice_t * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverChanged const & to_cpp_ref(
    pxr_ArNotice_ResolverChanged_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverChanged const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverChanged & to_cpp_ref(
    pxr_ArNotice_ResolverChanged_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverChanged * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverChanged const * to_cpp(
    pxr_ArNotice_ResolverChanged_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverChanged const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverChanged * to_cpp(
    pxr_ArNotice_ResolverChanged_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverChanged * >(rhs);
}

inline void to_c(
    pxr_ArNotice_ResolverChanged_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverChanged const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArNotice_ResolverChanged_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArNotice_ResolverChanged_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverChanged const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArNotice_ResolverChanged_t const * >(rhs);
}

inline void to_c(
    pxr_ArNotice_ResolverChanged_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverChanged & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArNotice_ResolverChanged_t * >(&(rhs));
}

inline void to_c(
    pxr_ArNotice_ResolverChanged_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArNotice::ResolverChanged * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArNotice_ResolverChanged_t * >(rhs);
}

