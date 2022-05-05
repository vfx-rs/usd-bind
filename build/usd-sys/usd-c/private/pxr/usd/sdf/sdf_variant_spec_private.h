#pragma once
#include <pxr/usd/sdf/sdf_variant_spec.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/variantSpec.h>

inline pxrInternal_v0_21__pxrReserved__::SdfVariantSpec const & to_cpp_ref(
    pxr_SdfVariantSpec_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfVariantSpec const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfVariantSpec & to_cpp_ref(
    pxr_SdfVariantSpec_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfVariantSpec * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfVariantSpec const * to_cpp(
    pxr_SdfVariantSpec_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfVariantSpec const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfVariantSpec * to_cpp(
    pxr_SdfVariantSpec_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfVariantSpec * >(rhs);
}

inline void to_c(
    pxr_SdfVariantSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariantSpec const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfVariantSpec_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfVariantSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariantSpec const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfVariantSpec_t const * >(rhs);
}

inline void to_c(
    pxr_SdfVariantSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariantSpec & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfVariantSpec_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfVariantSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariantSpec * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfVariantSpec_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfVariantSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariantSpec const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfVariantSpec_copy(lhs, reinterpret_cast<pxr_SdfVariantSpec_t const * >(&(rhs)));
}

