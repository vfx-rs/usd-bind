#pragma once
#include <pxr/usd/sdf/sdf_payload.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/payload.h>

inline pxrInternal_v0_21__pxrReserved__::SdfPayload const & to_cpp_ref(
    pxr_SdfPayload_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPayload const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPayload & to_cpp_ref(
    pxr_SdfPayload_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPayload * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPayload const * to_cpp(
    pxr_SdfPayload_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPayload const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfPayload * to_cpp(
    pxr_SdfPayload_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPayload * >(rhs);
}

inline void to_c(
    pxr_SdfPayload_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPayload const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPayload_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfPayload_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPayload const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPayload_t const * >(rhs);
}

inline void to_c(
    pxr_SdfPayload_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPayload & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPayload_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfPayload_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPayload * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPayload_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfPayload_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPayload const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfPayload_copy(lhs, reinterpret_cast<pxr_SdfPayload_t const * >(&(rhs)));
}

