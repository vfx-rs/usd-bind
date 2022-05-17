#pragma once
#include <pxr/usd/sdf/sdf_relationship_spec.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/relationshipSpec.h>

inline pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec const & to_cpp_ref(
    pxr_SdfRelationshipSpec_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec & to_cpp_ref(
    pxr_SdfRelationshipSpec_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec const * to_cpp(
    pxr_SdfRelationshipSpec_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec * to_cpp(
    pxr_SdfRelationshipSpec_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec * >(rhs);
}

inline void to_c(
    pxr_SdfRelationshipSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfRelationshipSpec_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfRelationshipSpec_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfRelationshipSpec_t const * >(rhs);
}

inline void to_c(
    pxr_SdfRelationshipSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfRelationshipSpec_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfRelationshipSpec_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfRelationshipSpec * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfRelationshipSpec_t * >(rhs);
}

