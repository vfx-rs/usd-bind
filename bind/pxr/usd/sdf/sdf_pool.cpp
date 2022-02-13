#if 0
#include <pxr/usd/sdf/pool.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

template <class T>
struct Sdf_FastThreadLocalBase {
    using BoundType = pxr::Sdf_FastThreadLocalBase<T>;

    static T& Get();

} CPPMM_OPAQUEPTR; // struct Sdf_FastThreadLocalBase

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_FastThreadLocalBase<int>;
// using Sdf_FastThreadLocalBaseInt = pxr::Sdf_FastThreadLocalBase<int>;


template <class Tag, class ElemSize, class RegionBits, class ElemsPerSpan>
struct Sdf_Pool {
    using BoundType = pxr::Sdf_Pool<Tag, ElemSize, RegionBits, ElemsPerSpan>;

    static pxr::Handle Allocate();

    static void Free(pxr::Handle h);

} CPPMM_OPAQUEPTR; // struct Sdf_Pool

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_Pool<int, int, int, int>;
// using Sdf_PoolInt = pxr::Sdf_Pool<int, int, int, int>;


struct Handle {
    using BoundType = pxr::Handle;

    Handle();

    Handle(std::nullptr_t );

    Handle(unsigned int region, uint32_t index);

    pxr::Handle& operator=(const pxr::Handle& );

    pxr::Handle& operator=(std::nullptr_t );

    char* GetPtr() const;

    static pxr::Handle GetHandle(const char* ptr);

    operator bool() const;

    bool operator==(const pxr::Handle& r) const;

    bool operator!=(const pxr::Handle& r) const;

    bool operator<(const pxr::Handle& r) const;

    void swap(pxr::Handle& r);

} CPPMM_OPAQUEPTR; // struct Handle


struct _FreeList {
    using BoundType = pxr::_FreeList;

    void Pop();

    void Push(pxr::Handle h);

} CPPMM_OPAQUEPTR; // struct _FreeList


struct _PoolSpan {
    using BoundType = pxr::_PoolSpan;

    size_t size() const;

    pxr::Handle Alloc();

    bool empty() const;

} CPPMM_OPAQUEPTR; // struct _PoolSpan


struct _PerThreadData {
    using BoundType = pxr::_PerThreadData;

} CPPMM_OPAQUEPTR; // struct _PerThreadData


struct _RegionState {
    using BoundType = pxr::_RegionState;

    _RegionState();

    _RegionState(unsigned int region, uint32_t index);

    pxr::_RegionState Reserve(unsigned int num) const;

    static pxr::_RegionState GetInitState();

    static pxr::_RegionState GetLockedState();

    bool operator==(pxr::_RegionState other) const;

    uint32_t GetIndex() const;

    unsigned int GetRegion() const;

    bool IsLocked() const;

} CPPMM_OPAQUEPTR; // struct _RegionState


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::Sdf_FastThreadLocalBase<int>;
// template class pxr::Sdf_Pool<int, int, int, int>;
#endif
