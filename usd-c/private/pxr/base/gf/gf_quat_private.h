#pragma once
#include <pxr/base/gf/gf_quat.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/gf/quatd.h>
#include <pxr/base/gf/quatf.h>
#include <pxr/base/gf/quath.h>

inline pxrInternal_v0_20__pxrReserved__::GfQuath const & to_cpp_ref(
    pxr_GfQuath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfQuath const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfQuath & to_cpp_ref(
    pxr_GfQuath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfQuath * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfQuath const * to_cpp(
    pxr_GfQuath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfQuath const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfQuath * to_cpp(
    pxr_GfQuath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfQuath * >(rhs);
}

inline void to_c(
    pxr_GfQuath_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfQuath_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfQuath_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfQuath_t const * >(rhs);
}

inline void to_c(
    pxr_GfQuath_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfQuath_t * >(&(rhs));
}

inline void to_c(
    pxr_GfQuath_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfQuath_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfQuath_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuath const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::GfQuatf const & to_cpp_ref(
    pxr_GfQuatf_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfQuatf const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfQuatf & to_cpp_ref(
    pxr_GfQuatf_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfQuatf * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfQuatf const * to_cpp(
    pxr_GfQuatf_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfQuatf const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfQuatf * to_cpp(
    pxr_GfQuatf_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfQuatf * >(rhs);
}

inline void to_c(
    pxr_GfQuatf_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuatf const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfQuatf_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfQuatf_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuatf const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfQuatf_t const * >(rhs);
}

inline void to_c(
    pxr_GfQuatf_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuatf & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfQuatf_t * >(&(rhs));
}

inline void to_c(
    pxr_GfQuatf_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuatf * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfQuatf_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfQuatf_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuatf const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::GfQuatd const & to_cpp_ref(
    pxr_GfQuatd_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfQuatd const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfQuatd & to_cpp_ref(
    pxr_GfQuatd_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfQuatd * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfQuatd const * to_cpp(
    pxr_GfQuatd_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfQuatd const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfQuatd * to_cpp(
    pxr_GfQuatd_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfQuatd * >(rhs);
}

inline void to_c(
    pxr_GfQuatd_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuatd const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfQuatd_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfQuatd_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuatd const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfQuatd_t const * >(rhs);
}

inline void to_c(
    pxr_GfQuatd_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuatd & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfQuatd_t * >(&(rhs));
}

inline void to_c(
    pxr_GfQuatd_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuatd * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfQuatd_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfQuatd_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfQuatd const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

