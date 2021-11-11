#pragma once
#include <pxr/usd/usd/usd_prim_range.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/usd/primRange.h>

inline pxrInternal_v0_21__pxrReserved__::UsdPrimRange const & to_cpp_ref(
    pxr_UsdPrimRange_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrimRange const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrimRange & to_cpp_ref(
    pxr_UsdPrimRange_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrimRange * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrimRange const * to_cpp(
    pxr_UsdPrimRange_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrimRange const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrimRange * to_cpp(
    pxr_UsdPrimRange_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrimRange * >(rhs);
}

inline void to_c(
    pxr_UsdPrimRange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrimRange_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdPrimRange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrimRange_t const * >(rhs);
}

inline void to_c(
    pxr_UsdPrimRange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrimRange_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdPrimRange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrimRange_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdPrimRange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange const & rhs)
{
        pxrInternal_v0_21__pxrReserved____UsdPrimRange_copy(lhs, reinterpret_cast<pxr_UsdPrimRange_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator const & to_cpp_ref(
    pxr_UsdPrimRange_iterator_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator & to_cpp_ref(
    pxr_UsdPrimRange_iterator_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator const * to_cpp(
    pxr_UsdPrimRange_iterator_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator * to_cpp(
    pxr_UsdPrimRange_iterator_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator * >(rhs);
}

inline void to_c(
    pxr_UsdPrimRange_iterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrimRange_iterator_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdPrimRange_iterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrimRange_iterator_t const * >(rhs);
}

inline void to_c(
    pxr_UsdPrimRange_iterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrimRange_iterator_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdPrimRange_iterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrimRange_iterator_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdPrimRange_iterator_t * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator const & rhs)
{
        pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_copy(lhs, reinterpret_cast<pxr_UsdPrimRange_iterator_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel const & to_cpp_ref(
    pxr_UsdPrimRange_EndSentinel_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel & to_cpp_ref(
    pxr_UsdPrimRange_EndSentinel_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel const * to_cpp(
    pxr_UsdPrimRange_EndSentinel_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel * to_cpp(
    pxr_UsdPrimRange_EndSentinel_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel * >(rhs);
}

inline void to_c(
    pxr_UsdPrimRange_EndSentinel_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrimRange_EndSentinel_t const * >(&(rhs));
}

inline void to_c(
    pxr_UsdPrimRange_EndSentinel_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrimRange_EndSentinel_t const * >(rhs);
}

inline void to_c(
    pxr_UsdPrimRange_EndSentinel_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel & rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrimRange_EndSentinel_t * >(&(rhs));
}

inline void to_c(
    pxr_UsdPrimRange_EndSentinel_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel * rhs)
{
        *(lhs) = reinterpret_cast<pxr_UsdPrimRange_EndSentinel_t * >(rhs);
}

inline void to_c_copy(
    pxr_UsdPrimRange_EndSentinel_t * lhs
    , pxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel const & rhs)
{
        pxrInternal_v0_21__pxrReserved____UsdPrimRange__EndSentinel_copy(lhs, reinterpret_cast<pxr_UsdPrimRange_EndSentinel_t const * >(&(rhs)));
}

