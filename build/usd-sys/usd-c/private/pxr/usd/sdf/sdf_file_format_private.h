#pragma once
#include <pxr/usd/sdf/sdf_file_format.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/fileFormat.h>

inline pxrInternal_v0_21__pxrReserved__::SdfFileFormat const & to_cpp_ref(
    pxr_SdfFileFormat_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfFileFormat const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfFileFormat & to_cpp_ref(
    pxr_SdfFileFormat_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfFileFormat * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfFileFormat const * to_cpp(
    pxr_SdfFileFormat_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfFileFormat const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfFileFormat * to_cpp(
    pxr_SdfFileFormat_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfFileFormat * >(rhs);
}

inline void to_c(
    pxr_SdfFileFormat_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfFileFormat const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfFileFormat_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfFileFormat_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfFileFormat const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfFileFormat_t const * >(rhs);
}

inline void to_c(
    pxr_SdfFileFormat_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfFileFormat & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfFileFormat_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfFileFormat_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfFileFormat * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfFileFormat_t * >(rhs);
}

