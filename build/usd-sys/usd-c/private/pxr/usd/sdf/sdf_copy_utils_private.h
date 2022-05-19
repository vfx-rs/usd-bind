#pragma once
#include <pxr/usd/sdf/sdf_copy_utils.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/copyUtils.h>

inline pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit const & to_cpp_ref(
    pxr_SdfCopySpecsValueEdit_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit & to_cpp_ref(
    pxr_SdfCopySpecsValueEdit_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit const * to_cpp(
    pxr_SdfCopySpecsValueEdit_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit * to_cpp(
    pxr_SdfCopySpecsValueEdit_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit * >(rhs);
}

inline void to_c(
    pxr_SdfCopySpecsValueEdit_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfCopySpecsValueEdit_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfCopySpecsValueEdit_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfCopySpecsValueEdit_t const * >(rhs);
}

inline void to_c(
    pxr_SdfCopySpecsValueEdit_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfCopySpecsValueEdit_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfCopySpecsValueEdit_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfCopySpecsValueEdit_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfCopySpecsValueEdit_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfCopySpecsValueEdit const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit_copy(lhs, reinterpret_cast<pxr_SdfCopySpecsValueEdit_t const * >(&(rhs)));
}

