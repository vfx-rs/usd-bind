#pragma once
#include <pxr/base/tf/tf_diagnostic_mgr.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/tf/diagnosticMgr.h>

inline pxrInternal_v0_21__pxrReserved__::TfDiagnosticMgr const & to_cpp_ref(
    pxr_TfDiagnosticMgr_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfDiagnosticMgr const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::TfDiagnosticMgr & to_cpp_ref(
    pxr_TfDiagnosticMgr_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfDiagnosticMgr * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::TfDiagnosticMgr const * to_cpp(
    pxr_TfDiagnosticMgr_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfDiagnosticMgr const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::TfDiagnosticMgr * to_cpp(
    pxr_TfDiagnosticMgr_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::TfDiagnosticMgr * >(rhs);
}

inline void to_c(
    pxr_TfDiagnosticMgr_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfDiagnosticMgr const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfDiagnosticMgr_t const * >(&(rhs));
}

inline void to_c(
    pxr_TfDiagnosticMgr_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfDiagnosticMgr const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfDiagnosticMgr_t const * >(rhs);
}

inline void to_c(
    pxr_TfDiagnosticMgr_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfDiagnosticMgr & rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfDiagnosticMgr_t * >(&(rhs));
}

inline void to_c(
    pxr_TfDiagnosticMgr_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::TfDiagnosticMgr * rhs)
{
        *(lhs) = reinterpret_cast<pxr_TfDiagnosticMgr_t * >(rhs);
}

