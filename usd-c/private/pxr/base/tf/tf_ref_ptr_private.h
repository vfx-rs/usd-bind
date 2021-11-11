#pragma once
#include <pxr/base/tf/tf_ref_ptr.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/tf/refPtr.h>
#include <pxr/usd/usd/stage.h>

inline pxrInternal_v0_20__pxrReserved__::TfRefPtr<pxr::UsdStage> const & to_cpp_ref(
    pxr_UsdStageRefPtr_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfRefPtr<pxr::UsdStage> const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::TfRefPtr<pxr::UsdStage> & to_cpp_ref(
    pxr_UsdStageRefPtr_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfRefPtr<pxr::UsdStage> * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::TfRefPtr<pxr::UsdStage> const * to_cpp(
    pxr_UsdStageRefPtr_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfRefPtr<pxr::UsdStage> const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::TfRefPtr<pxr::UsdStage> * to_cpp(
    pxr_UsdStageRefPtr_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfRefPtr<pxr::UsdStage> * >(rhs);
}

inline void to_c(
    pxr_UsdStageRefPtr_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfRefPtr<pxr::UsdStage> const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStageRefPtr_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdStageRefPtr_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfRefPtr<pxr::UsdStage> const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStageRefPtr_t const * >(rhs);
}

inline void to_c(
    pxr_UsdStageRefPtr_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfRefPtr<pxr::UsdStage> & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStageRefPtr_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdStageRefPtr_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfRefPtr<pxr::UsdStage> * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStageRefPtr_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdStageRefPtr_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfRefPtr<pxr::UsdStage> const & rhs)
{
        pxrInternal_v0_20__pxrReserved____TfRefPtr_pxr__UsdStage__copy(lhs, reinterpret_cast<pxr_UsdStageRefPtr_t const * >(&(rhs)));
}

