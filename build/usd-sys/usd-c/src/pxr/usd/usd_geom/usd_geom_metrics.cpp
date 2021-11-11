#include "pxr/usd/usd_geom/usd_geom_metrics_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomGetStageUpAxis(
    pxr_TfToken_t * return_
    , pxr_UsdStagePtr_t const * stage)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::UsdGeomGetStageUpAxis(to_cpp_ref(stage)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomSetStageUpAxis(
    _Bool * return_
    , pxr_UsdStagePtr_t const * stage
    , pxr_TfToken_t const * axis)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::UsdGeomSetStageUpAxis(to_cpp_ref(stage), to_cpp_ref(axis));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomGetFallbackUpAxis(
    pxr_TfToken_t * return_)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::UsdGeomGetFallbackUpAxis());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomGetStageMetersPerUnit(
    double * return_
    , pxr_UsdStagePtr_t const * stage)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::UsdGeomGetStageMetersPerUnit(to_cpp_ref(stage));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomStageHasAuthoredMetersPerUnit(
    _Bool * return_
    , pxr_UsdStagePtr_t const * stage)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::UsdGeomStageHasAuthoredMetersPerUnit(to_cpp_ref(stage));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomSetStageMetersPerUnit(
    _Bool * return_
    , pxr_UsdStagePtr_t const * stage
    , double metersPerUnit)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::UsdGeomSetStageMetersPerUnit(to_cpp_ref(stage), metersPerUnit);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomLinearUnitsAre(
    _Bool * return_
    , double authoredUnits
    , double standardUnits
    , double epsilon)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnitsAre(authoredUnits, standardUnits, epsilon);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

