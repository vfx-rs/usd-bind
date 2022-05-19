#include <pxr/usd/pcp/instanceKey.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpInstanceKey
/// 
/// A PcpInstanceKey identifies instanceable prim indexes that share the
/// same set of opinions. Instanceable prim indexes with equal instance
/// keys are guaranteed to have the same opinions for name children and
/// properties beneath those name children. They are NOT guaranteed to have
/// the same opinions for direct properties of the prim indexes themselves.
struct PcpInstanceKey {
    using BoundType = pxr::PcpInstanceKey;

    PcpInstanceKey();

    /// Create an instance key for the given prim index.
    PcpInstanceKey(const pxr::PcpPrimIndex& primIndex);

    /// Comparison operators
    bool operator==(const pxr::PcpInstanceKey& rhs) const;

    bool operator!=(const pxr::PcpInstanceKey& rhs) const;

    /// Returns string representation of this instance key
    /// for debugging purposes.
    std::string GetString() const;

    PcpInstanceKey(const pxr::PcpInstanceKey& );

    PcpInstanceKey(pxr::PcpInstanceKey&& ) CPPMM_IGNORE;

    pxr::PcpInstanceKey& operator=(const pxr::PcpInstanceKey& );

    pxr::PcpInstanceKey& operator=(pxr::PcpInstanceKey&& ) CPPMM_IGNORE;

    ~PcpInstanceKey();

#if 0
    /// \struct Hash
    /// 
    /// Hash functor.
    struct Hash {
        using BoundType = pxr::PcpInstanceKey::Hash;

        size_t operator()(const pxr::PcpInstanceKey& key) const;

    } CPPMM_OPAQUEPTR; // struct Hash


    struct _Arc {
        using BoundType = pxr::PcpInstanceKey::_Arc;

        _Arc(const pxr::PcpNodeRef& node);

        bool operator==(const pxr::PcpInstanceKey::_Arc& rhs) const;

        size_t GetHash() const;

    } CPPMM_OPAQUEPTR; // struct _Arc
#endif

} CPPMM_OPAQUEPTR; // struct PcpInstanceKey


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
