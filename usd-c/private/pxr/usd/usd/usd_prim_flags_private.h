#pragma once
#include <pxr/usd/usd/usd_prim_flags.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/usd/primFlags.h>

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlags const & pxr_Usd_PrimFlags_to_cpp_ref(
    pxr_Usd_PrimFlags const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlags const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlags & pxr_Usd_PrimFlags_to_cpp_ref(
    pxr_Usd_PrimFlags * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlags * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlags const * pxr_Usd_PrimFlags_to_cpp(
    pxr_Usd_PrimFlags const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlags const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlags * pxr_Usd_PrimFlags_to_cpp(
    pxr_Usd_PrimFlags * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlags * >(rhs);
}

inline void to_c(
    pxr_Usd_PrimFlags const * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlags const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlags const * >(&(rhs));
}

inline void to_c(
    pxr_Usd_PrimFlags const * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlags const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlags const * >(rhs);
}

inline void to_c(
    pxr_Usd_PrimFlags * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlags & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlags * >(&(rhs));
}

inline void to_c(
    pxr_Usd_PrimFlags * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlags * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlags * >(rhs);
}

inline void to_c_copy(
    pxr_Usd_PrimFlags * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlags const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_Term const & to_cpp_ref(
    pxr_Usd_Term_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_Term const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_Term & to_cpp_ref(
    pxr_Usd_Term_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_Term * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_Term const * to_cpp(
    pxr_Usd_Term_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_Term const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::Usd_Term * to_cpp(
    pxr_Usd_Term_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_Term * >(rhs);
}

inline void to_c(
    pxr_Usd_Term_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_Term const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_Term_t const * >(&(rhs));
}

inline void to_c(
    pxr_Usd_Term_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_Term const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_Term_t const * >(rhs);
}

inline void to_c(
    pxr_Usd_Term_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_Term & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_Term_t * >(&(rhs));
}

inline void to_c(
    pxr_Usd_Term_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_Term * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_Term_t * >(rhs);
}

inline void to_c_copy(
    pxr_Usd_Term_t * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_Term const & rhs)
{
        pxrInternal_v0_20__pxrReserved____Usd_Term_copy(lhs, reinterpret_cast<pxr_Usd_Term_t const * >(&(rhs)));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate const & to_cpp_ref(
    pxr_Usd_PrimFlagsPredicate_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate & to_cpp_ref(
    pxr_Usd_PrimFlagsPredicate_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate const * to_cpp(
    pxr_Usd_PrimFlagsPredicate_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate * to_cpp(
    pxr_Usd_PrimFlagsPredicate_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate * >(rhs);
}

inline void to_c(
    pxr_Usd_PrimFlagsPredicate_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlagsPredicate_t const * >(&(rhs));
}

inline void to_c(
    pxr_Usd_PrimFlagsPredicate_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlagsPredicate_t const * >(rhs);
}

inline void to_c(
    pxr_Usd_PrimFlagsPredicate_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlagsPredicate_t * >(&(rhs));
}

inline void to_c(
    pxr_Usd_PrimFlagsPredicate_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlagsPredicate_t * >(rhs);
}

inline void to_c_copy(
    pxr_Usd_PrimFlagsPredicate_t * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate const & rhs)
{
        pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_copy(lhs, reinterpret_cast<pxr_Usd_PrimFlagsPredicate_t const * >(&(rhs)));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction const & to_cpp_ref(
    pxr_Usd_PrimFlagsConjunction_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction & to_cpp_ref(
    pxr_Usd_PrimFlagsConjunction_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction const * to_cpp(
    pxr_Usd_PrimFlagsConjunction_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction * to_cpp(
    pxr_Usd_PrimFlagsConjunction_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction * >(rhs);
}

inline void to_c(
    pxr_Usd_PrimFlagsConjunction_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlagsConjunction_t const * >(&(rhs));
}

inline void to_c(
    pxr_Usd_PrimFlagsConjunction_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlagsConjunction_t const * >(rhs);
}

inline void to_c(
    pxr_Usd_PrimFlagsConjunction_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlagsConjunction_t * >(&(rhs));
}

inline void to_c(
    pxr_Usd_PrimFlagsConjunction_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlagsConjunction_t * >(rhs);
}

inline void to_c_copy(
    pxr_Usd_PrimFlagsConjunction_t * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction const & rhs)
{
        pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_copy(lhs, reinterpret_cast<pxr_Usd_PrimFlagsConjunction_t const * >(&(rhs)));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction const & to_cpp_ref(
    pxr_Usd_PrimFlagsDisjunction_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction & to_cpp_ref(
    pxr_Usd_PrimFlagsDisjunction_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction const * to_cpp(
    pxr_Usd_PrimFlagsDisjunction_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction * to_cpp(
    pxr_Usd_PrimFlagsDisjunction_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction * >(rhs);
}

inline void to_c(
    pxr_Usd_PrimFlagsDisjunction_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlagsDisjunction_t const * >(&(rhs));
}

inline void to_c(
    pxr_Usd_PrimFlagsDisjunction_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlagsDisjunction_t const * >(rhs);
}

inline void to_c(
    pxr_Usd_PrimFlagsDisjunction_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlagsDisjunction_t * >(&(rhs));
}

inline void to_c(
    pxr_Usd_PrimFlagsDisjunction_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Usd_PrimFlagsDisjunction_t * >(rhs);
}

inline void to_c_copy(
    pxr_Usd_PrimFlagsDisjunction_t * lhs
    , pxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction const & rhs)
{
        pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_copy(lhs, reinterpret_cast<pxr_Usd_PrimFlagsDisjunction_t const * >(&(rhs)));
}

