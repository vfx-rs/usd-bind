#if 0
#include <pxr/usd/pcp/propertyIndex.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpPropertyIndex
/// 
/// PcpPropertyIndex is an index of all sites in scene description that
/// contribute opinions to a specific property, under composition
/// semantics.
struct PcpPropertyIndex {
    using BoundType = pxr::PcpPropertyIndex;

    /// Construct an empty property index.
    PcpPropertyIndex();

    /// Copy-construct a property index.
    PcpPropertyIndex(const pxr::PcpPropertyIndex& rhs);

    /// Swap the contents of this property index with \p index.
    void Swap(pxr::PcpPropertyIndex& index);

    /// Returns true if this property index contains no opinions, false
    /// otherwise.
    bool IsEmpty() const;

    /// Returns range of iterators that encompasses properties in this
    /// index's property stack.
    /// 
    /// By default, this returns a range encompassing all properties in the
    /// index. If \p localOnly is specified, the range will only include
    /// properties from local nodes in its owning prim's graph.
    pxr::PcpPropertyRange GetPropertyRange(bool localOnly) const;

    /// Return the list of errors local to this property.
    pxr::PcpErrorVector GetLocalErrors() const;

    /// Returns the number of local properties in this prim index.
    size_t GetNumLocalSpecs() const;

    pxr::PcpPropertyIndex& operator=(const pxr::PcpPropertyIndex& );

    ~PcpPropertyIndex();

} CPPMM_OPAQUEPTR; // struct PcpPropertyIndex


/// \class Pcp_PropertyInfo
/// 
/// Private helper structure containing information about a property in the 
/// property stack.
struct Pcp_PropertyInfo {
    using BoundType = pxr::Pcp_PropertyInfo;

    Pcp_PropertyInfo();

    Pcp_PropertyInfo(const pxr::SdfPropertySpecHandle& prop, const pxr::PcpNodeRef& node);

    Pcp_PropertyInfo(pxr::Pcp_PropertyInfo&& ) CPPMM_IGNORE;

    pxr::Pcp_PropertyInfo& operator=(const pxr::Pcp_PropertyInfo& );

    pxr::Pcp_PropertyInfo& operator=(pxr::Pcp_PropertyInfo&& ) CPPMM_IGNORE;

} CPPMM_OPAQUEPTR; // struct Pcp_PropertyInfo


/// Builds a property index for the property at \p path,
/// internally computing and caching an owning prim index as necessary.
/// \p allErrors will contain any errors encountered.
void PcpBuildPropertyIndex(const pxr::SdfPath& propertyPath, pxr::PcpCache* cache, pxr::PcpPropertyIndex* propertyIndex, pxr::PcpErrorVector* allErrors);


/// Builds a prim property index for the property at \p propertyPath.
/// \p allErrors will contain any errors encountered.
void PcpBuildPrimPropertyIndex(const pxr::SdfPath& propertyPath, const pxr::PcpCache& cache, const pxr::PcpPrimIndex& owningPrimIndex, pxr::PcpPropertyIndex* propertyIndex, pxr::PcpErrorVector* allErrors);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
