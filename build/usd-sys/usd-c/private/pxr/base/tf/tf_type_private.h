#pragma once
#include <pxr/base/tf/tf_type.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/tf/type.h>

inline pxrInternal_v0_21__pxrReserved__::TfType const & to_cpp_ref(
    pxr_TfType_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfType const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::TfType & to_cpp_ref(
    pxr_TfType_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfType * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::TfType const * to_cpp(
    pxr_TfType_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfType const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::TfType * to_cpp(
    pxr_TfType_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfType * >(rhs);
}

inline void to_c(
    pxr_TfType_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfType const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfType_t const * >(&(rhs));
}

inline void to_c(
    pxr_TfType_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfType const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfType_t const * >(rhs);
}

inline void to_c(
    pxr_TfType_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfType & rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfType_t * >(&(rhs));
}

inline void to_c(
    pxr_TfType_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfType * rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfType_t * >(rhs);
}

inline void to_c_copy(
    pxr_TfType_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfType const & rhs)
{
        pxrInternal_v0_21__pxrReserved____TfType_copy(lhs, reinterpret_cast<pxr_TfType_t const * >(&(rhs)));
}

