#pragma once
#include <pxr/base/gf/gf_matrix.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/gf/matrix2d.h>
#include <pxr/base/gf/matrix2f.h>
#include <pxr/base/gf/matrix3d.h>
#include <pxr/base/gf/matrix3f.h>
#include <pxr/base/gf/matrix4d.h>
#include <pxr/base/gf/matrix4f.h>

inline pxrInternal_v0_21__pxrReserved__::GfMatrix2f const & to_cpp_ref(
    pxr_GfMatrix2f_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix2f const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix2f & to_cpp_ref(
    pxr_GfMatrix2f_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix2f * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix2f const * to_cpp(
    pxr_GfMatrix2f_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix2f const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix2f * to_cpp(
    pxr_GfMatrix2f_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix2f * >(rhs);
}

inline void to_c(
    pxr_GfMatrix2f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix2f const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix2f_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfMatrix2f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix2f const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix2f_t const * >(rhs);
}

inline void to_c(
    pxr_GfMatrix2f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix2f & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix2f_t * >(&(rhs));
}

inline void to_c(
    pxr_GfMatrix2f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix2f * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix2f_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfMatrix2f_t * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix2f const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix2d const & to_cpp_ref(
    pxr_GfMatrix2d_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix2d const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix2d & to_cpp_ref(
    pxr_GfMatrix2d_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix2d * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix2d const * to_cpp(
    pxr_GfMatrix2d_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix2d const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix2d * to_cpp(
    pxr_GfMatrix2d_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix2d * >(rhs);
}

inline void to_c(
    pxr_GfMatrix2d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix2d const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix2d_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfMatrix2d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix2d const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix2d_t const * >(rhs);
}

inline void to_c(
    pxr_GfMatrix2d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix2d & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix2d_t * >(&(rhs));
}

inline void to_c(
    pxr_GfMatrix2d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix2d * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix2d_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfMatrix2d_t * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix2d const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix3f const & to_cpp_ref(
    pxr_GfMatrix3f_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix3f const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix3f & to_cpp_ref(
    pxr_GfMatrix3f_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix3f * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix3f const * to_cpp(
    pxr_GfMatrix3f_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix3f const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix3f * to_cpp(
    pxr_GfMatrix3f_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix3f * >(rhs);
}

inline void to_c(
    pxr_GfMatrix3f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix3f const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix3f_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfMatrix3f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix3f const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix3f_t const * >(rhs);
}

inline void to_c(
    pxr_GfMatrix3f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix3f & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix3f_t * >(&(rhs));
}

inline void to_c(
    pxr_GfMatrix3f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix3f * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix3f_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfMatrix3f_t * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix3f const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix3d const & to_cpp_ref(
    pxr_GfMatrix3d_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix3d const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix3d & to_cpp_ref(
    pxr_GfMatrix3d_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix3d * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix3d const * to_cpp(
    pxr_GfMatrix3d_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix3d const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix3d * to_cpp(
    pxr_GfMatrix3d_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix3d * >(rhs);
}

inline void to_c(
    pxr_GfMatrix3d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix3d const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix3d_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfMatrix3d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix3d const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix3d_t const * >(rhs);
}

inline void to_c(
    pxr_GfMatrix3d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix3d & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix3d_t * >(&(rhs));
}

inline void to_c(
    pxr_GfMatrix3d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix3d * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix3d_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfMatrix3d_t * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix3d const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix4f const & to_cpp_ref(
    pxr_GfMatrix4f_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix4f const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix4f & to_cpp_ref(
    pxr_GfMatrix4f_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix4f * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix4f const * to_cpp(
    pxr_GfMatrix4f_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix4f const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix4f * to_cpp(
    pxr_GfMatrix4f_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix4f * >(rhs);
}

inline void to_c(
    pxr_GfMatrix4f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix4f const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix4f_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfMatrix4f_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix4f const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix4f_t const * >(rhs);
}

inline void to_c(
    pxr_GfMatrix4f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix4f & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix4f_t * >(&(rhs));
}

inline void to_c(
    pxr_GfMatrix4f_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix4f * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix4f_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfMatrix4f_t * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix4f const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix4d const & to_cpp_ref(
    pxr_GfMatrix4d_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix4d const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix4d & to_cpp_ref(
    pxr_GfMatrix4d_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix4d * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix4d const * to_cpp(
    pxr_GfMatrix4d_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix4d const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::GfMatrix4d * to_cpp(
    pxr_GfMatrix4d_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::GfMatrix4d * >(rhs);
}

inline void to_c(
    pxr_GfMatrix4d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix4d const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix4d_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfMatrix4d_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix4d const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix4d_t const * >(rhs);
}

inline void to_c(
    pxr_GfMatrix4d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix4d & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix4d_t * >(&(rhs));
}

inline void to_c(
    pxr_GfMatrix4d_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix4d * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfMatrix4d_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfMatrix4d_t * lhs
    , pxrInternal_v0_21__pxrReserved__::GfMatrix4d const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

