#pragma once
#include <pxr/base/gf/gf_vec.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/gf/vec2d.h>
#include <pxr/base/gf/vec2f.h>
#include <pxr/base/gf/vec2h.h>
#include <pxr/base/gf/vec2i.h>
#include <pxr/base/gf/vec3d.h>
#include <pxr/base/gf/vec3f.h>
#include <pxr/base/gf/vec3h.h>
#include <pxr/base/gf/vec3i.h>
#include <pxr/base/gf/vec4d.h>
#include <pxr/base/gf/vec4f.h>
#include <pxr/base/gf/vec4h.h>
#include <pxr/base/gf/vec4i.h>

inline pxrInternal_v0_20__pxrReserved__::GfVec2f const & to_cpp_ref(
    pxr_GfVec2f_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2f const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2f & to_cpp_ref(
    pxr_GfVec2f_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2f * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2f const * to_cpp(
    pxr_GfVec2f_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2f const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2f * to_cpp(
    pxr_GfVec2f_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2f * >(rhs);
}

inline void to_c(
    pxr_GfVec2f_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2f const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2f_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfVec2f_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2f const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2f_t const * >(rhs);
}

inline void to_c(
    pxr_GfVec2f_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2f & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2f_t * >(&(rhs));
}

inline void to_c(
    pxr_GfVec2f_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2f * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2f_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfVec2f_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2f const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2h const & to_cpp_ref(
    pxr_GfVec2h_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2h const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2h & to_cpp_ref(
    pxr_GfVec2h_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2h * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2h const * to_cpp(
    pxr_GfVec2h_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2h const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2h * to_cpp(
    pxr_GfVec2h_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2h * >(rhs);
}

inline void to_c(
    pxr_GfVec2h_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2h const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2h_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfVec2h_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2h const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2h_t const * >(rhs);
}

inline void to_c(
    pxr_GfVec2h_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2h & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2h_t * >(&(rhs));
}

inline void to_c(
    pxr_GfVec2h_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2h * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2h_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfVec2h_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2h const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2d const & to_cpp_ref(
    pxr_GfVec2d_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2d const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2d & to_cpp_ref(
    pxr_GfVec2d_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2d * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2d const * to_cpp(
    pxr_GfVec2d_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2d const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2d * to_cpp(
    pxr_GfVec2d_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2d * >(rhs);
}

inline void to_c(
    pxr_GfVec2d_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2d const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2d_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfVec2d_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2d const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2d_t const * >(rhs);
}

inline void to_c(
    pxr_GfVec2d_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2d & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2d_t * >(&(rhs));
}

inline void to_c(
    pxr_GfVec2d_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2d * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2d_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfVec2d_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2d const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2i const & to_cpp_ref(
    pxr_GfVec2i_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2i const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2i & to_cpp_ref(
    pxr_GfVec2i_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2i * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2i const * to_cpp(
    pxr_GfVec2i_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2i const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfVec2i * to_cpp(
    pxr_GfVec2i_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec2i * >(rhs);
}

inline void to_c(
    pxr_GfVec2i_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2i const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2i_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfVec2i_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2i const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2i_t const * >(rhs);
}

inline void to_c(
    pxr_GfVec2i_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2i & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2i_t * >(&(rhs));
}

inline void to_c(
    pxr_GfVec2i_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2i * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec2i_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfVec2i_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec2i const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3f const & to_cpp_ref(
    pxr_GfVec3f_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3f const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3f & to_cpp_ref(
    pxr_GfVec3f_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3f * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3f const * to_cpp(
    pxr_GfVec3f_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3f const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3f * to_cpp(
    pxr_GfVec3f_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3f * >(rhs);
}

inline void to_c(
    pxr_GfVec3f_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3f const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3f_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfVec3f_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3f const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3f_t const * >(rhs);
}

inline void to_c(
    pxr_GfVec3f_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3f & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3f_t * >(&(rhs));
}

inline void to_c(
    pxr_GfVec3f_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3f * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3f_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfVec3f_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3f const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3h const & to_cpp_ref(
    pxr_GfVec3h_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3h const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3h & to_cpp_ref(
    pxr_GfVec3h_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3h * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3h const * to_cpp(
    pxr_GfVec3h_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3h const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3h * to_cpp(
    pxr_GfVec3h_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3h * >(rhs);
}

inline void to_c(
    pxr_GfVec3h_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3h const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3h_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfVec3h_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3h const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3h_t const * >(rhs);
}

inline void to_c(
    pxr_GfVec3h_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3h & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3h_t * >(&(rhs));
}

inline void to_c(
    pxr_GfVec3h_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3h * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3h_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfVec3h_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3h const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3d const & to_cpp_ref(
    pxr_GfVec3d_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3d const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3d & to_cpp_ref(
    pxr_GfVec3d_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3d * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3d const * to_cpp(
    pxr_GfVec3d_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3d const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3d * to_cpp(
    pxr_GfVec3d_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3d * >(rhs);
}

inline void to_c(
    pxr_GfVec3d_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3d const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3d_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfVec3d_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3d const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3d_t const * >(rhs);
}

inline void to_c(
    pxr_GfVec3d_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3d & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3d_t * >(&(rhs));
}

inline void to_c(
    pxr_GfVec3d_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3d * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3d_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfVec3d_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3d const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3i const & to_cpp_ref(
    pxr_GfVec3i_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3i const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3i & to_cpp_ref(
    pxr_GfVec3i_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3i * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3i const * to_cpp(
    pxr_GfVec3i_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3i const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfVec3i * to_cpp(
    pxr_GfVec3i_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec3i * >(rhs);
}

inline void to_c(
    pxr_GfVec3i_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3i const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3i_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfVec3i_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3i const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3i_t const * >(rhs);
}

inline void to_c(
    pxr_GfVec3i_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3i & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3i_t * >(&(rhs));
}

inline void to_c(
    pxr_GfVec3i_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3i * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec3i_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfVec3i_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec3i const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4f const & to_cpp_ref(
    pxr_GfVec4f_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4f const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4f & to_cpp_ref(
    pxr_GfVec4f_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4f * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4f const * to_cpp(
    pxr_GfVec4f_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4f const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4f * to_cpp(
    pxr_GfVec4f_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4f * >(rhs);
}

inline void to_c(
    pxr_GfVec4f_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4f const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4f_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfVec4f_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4f const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4f_t const * >(rhs);
}

inline void to_c(
    pxr_GfVec4f_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4f & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4f_t * >(&(rhs));
}

inline void to_c(
    pxr_GfVec4f_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4f * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4f_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfVec4f_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4f const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4h const & to_cpp_ref(
    pxr_GfVec4h_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4h const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4h & to_cpp_ref(
    pxr_GfVec4h_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4h * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4h const * to_cpp(
    pxr_GfVec4h_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4h const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4h * to_cpp(
    pxr_GfVec4h_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4h * >(rhs);
}

inline void to_c(
    pxr_GfVec4h_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4h const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4h_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfVec4h_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4h const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4h_t const * >(rhs);
}

inline void to_c(
    pxr_GfVec4h_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4h & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4h_t * >(&(rhs));
}

inline void to_c(
    pxr_GfVec4h_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4h * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4h_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfVec4h_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4h const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4d const & to_cpp_ref(
    pxr_GfVec4d_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4d const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4d & to_cpp_ref(
    pxr_GfVec4d_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4d * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4d const * to_cpp(
    pxr_GfVec4d_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4d const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4d * to_cpp(
    pxr_GfVec4d_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4d * >(rhs);
}

inline void to_c(
    pxr_GfVec4d_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4d const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4d_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfVec4d_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4d const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4d_t const * >(rhs);
}

inline void to_c(
    pxr_GfVec4d_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4d & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4d_t * >(&(rhs));
}

inline void to_c(
    pxr_GfVec4d_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4d * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4d_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfVec4d_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4d const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4i const & to_cpp_ref(
    pxr_GfVec4i_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4i const * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4i & to_cpp_ref(
    pxr_GfVec4i_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4i * >(rhs));
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4i const * to_cpp(
    pxr_GfVec4i_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4i const * >(rhs);
}

inline pxrInternal_v0_20__pxrReserved__::GfVec4i * to_cpp(
    pxr_GfVec4i_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_20__pxrReserved__::GfVec4i * >(rhs);
}

inline void to_c(
    pxr_GfVec4i_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4i const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4i_t const * >(&(rhs));
}

inline void to_c(
    pxr_GfVec4i_t const * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4i const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4i_t const * >(rhs);
}

inline void to_c(
    pxr_GfVec4i_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4i & rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4i_t * >(&(rhs));
}

inline void to_c(
    pxr_GfVec4i_t * * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4i * rhs)
{
        *(lhs) = reinterpret_cast<pxr_GfVec4i_t * >(rhs);
}

inline void to_c_copy(
    pxr_GfVec4i_t * lhs
    , pxrInternal_v0_20__pxrReserved__::GfVec4i const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

