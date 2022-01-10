#pragma once
#include <pxr/usd/ar/ar_package_resolver.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ar/packageResolver.h>

inline pxrInternal_v0_21__pxrReserved__::ArPackageResolver const & to_cpp_ref(
    pxr_ArPackageResolver_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArPackageResolver const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArPackageResolver & to_cpp_ref(
    pxr_ArPackageResolver_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArPackageResolver * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::ArPackageResolver const * to_cpp(
    pxr_ArPackageResolver_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArPackageResolver const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::ArPackageResolver * to_cpp(
    pxr_ArPackageResolver_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::ArPackageResolver * >(rhs);
}

inline void to_c(
    pxr_ArPackageResolver_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArPackageResolver const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArPackageResolver_t const * >(&(rhs));
}

inline void to_c(
    pxr_ArPackageResolver_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArPackageResolver const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArPackageResolver_t const * >(rhs);
}

inline void to_c(
    pxr_ArPackageResolver_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArPackageResolver & rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArPackageResolver_t * >(&(rhs));
}

inline void to_c(
    pxr_ArPackageResolver_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::ArPackageResolver * rhs)
{
        *(lhs) = reinterpret_cast<pxr_ArPackageResolver_t * >(rhs);
}

