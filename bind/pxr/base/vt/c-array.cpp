#include <pxr/base/vt/value.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

template<typename ELEM>
struct VtArray {
    using BoundType = pxr::VtArray<ELEM>;

    VtArray();

    /// Destructor.
    ~VtArray();

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct VtArray

template class VtArray<bool>;

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

