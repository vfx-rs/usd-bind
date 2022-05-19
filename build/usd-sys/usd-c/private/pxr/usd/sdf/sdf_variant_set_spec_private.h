#pragma once
#include <pxr/usd/sdf/sdf_variant_set_spec.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/variantSetSpec.h>

inline pxrInternal_v0_21__pxrReserved__::SdfVariantSetSpec const & to_cpp_ref(
    pxr_SdfVariantSetSpec_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfVariantSetSpec const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfVariantSetSpec & to_cpp_ref(
    pxr_SdfVariantSetSpec_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfVariantSetSpec * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfVariantSetSpec const * to_cpp(
    pxr_SdfVariantSetSpec_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfVariantSetSpec const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfVariantSetSpec * to_cpp(
    pxr_SdfVariantSetSpec_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfVariantSetSpec * >(rhs);
}

inline void to_c(
    pxr_SdfVariantSetSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariantSetSpec const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfVariantSetSpec_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfVariantSetSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariantSetSpec const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfVariantSetSpec_t const * >(rhs);
}

inline void to_c(
    pxr_SdfVariantSetSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariantSetSpec & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfVariantSetSpec_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfVariantSetSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariantSetSpec * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfVariantSetSpec_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfVariantSetSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariantSetSpec const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfVariantSetSpec_copy(lhs, reinterpret_cast<pxr_SdfVariantSetSpec_t const * >(&(rhs)));
}

