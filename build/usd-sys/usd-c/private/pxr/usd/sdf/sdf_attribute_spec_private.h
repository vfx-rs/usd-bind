#pragma once
#include <pxr/usd/sdf/sdf_attribute_spec.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/attributeSpec.h>

inline pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec const & to_cpp_ref(
    pxr_SdfAttributeSpec_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec & to_cpp_ref(
    pxr_SdfAttributeSpec_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec const * to_cpp(
    pxr_SdfAttributeSpec_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec * to_cpp(
    pxr_SdfAttributeSpec_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec * >(rhs);
}

inline void to_c(
    pxr_SdfAttributeSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAttributeSpec_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfAttributeSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAttributeSpec_t const * >(rhs);
}

inline void to_c(
    pxr_SdfAttributeSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAttributeSpec_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfAttributeSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAttributeSpec_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfAttributeSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAttributeSpec const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfAttributeSpec_copy(lhs, reinterpret_cast<pxr_SdfAttributeSpec_t const * >(&(rhs)));
}

