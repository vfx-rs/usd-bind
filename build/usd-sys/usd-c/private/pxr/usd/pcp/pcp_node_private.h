#pragma once
#include <pxr/usd/pcp/pcp_node.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/node.h>

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef const & to_cpp_ref(
    pxr_PcpNodeRef_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef & to_cpp_ref(
    pxr_PcpNodeRef_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef const * to_cpp(
    pxr_PcpNodeRef_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef * to_cpp(
    pxr_PcpNodeRef_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef * >(rhs);
}

inline void to_c(
    pxr_PcpNodeRef_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpNodeRef_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_t const * >(rhs);
}

inline void to_c(
    pxr_PcpNodeRef_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpNodeRef_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpNodeRef_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpNodeRef_copy(lhs, reinterpret_cast<pxr_PcpNodeRef_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef::Hash const & to_cpp_ref(
    pxr_PcpNodeRef_Hash_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef::Hash const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef::Hash & to_cpp_ref(
    pxr_PcpNodeRef_Hash_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef::Hash * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef::Hash const * to_cpp(
    pxr_PcpNodeRef_Hash_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef::Hash const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef::Hash * to_cpp(
    pxr_PcpNodeRef_Hash_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef::Hash * >(rhs);
}

inline void to_c(
    pxr_PcpNodeRef_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef::Hash const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_Hash_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpNodeRef_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef::Hash const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_Hash_t const * >(rhs);
}

inline void to_c(
    pxr_PcpNodeRef_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef::Hash & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_Hash_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpNodeRef_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef::Hash * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_Hash_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpNodeRef_Hash_t * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef::Hash const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator const & to_cpp_ref(
    pxr_PcpNodeRef_ChildrenIterator_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator & to_cpp_ref(
    pxr_PcpNodeRef_ChildrenIterator_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator const * to_cpp(
    pxr_PcpNodeRef_ChildrenIterator_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator * to_cpp(
    pxr_PcpNodeRef_ChildrenIterator_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator * >(rhs);
}

inline void to_c(
    pxr_PcpNodeRef_ChildrenIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_ChildrenIterator_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpNodeRef_ChildrenIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_ChildrenIterator_t const * >(rhs);
}

inline void to_c(
    pxr_PcpNodeRef_ChildrenIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_ChildrenIterator_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpNodeRef_ChildrenIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_ChildrenIterator_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpNodeRef_ChildrenIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenIterator const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_copy(lhs, reinterpret_cast<pxr_PcpNodeRef_ChildrenIterator_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator const & to_cpp_ref(
    pxr_PcpNodeRef_ChildrenReverseIterator_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator & to_cpp_ref(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator const * to_cpp(
    pxr_PcpNodeRef_ChildrenReverseIterator_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator * to_cpp(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator * >(rhs);
}

inline void to_c(
    pxr_PcpNodeRef_ChildrenReverseIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_ChildrenReverseIterator_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpNodeRef_ChildrenReverseIterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_ChildrenReverseIterator_t const * >(rhs);
}

inline void to_c(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_ChildrenReverseIterator_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpNodeRef_ChildrenReverseIterator_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpNodeRef_ChildrenReverseIterator const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_copy(lhs, reinterpret_cast<pxr_PcpNodeRef_ChildrenReverseIterator_t const * >(&(rhs)));
}

