#pragma once
#include <pxr/usd/usd/usd_common.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/usd/common.h>

inline pxrInternal_v0_21__pxrReserved__::UsdListPosition const & pxr_UsdListPosition_to_cpp_ref(
    pxr_UsdListPosition const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdListPosition const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdListPosition & pxr_UsdListPosition_to_cpp_ref(
    pxr_UsdListPosition * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdListPosition * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdListPosition const * pxr_UsdListPosition_to_cpp(
    pxr_UsdListPosition const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdListPosition const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::UsdListPosition * pxr_UsdListPosition_to_cpp(
    pxr_UsdListPosition * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdListPosition * >(rhs);
}

inline void to_c(
    pxr_UsdListPosition const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdListPosition const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdListPosition const * >(&(rhs));
}

inline void to_c(
    pxr_UsdListPosition const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdListPosition const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdListPosition const * >(rhs);
}

inline void to_c(
    pxr_UsdListPosition * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdListPosition & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdListPosition * >(&(rhs));
}

inline void to_c(
    pxr_UsdListPosition * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdListPosition * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdListPosition * >(rhs);
}

inline void to_c_copy(
    pxr_UsdListPosition * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdListPosition const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::UsdLoadPolicy const & pxr_UsdLoadPolicy_to_cpp_ref(
    pxr_UsdLoadPolicy const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdLoadPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdLoadPolicy & pxr_UsdLoadPolicy_to_cpp_ref(
    pxr_UsdLoadPolicy * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdLoadPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdLoadPolicy const * pxr_UsdLoadPolicy_to_cpp(
    pxr_UsdLoadPolicy const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdLoadPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::UsdLoadPolicy * pxr_UsdLoadPolicy_to_cpp(
    pxr_UsdLoadPolicy * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdLoadPolicy * >(rhs);
}

inline void to_c(
    pxr_UsdLoadPolicy const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdLoadPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdLoadPolicy const * >(&(rhs));
}

inline void to_c(
    pxr_UsdLoadPolicy const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdLoadPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdLoadPolicy const * >(rhs);
}

inline void to_c(
    pxr_UsdLoadPolicy * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdLoadPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdLoadPolicy * >(&(rhs));
}

inline void to_c(
    pxr_UsdLoadPolicy * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdLoadPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdLoadPolicy * >(rhs);
}

inline void to_c_copy(
    pxr_UsdLoadPolicy * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdLoadPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

