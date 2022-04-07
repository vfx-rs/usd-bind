#pragma once
#include <pxr/usd/sdf/sdf_layer_state_delegate.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/layerStateDelegate.h>

inline pxrInternal_v0_21__pxrReserved__::SdfLayerStateDelegateBase const & to_cpp_ref(
    pxr_SdfLayerStateDelegateBase_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerStateDelegateBase const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerStateDelegateBase & to_cpp_ref(
    pxr_SdfLayerStateDelegateBase_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerStateDelegateBase * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerStateDelegateBase const * to_cpp(
    pxr_SdfLayerStateDelegateBase_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerStateDelegateBase const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerStateDelegateBase * to_cpp(
    pxr_SdfLayerStateDelegateBase_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerStateDelegateBase * >(rhs);
}

inline void to_c(
    pxr_SdfLayerStateDelegateBase_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerStateDelegateBase const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerStateDelegateBase_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayerStateDelegateBase_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerStateDelegateBase const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerStateDelegateBase_t const * >(rhs);
}

inline void to_c(
    pxr_SdfLayerStateDelegateBase_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerStateDelegateBase & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerStateDelegateBase_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayerStateDelegateBase_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerStateDelegateBase * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerStateDelegateBase_t * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate const & to_cpp_ref(
    pxr_SdfSimpleLayerStateDelegate_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate & to_cpp_ref(
    pxr_SdfSimpleLayerStateDelegate_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate const * to_cpp(
    pxr_SdfSimpleLayerStateDelegate_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate * to_cpp(
    pxr_SdfSimpleLayerStateDelegate_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate * >(rhs);
}

inline void to_c(
    pxr_SdfSimpleLayerStateDelegate_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSimpleLayerStateDelegate_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfSimpleLayerStateDelegate_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSimpleLayerStateDelegate_t const * >(rhs);
}

inline void to_c(
    pxr_SdfSimpleLayerStateDelegate_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSimpleLayerStateDelegate_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfSimpleLayerStateDelegate_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSimpleLayerStateDelegate_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfSimpleLayerStateDelegate_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSimpleLayerStateDelegate const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfSimpleLayerStateDelegate_copy(lhs, reinterpret_cast<pxr_SdfSimpleLayerStateDelegate_t const * >(&(rhs)));
}

