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

    ELEM &operator[](size_t index) CPPMM_RENAME(index_mut);
    ELEM const &operator[](size_t index) const CPPMM_RENAME(index);

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct VtArray

template class VtArray<bool>;
template class VtArray<uint8_t>;
template class VtArray<int32_t>;
template class VtArray<uint32_t>;
template class VtArray<int64_t>;
template class VtArray<uint64_t>;
template class VtArray<float>;
template class VtArray<double>;

using VtArrayBool = pxr::VtArray<bool>;
using VtArrayUint8 = pxr::VtArray<uint8_t>;
using VtArrayInt32 = pxr::VtArray<int32_t>;
using VtArrayUint32 = pxr::VtArray<uint32_t>;
using VtArrayInt64 = pxr::VtArray<int64_t>;
using VtArrayUint64 = pxr::VtArray<uint64_t>;
using VtArrayFloat = pxr::VtArray<float>;
using VtArrayDouble = pxr::VtArray<double>;

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

#define VTARRAY_MODULO_NOOP(T) \
    template <> \
    pxr::VtArray<T> pxr::VtArray<T>::operator%(const pxr::VtArray<T> & rhs) const \
    { \
        return rhs; \
    }

VTARRAY_MODULO_NOOP(float)
VTARRAY_MODULO_NOOP(double)

template class pxr::VtArray<bool>;
template class pxr::VtArray<uint8_t>;
template class pxr::VtArray<int32_t>;
template class pxr::VtArray<uint32_t>;
template class pxr::VtArray<int64_t>;
template class pxr::VtArray<uint64_t>;
template class pxr::VtArray<float>;
template class pxr::VtArray<double>;

