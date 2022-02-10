#pragma once
#include <pxr/usd/sdf/sdf_reference.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/reference.h>

inline pxrInternal_v0_21__pxrReserved__::SdfReference const & to_cpp_ref(
    pxr_SdfReference_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference & to_cpp_ref(
    pxr_SdfReference_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference const * to_cpp(
    pxr_SdfReference_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference * to_cpp(
    pxr_SdfReference_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference * >(rhs);
}

inline void to_c(
    pxr_SdfReference_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfReference_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_t const * >(rhs);
}

inline void to_c(
    pxr_SdfReference_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfReference_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfReference_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfReference_copy(lhs, reinterpret_cast<pxr_SdfReference_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityEqual const & to_cpp_ref(
    pxr_SdfReference_IdentityEqual_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityEqual const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityEqual & to_cpp_ref(
    pxr_SdfReference_IdentityEqual_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityEqual * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityEqual const * to_cpp(
    pxr_SdfReference_IdentityEqual_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityEqual const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityEqual * to_cpp(
    pxr_SdfReference_IdentityEqual_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityEqual * >(rhs);
}

inline void to_c(
    pxr_SdfReference_IdentityEqual_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityEqual const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_IdentityEqual_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfReference_IdentityEqual_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityEqual const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_IdentityEqual_t const * >(rhs);
}

inline void to_c(
    pxr_SdfReference_IdentityEqual_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityEqual & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_IdentityEqual_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfReference_IdentityEqual_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityEqual * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_IdentityEqual_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfReference_IdentityEqual_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityEqual const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityLessThan const & to_cpp_ref(
    pxr_SdfReference_IdentityLessThan_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityLessThan const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityLessThan & to_cpp_ref(
    pxr_SdfReference_IdentityLessThan_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityLessThan * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityLessThan const * to_cpp(
    pxr_SdfReference_IdentityLessThan_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityLessThan const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityLessThan * to_cpp(
    pxr_SdfReference_IdentityLessThan_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityLessThan * >(rhs);
}

inline void to_c(
    pxr_SdfReference_IdentityLessThan_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityLessThan const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_IdentityLessThan_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfReference_IdentityLessThan_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityLessThan const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_IdentityLessThan_t const * >(rhs);
}

inline void to_c(
    pxr_SdfReference_IdentityLessThan_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityLessThan & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_IdentityLessThan_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfReference_IdentityLessThan_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityLessThan * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfReference_IdentityLessThan_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfReference_IdentityLessThan_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfReference::IdentityLessThan const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

