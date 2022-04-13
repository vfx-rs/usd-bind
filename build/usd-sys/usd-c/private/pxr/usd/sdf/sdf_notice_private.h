#pragma once
#include <pxr/usd/sdf/sdf_notice.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/notice.h>

inline pxrInternal_v0_21__pxrReserved__::SdfNotice const & to_cpp_ref(
    pxr_SdfNotice_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice & to_cpp_ref(
    pxr_SdfNotice_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice const * to_cpp(
    pxr_SdfNotice_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice * to_cpp(
    pxr_SdfNotice_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const & to_cpp_ref(
    pxr_SdfNotice_Base_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::Base & to_cpp_ref(
    pxr_SdfNotice_Base_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::Base * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const * to_cpp(
    pxr_SdfNotice_Base_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::Base * to_cpp(
    pxr_SdfNotice_Base_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::Base * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_Base_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_Base_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_Base_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_Base_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_Base_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_Base_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_Base_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_Base_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_Base_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__Base_copy(lhs, reinterpret_cast<pxr_SdfNotice_Base_t const * >(&(rhs)));
}

