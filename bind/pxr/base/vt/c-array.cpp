#include <pxr/base/vt/array.h>
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

    void reserve(size_t num);
    size_t size() const;
    void push_back(ELEM const &elem);

    /*
    ElementType &operator[](size_t index);
    ElementType const &operator[](size_t index) const;
    */

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct VtArray

template class VtArray<bool>;
//template class VtArray<float>;

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

template class pxr::VtArray<bool>;
//template class pxr::VtArray<float>;
