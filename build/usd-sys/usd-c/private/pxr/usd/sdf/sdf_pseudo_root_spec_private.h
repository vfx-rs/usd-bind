#pragma once
#include <pxr/usd/sdf/sdf_pseudo_root_spec.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/pseudoRootSpec.h>

inline pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec const & to_cpp_ref(
    pxr_SdfPseudoRootSpec_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec & to_cpp_ref(
    pxr_SdfPseudoRootSpec_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec const * to_cpp(
    pxr_SdfPseudoRootSpec_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec * to_cpp(
    pxr_SdfPseudoRootSpec_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec * >(rhs);
}

inline void to_c(
    pxr_SdfPseudoRootSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPseudoRootSpec_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfPseudoRootSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPseudoRootSpec_t const * >(rhs);
}

inline void to_c(
    pxr_SdfPseudoRootSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPseudoRootSpec_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfPseudoRootSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPseudoRootSpec * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPseudoRootSpec_t * >(rhs);
}

