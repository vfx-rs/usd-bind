#pragma once
#include <pxr/usd/sdf/sdf_identity.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/identity.h>

inline pxrInternal_v0_21__pxrReserved__::Sdf_Identity const & to_cpp_ref(
    pxr_Sdf_Identity_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_Identity const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_Identity & to_cpp_ref(
    pxr_Sdf_Identity_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_Identity * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_Identity const * to_cpp(
    pxr_Sdf_Identity_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_Identity const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_Identity * to_cpp(
    pxr_Sdf_Identity_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_Identity * >(rhs);
}

inline void to_c(
    pxr_Sdf_Identity_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_Identity const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_Identity_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_Identity_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_Identity const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_Identity_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_Identity_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_Identity & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_Identity_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_Identity_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_Identity * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_Identity_t * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_IdentityRegistry const & to_cpp_ref(
    pxr_Sdf_IdentityRegistry_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_IdentityRegistry const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_IdentityRegistry & to_cpp_ref(
    pxr_Sdf_IdentityRegistry_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_IdentityRegistry * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_IdentityRegistry const * to_cpp(
    pxr_Sdf_IdentityRegistry_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_IdentityRegistry const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_IdentityRegistry * to_cpp(
    pxr_Sdf_IdentityRegistry_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_IdentityRegistry * >(rhs);
}

inline void to_c(
    pxr_Sdf_IdentityRegistry_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_IdentityRegistry const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_IdentityRegistry_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_IdentityRegistry_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_IdentityRegistry const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_IdentityRegistry_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_IdentityRegistry_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_IdentityRegistry & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_IdentityRegistry_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_IdentityRegistry_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_IdentityRegistry * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_IdentityRegistry_t * >(rhs);
}

