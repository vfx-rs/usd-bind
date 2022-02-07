#pragma once
#include <pxr/usd/pcp/pcp_layer_stack_identifier.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/layerStackIdentifier.h>

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier const & to_cpp_ref(
    pxr_PcpLayerStackIdentifier_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier & to_cpp_ref(
    pxr_PcpLayerStackIdentifier_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier const * to_cpp(
    pxr_PcpLayerStackIdentifier_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier * to_cpp(
    pxr_PcpLayerStackIdentifier_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackIdentifier_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifier_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackIdentifier_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifier_t const * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackIdentifier_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifier_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackIdentifier_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifier_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpLayerStackIdentifier_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_copy(lhs, reinterpret_cast<pxr_PcpLayerStackIdentifier_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier::Hash const & to_cpp_ref(
    pxr_PcpLayerStackIdentifier_Hash_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier::Hash const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier::Hash & to_cpp_ref(
    pxr_PcpLayerStackIdentifier_Hash_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier::Hash * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier::Hash const * to_cpp(
    pxr_PcpLayerStackIdentifier_Hash_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier::Hash const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier::Hash * to_cpp(
    pxr_PcpLayerStackIdentifier_Hash_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier::Hash * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackIdentifier_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier::Hash const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifier_Hash_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackIdentifier_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier::Hash const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifier_Hash_t const * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackIdentifier_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier::Hash & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifier_Hash_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackIdentifier_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier::Hash * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifier_Hash_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpLayerStackIdentifier_Hash_t * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier::Hash const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr const & to_cpp_ref(
    pxr_PcpLayerStackIdentifierStr_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr & to_cpp_ref(
    pxr_PcpLayerStackIdentifierStr_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr const * to_cpp(
    pxr_PcpLayerStackIdentifierStr_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr * to_cpp(
    pxr_PcpLayerStackIdentifierStr_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackIdentifierStr_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifierStr_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackIdentifierStr_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifierStr_t const * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackIdentifierStr_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifierStr_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackIdentifierStr_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifierStr_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpLayerStackIdentifierStr_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_copy(lhs, reinterpret_cast<pxr_PcpLayerStackIdentifierStr_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr::Hash const & to_cpp_ref(
    pxr_PcpLayerStackIdentifierStr_Hash_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr::Hash const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr::Hash & to_cpp_ref(
    pxr_PcpLayerStackIdentifierStr_Hash_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr::Hash * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr::Hash const * to_cpp(
    pxr_PcpLayerStackIdentifierStr_Hash_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr::Hash const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr::Hash * to_cpp(
    pxr_PcpLayerStackIdentifierStr_Hash_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr::Hash * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackIdentifierStr_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr::Hash const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifierStr_Hash_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackIdentifierStr_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr::Hash const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifierStr_Hash_t const * >(rhs);
}

inline void to_c(
    pxr_PcpLayerStackIdentifierStr_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr::Hash & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifierStr_Hash_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpLayerStackIdentifierStr_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr::Hash * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpLayerStackIdentifierStr_Hash_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpLayerStackIdentifierStr_Hash_t * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr::Hash const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

