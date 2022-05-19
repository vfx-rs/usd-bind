#pragma once
#include <pxr/usd/sdf/sdf_text_file_format.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/textFileFormat.h>

inline pxrInternal_v0_21__pxrReserved__::SdfTextFileFormat const & to_cpp_ref(
    pxr_SdfTextFileFormat_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfTextFileFormat const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfTextFileFormat & to_cpp_ref(
    pxr_SdfTextFileFormat_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfTextFileFormat * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfTextFileFormat const * to_cpp(
    pxr_SdfTextFileFormat_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfTextFileFormat const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfTextFileFormat * to_cpp(
    pxr_SdfTextFileFormat_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfTextFileFormat * >(rhs);
}

inline void to_c(
    pxr_SdfTextFileFormat_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfTextFileFormat const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfTextFileFormat_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfTextFileFormat_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfTextFileFormat const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfTextFileFormat_t const * >(rhs);
}

inline void to_c(
    pxr_SdfTextFileFormat_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfTextFileFormat & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfTextFileFormat_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfTextFileFormat_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfTextFileFormat * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfTextFileFormat_t * >(rhs);
}

