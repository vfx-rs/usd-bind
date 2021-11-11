#pragma once
#include <pxr/usd/usd_geom/usd_geom_metrics.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/usdGeom/metrics.h>

inline pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnits const & to_cpp_ref(
    pxr_UsdGeomLinearUnits_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnits const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnits & to_cpp_ref(
    pxr_UsdGeomLinearUnits_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnits * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnits const * to_cpp(
    pxr_UsdGeomLinearUnits_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnits const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnits * to_cpp(
    pxr_UsdGeomLinearUnits_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnits * >(rhs);
}

inline void to_c(
    pxr_UsdGeomLinearUnits_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnits const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomLinearUnits_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdGeomLinearUnits_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnits const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomLinearUnits_t const * >(rhs);
}

inline void to_c(
    pxr_UsdGeomLinearUnits_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnits & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomLinearUnits_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdGeomLinearUnits_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnits * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdGeomLinearUnits_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdGeomLinearUnits_t * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdGeomLinearUnits const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

