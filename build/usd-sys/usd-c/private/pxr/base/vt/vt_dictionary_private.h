#pragma once
#include <pxr/base/vt/vt_dictionary.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/vt/dictionary.h>

inline pxrInternal_v0_21__pxrReserved__::VtDictionary const & to_cpp_ref(
    pxr_VtDictionary_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtDictionary const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtDictionary & to_cpp_ref(
    pxr_VtDictionary_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtDictionary * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtDictionary const * to_cpp(
    pxr_VtDictionary_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtDictionary const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtDictionary * to_cpp(
    pxr_VtDictionary_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtDictionary * >(rhs);
}

inline void to_c(
    pxr_VtDictionary_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtDictionary const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtDictionary_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtDictionary_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtDictionary const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtDictionary_t const * >(rhs);
}

inline void to_c(
    pxr_VtDictionary_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtDictionary & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtDictionary_t * >(&(rhs));
}

inline void to_c(
    pxr_VtDictionary_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtDictionary * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtDictionary_t * >(rhs);
}

inline void to_c_move(
    pxr_VtDictionary_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtDictionary * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtDictionary(std::move(*(rhs)));
}

