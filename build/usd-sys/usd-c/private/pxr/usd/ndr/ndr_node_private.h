#pragma once
#include <pxr/usd/ndr/ndr_node.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/ndr/node.h>

inline pxrInternal_v0_21__pxrReserved__::NdrNode const & to_cpp_ref(
    pxr_NdrNode_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrNode const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrNode & to_cpp_ref(
    pxr_NdrNode_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrNode * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::NdrNode const * to_cpp(
    pxr_NdrNode_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrNode const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::NdrNode * to_cpp(
    pxr_NdrNode_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::NdrNode * >(rhs);
}

inline void to_c(
    pxr_NdrNode_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrNode const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrNode_t const * >(&(rhs));
}

inline void to_c(
    pxr_NdrNode_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrNode const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrNode_t const * >(rhs);
}

inline void to_c(
    pxr_NdrNode_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrNode & rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrNode_t * >(&(rhs));
}

inline void to_c(
    pxr_NdrNode_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::NdrNode * rhs)
{
        *(lhs) = reinterpret_cast<pxr_NdrNode_t * >(rhs);
}

