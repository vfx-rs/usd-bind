#pragma once
#include <pxr/usd/sdf/sdf_layer_offset.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/layerOffset.h>

inline pxrInternal_v0_21__pxrReserved__::SdfLayerOffset const & to_cpp_ref(
    pxr_SdfLayerOffset_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerOffset const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerOffset & to_cpp_ref(
    pxr_SdfLayerOffset_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerOffset * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerOffset const * to_cpp(
    pxr_SdfLayerOffset_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerOffset const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerOffset * to_cpp(
    pxr_SdfLayerOffset_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerOffset * >(rhs);
}

inline void to_c(
    pxr_SdfLayerOffset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerOffset const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerOffset_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayerOffset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerOffset const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerOffset_t const * >(rhs);
}

inline void to_c(
    pxr_SdfLayerOffset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerOffset & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerOffset_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayerOffset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerOffset * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerOffset_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfLayerOffset_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerOffset const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerOffset::Hash const & to_cpp_ref(
    pxr_SdfLayerOffset_Hash_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerOffset::Hash const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerOffset::Hash & to_cpp_ref(
    pxr_SdfLayerOffset_Hash_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerOffset::Hash * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerOffset::Hash const * to_cpp(
    pxr_SdfLayerOffset_Hash_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerOffset::Hash const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfLayerOffset::Hash * to_cpp(
    pxr_SdfLayerOffset_Hash_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfLayerOffset::Hash * >(rhs);
}

inline void to_c(
    pxr_SdfLayerOffset_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerOffset::Hash const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerOffset_Hash_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayerOffset_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerOffset::Hash const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerOffset_Hash_t const * >(rhs);
}

inline void to_c(
    pxr_SdfLayerOffset_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerOffset::Hash & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerOffset_Hash_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfLayerOffset_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerOffset::Hash * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfLayerOffset_Hash_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfLayerOffset_Hash_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfLayerOffset::Hash const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

