#pragma once
#include <pxr/usd/pcp/pcp_errors.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/pcp/errors.h>

inline pxrInternal_v0_21__pxrReserved__::PcpErrorType const & pxr_PcpErrorType_to_cpp_ref(
    pxr_PcpErrorType const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorType const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorType & pxr_PcpErrorType_to_cpp_ref(
    pxr_PcpErrorType * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorType * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorType const * pxr_PcpErrorType_to_cpp(
    pxr_PcpErrorType const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorType const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorType * pxr_PcpErrorType_to_cpp(
    pxr_PcpErrorType * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorType * >(rhs);
}

inline void to_c(
    pxr_PcpErrorType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorType const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorType const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorType const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorType const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorType const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorType * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorType & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorType * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorType * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorType * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorType * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorType * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorType const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorBase const & to_cpp_ref(
    pxr_PcpErrorBase_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorBase const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorBase & to_cpp_ref(
    pxr_PcpErrorBase_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorBase * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorBase const * to_cpp(
    pxr_PcpErrorBase_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorBase const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorBase * to_cpp(
    pxr_PcpErrorBase_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorBase * >(rhs);
}

inline void to_c(
    pxr_PcpErrorBase_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorBase const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorBase_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorBase_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorBase const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorBase_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorBase_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorBase & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorBase_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorBase_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorBase * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorBase_t * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorArcCycle const & to_cpp_ref(
    pxr_PcpErrorArcCycle_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorArcCycle const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorArcCycle & to_cpp_ref(
    pxr_PcpErrorArcCycle_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorArcCycle * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorArcCycle const * to_cpp(
    pxr_PcpErrorArcCycle_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorArcCycle const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorArcCycle * to_cpp(
    pxr_PcpErrorArcCycle_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorArcCycle * >(rhs);
}

inline void to_c(
    pxr_PcpErrorArcCycle_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorArcCycle const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorArcCycle_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorArcCycle_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorArcCycle const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorArcCycle_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorArcCycle_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorArcCycle & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorArcCycle_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorArcCycle_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorArcCycle * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorArcCycle_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorArcCycle_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorArcCycle const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_copy(lhs, reinterpret_cast<pxr_PcpErrorArcCycle_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorArcPermissionDenied const & to_cpp_ref(
    pxr_PcpErrorArcPermissionDenied_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorArcPermissionDenied const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorArcPermissionDenied & to_cpp_ref(
    pxr_PcpErrorArcPermissionDenied_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorArcPermissionDenied * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorArcPermissionDenied const * to_cpp(
    pxr_PcpErrorArcPermissionDenied_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorArcPermissionDenied const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorArcPermissionDenied * to_cpp(
    pxr_PcpErrorArcPermissionDenied_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorArcPermissionDenied * >(rhs);
}

inline void to_c(
    pxr_PcpErrorArcPermissionDenied_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorArcPermissionDenied const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorArcPermissionDenied_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorArcPermissionDenied_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorArcPermissionDenied const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorArcPermissionDenied_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorArcPermissionDenied_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorArcPermissionDenied & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorArcPermissionDenied_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorArcPermissionDenied_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorArcPermissionDenied * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorArcPermissionDenied_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorArcPermissionDenied_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorArcPermissionDenied const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_copy(lhs, reinterpret_cast<pxr_PcpErrorArcPermissionDenied_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorCapacityExceeded const & to_cpp_ref(
    pxr_PcpErrorCapacityExceeded_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorCapacityExceeded const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorCapacityExceeded & to_cpp_ref(
    pxr_PcpErrorCapacityExceeded_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorCapacityExceeded * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorCapacityExceeded const * to_cpp(
    pxr_PcpErrorCapacityExceeded_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorCapacityExceeded const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorCapacityExceeded * to_cpp(
    pxr_PcpErrorCapacityExceeded_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorCapacityExceeded * >(rhs);
}

inline void to_c(
    pxr_PcpErrorCapacityExceeded_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorCapacityExceeded const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorCapacityExceeded_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorCapacityExceeded_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorCapacityExceeded const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorCapacityExceeded_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorCapacityExceeded_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorCapacityExceeded & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorCapacityExceeded_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorCapacityExceeded_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorCapacityExceeded * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorCapacityExceeded_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorCapacityExceeded_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorCapacityExceeded const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_copy(lhs, reinterpret_cast<pxr_PcpErrorCapacityExceeded_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyBase const & to_cpp_ref(
    pxr_PcpErrorInconsistentPropertyBase_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyBase const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyBase & to_cpp_ref(
    pxr_PcpErrorInconsistentPropertyBase_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyBase * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyBase const * to_cpp(
    pxr_PcpErrorInconsistentPropertyBase_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyBase const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyBase * to_cpp(
    pxr_PcpErrorInconsistentPropertyBase_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyBase * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInconsistentPropertyBase_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyBase const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentPropertyBase_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInconsistentPropertyBase_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyBase const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentPropertyBase_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInconsistentPropertyBase_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyBase & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentPropertyBase_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInconsistentPropertyBase_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyBase * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentPropertyBase_t * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyType const & to_cpp_ref(
    pxr_PcpErrorInconsistentPropertyType_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyType const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyType & to_cpp_ref(
    pxr_PcpErrorInconsistentPropertyType_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyType * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyType const * to_cpp(
    pxr_PcpErrorInconsistentPropertyType_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyType const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyType * to_cpp(
    pxr_PcpErrorInconsistentPropertyType_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyType * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInconsistentPropertyType_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyType const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentPropertyType_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInconsistentPropertyType_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyType const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentPropertyType_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInconsistentPropertyType_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyType & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentPropertyType_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInconsistentPropertyType_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyType * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentPropertyType_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInconsistentPropertyType_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentPropertyType const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_copy(lhs, reinterpret_cast<pxr_PcpErrorInconsistentPropertyType_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeType const & to_cpp_ref(
    pxr_PcpErrorInconsistentAttributeType_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeType const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeType & to_cpp_ref(
    pxr_PcpErrorInconsistentAttributeType_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeType * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeType const * to_cpp(
    pxr_PcpErrorInconsistentAttributeType_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeType const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeType * to_cpp(
    pxr_PcpErrorInconsistentAttributeType_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeType * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInconsistentAttributeType_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeType const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentAttributeType_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInconsistentAttributeType_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeType const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentAttributeType_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInconsistentAttributeType_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeType & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentAttributeType_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInconsistentAttributeType_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeType * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentAttributeType_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInconsistentAttributeType_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeType const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_copy(lhs, reinterpret_cast<pxr_PcpErrorInconsistentAttributeType_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeVariability const & to_cpp_ref(
    pxr_PcpErrorInconsistentAttributeVariability_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeVariability const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeVariability & to_cpp_ref(
    pxr_PcpErrorInconsistentAttributeVariability_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeVariability * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeVariability const * to_cpp(
    pxr_PcpErrorInconsistentAttributeVariability_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeVariability const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeVariability * to_cpp(
    pxr_PcpErrorInconsistentAttributeVariability_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeVariability * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInconsistentAttributeVariability_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeVariability const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentAttributeVariability_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInconsistentAttributeVariability_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeVariability const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentAttributeVariability_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInconsistentAttributeVariability_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeVariability & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentAttributeVariability_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInconsistentAttributeVariability_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeVariability * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInconsistentAttributeVariability_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInconsistentAttributeVariability_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInconsistentAttributeVariability const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_copy(lhs, reinterpret_cast<pxr_PcpErrorInconsistentAttributeVariability_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInternalAssetPath const & to_cpp_ref(
    pxr_PcpErrorInternalAssetPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInternalAssetPath const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInternalAssetPath & to_cpp_ref(
    pxr_PcpErrorInternalAssetPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInternalAssetPath * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInternalAssetPath const * to_cpp(
    pxr_PcpErrorInternalAssetPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInternalAssetPath const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInternalAssetPath * to_cpp(
    pxr_PcpErrorInternalAssetPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInternalAssetPath * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInternalAssetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInternalAssetPath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInternalAssetPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInternalAssetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInternalAssetPath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInternalAssetPath_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInternalAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInternalAssetPath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInternalAssetPath_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInternalAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInternalAssetPath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInternalAssetPath_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInternalAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInternalAssetPath const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_copy(lhs, reinterpret_cast<pxr_PcpErrorInternalAssetPath_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidPrimPath const & to_cpp_ref(
    pxr_PcpErrorInvalidPrimPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidPrimPath const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidPrimPath & to_cpp_ref(
    pxr_PcpErrorInvalidPrimPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidPrimPath * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidPrimPath const * to_cpp(
    pxr_PcpErrorInvalidPrimPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidPrimPath const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidPrimPath * to_cpp(
    pxr_PcpErrorInvalidPrimPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidPrimPath * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidPrimPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidPrimPath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidPrimPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidPrimPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidPrimPath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidPrimPath_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidPrimPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidPrimPath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidPrimPath_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidPrimPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidPrimPath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidPrimPath_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInvalidPrimPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidPrimPath const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_copy(lhs, reinterpret_cast<pxr_PcpErrorInvalidPrimPath_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPathBase const & to_cpp_ref(
    pxr_PcpErrorInvalidAssetPathBase_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPathBase const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPathBase & to_cpp_ref(
    pxr_PcpErrorInvalidAssetPathBase_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPathBase * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPathBase const * to_cpp(
    pxr_PcpErrorInvalidAssetPathBase_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPathBase const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPathBase * to_cpp(
    pxr_PcpErrorInvalidAssetPathBase_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPathBase * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidAssetPathBase_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPathBase const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidAssetPathBase_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidAssetPathBase_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPathBase const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidAssetPathBase_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidAssetPathBase_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPathBase & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidAssetPathBase_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidAssetPathBase_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPathBase * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidAssetPathBase_t * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPath const & to_cpp_ref(
    pxr_PcpErrorInvalidAssetPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPath const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPath & to_cpp_ref(
    pxr_PcpErrorInvalidAssetPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPath * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPath const * to_cpp(
    pxr_PcpErrorInvalidAssetPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPath const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPath * to_cpp(
    pxr_PcpErrorInvalidAssetPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPath * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidAssetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidAssetPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidAssetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidAssetPath_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidAssetPath_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidAssetPath_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInvalidAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidAssetPath const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_copy(lhs, reinterpret_cast<pxr_PcpErrorInvalidAssetPath_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorMutedAssetPath const & to_cpp_ref(
    pxr_PcpErrorMutedAssetPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorMutedAssetPath const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorMutedAssetPath & to_cpp_ref(
    pxr_PcpErrorMutedAssetPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorMutedAssetPath * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorMutedAssetPath const * to_cpp(
    pxr_PcpErrorMutedAssetPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorMutedAssetPath const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorMutedAssetPath * to_cpp(
    pxr_PcpErrorMutedAssetPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorMutedAssetPath * >(rhs);
}

inline void to_c(
    pxr_PcpErrorMutedAssetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorMutedAssetPath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorMutedAssetPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorMutedAssetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorMutedAssetPath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorMutedAssetPath_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorMutedAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorMutedAssetPath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorMutedAssetPath_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorMutedAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorMutedAssetPath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorMutedAssetPath_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorMutedAssetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorMutedAssetPath const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_copy(lhs, reinterpret_cast<pxr_PcpErrorMutedAssetPath_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPathBase const & to_cpp_ref(
    pxr_PcpErrorTargetPathBase_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPathBase const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPathBase & to_cpp_ref(
    pxr_PcpErrorTargetPathBase_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPathBase * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPathBase const * to_cpp(
    pxr_PcpErrorTargetPathBase_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPathBase const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPathBase * to_cpp(
    pxr_PcpErrorTargetPathBase_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPathBase * >(rhs);
}

inline void to_c(
    pxr_PcpErrorTargetPathBase_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPathBase const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorTargetPathBase_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorTargetPathBase_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPathBase const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorTargetPathBase_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorTargetPathBase_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPathBase & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorTargetPathBase_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorTargetPathBase_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPathBase * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorTargetPathBase_t * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidInstanceTargetPath const & to_cpp_ref(
    pxr_PcpErrorInvalidInstanceTargetPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidInstanceTargetPath const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidInstanceTargetPath & to_cpp_ref(
    pxr_PcpErrorInvalidInstanceTargetPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidInstanceTargetPath * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidInstanceTargetPath const * to_cpp(
    pxr_PcpErrorInvalidInstanceTargetPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidInstanceTargetPath const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidInstanceTargetPath * to_cpp(
    pxr_PcpErrorInvalidInstanceTargetPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidInstanceTargetPath * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidInstanceTargetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidInstanceTargetPath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidInstanceTargetPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidInstanceTargetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidInstanceTargetPath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidInstanceTargetPath_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidInstanceTargetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidInstanceTargetPath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidInstanceTargetPath_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidInstanceTargetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidInstanceTargetPath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidInstanceTargetPath_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInvalidInstanceTargetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidInstanceTargetPath const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_copy(lhs, reinterpret_cast<pxr_PcpErrorInvalidInstanceTargetPath_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidExternalTargetPath const & to_cpp_ref(
    pxr_PcpErrorInvalidExternalTargetPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidExternalTargetPath const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidExternalTargetPath & to_cpp_ref(
    pxr_PcpErrorInvalidExternalTargetPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidExternalTargetPath * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidExternalTargetPath const * to_cpp(
    pxr_PcpErrorInvalidExternalTargetPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidExternalTargetPath const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidExternalTargetPath * to_cpp(
    pxr_PcpErrorInvalidExternalTargetPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidExternalTargetPath * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidExternalTargetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidExternalTargetPath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidExternalTargetPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidExternalTargetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidExternalTargetPath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidExternalTargetPath_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidExternalTargetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidExternalTargetPath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidExternalTargetPath_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidExternalTargetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidExternalTargetPath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidExternalTargetPath_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInvalidExternalTargetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidExternalTargetPath const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_copy(lhs, reinterpret_cast<pxr_PcpErrorInvalidExternalTargetPath_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidTargetPath const & to_cpp_ref(
    pxr_PcpErrorInvalidTargetPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidTargetPath const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidTargetPath & to_cpp_ref(
    pxr_PcpErrorInvalidTargetPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidTargetPath * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidTargetPath const * to_cpp(
    pxr_PcpErrorInvalidTargetPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidTargetPath const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidTargetPath * to_cpp(
    pxr_PcpErrorInvalidTargetPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidTargetPath * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidTargetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidTargetPath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidTargetPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidTargetPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidTargetPath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidTargetPath_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidTargetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidTargetPath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidTargetPath_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidTargetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidTargetPath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidTargetPath_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInvalidTargetPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidTargetPath const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_copy(lhs, reinterpret_cast<pxr_PcpErrorInvalidTargetPath_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOffset const & to_cpp_ref(
    pxr_PcpErrorInvalidSublayerOffset_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOffset const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOffset & to_cpp_ref(
    pxr_PcpErrorInvalidSublayerOffset_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOffset * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOffset const * to_cpp(
    pxr_PcpErrorInvalidSublayerOffset_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOffset const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOffset * to_cpp(
    pxr_PcpErrorInvalidSublayerOffset_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOffset * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidSublayerOffset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOffset const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidSublayerOffset_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidSublayerOffset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOffset const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidSublayerOffset_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidSublayerOffset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOffset & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidSublayerOffset_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidSublayerOffset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOffset * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidSublayerOffset_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInvalidSublayerOffset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOffset const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_copy(lhs, reinterpret_cast<pxr_PcpErrorInvalidSublayerOffset_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidReferenceOffset const & to_cpp_ref(
    pxr_PcpErrorInvalidReferenceOffset_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidReferenceOffset const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidReferenceOffset & to_cpp_ref(
    pxr_PcpErrorInvalidReferenceOffset_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidReferenceOffset * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidReferenceOffset const * to_cpp(
    pxr_PcpErrorInvalidReferenceOffset_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidReferenceOffset const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidReferenceOffset * to_cpp(
    pxr_PcpErrorInvalidReferenceOffset_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidReferenceOffset * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidReferenceOffset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidReferenceOffset const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidReferenceOffset_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidReferenceOffset_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidReferenceOffset const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidReferenceOffset_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidReferenceOffset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidReferenceOffset & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidReferenceOffset_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidReferenceOffset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidReferenceOffset * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidReferenceOffset_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInvalidReferenceOffset_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidReferenceOffset const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_copy(lhs, reinterpret_cast<pxr_PcpErrorInvalidReferenceOffset_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOwnership const & to_cpp_ref(
    pxr_PcpErrorInvalidSublayerOwnership_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOwnership const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOwnership & to_cpp_ref(
    pxr_PcpErrorInvalidSublayerOwnership_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOwnership * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOwnership const * to_cpp(
    pxr_PcpErrorInvalidSublayerOwnership_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOwnership const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOwnership * to_cpp(
    pxr_PcpErrorInvalidSublayerOwnership_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOwnership * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidSublayerOwnership_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOwnership const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidSublayerOwnership_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidSublayerOwnership_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOwnership const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidSublayerOwnership_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidSublayerOwnership_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOwnership & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidSublayerOwnership_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidSublayerOwnership_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOwnership * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidSublayerOwnership_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInvalidSublayerOwnership_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerOwnership const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_copy(lhs, reinterpret_cast<pxr_PcpErrorInvalidSublayerOwnership_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerPath const & to_cpp_ref(
    pxr_PcpErrorInvalidSublayerPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerPath const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerPath & to_cpp_ref(
    pxr_PcpErrorInvalidSublayerPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerPath * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerPath const * to_cpp(
    pxr_PcpErrorInvalidSublayerPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerPath const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerPath * to_cpp(
    pxr_PcpErrorInvalidSublayerPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerPath * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidSublayerPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerPath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidSublayerPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidSublayerPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerPath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidSublayerPath_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidSublayerPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerPath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidSublayerPath_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidSublayerPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerPath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidSublayerPath_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInvalidSublayerPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidSublayerPath const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_copy(lhs, reinterpret_cast<pxr_PcpErrorInvalidSublayerPath_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidVariantSelection const & to_cpp_ref(
    pxr_PcpErrorInvalidVariantSelection_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidVariantSelection const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidVariantSelection & to_cpp_ref(
    pxr_PcpErrorInvalidVariantSelection_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidVariantSelection * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidVariantSelection const * to_cpp(
    pxr_PcpErrorInvalidVariantSelection_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidVariantSelection const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidVariantSelection * to_cpp(
    pxr_PcpErrorInvalidVariantSelection_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidVariantSelection * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidVariantSelection_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidVariantSelection const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidVariantSelection_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidVariantSelection_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidVariantSelection const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidVariantSelection_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorInvalidVariantSelection_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidVariantSelection & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidVariantSelection_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorInvalidVariantSelection_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidVariantSelection * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorInvalidVariantSelection_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorInvalidVariantSelection_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorInvalidVariantSelection const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_copy(lhs, reinterpret_cast<pxr_PcpErrorInvalidVariantSelection_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorOpinionAtRelocationSource const & to_cpp_ref(
    pxr_PcpErrorOpinionAtRelocationSource_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorOpinionAtRelocationSource const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorOpinionAtRelocationSource & to_cpp_ref(
    pxr_PcpErrorOpinionAtRelocationSource_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorOpinionAtRelocationSource * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorOpinionAtRelocationSource const * to_cpp(
    pxr_PcpErrorOpinionAtRelocationSource_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorOpinionAtRelocationSource const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorOpinionAtRelocationSource * to_cpp(
    pxr_PcpErrorOpinionAtRelocationSource_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorOpinionAtRelocationSource * >(rhs);
}

inline void to_c(
    pxr_PcpErrorOpinionAtRelocationSource_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorOpinionAtRelocationSource const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorOpinionAtRelocationSource_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorOpinionAtRelocationSource_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorOpinionAtRelocationSource const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorOpinionAtRelocationSource_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorOpinionAtRelocationSource_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorOpinionAtRelocationSource & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorOpinionAtRelocationSource_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorOpinionAtRelocationSource_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorOpinionAtRelocationSource * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorOpinionAtRelocationSource_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorOpinionAtRelocationSource_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorOpinionAtRelocationSource const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_copy(lhs, reinterpret_cast<pxr_PcpErrorOpinionAtRelocationSource_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorPrimPermissionDenied const & to_cpp_ref(
    pxr_PcpErrorPrimPermissionDenied_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorPrimPermissionDenied const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorPrimPermissionDenied & to_cpp_ref(
    pxr_PcpErrorPrimPermissionDenied_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorPrimPermissionDenied * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorPrimPermissionDenied const * to_cpp(
    pxr_PcpErrorPrimPermissionDenied_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorPrimPermissionDenied const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorPrimPermissionDenied * to_cpp(
    pxr_PcpErrorPrimPermissionDenied_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorPrimPermissionDenied * >(rhs);
}

inline void to_c(
    pxr_PcpErrorPrimPermissionDenied_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorPrimPermissionDenied const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorPrimPermissionDenied_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorPrimPermissionDenied_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorPrimPermissionDenied const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorPrimPermissionDenied_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorPrimPermissionDenied_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorPrimPermissionDenied & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorPrimPermissionDenied_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorPrimPermissionDenied_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorPrimPermissionDenied * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorPrimPermissionDenied_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorPrimPermissionDenied_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorPrimPermissionDenied const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_copy(lhs, reinterpret_cast<pxr_PcpErrorPrimPermissionDenied_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorPropertyPermissionDenied const & to_cpp_ref(
    pxr_PcpErrorPropertyPermissionDenied_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorPropertyPermissionDenied const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorPropertyPermissionDenied & to_cpp_ref(
    pxr_PcpErrorPropertyPermissionDenied_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorPropertyPermissionDenied * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorPropertyPermissionDenied const * to_cpp(
    pxr_PcpErrorPropertyPermissionDenied_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorPropertyPermissionDenied const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorPropertyPermissionDenied * to_cpp(
    pxr_PcpErrorPropertyPermissionDenied_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorPropertyPermissionDenied * >(rhs);
}

inline void to_c(
    pxr_PcpErrorPropertyPermissionDenied_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorPropertyPermissionDenied const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorPropertyPermissionDenied_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorPropertyPermissionDenied_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorPropertyPermissionDenied const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorPropertyPermissionDenied_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorPropertyPermissionDenied_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorPropertyPermissionDenied & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorPropertyPermissionDenied_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorPropertyPermissionDenied_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorPropertyPermissionDenied * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorPropertyPermissionDenied_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorPropertyPermissionDenied_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorPropertyPermissionDenied const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_copy(lhs, reinterpret_cast<pxr_PcpErrorPropertyPermissionDenied_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorSublayerCycle const & to_cpp_ref(
    pxr_PcpErrorSublayerCycle_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorSublayerCycle const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorSublayerCycle & to_cpp_ref(
    pxr_PcpErrorSublayerCycle_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorSublayerCycle * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorSublayerCycle const * to_cpp(
    pxr_PcpErrorSublayerCycle_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorSublayerCycle const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorSublayerCycle * to_cpp(
    pxr_PcpErrorSublayerCycle_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorSublayerCycle * >(rhs);
}

inline void to_c(
    pxr_PcpErrorSublayerCycle_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorSublayerCycle const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorSublayerCycle_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorSublayerCycle_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorSublayerCycle const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorSublayerCycle_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorSublayerCycle_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorSublayerCycle & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorSublayerCycle_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorSublayerCycle_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorSublayerCycle * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorSublayerCycle_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorSublayerCycle_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorSublayerCycle const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_copy(lhs, reinterpret_cast<pxr_PcpErrorSublayerCycle_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPermissionDenied const & to_cpp_ref(
    pxr_PcpErrorTargetPermissionDenied_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPermissionDenied const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPermissionDenied & to_cpp_ref(
    pxr_PcpErrorTargetPermissionDenied_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPermissionDenied * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPermissionDenied const * to_cpp(
    pxr_PcpErrorTargetPermissionDenied_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPermissionDenied const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPermissionDenied * to_cpp(
    pxr_PcpErrorTargetPermissionDenied_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPermissionDenied * >(rhs);
}

inline void to_c(
    pxr_PcpErrorTargetPermissionDenied_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPermissionDenied const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorTargetPermissionDenied_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorTargetPermissionDenied_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPermissionDenied const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorTargetPermissionDenied_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorTargetPermissionDenied_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPermissionDenied & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorTargetPermissionDenied_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorTargetPermissionDenied_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPermissionDenied * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorTargetPermissionDenied_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorTargetPermissionDenied_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorTargetPermissionDenied const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_copy(lhs, reinterpret_cast<pxr_PcpErrorTargetPermissionDenied_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorUnresolvedPrimPath const & to_cpp_ref(
    pxr_PcpErrorUnresolvedPrimPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorUnresolvedPrimPath const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorUnresolvedPrimPath & to_cpp_ref(
    pxr_PcpErrorUnresolvedPrimPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorUnresolvedPrimPath * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorUnresolvedPrimPath const * to_cpp(
    pxr_PcpErrorUnresolvedPrimPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorUnresolvedPrimPath const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::PcpErrorUnresolvedPrimPath * to_cpp(
    pxr_PcpErrorUnresolvedPrimPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::PcpErrorUnresolvedPrimPath * >(rhs);
}

inline void to_c(
    pxr_PcpErrorUnresolvedPrimPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorUnresolvedPrimPath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorUnresolvedPrimPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorUnresolvedPrimPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorUnresolvedPrimPath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorUnresolvedPrimPath_t const * >(rhs);
}

inline void to_c(
    pxr_PcpErrorUnresolvedPrimPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorUnresolvedPrimPath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorUnresolvedPrimPath_t * >(&(rhs));
}

inline void to_c(
    pxr_PcpErrorUnresolvedPrimPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorUnresolvedPrimPath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_PcpErrorUnresolvedPrimPath_t * >(rhs);
}

inline void to_c_copy(
    pxr_PcpErrorUnresolvedPrimPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::PcpErrorUnresolvedPrimPath const & rhs)
{
        pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_copy(lhs, reinterpret_cast<pxr_PcpErrorUnresolvedPrimPath_t const * >(&(rhs)));
}

