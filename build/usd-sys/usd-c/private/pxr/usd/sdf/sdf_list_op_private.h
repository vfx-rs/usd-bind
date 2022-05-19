#pragma once
#include <pxr/usd/sdf/sdf_list_op.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/listOp.h>

inline pxrInternal_v0_21__pxrReserved__::SdfListOpType const & pxr_SdfListOpType_to_cpp_ref(
    pxr_SdfListOpType const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfListOpType const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfListOpType & pxr_SdfListOpType_to_cpp_ref(
    pxr_SdfListOpType * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfListOpType * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfListOpType const * pxr_SdfListOpType_to_cpp(
    pxr_SdfListOpType const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfListOpType const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfListOpType * pxr_SdfListOpType_to_cpp(
    pxr_SdfListOpType * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfListOpType * >(rhs);
}

inline void to_c(
    pxr_SdfListOpType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfListOpType const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfListOpType const * >(&(rhs));
}

inline void to_c(
    pxr_SdfListOpType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfListOpType const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfListOpType const * >(rhs);
}

inline void to_c(
    pxr_SdfListOpType * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfListOpType & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfListOpType * >(&(rhs));
}

inline void to_c(
    pxr_SdfListOpType * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfListOpType * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfListOpType * >(rhs);
}

inline void to_c_copy(
    pxr_SdfListOpType * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfListOpType const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

