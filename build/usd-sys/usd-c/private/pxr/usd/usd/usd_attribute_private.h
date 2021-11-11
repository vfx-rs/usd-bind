#pragma once
#include <pxr/usd/usd/usd_attribute.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/usd/attribute.h>

inline pxrInternal_v0_21__pxrReserved__::UsdAttribute const & to_cpp_ref(
    pxr_UsdAttribute_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdAttribute const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdAttribute & to_cpp_ref(
    pxr_UsdAttribute_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdAttribute * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdAttribute const * to_cpp(
    pxr_UsdAttribute_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdAttribute const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::UsdAttribute * to_cpp(
    pxr_UsdAttribute_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdAttribute * >(rhs);
}

inline void to_c(
    pxr_UsdAttribute_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdAttribute const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdAttribute_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdAttribute_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdAttribute const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdAttribute_t const * >(rhs);
}

inline void to_c(
    pxr_UsdAttribute_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdAttribute & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdAttribute_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdAttribute_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdAttribute * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdAttribute_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdAttribute_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdAttribute const & rhs)
{
        pxrInternal_v0_21__pxrReserved____UsdAttribute_copy(lhs, reinterpret_cast<pxr_UsdAttribute_t const * >(&(rhs)));
}

