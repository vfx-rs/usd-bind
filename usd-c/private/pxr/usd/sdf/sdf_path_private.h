#pragma once
#include <pxr/usd/sdf/sdf_path.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/path.h>

inline pxrInternal_v0_20__pxrReserved__::SdfPath const & to_cpp_ref(
    pxr_SdfPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::SdfPath const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::SdfPath & to_cpp_ref(
    pxr_SdfPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::SdfPath * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::SdfPath const * to_cpp(
    pxr_SdfPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::SdfPath const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::SdfPath * to_cpp(
    pxr_SdfPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::SdfPath * >(rhs);
}

inline void to_c(
    pxr_SdfPath_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfPath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfPath_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfPath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_t const * >(rhs);
}

inline void to_c(
    pxr_SdfPath_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfPath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfPath_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfPath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfPath_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfPath const & rhs)
{
        pxrInternal_v0_20__pxrReserved____SdfPath_copy(lhs, reinterpret_cast<pxr_SdfPath_t const * >(&(rhs)));
}

