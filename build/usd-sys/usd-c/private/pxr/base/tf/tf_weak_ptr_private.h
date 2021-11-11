#pragma once
#include <pxr/base/tf/tf_weak_ptr.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/tf/weakPtr.h>
#include <pxr/usd/sdf/layer.h>
#include <pxr/usd/usd/stage.h>

inline pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::SdfLayer> const & to_cpp_ref(
    pxr_SdfLayerHandle_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::SdfLayer> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::SdfLayer> & to_cpp_ref(
    pxr_SdfLayerHandle_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::SdfLayer> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::SdfLayer> const * to_cpp(
    pxr_SdfLayerHandle_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::SdfLayer> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::SdfLayer> * to_cpp(
    pxr_SdfLayerHandle_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::SdfLayer> * >(rhs);
}

inline void to_c(
    pxr_SdfLayerHandle_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::SdfLayer> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerHandle_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayerHandle_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::SdfLayer> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerHandle_t const * >(rhs);
}

inline void to_c(
    pxr_SdfLayerHandle_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::SdfLayer> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerHandle_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayerHandle_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::SdfLayer> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerHandle_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfLayerHandle_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::SdfLayer> const & rhs)
{
        pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__copy(lhs, reinterpret_cast<pxr_SdfLayerHandle_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::UsdStage> const & to_cpp_ref(
    pxr_UsdStagePtr_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::UsdStage> const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::UsdStage> & to_cpp_ref(
    pxr_UsdStagePtr_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::UsdStage> * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::UsdStage> const * to_cpp(
    pxr_UsdStagePtr_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::UsdStage> const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::UsdStage> * to_cpp(
    pxr_UsdStagePtr_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::UsdStage> * >(rhs);
}

inline void to_c(
    pxr_UsdStagePtr_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::UsdStage> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStagePtr_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdStagePtr_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::UsdStage> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStagePtr_t const * >(rhs);
}

inline void to_c(
    pxr_UsdStagePtr_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::UsdStage> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStagePtr_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdStagePtr_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::UsdStage> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStagePtr_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdStagePtr_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfWeakPtr<pxr::UsdStage> const & rhs)
{
        pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__copy(lhs, reinterpret_cast<pxr_UsdStagePtr_t const * >(&(rhs)));
}

