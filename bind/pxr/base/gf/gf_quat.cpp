#include <pxr/base/gf/quatf.h>
#include <pxr/base/gf/quath.h>
#include <pxr/base/gf/quatd.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

struct GfQuath {
    using BoundType = pxr::GfQuath;
} CPPMM_OPAQUEBYTES CPPMM_TRIVIALLY_COPYABLE CPPMM_TRIVIALLY_MOVABLE CPPMM_IGNORE_UNBOUND CPPMM_DERIVE("Copy, Clone");

struct GfQuatf {
    using BoundType = pxr::GfQuatf;
} CPPMM_OPAQUEBYTES CPPMM_TRIVIALLY_COPYABLE CPPMM_TRIVIALLY_MOVABLE CPPMM_IGNORE_UNBOUND CPPMM_DERIVE("Copy, Clone");

struct GfQuatd {
    using BoundType = pxr::GfQuatd;
} CPPMM_OPAQUEBYTES CPPMM_TRIVIALLY_COPYABLE CPPMM_TRIVIALLY_MOVABLE CPPMM_IGNORE_UNBOUND CPPMM_DERIVE("Copy, Clone");


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
