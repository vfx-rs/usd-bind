#pragma once
#include <pxr/usd/sdf/sdf_layer.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/layer.h>

inline pxrInternal_v0_21__pxrReserved__::SdfLayer const & to_cpp_ref(
    pxr_SdfLayer_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayer const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayer & to_cpp_ref(
    pxr_SdfLayer_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayer * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayer const * to_cpp(
    pxr_SdfLayer_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayer const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayer * to_cpp(
    pxr_SdfLayer_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayer * >(rhs);
}

inline void to_c(
    pxr_SdfLayer_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayer const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayer_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayer_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayer const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayer_t const * >(rhs);
}

inline void to_c(
    pxr_SdfLayer_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayer & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayer_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayer_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayer * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayer_t * >(rhs);
}

