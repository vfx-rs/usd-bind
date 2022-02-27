#pragma once
#include <pxr/usd/sdf/sdf_data.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/data.h>

inline pxrInternal_v0_21__pxrReserved__::SdfData const & to_cpp_ref(
    pxr_SdfData_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfData const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfData & to_cpp_ref(
    pxr_SdfData_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfData * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfData const * to_cpp(
    pxr_SdfData_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfData const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfData * to_cpp(
    pxr_SdfData_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfData * >(rhs);
}

inline void to_c(
    pxr_SdfData_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfData const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfData_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfData_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfData const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfData_t const * >(rhs);
}

inline void to_c(
    pxr_SdfData_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfData & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfData_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfData_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfData * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfData_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfData_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfData const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfData_copy(lhs, reinterpret_cast<pxr_SdfData_t const * >(&(rhs)));
}

