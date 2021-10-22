#pragma once
#include <pxr/usd/sdf/sdf_value_type_name.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/valueTypeName.h>

inline pxrInternal_v0_20__pxrReserved__::SdfTupleDimensions const & to_cpp_ref(
    pxr_SdfTupleDimensions_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::SdfTupleDimensions const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::SdfTupleDimensions & to_cpp_ref(
    pxr_SdfTupleDimensions_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::SdfTupleDimensions * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::SdfTupleDimensions const * to_cpp(
    pxr_SdfTupleDimensions_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::SdfTupleDimensions const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::SdfTupleDimensions * to_cpp(
    pxr_SdfTupleDimensions_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::SdfTupleDimensions * >(rhs);
}

inline void to_c(
    pxr_SdfTupleDimensions_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfTupleDimensions const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfTupleDimensions_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfTupleDimensions_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfTupleDimensions const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfTupleDimensions_t const * >(rhs);
}

inline void to_c(
    pxr_SdfTupleDimensions_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfTupleDimensions & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfTupleDimensions_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfTupleDimensions_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfTupleDimensions * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfTupleDimensions_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfTupleDimensions_t * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfTupleDimensions const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::SdfValueTypeName const & to_cpp_ref(
    pxr_SdfValueTypeName_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::SdfValueTypeName const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::SdfValueTypeName & to_cpp_ref(
    pxr_SdfValueTypeName_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::SdfValueTypeName * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::SdfValueTypeName const * to_cpp(
    pxr_SdfValueTypeName_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::SdfValueTypeName const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::SdfValueTypeName * to_cpp(
    pxr_SdfValueTypeName_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::SdfValueTypeName * >(rhs);
}

inline void to_c(
    pxr_SdfValueTypeName_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfValueTypeName const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfValueTypeName_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfValueTypeName_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfValueTypeName const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfValueTypeName_t const * >(rhs);
}

inline void to_c(
    pxr_SdfValueTypeName_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfValueTypeName & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfValueTypeName_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfValueTypeName_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfValueTypeName * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfValueTypeName_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfValueTypeName_t * lhs
    , pxrInternal_v0_20__pxrReserved__::SdfValueTypeName const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

