#pragma once
#include <pxr/usd/usd/c-stage.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/usd/stage.h>

inline pxrInternal_v0_20__pxrReserved__::UsdStage::InitialLoadSet const & pxr_UsdStage_InitialLoadSet_to_cpp_ref(
    pxr_UsdStage_InitialLoadSet const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdStage::InitialLoadSet const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::UsdStage::InitialLoadSet & pxr_UsdStage_InitialLoadSet_to_cpp_ref(
    pxr_UsdStage_InitialLoadSet * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdStage::InitialLoadSet * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::UsdStage::InitialLoadSet const * pxr_UsdStage_InitialLoadSet_to_cpp(
    pxr_UsdStage_InitialLoadSet const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdStage::InitialLoadSet const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::UsdStage::InitialLoadSet * pxr_UsdStage_InitialLoadSet_to_cpp(
    pxr_UsdStage_InitialLoadSet * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdStage::InitialLoadSet * >(rhs);
}

inline void to_c(
    pxr_UsdStage_InitialLoadSet const * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdStage::InitialLoadSet const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStage_InitialLoadSet const * >(&(rhs));
}

inline void to_c(
    pxr_UsdStage_InitialLoadSet const * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdStage::InitialLoadSet const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStage_InitialLoadSet const * >(rhs);
}

inline void to_c(
    pxr_UsdStage_InitialLoadSet * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdStage::InitialLoadSet & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStage_InitialLoadSet * >(&(rhs));
}

inline void to_c(
    pxr_UsdStage_InitialLoadSet * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdStage::InitialLoadSet * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStage_InitialLoadSet * >(rhs);
}

inline void to_c_copy(
    pxr_UsdStage_InitialLoadSet * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdStage::InitialLoadSet const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::UsdStage const & to_cpp_ref(
    pxr_UsdStage_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdStage const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::UsdStage & to_cpp_ref(
    pxr_UsdStage_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdStage * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::UsdStage const * to_cpp(
    pxr_UsdStage_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdStage const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::UsdStage * to_cpp(
    pxr_UsdStage_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::UsdStage * >(rhs);
}

inline void to_c(
    pxr_UsdStage_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdStage const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStage_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdStage_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdStage const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStage_t const * >(rhs);
}

inline void to_c(
    pxr_UsdStage_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdStage & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStage_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdStage_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::UsdStage * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdStage_t * >(rhs);
}

