#pragma once
#include <pxr/usd/usd_geom/c-sphere.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/usdGeom/sphere.h>

inline pxrInternal_v0_20__pxrReserved__::UsdGeomSphere const & to_cpp_ref(
    pxr_UsdGeomSphere_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdGeomSphere const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::UsdGeomSphere & to_cpp_ref(
    pxr_UsdGeomSphere_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdGeomSphere * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::UsdGeomSphere const * to_cpp(
    pxr_UsdGeomSphere_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdGeomSphere const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::UsdGeomSphere * to_cpp(
    pxr_UsdGeomSphere_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdGeomSphere * >(rhs);
}

inline void to_c(
    pxr_UsdGeomSphere_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdGeomSphere const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomSphere_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdGeomSphere_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdGeomSphere const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomSphere_t const * >(rhs);
}

inline void to_c(
    pxr_UsdGeomSphere_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdGeomSphere & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomSphere_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdGeomSphere_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdGeomSphere * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomSphere_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdGeomSphere_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdGeomSphere const & rhs)
{
        pxrInternal_v0_20__pxrReserved____UsdGeomSphere_copy(lhs, reinterpret_cast<pxr_UsdGeomSphere_t const * >(&(rhs)));
}

