#pragma once
#include <pxr/usd/pcp/pcp_iterator.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/iterator.h>

inline pxrInternal_v0_21__pxrReserved__::PcpNodeIterator const & to_cpp_ref(
    pxr_PcpNodeIterator_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeIterator const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeIterator & to_cpp_ref(
    pxr_PcpNodeIterator_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeIterator * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeIterator const * to_cpp(
    pxr_PcpNodeIterator_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeIterator const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeIterator * to_cpp(
    pxr_PcpNodeIterator_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeIterator * >(rhs);
}

inline void to_c(
    pxr_PcpNodeIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeIterator const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeIterator_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpNodeIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeIterator const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeIterator_t const * >(rhs);
}

inline void to_c(
    pxr_PcpNodeIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeIterator & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeIterator_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpNodeIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeIterator * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeIterator_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpNodeIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeIterator const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpNodeIterator_copy(lhs, reinterpret_cast<pxr_PcpNodeIterator_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator const & to_cpp_ref(
    pxr_PcpNodeReverseIterator_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator & to_cpp_ref(
    pxr_PcpNodeReverseIterator_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator const * to_cpp(
    pxr_PcpNodeReverseIterator_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator * to_cpp(
    pxr_PcpNodeReverseIterator_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator * >(rhs);
}

inline void to_c(
    pxr_PcpNodeReverseIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeReverseIterator_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpNodeReverseIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeReverseIterator_t const * >(rhs);
}

inline void to_c(
    pxr_PcpNodeReverseIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeReverseIterator_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpNodeReverseIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeReverseIterator_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpNodeReverseIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_copy(lhs, reinterpret_cast<pxr_PcpNodeReverseIterator_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIterator const & to_cpp_ref(
    pxr_PcpPrimIterator_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIterator const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIterator & to_cpp_ref(
    pxr_PcpPrimIterator_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIterator * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIterator const * to_cpp(
    pxr_PcpPrimIterator_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIterator const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimIterator * to_cpp(
    pxr_PcpPrimIterator_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimIterator * >(rhs);
}

inline void to_c(
    pxr_PcpPrimIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIterator const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIterator_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpPrimIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIterator const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIterator_t const * >(rhs);
}

inline void to_c(
    pxr_PcpPrimIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIterator & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIterator_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpPrimIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIterator * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimIterator_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpPrimIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimIterator const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpPrimIterator_copy(lhs, reinterpret_cast<pxr_PcpPrimIterator_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator const & to_cpp_ref(
    pxr_PcpPrimReverseIterator_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator & to_cpp_ref(
    pxr_PcpPrimReverseIterator_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator const * to_cpp(
    pxr_PcpPrimReverseIterator_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator * to_cpp(
    pxr_PcpPrimReverseIterator_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator * >(rhs);
}

inline void to_c(
    pxr_PcpPrimReverseIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimReverseIterator_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpPrimReverseIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimReverseIterator_t const * >(rhs);
}

inline void to_c(
    pxr_PcpPrimReverseIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimReverseIterator_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpPrimReverseIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPrimReverseIterator_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpPrimReverseIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_copy(lhs, reinterpret_cast<pxr_PcpPrimReverseIterator_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator const & to_cpp_ref(
    pxr_PcpPropertyIterator_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator & to_cpp_ref(
    pxr_PcpPropertyIterator_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator const * to_cpp(
    pxr_PcpPropertyIterator_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator * to_cpp(
    pxr_PcpPropertyIterator_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator * >(rhs);
}

inline void to_c(
    pxr_PcpPropertyIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPropertyIterator_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpPropertyIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPropertyIterator_t const * >(rhs);
}

inline void to_c(
    pxr_PcpPropertyIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPropertyIterator_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpPropertyIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPropertyIterator_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpPropertyIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_copy(lhs, reinterpret_cast<pxr_PcpPropertyIterator_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator const & to_cpp_ref(
    pxr_PcpPropertyReverseIterator_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator & to_cpp_ref(
    pxr_PcpPropertyReverseIterator_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator const * to_cpp(
    pxr_PcpPropertyReverseIterator_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator * to_cpp(
    pxr_PcpPropertyReverseIterator_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator * >(rhs);
}

inline void to_c(
    pxr_PcpPropertyReverseIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPropertyReverseIterator_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpPropertyReverseIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPropertyReverseIterator_t const * >(rhs);
}

inline void to_c(
    pxr_PcpPropertyReverseIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPropertyReverseIterator_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpPropertyReverseIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpPropertyReverseIterator_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpPropertyReverseIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_copy(lhs, reinterpret_cast<pxr_PcpPropertyReverseIterator_t const * >(&(rhs)));
}

