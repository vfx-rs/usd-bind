#pragma once
#include <pxr/usd/sdf/sdf_schema.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/js/value.h>
#include <pxr/usd/sdf/schema.h>

inline pxrInternal_v0_21__pxrReserved__::SdfSchemaBase const & to_cpp_ref(
    pxr_SdfSchemaBase_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchemaBase const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchemaBase & to_cpp_ref(
    pxr_SdfSchemaBase_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchemaBase * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchemaBase const * to_cpp(
    pxr_SdfSchemaBase_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchemaBase const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchemaBase * to_cpp(
    pxr_SdfSchemaBase_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchemaBase * >(rhs);
}

inline void to_c(
    pxr_SdfSchemaBase_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchemaBase_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfSchemaBase_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchemaBase_t const * >(rhs);
}

inline void to_c(
    pxr_SdfSchemaBase_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchemaBase_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfSchemaBase_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchemaBase_t * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition const & to_cpp_ref(
    pxr_SdfSchemaBase_FieldDefinition_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition & to_cpp_ref(
    pxr_SdfSchemaBase_FieldDefinition_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition const * to_cpp(
    pxr_SdfSchemaBase_FieldDefinition_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition * to_cpp(
    pxr_SdfSchemaBase_FieldDefinition_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition * >(rhs);
}

inline void to_c(
    pxr_SdfSchemaBase_FieldDefinition_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchemaBase_FieldDefinition_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfSchemaBase_FieldDefinition_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchemaBase_FieldDefinition_t const * >(rhs);
}

inline void to_c(
    pxr_SdfSchemaBase_FieldDefinition_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchemaBase_FieldDefinition_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfSchemaBase_FieldDefinition_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchemaBase_FieldDefinition_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfSchemaBase_FieldDefinition_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::FieldDefinition const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfSchemaBase__FieldDefinition_copy(lhs, reinterpret_cast<pxr_SdfSchemaBase_FieldDefinition_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition const & to_cpp_ref(
    pxr_SdfSchemaBase_SpecDefinition_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition & to_cpp_ref(
    pxr_SdfSchemaBase_SpecDefinition_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition const * to_cpp(
    pxr_SdfSchemaBase_SpecDefinition_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition * to_cpp(
    pxr_SdfSchemaBase_SpecDefinition_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition * >(rhs);
}

inline void to_c(
    pxr_SdfSchemaBase_SpecDefinition_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchemaBase_SpecDefinition_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfSchemaBase_SpecDefinition_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchemaBase_SpecDefinition_t const * >(rhs);
}

inline void to_c(
    pxr_SdfSchemaBase_SpecDefinition_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchemaBase_SpecDefinition_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfSchemaBase_SpecDefinition_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchemaBase_SpecDefinition_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfSchemaBase_SpecDefinition_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchemaBase::SpecDefinition const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfSchemaBase__SpecDefinition_copy(lhs, reinterpret_cast<pxr_SdfSchemaBase_SpecDefinition_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchema const & to_cpp_ref(
    pxr_SdfSchema_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchema const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchema & to_cpp_ref(
    pxr_SdfSchema_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchema * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchema const * to_cpp(
    pxr_SdfSchema_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchema const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfSchema * to_cpp(
    pxr_SdfSchema_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSchema * >(rhs);
}

inline void to_c(
    pxr_SdfSchema_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchema const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchema_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfSchema_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchema const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchema_t const * >(rhs);
}

inline void to_c(
    pxr_SdfSchema_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchema & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchema_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfSchema_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSchema * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSchema_t * >(rhs);
}

