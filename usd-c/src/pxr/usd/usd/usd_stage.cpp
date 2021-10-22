#include "pxr/usd/usd/usd_stage_private.h"

#include "pxr/base/tf/tf_ref_ptr_private.h"
#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "pxr/usd/usd/usd_prim_private.h"
#include "pxr/usd/usd/usd_prim_range_private.h"
#include "std_map_private.h"
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_CreateInMemory(
    pxr_UsdStageRefPtr_t * * return_
    , pxr_UsdStage_InitialLoadSet load)
{
    try {
        to_c_copy(return_, pxrInternal_v0_20__pxrReserved__::UsdStage::CreateInMemory(pxr_UsdStage_InitialLoadSet_to_cpp_ref(&(load))));
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_Save(
    pxr_UsdStage_t * this_)
{
    try {
        (to_cpp(this_)) -> Save();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_SaveSessionLayers(
    pxr_UsdStage_t * this_)
{
    try {
        (to_cpp(this_)) -> SaveSessionLayers();
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_DefinePrim(
    pxr_UsdStage_t * this_
    , pxr_UsdPrim_t * * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * typeName)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> DefinePrim(to_cpp_ref(path), to_cpp_ref(typeName)));
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_Export(
    pxr_UsdStage_t const * this_
    , _Bool * return_
    , std_string_t const * filename
    , _Bool addSourceFileComment
    , std_map_string_string_t const * args)
{
    try {
        *(return_) = (to_cpp(this_)) -> Export(to_cpp_ref(filename), addSourceFileComment, to_cpp_ref(args));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

