#pragma once
#include <pxr/usd/sdf/sdf_spec_type.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/specType.h>

inline pxrInternal_v0_21__pxrReserved__::SdfSpecTypeRegistration const & to_cpp_ref(
    pxr_SdfSpecTypeRegistration_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpecTypeRegistration const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSpecTypeRegistration & to_cpp_ref(
    pxr_SdfSpecTypeRegistration_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpecTypeRegistration * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSpecTypeRegistration const * to_cpp(
    pxr_SdfSpecTypeRegistration_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpecTypeRegistration const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfSpecTypeRegistration * to_cpp(
    pxr_SdfSpecTypeRegistration_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpecTypeRegistration * >(rhs);
}

inline void to_c(
    pxr_SdfSpecTypeRegistration_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecTypeRegistration const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpecTypeRegistration_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfSpecTypeRegistration_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecTypeRegistration const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpecTypeRegistration_t const * >(rhs);
}

inline void to_c(
    pxr_SdfSpecTypeRegistration_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecTypeRegistration & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpecTypeRegistration_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfSpecTypeRegistration_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecTypeRegistration * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpecTypeRegistration_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfSpecTypeRegistration_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecTypeRegistration const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_SpecType const & to_cpp_ref(
    pxr_Sdf_SpecType_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_SpecType const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_SpecType & to_cpp_ref(
    pxr_Sdf_SpecType_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_SpecType * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_SpecType const * to_cpp(
    pxr_Sdf_SpecType_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_SpecType const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_SpecType * to_cpp(
    pxr_Sdf_SpecType_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_SpecType * >(rhs);
}

inline void to_c(
    pxr_Sdf_SpecType_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_SpecType const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_SpecType_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_SpecType_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_SpecType const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_SpecType_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_SpecType_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_SpecType & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_SpecType_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_SpecType_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_SpecType * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_SpecType_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_SpecType_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_SpecType const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

