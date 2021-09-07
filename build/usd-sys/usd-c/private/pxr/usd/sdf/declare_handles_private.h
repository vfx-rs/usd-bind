#pragma once
#include <pxr/usd/sdf/declare_handles.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/declareHandles.h>

inline pxrInternal_v0_20__pxrReserved__::Sdf_CastAccess const & to_cpp_ref(
    pxr_Sdf_CastAccess_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Sdf_CastAccess const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::Sdf_CastAccess & to_cpp_ref(
    pxr_Sdf_CastAccess_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Sdf_CastAccess * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::Sdf_CastAccess const * to_cpp(
    pxr_Sdf_CastAccess_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Sdf_CastAccess const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::Sdf_CastAccess * to_cpp(
    pxr_Sdf_CastAccess_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Sdf_CastAccess * >(rhs);
}

inline void to_c(
    pxr_Sdf_CastAccess_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::Sdf_CastAccess const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_CastAccess_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_CastAccess_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::Sdf_CastAccess const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_CastAccess_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_CastAccess_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::Sdf_CastAccess & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_CastAccess_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_CastAccess_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::Sdf_CastAccess * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_CastAccess_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_CastAccess_t * lhs
    , pxrInternal_v0_20__pxrReserved__::Sdf_CastAccess const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

