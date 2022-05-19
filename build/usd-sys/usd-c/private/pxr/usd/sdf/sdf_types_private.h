#pragma once
#include <pxr/usd/sdf/sdf_types.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/types.h>

inline pxrInternal_v0_21__pxrReserved__::SdfSpecType const & pxr_SdfSpecType_to_cpp_ref(
    pxr_SdfSpecType const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpecType const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSpecType & pxr_SdfSpecType_to_cpp_ref(
    pxr_SdfSpecType * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpecType * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSpecType const * pxr_SdfSpecType_to_cpp(
    pxr_SdfSpecType const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpecType const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfSpecType * pxr_SdfSpecType_to_cpp(
    pxr_SdfSpecType * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpecType * >(rhs);
}

inline void to_c(
    pxr_SdfSpecType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecType const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpecType const * >(&(rhs));
}

inline void to_c(
    pxr_SdfSpecType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecType const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpecType const * >(rhs);
}

inline void to_c(
    pxr_SdfSpecType * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecType & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpecType * >(&(rhs));
}

inline void to_c(
    pxr_SdfSpecType * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecType * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpecType * >(rhs);
}

inline void to_c_copy(
    pxr_SdfSpecType * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecType const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSpecifier const & pxr_SdfSpecifier_to_cpp_ref(
    pxr_SdfSpecifier const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpecifier const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSpecifier & pxr_SdfSpecifier_to_cpp_ref(
    pxr_SdfSpecifier * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpecifier * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfSpecifier const * pxr_SdfSpecifier_to_cpp(
    pxr_SdfSpecifier const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpecifier const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfSpecifier * pxr_SdfSpecifier_to_cpp(
    pxr_SdfSpecifier * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfSpecifier * >(rhs);
}

inline void to_c(
    pxr_SdfSpecifier const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecifier const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpecifier const * >(&(rhs));
}

inline void to_c(
    pxr_SdfSpecifier const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecifier const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpecifier const * >(rhs);
}

inline void to_c(
    pxr_SdfSpecifier * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecifier & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpecifier * >(&(rhs));
}

inline void to_c(
    pxr_SdfSpecifier * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecifier * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfSpecifier * >(rhs);
}

inline void to_c_copy(
    pxr_SdfSpecifier * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfSpecifier const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPermission const & pxr_SdfPermission_to_cpp_ref(
    pxr_SdfPermission const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPermission const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPermission & pxr_SdfPermission_to_cpp_ref(
    pxr_SdfPermission * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPermission * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPermission const * pxr_SdfPermission_to_cpp(
    pxr_SdfPermission const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPermission const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfPermission * pxr_SdfPermission_to_cpp(
    pxr_SdfPermission * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPermission * >(rhs);
}

inline void to_c(
    pxr_SdfPermission const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPermission const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPermission const * >(&(rhs));
}

inline void to_c(
    pxr_SdfPermission const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPermission const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPermission const * >(rhs);
}

inline void to_c(
    pxr_SdfPermission * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPermission & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPermission * >(&(rhs));
}

inline void to_c(
    pxr_SdfPermission * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPermission * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPermission * >(rhs);
}

inline void to_c_copy(
    pxr_SdfPermission * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPermission const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfVariability const & pxr_SdfVariability_to_cpp_ref(
    pxr_SdfVariability const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfVariability const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfVariability & pxr_SdfVariability_to_cpp_ref(
    pxr_SdfVariability * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfVariability * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfVariability const * pxr_SdfVariability_to_cpp(
    pxr_SdfVariability const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfVariability const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfVariability * pxr_SdfVariability_to_cpp(
    pxr_SdfVariability * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfVariability * >(rhs);
}

inline void to_c(
    pxr_SdfVariability const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariability const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfVariability const * >(&(rhs));
}

inline void to_c(
    pxr_SdfVariability const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariability const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfVariability const * >(rhs);
}

inline void to_c(
    pxr_SdfVariability * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariability & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfVariability * >(&(rhs));
}

inline void to_c(
    pxr_SdfVariability * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariability * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfVariability * >(rhs);
}

inline void to_c_copy(
    pxr_SdfVariability * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfVariability const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAuthoringError const & pxr_SdfAuthoringError_to_cpp_ref(
    pxr_SdfAuthoringError const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAuthoringError const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAuthoringError & pxr_SdfAuthoringError_to_cpp_ref(
    pxr_SdfAuthoringError * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAuthoringError * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfAuthoringError const * pxr_SdfAuthoringError_to_cpp(
    pxr_SdfAuthoringError const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAuthoringError const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfAuthoringError * pxr_SdfAuthoringError_to_cpp(
    pxr_SdfAuthoringError * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfAuthoringError * >(rhs);
}

inline void to_c(
    pxr_SdfAuthoringError const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAuthoringError const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAuthoringError const * >(&(rhs));
}

inline void to_c(
    pxr_SdfAuthoringError const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAuthoringError const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAuthoringError const * >(rhs);
}

inline void to_c(
    pxr_SdfAuthoringError * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAuthoringError & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAuthoringError * >(&(rhs));
}

inline void to_c(
    pxr_SdfAuthoringError * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAuthoringError * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfAuthoringError * >(rhs);
}

inline void to_c_copy(
    pxr_SdfAuthoringError * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfAuthoringError const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue const & to_cpp_ref(
    pxr_SdfUnregisteredValue_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue & to_cpp_ref(
    pxr_SdfUnregisteredValue_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue const * to_cpp(
    pxr_SdfUnregisteredValue_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue * to_cpp(
    pxr_SdfUnregisteredValue_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue * >(rhs);
}

inline void to_c(
    pxr_SdfUnregisteredValue_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfUnregisteredValue_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfUnregisteredValue_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfUnregisteredValue_t const * >(rhs);
}

inline void to_c(
    pxr_SdfUnregisteredValue_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfUnregisteredValue_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfUnregisteredValue_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfUnregisteredValue_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfUnregisteredValue_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfUnregisteredValue const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfUnregisteredValue_copy(lhs, reinterpret_cast<pxr_SdfUnregisteredValue_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_ValueTypeNamesType const & to_cpp_ref(
    pxr_Sdf_ValueTypeNamesType_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_ValueTypeNamesType const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_ValueTypeNamesType & to_cpp_ref(
    pxr_Sdf_ValueTypeNamesType_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_ValueTypeNamesType * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_ValueTypeNamesType const * to_cpp(
    pxr_Sdf_ValueTypeNamesType_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_ValueTypeNamesType const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_ValueTypeNamesType * to_cpp(
    pxr_Sdf_ValueTypeNamesType_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_ValueTypeNamesType * >(rhs);
}

inline void to_c(
    pxr_Sdf_ValueTypeNamesType_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_ValueTypeNamesType const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_ValueTypeNamesType_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_ValueTypeNamesType_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_ValueTypeNamesType const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_ValueTypeNamesType_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_ValueTypeNamesType_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_ValueTypeNamesType & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_ValueTypeNamesType_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_ValueTypeNamesType_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_ValueTypeNamesType * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_ValueTypeNamesType_t * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfValueBlock const & to_cpp_ref(
    pxr_SdfValueBlock_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfValueBlock const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfValueBlock & to_cpp_ref(
    pxr_SdfValueBlock_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfValueBlock * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfValueBlock const * to_cpp(
    pxr_SdfValueBlock_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfValueBlock const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfValueBlock * to_cpp(
    pxr_SdfValueBlock_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfValueBlock * >(rhs);
}

inline void to_c(
    pxr_SdfValueBlock_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfValueBlock const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfValueBlock_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfValueBlock_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfValueBlock const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfValueBlock_t const * >(rhs);
}

inline void to_c(
    pxr_SdfValueBlock_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfValueBlock & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfValueBlock_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfValueBlock_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfValueBlock * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfValueBlock_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfValueBlock_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfValueBlock const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue const & to_cpp_ref(
    pxr_SdfHumanReadableValue_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue & to_cpp_ref(
    pxr_SdfHumanReadableValue_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue const * to_cpp(
    pxr_SdfHumanReadableValue_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue * to_cpp(
    pxr_SdfHumanReadableValue_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue * >(rhs);
}

inline void to_c(
    pxr_SdfHumanReadableValue_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfHumanReadableValue_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfHumanReadableValue_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfHumanReadableValue_t const * >(rhs);
}

inline void to_c(
    pxr_SdfHumanReadableValue_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfHumanReadableValue_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfHumanReadableValue_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfHumanReadableValue_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfHumanReadableValue_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfHumanReadableValue const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfHumanReadableValue_copy(lhs, reinterpret_cast<pxr_SdfHumanReadableValue_t const * >(&(rhs)));
}

