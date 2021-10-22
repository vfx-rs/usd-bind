#pragma once
#include <pxr/base/tf/tf_token.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/tf/token.h>

inline pxrInternal_v0_20__pxrReserved__::TfToken::_ImmortalTag const & pxr_TfToken__ImmortalTag_to_cpp_ref(
    pxr_TfToken__ImmortalTag const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfToken::_ImmortalTag const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::TfToken::_ImmortalTag & pxr_TfToken__ImmortalTag_to_cpp_ref(
    pxr_TfToken__ImmortalTag * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfToken::_ImmortalTag * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::TfToken::_ImmortalTag const * pxr_TfToken__ImmortalTag_to_cpp(
    pxr_TfToken__ImmortalTag const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfToken::_ImmortalTag const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::TfToken::_ImmortalTag * pxr_TfToken__ImmortalTag_to_cpp(
    pxr_TfToken__ImmortalTag * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfToken::_ImmortalTag * >(rhs);
}

inline void to_c(
    pxr_TfToken__ImmortalTag const * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfToken::_ImmortalTag const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfToken__ImmortalTag const * >(&(rhs));
}

inline void to_c(
    pxr_TfToken__ImmortalTag const * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfToken::_ImmortalTag const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfToken__ImmortalTag const * >(rhs);
}

inline void to_c(
    pxr_TfToken__ImmortalTag * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfToken::_ImmortalTag & rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfToken__ImmortalTag * >(&(rhs));
}

inline void to_c(
    pxr_TfToken__ImmortalTag * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfToken::_ImmortalTag * rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfToken__ImmortalTag * >(rhs);
}

inline void to_c_copy(
    pxr_TfToken__ImmortalTag * lhs
    , pxrInternal_v0_20__pxrReserved__::TfToken::_ImmortalTag const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::TfToken const & to_cpp_ref(
    pxr_TfToken_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfToken const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::TfToken & to_cpp_ref(
    pxr_TfToken_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfToken * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::TfToken const * to_cpp(
    pxr_TfToken_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfToken const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::TfToken * to_cpp(
    pxr_TfToken_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::TfToken * >(rhs);
}

inline void to_c(
    pxr_TfToken_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfToken const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfToken_t const * >(&(rhs));
}

inline void to_c(
    pxr_TfToken_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfToken const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfToken_t const * >(rhs);
}

inline void to_c(
    pxr_TfToken_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfToken & rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfToken_t * >(&(rhs));
}

inline void to_c(
    pxr_TfToken_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::TfToken * rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfToken_t * >(rhs);
}

inline void to_c_copy(
    pxr_TfToken_t * lhs
    , pxrInternal_v0_20__pxrReserved__::TfToken const & rhs)
{
        pxrInternal_v0_20__pxrReserved____TfToken_copy(lhs, reinterpret_cast<pxr_TfToken_t const * >(&(rhs)));
}

