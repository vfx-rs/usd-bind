#pragma once
#include <pxr/usd/sdf/sdf_change_list.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/changeList.h>

inline pxrInternal_v0_21__pxrReserved__::SdfChangeList::SubLayerChangeType const & pxr_SdfChangeList_SubLayerChangeType_to_cpp_ref(
    pxr_SdfChangeList_SubLayerChangeType const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeList::SubLayerChangeType const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeList::SubLayerChangeType & pxr_SdfChangeList_SubLayerChangeType_to_cpp_ref(
    pxr_SdfChangeList_SubLayerChangeType * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeList::SubLayerChangeType * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeList::SubLayerChangeType const * pxr_SdfChangeList_SubLayerChangeType_to_cpp(
    pxr_SdfChangeList_SubLayerChangeType const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeList::SubLayerChangeType const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeList::SubLayerChangeType * pxr_SdfChangeList_SubLayerChangeType_to_cpp(
    pxr_SdfChangeList_SubLayerChangeType * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeList::SubLayerChangeType * >(rhs);
}

inline void to_c(
    pxr_SdfChangeList_SubLayerChangeType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList::SubLayerChangeType const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeList_SubLayerChangeType const * >(&(rhs));
}

inline void to_c(
    pxr_SdfChangeList_SubLayerChangeType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList::SubLayerChangeType const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeList_SubLayerChangeType const * >(rhs);
}

inline void to_c(
    pxr_SdfChangeList_SubLayerChangeType * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList::SubLayerChangeType & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeList_SubLayerChangeType * >(&(rhs));
}

inline void to_c(
    pxr_SdfChangeList_SubLayerChangeType * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList::SubLayerChangeType * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeList_SubLayerChangeType * >(rhs);
}

inline void to_c_copy(
    pxr_SdfChangeList_SubLayerChangeType * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList::SubLayerChangeType const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeList const & to_cpp_ref(
    pxr_SdfChangeList_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeList const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeList & to_cpp_ref(
    pxr_SdfChangeList_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeList * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeList const * to_cpp(
    pxr_SdfChangeList_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeList const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeList * to_cpp(
    pxr_SdfChangeList_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeList * >(rhs);
}

inline void to_c(
    pxr_SdfChangeList_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeList_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfChangeList_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeList_t const * >(rhs);
}

inline void to_c(
    pxr_SdfChangeList_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeList_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfChangeList_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeList_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfChangeList_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfChangeList_copy(lhs, reinterpret_cast<pxr_SdfChangeList_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry const & to_cpp_ref(
    pxr_SdfChangeList_Entry_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry & to_cpp_ref(
    pxr_SdfChangeList_Entry_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry const * to_cpp(
    pxr_SdfChangeList_Entry_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry * to_cpp(
    pxr_SdfChangeList_Entry_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry * >(rhs);
}

inline void to_c(
    pxr_SdfChangeList_Entry_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeList_Entry_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfChangeList_Entry_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeList_Entry_t const * >(rhs);
}

inline void to_c(
    pxr_SdfChangeList_Entry_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeList_Entry_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfChangeList_Entry_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfChangeList_Entry_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfChangeList_Entry_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfChangeList__Entry_copy(lhs, reinterpret_cast<pxr_SdfChangeList_Entry_t const * >(&(rhs)));
}

