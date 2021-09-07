#include "pxr/usd/usd_geom/c-xform_private.h"

#include "pxr/base/tf/weak_ptr_private.h"
#include "pxr/usd/sdf/c-path_private.h"
#include "pxr/usd/usd/c-prim_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsConcrete(
    pxr_UsdGeomXform_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsConcrete();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsTyped(
    pxr_UsdGeomXform_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsTyped();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsAPISchema(
    pxr_UsdGeomXform_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsAPISchema();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsAppliedAPISchema(
    pxr_UsdGeomXform_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsAppliedAPISchema();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdGeomXform_IsMultipleApplyAPISchema(
    pxr_UsdGeomXform_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsMultipleApplyAPISchema();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdGeomXform_GetPrim(
    pxr_UsdGeomXform_t const * this_
    , pxr_UsdPrim_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPrim());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdGeomXform_GetPath(
    pxr_UsdGeomXform_t const * this_
    , pxr_SdfPath_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdGeomXform_Define(
    pxr_UsdGeomXform_t * * return_
    , pxr_UsdStagePtr_t const * stage
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, pxrInternal_v0_20__pxrReserved__::UsdGeomXform::Define(to_cpp_ref(stage), to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdGeomXform_copy(
    pxr_UsdGeomXform_t * * this_
    , pxr_UsdGeomXform_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::UsdGeomXform(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

