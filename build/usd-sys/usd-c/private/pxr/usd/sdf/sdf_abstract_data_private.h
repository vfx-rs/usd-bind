#pragma once
#include <pxr/usd/sdf/sdf_abstract_data.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/abstractData.h>

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractData const & to_cpp_ref(
    pxr_SdfAbstractData_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractData const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractData & to_cpp_ref(
    pxr_SdfAbstractData_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractData * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractData const * to_cpp(
    pxr_SdfAbstractData_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractData const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractData * to_cpp(
    pxr_SdfAbstractData_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractData * >(rhs);
}

inline void to_c(
    pxr_SdfAbstractData_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractData const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractData_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfAbstractData_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractData const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractData_t const * >(rhs);
}

inline void to_c(
    pxr_SdfAbstractData_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractData & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractData_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfAbstractData_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractData * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractData_t * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractDataSpecVisitor const & to_cpp_ref(
    pxr_SdfAbstractDataSpecVisitor_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractDataSpecVisitor const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractDataSpecVisitor & to_cpp_ref(
    pxr_SdfAbstractDataSpecVisitor_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractDataSpecVisitor * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractDataSpecVisitor const * to_cpp(
    pxr_SdfAbstractDataSpecVisitor_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractDataSpecVisitor const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractDataSpecVisitor * to_cpp(
    pxr_SdfAbstractDataSpecVisitor_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractDataSpecVisitor * >(rhs);
}

inline void to_c(
    pxr_SdfAbstractDataSpecVisitor_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataSpecVisitor const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractDataSpecVisitor_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfAbstractDataSpecVisitor_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataSpecVisitor const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractDataSpecVisitor_t const * >(rhs);
}

inline void to_c(
    pxr_SdfAbstractDataSpecVisitor_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataSpecVisitor & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractDataSpecVisitor_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfAbstractDataSpecVisitor_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataSpecVisitor * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractDataSpecVisitor_t * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue const & to_cpp_ref(
    pxr_SdfAbstractDataConstValue_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue & to_cpp_ref(
    pxr_SdfAbstractDataConstValue_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue const * to_cpp(
    pxr_SdfAbstractDataConstValue_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue * to_cpp(
    pxr_SdfAbstractDataConstValue_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue * >(rhs);
}

inline void to_c(
    pxr_SdfAbstractDataConstValue_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractDataConstValue_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfAbstractDataConstValue_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractDataConstValue_t const * >(rhs);
}

inline void to_c(
    pxr_SdfAbstractDataConstValue_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractDataConstValue_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfAbstractDataConstValue_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractDataConstValue_t * >(rhs);
}

inline void to_c_move(
    pxr_SdfAbstractDataConstValue_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::SdfAbstractDataConstValue(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue const & to_cpp_ref(
    pxr_SdfAbstractDataValue_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue & to_cpp_ref(
    pxr_SdfAbstractDataValue_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue const * to_cpp(
    pxr_SdfAbstractDataValue_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue * to_cpp(
    pxr_SdfAbstractDataValue_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue * >(rhs);
}

inline void to_c(
    pxr_SdfAbstractDataValue_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractDataValue_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfAbstractDataValue_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractDataValue_t const * >(rhs);
}

inline void to_c(
    pxr_SdfAbstractDataValue_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractDataValue_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfAbstractDataValue_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAbstractDataValue_t * >(rhs);
}

inline void to_c_move(
    pxr_SdfAbstractDataValue_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::SdfAbstractDataValue(std::move(*(rhs)));
}

