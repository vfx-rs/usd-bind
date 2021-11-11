#include "pxr/usd/usd_geom/usd_geom_mesh_private.h"

#include "pxr/base/gf/gf_matrix_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "pxr/usd/usd/usd_prim_private.h"
#include "pxr/usd/usd/usd_time_code_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsConcrete(
    pxr_UsdGeomMesh_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsTyped(
    pxr_UsdGeomMesh_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsAPISchema(
    pxr_UsdGeomMesh_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsAppliedAPISchema(
    pxr_UsdGeomMesh_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_IsMultipleApplyAPISchema(
    pxr_UsdGeomMesh_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_GetPrim(
    pxr_UsdGeomMesh_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_GetPath(
    pxr_UsdGeomMesh_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_ComputeLocalToWorldTransform(
    pxr_UsdGeomMesh_t const * this_
    , pxr_GfMatrix4d_t * return_
    , pxr_UsdTimeCode_t const * time)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> ComputeLocalToWorldTransform(to_cpp_ref(time)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_from_prim(
    pxr_UsdGeomMesh_t * * this_
    , pxr_UsdPrim_t const * prim)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::UsdGeomMesh(to_cpp_ref(prim)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_dtor(
    pxr_UsdGeomMesh_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh_copy(
    pxr_UsdGeomMesh_t * * this_
    , pxr_UsdGeomMesh_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::UsdGeomMesh(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomMesh__assign(
    pxr_UsdGeomMesh_t * this_
    , pxr_UsdGeomMesh_t * * return_
    , pxr_UsdGeomMesh_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

