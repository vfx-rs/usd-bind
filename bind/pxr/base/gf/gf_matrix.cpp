#include <pxr/base/gf/matrix2f.h>
#include <pxr/base/gf/matrix2d.h>
#include <pxr/base/gf/matrix3f.h>
#include <pxr/base/gf/matrix3d.h>
#include <pxr/base/gf/matrix4f.h>
#include <pxr/base/gf/matrix4d.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

#define MAT(N, T) \
struct GfMatrix##N##T { \
    using BoundType = pxr::GfMatrix##N##T; \
} CPPMM_OPAQUEBYTES CPPMM_TRIVIALLY_COPYABLE CPPMM_TRIVIALLY_MOVABLE CPPMM_IGNORE_UNBOUND CPPMM_DERIVE("Clone");

MAT(2, f)
MAT(2, d)
MAT(3, f)
MAT(3, d)
MAT(4, f)
MAT(4, d)


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
