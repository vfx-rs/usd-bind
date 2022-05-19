#pragma once
#include <pxr/usd/sdf/sdf_change_block.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/changeBlock.h>

inline pxrInternal_v0_21__pxrReserved__::SdfChangeBlock const & to_cpp_ref(
    pxr_SdfChangeBlock_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeBlock const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeBlock & to_cpp_ref(
    pxr_SdfChangeBlock_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeBlock * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeBlock const * to_cpp(
    pxr_SdfChangeBlock_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeBlock const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeBlock * to_cpp(
    pxr_SdfChangeBlock_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeBlock * >(rhs);
}

inline void to_c(
    pxr_SdfChangeBlock_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeBlock const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeBlock_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfChangeBlock_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeBlock const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeBlock_t const * >(rhs);
}

inline void to_c(
    pxr_SdfChangeBlock_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeBlock & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeBlock_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfChangeBlock_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeBlock * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeBlock_t * >(rhs);
}

