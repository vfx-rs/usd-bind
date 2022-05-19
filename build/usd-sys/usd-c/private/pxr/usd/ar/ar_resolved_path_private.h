#pragma once
#include <pxr/usd/ar/ar_resolved_path.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/resolvedPath.h>

inline pxrInternal_v0_21__pxrReserved__::ArResolvedPath const & to_cpp_ref(
    pxr_ArResolvedPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolvedPath const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArResolvedPath & to_cpp_ref(
    pxr_ArResolvedPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolvedPath * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArResolvedPath const * to_cpp(
    pxr_ArResolvedPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolvedPath const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArResolvedPath * to_cpp(
    pxr_ArResolvedPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArResolvedPath * >(rhs);
}

inline void to_c(
    pxr_ArResolvedPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolvedPath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolvedPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArResolvedPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolvedPath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolvedPath_t const * >(rhs);
}

inline void to_c(
    pxr_ArResolvedPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolvedPath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolvedPath_t * >(&(rhs));
}

inline void to_c(
    pxr_ArResolvedPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolvedPath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArResolvedPath_t * >(rhs);
}

inline void to_c_copy(
    pxr_ArResolvedPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArResolvedPath const & rhs)
{
        pxrInternal_v0_21__pxrReserved____ArResolvedPath_copy(lhs, reinterpret_cast<pxr_ArResolvedPath_t const * >(&(rhs)));
}

