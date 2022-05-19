#pragma once
#include <pxr/usd/sdf/sdf_site.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/site.h>

inline pxrInternal_v0_21__pxrReserved__::SdfSite const & to_cpp_ref(
    pxr_SdfSite_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSite const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSite & to_cpp_ref(
    pxr_SdfSite_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSite * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSite const * to_cpp(
    pxr_SdfSite_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSite const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfSite * to_cpp(
    pxr_SdfSite_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSite * >(rhs);
}

inline void to_c(
    pxr_SdfSite_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSite const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSite_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfSite_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSite const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSite_t const * >(rhs);
}

inline void to_c(
    pxr_SdfSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSite & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSite_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSite * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSite_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfSite_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSite const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfSite_copy(lhs, reinterpret_cast<pxr_SdfSite_t const * >(&(rhs)));
}

