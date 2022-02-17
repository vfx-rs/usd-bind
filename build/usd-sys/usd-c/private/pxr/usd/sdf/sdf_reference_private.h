#pragma once
#include <pxr/usd/sdf/sdf_reference.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/reference.h>

inline pxrInternal_v0_21__pxrReserved__::SdfReference const & to_cpp_ref(
    pxr_SdfReference_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference & to_cpp_ref(
    pxr_SdfReference_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference const * to_cpp(
    pxr_SdfReference_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference * to_cpp(
    pxr_SdfReference_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference * >(rhs);
}

inline void to_c(
    pxr_SdfReference_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfReference_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_t const * >(rhs);
}

inline void to_c(
    pxr_SdfReference_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfReference_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_t * >(rhs);
}

inline void to_c_move(
    pxr_SdfReference_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::SdfReference(std::move(*(rhs)));
}

