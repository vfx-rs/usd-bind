#pragma once
#include <pxr/usd/usd/usd_references.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/usd/references.h>

inline pxrInternal_v0_21__pxrReserved__::UsdReferences const & to_cpp_ref(
    pxr_UsdReferences_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdReferences const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdReferences & to_cpp_ref(
    pxr_UsdReferences_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdReferences * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdReferences const * to_cpp(
    pxr_UsdReferences_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdReferences const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::UsdReferences * to_cpp(
    pxr_UsdReferences_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdReferences * >(rhs);
}

inline void to_c(
    pxr_UsdReferences_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdReferences const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdReferences_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdReferences_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdReferences const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdReferences_t const * >(rhs);
}

inline void to_c(
    pxr_UsdReferences_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdReferences & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdReferences_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdReferences_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdReferences * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdReferences_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdReferences_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdReferences const & rhs)
{
        pxrInternal_v0_21__pxrReserved____UsdReferences_copy(lhs, reinterpret_cast<pxr_UsdReferences_t const * >(&(rhs)));
}

