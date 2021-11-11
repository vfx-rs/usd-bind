#pragma once
#include <pxr/usd/usd_geom/usd_geom_mesh.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/usdGeom/mesh.h>

inline pxrInternal_v0_21__pxrReserved__::UsdGeomMesh const & to_cpp_ref(
    pxr_UsdGeomMesh_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdGeomMesh const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdGeomMesh & to_cpp_ref(
    pxr_UsdGeomMesh_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdGeomMesh * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdGeomMesh const * to_cpp(
    pxr_UsdGeomMesh_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdGeomMesh const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::UsdGeomMesh * to_cpp(
    pxr_UsdGeomMesh_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdGeomMesh * >(rhs);
}

inline void to_c(
    pxr_UsdGeomMesh_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomMesh const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomMesh_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdGeomMesh_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomMesh const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomMesh_t const * >(rhs);
}

inline void to_c(
    pxr_UsdGeomMesh_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomMesh & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomMesh_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdGeomMesh_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomMesh * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomMesh_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdGeomMesh_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomMesh const & rhs)
{
        pxrInternal_v0_21__pxrReserved____UsdGeomMesh_copy(lhs, reinterpret_cast<pxr_UsdGeomMesh_t const * >(&(rhs)));
}

