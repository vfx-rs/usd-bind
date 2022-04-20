#pragma once
#include <pxr/usd/sdf/sdf_property_spec.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/propertySpec.h>

inline pxrInternal_v0_21__pxrReserved__::SdfPropertySpec const & to_cpp_ref(
    pxr_SdfPropertySpec_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPropertySpec const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPropertySpec & to_cpp_ref(
    pxr_SdfPropertySpec_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPropertySpec * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPropertySpec const * to_cpp(
    pxr_SdfPropertySpec_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPropertySpec const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfPropertySpec * to_cpp(
    pxr_SdfPropertySpec_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPropertySpec * >(rhs);
}

inline void to_c(
    pxr_SdfPropertySpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPropertySpec const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPropertySpec_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfPropertySpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPropertySpec const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPropertySpec_t const * >(rhs);
}

inline void to_c(
    pxr_SdfPropertySpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPropertySpec & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPropertySpec_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfPropertySpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPropertySpec * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPropertySpec_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfPropertySpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPropertySpec const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfPropertySpec_copy(lhs, reinterpret_cast<pxr_SdfPropertySpec_t const * >(&(rhs)));
}

