#include <pxr/base/gf/vec2f.h>
#include <pxr/base/gf/vec2h.h>
#include <pxr/base/gf/vec2d.h>
#include <pxr/base/gf/vec2i.h>
#include <pxr/base/gf/vec3f.h>
#include <pxr/base/gf/vec3h.h>
#include <pxr/base/gf/vec3d.h>
#include <pxr/base/gf/vec3i.h>
#include <pxr/base/gf/vec4f.h>
#include <pxr/base/gf/vec4h.h>
#include <pxr/base/gf/vec4d.h>
#include <pxr/base/gf/vec4i.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

#define VEC(N, T)                               \
struct GfVec##N##T {                            \
    using BoundType = pxr::GfVec##N##T;         \
} CPPMM_OPAQUEBYTES CPPMM_TRIVIALLY_COPYABLE CPPMM_TRIVIALLY_MOVABLE CPPMM_IGNORE_UNBOUND CPPMM_DERIVE("Copy, Clone");

VEC(2, f)
VEC(2, h)
VEC(2, d)
VEC(2, i)

VEC(3, f)
VEC(3, h)
VEC(3, d)
VEC(3, i)

VEC(4, f)
VEC(4, h)
VEC(4, d)
VEC(4, i)


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
