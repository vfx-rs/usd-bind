#pragma once
#include <pxr/usd/usd_geom/usd_geom_xform.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/usdGeom/xform.h>

inline pxrInternal_v0_21__pxrReserved__::UsdGeomXform const & to_cpp_ref(
    pxr_UsdGeomXform_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdGeomXform const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdGeomXform & to_cpp_ref(
    pxr_UsdGeomXform_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdGeomXform * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdGeomXform const * to_cpp(
    pxr_UsdGeomXform_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdGeomXform const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::UsdGeomXform * to_cpp(
    pxr_UsdGeomXform_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdGeomXform * >(rhs);
}

inline void to_c(
    pxr_UsdGeomXform_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomXform const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomXform_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdGeomXform_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomXform const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomXform_t const * >(rhs);
}

inline void to_c(
    pxr_UsdGeomXform_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomXform & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomXform_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdGeomXform_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomXform * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomXform_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdGeomXform_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomXform const & rhs)
{
        pxrInternal_v0_21__pxrReserved____UsdGeomXform_copy(lhs, reinterpret_cast<pxr_UsdGeomXform_t const * >(&(rhs)));
}

