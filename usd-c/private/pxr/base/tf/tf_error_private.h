#pragma once
#include <pxr/base/tf/tf_error.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/tf/error.h>

inline pxrInternal_v0_20__pxrReserved__::TfError const & to_cpp_ref(
    pxr_TfError_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfError const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::TfError & to_cpp_ref(
    pxr_TfError_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfError * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::TfError const * to_cpp(
    pxr_TfError_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfError const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::TfError * to_cpp(
    pxr_TfError_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfError * >(rhs);
}

inline void to_c(
    pxr_TfError_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfError const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfError_t const * >(&(rhs));
}

inline void to_c(
    pxr_TfError_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfError const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfError_t const * >(rhs);
}

inline void to_c(
    pxr_TfError_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfError & rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfError_t * >(&(rhs));
}

inline void to_c(
    pxr_TfError_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfError * rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfError_t * >(rhs);
}

