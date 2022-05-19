#pragma once
#include <pxr/usd/sdf/sdf_layer_tree.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/layerTree.h>

inline pxrInternal_v0_21__pxrReserved__::SdfLayerTree const & to_cpp_ref(
    pxr_SdfLayerTree_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerTree const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerTree & to_cpp_ref(
    pxr_SdfLayerTree_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerTree * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerTree const * to_cpp(
    pxr_SdfLayerTree_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerTree const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerTree * to_cpp(
    pxr_SdfLayerTree_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerTree * >(rhs);
}

inline void to_c(
    pxr_SdfLayerTree_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerTree const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerTree_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayerTree_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerTree const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerTree_t const * >(rhs);
}

inline void to_c(
    pxr_SdfLayerTree_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerTree & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerTree_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayerTree_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerTree * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerTree_t * >(rhs);
}

