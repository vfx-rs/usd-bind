#pragma once
#include <pxr/usd/sdf/sdf_layer_hints.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/layerHints.h>

inline pxrInternal_v0_21__pxrReserved__::SdfLayerHints const & to_cpp_ref(
    pxr_SdfLayerHints_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerHints const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerHints & to_cpp_ref(
    pxr_SdfLayerHints_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerHints * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerHints const * to_cpp(
    pxr_SdfLayerHints_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerHints const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerHints * to_cpp(
    pxr_SdfLayerHints_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerHints * >(rhs);
}

inline void to_c(
    pxr_SdfLayerHints_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerHints const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerHints_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayerHints_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerHints const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerHints_t const * >(rhs);
}

inline void to_c(
    pxr_SdfLayerHints_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerHints & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerHints_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayerHints_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerHints * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerHints_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfLayerHints_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerHints const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

