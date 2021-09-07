#include "pxr/usd/usd/c-stage_private.h"

#include "pxr/base/tf/ref_ptr_private.h"
#include "pxr/base/tf/weak_ptr_private.h"
#include "pxr/usd/usd/c-prim_private.h"
#include "pxr/usd/usd/prim_range_private.h"
#include "std_string_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_CreateNew(
    pxr_UsdStageRefPtr_t * * return_
    , std_string_t const * identifier
    , pxr_UsdStage_InitialLoadSet load)
{
    try {
        to_c_copy(return_, pxrInternal_v0_20__pxrReserved__::UsdStage::CreateNew(to_cpp_ref(identifier), pxr_UsdStage_InitialLoadSet_to_cpp_ref(&(load))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_Open(
    pxr_UsdStageRefPtr_t * * return_
    , std_string_t const * filePath
    , pxr_UsdStage_InitialLoadSet load)
{
    try {
        to_c_copy(return_, pxrInternal_v0_20__pxrReserved__::UsdStage::Open(to_cpp_ref(filePath), pxr_UsdStage_InitialLoadSet_to_cpp_ref(&(load))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_GetDefaultPrim(
    pxr_UsdStage_t const * this_
    , pxr_UsdPrim_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetDefaultPrim());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_HasDefaultPrim(
    pxr_UsdStage_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasDefaultPrim();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_Traverse(
    pxr_UsdStage_t * this_
    , pxr_UsdPrimRange_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> Traverse());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_GetSessionLayer(
    pxr_UsdStage_t const * this_
    , pxr_SdfLayerHandle_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSessionLayer());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_GetRootLayer(
    pxr_UsdStage_t const * this_
    , pxr_SdfLayerHandle_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetRootLayer());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

