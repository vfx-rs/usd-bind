#pragma once
#include <pxr/base/vt/vt_value.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/base/gf/half.h>
#include <pxr/base/gf/matrix2d.h>
#include <pxr/base/gf/matrix2f.h>
#include <pxr/base/gf/matrix3d.h>
#include <pxr/base/gf/matrix3f.h>
#include <pxr/base/gf/matrix4d.h>
#include <pxr/base/gf/matrix4f.h>
#include <pxr/base/gf/quatd.h>
#include <pxr/base/gf/quatf.h>
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
#include <pxr/base/tf/token.h>
#include <pxr/base/vt/array.h>
#include <pxr/base/vt/types.h>
#include <pxr/base/vt/value.h>
#include <pxr/usd/sdf/assetPath.h>
#include <pxr/usd/sdf/timeCode.h>
#include <string>

inline pxrInternal_v0_21__pxrReserved__::VtValue const & to_cpp_ref(
    pxr_VtValue_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtValue const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtValue & to_cpp_ref(
    pxr_VtValue_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtValue * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::VtValue const * to_cpp(
    pxr_VtValue_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtValue const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::VtValue * to_cpp(
    pxr_VtValue_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::VtValue * >(rhs);
}

inline void to_c(
    pxr_VtValue_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtValue const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtValue_t const * >(&(rhs));
}

inline void to_c(
    pxr_VtValue_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtValue const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtValue_t const * >(rhs);
}

inline void to_c(
    pxr_VtValue_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtValue & rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtValue_t * >(&(rhs));
}

inline void to_c(
    pxr_VtValue_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::VtValue * rhs)
{
        *(lhs) = reinterpret_cast<pxr_VtValue_t * >(rhs);
}

inline void to_c_move(
    pxr_VtValue_t * lhs
    , pxrInternal_v0_21__pxrReserved__::VtValue * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::VtValue(std::move(*(rhs)));
}

