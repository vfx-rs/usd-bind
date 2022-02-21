#pragma once
#include <pxr/usd/sdf/sdf_children_policies.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/childrenPolicies.h>

inline pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy const & to_cpp_ref(
    pxr_Sdf_PrimChildPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy & to_cpp_ref(
    pxr_Sdf_PrimChildPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy const * to_cpp(
    pxr_Sdf_PrimChildPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy * to_cpp(
    pxr_Sdf_PrimChildPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy * >(rhs);
}

inline void to_c(
    pxr_Sdf_PrimChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_PrimChildPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_PrimChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_PrimChildPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_PrimChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_PrimChildPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_PrimChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_PrimChildPolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_PrimChildPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PrimChildPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy const & to_cpp_ref(
    pxr_Sdf_PropertyChildPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy & to_cpp_ref(
    pxr_Sdf_PropertyChildPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy const * to_cpp(
    pxr_Sdf_PropertyChildPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy * to_cpp(
    pxr_Sdf_PropertyChildPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy * >(rhs);
}

inline void to_c(
    pxr_Sdf_PropertyChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_PropertyChildPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_PropertyChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_PropertyChildPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_PropertyChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_PropertyChildPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_PropertyChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_PropertyChildPolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_PropertyChildPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PropertyChildPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy const & to_cpp_ref(
    pxr_Sdf_AttributeChildPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy & to_cpp_ref(
    pxr_Sdf_AttributeChildPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy const * to_cpp(
    pxr_Sdf_AttributeChildPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy * to_cpp(
    pxr_Sdf_AttributeChildPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy * >(rhs);
}

inline void to_c(
    pxr_Sdf_AttributeChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_AttributeChildPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_AttributeChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_AttributeChildPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_AttributeChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_AttributeChildPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_AttributeChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_AttributeChildPolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_AttributeChildPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_AttributeChildPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy const & to_cpp_ref(
    pxr_Sdf_RelationshipChildPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy & to_cpp_ref(
    pxr_Sdf_RelationshipChildPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy const * to_cpp(
    pxr_Sdf_RelationshipChildPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy * to_cpp(
    pxr_Sdf_RelationshipChildPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy * >(rhs);
}

inline void to_c(
    pxr_Sdf_RelationshipChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_RelationshipChildPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_RelationshipChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_RelationshipChildPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_RelationshipChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_RelationshipChildPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_RelationshipChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_RelationshipChildPolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_RelationshipChildPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipChildPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy const & to_cpp_ref(
    pxr_Sdf_MapperArgChildPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy & to_cpp_ref(
    pxr_Sdf_MapperArgChildPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy const * to_cpp(
    pxr_Sdf_MapperArgChildPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy * to_cpp(
    pxr_Sdf_MapperArgChildPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy * >(rhs);
}

inline void to_c(
    pxr_Sdf_MapperArgChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_MapperArgChildPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_MapperArgChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_MapperArgChildPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_MapperArgChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_MapperArgChildPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_MapperArgChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_MapperArgChildPolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_MapperArgChildPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_MapperArgChildPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy const & to_cpp_ref(
    pxr_Sdf_ExpressionChildPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy & to_cpp_ref(
    pxr_Sdf_ExpressionChildPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy const * to_cpp(
    pxr_Sdf_ExpressionChildPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy * to_cpp(
    pxr_Sdf_ExpressionChildPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy * >(rhs);
}

inline void to_c(
    pxr_Sdf_ExpressionChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_ExpressionChildPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_ExpressionChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_ExpressionChildPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_ExpressionChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_ExpressionChildPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_ExpressionChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_ExpressionChildPolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_ExpressionChildPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_ExpressionChildPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy const & to_cpp_ref(
    pxr_Sdf_VariantChildPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy & to_cpp_ref(
    pxr_Sdf_VariantChildPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy const * to_cpp(
    pxr_Sdf_VariantChildPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy * to_cpp(
    pxr_Sdf_VariantChildPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy * >(rhs);
}

inline void to_c(
    pxr_Sdf_VariantChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_VariantChildPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_VariantChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_VariantChildPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_VariantChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_VariantChildPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_VariantChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_VariantChildPolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_VariantChildPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_VariantChildPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy const & to_cpp_ref(
    pxr_Sdf_VariantSetChildPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy & to_cpp_ref(
    pxr_Sdf_VariantSetChildPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy const * to_cpp(
    pxr_Sdf_VariantSetChildPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy * to_cpp(
    pxr_Sdf_VariantSetChildPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy * >(rhs);
}

inline void to_c(
    pxr_Sdf_VariantSetChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_VariantSetChildPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_VariantSetChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_VariantSetChildPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_VariantSetChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_VariantSetChildPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_VariantSetChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_VariantSetChildPolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_VariantSetChildPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_VariantSetChildPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy const & to_cpp_ref(
    pxr_Sdf_MapperChildPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy & to_cpp_ref(
    pxr_Sdf_MapperChildPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy const * to_cpp(
    pxr_Sdf_MapperChildPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy * to_cpp(
    pxr_Sdf_MapperChildPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy * >(rhs);
}

inline void to_c(
    pxr_Sdf_MapperChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_MapperChildPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_MapperChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_MapperChildPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_MapperChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_MapperChildPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_MapperChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_MapperChildPolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_MapperChildPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_MapperChildPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy const & to_cpp_ref(
    pxr_Sdf_AttributeConnectionChildPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy & to_cpp_ref(
    pxr_Sdf_AttributeConnectionChildPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy const * to_cpp(
    pxr_Sdf_AttributeConnectionChildPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy * to_cpp(
    pxr_Sdf_AttributeConnectionChildPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy * >(rhs);
}

inline void to_c(
    pxr_Sdf_AttributeConnectionChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_AttributeConnectionChildPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_AttributeConnectionChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_AttributeConnectionChildPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_AttributeConnectionChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_AttributeConnectionChildPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_AttributeConnectionChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_AttributeConnectionChildPolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_AttributeConnectionChildPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_AttributeConnectionChildPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy const & to_cpp_ref(
    pxr_Sdf_RelationshipTargetChildPolicy_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy & to_cpp_ref(
    pxr_Sdf_RelationshipTargetChildPolicy_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy const * to_cpp(
    pxr_Sdf_RelationshipTargetChildPolicy_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy * to_cpp(
    pxr_Sdf_RelationshipTargetChildPolicy_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy * >(rhs);
}

inline void to_c(
    pxr_Sdf_RelationshipTargetChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_RelationshipTargetChildPolicy_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_RelationshipTargetChildPolicy_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_RelationshipTargetChildPolicy_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_RelationshipTargetChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_RelationshipTargetChildPolicy_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_RelationshipTargetChildPolicy_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_RelationshipTargetChildPolicy_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_RelationshipTargetChildPolicy_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_RelationshipTargetChildPolicy const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

