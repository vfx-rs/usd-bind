#if 0
#include <pxr/usd/pcp/targetIndex.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpTargetIndex
/// 
/// A PcpTargetIndex represents the results of indexing the target
/// paths of a relationship or attribute.  Note that this is just
/// the result; it does not retain all of the input arguments used
/// in computing the index, such as the owning property.
struct PcpTargetIndex {
    using BoundType = pxr::PcpTargetIndex;

    PcpTargetIndex(const pxr::PcpTargetIndex& );

    PcpTargetIndex(pxr::PcpTargetIndex&& ) CPPMM_IGNORE;

    pxr::PcpTargetIndex& operator=(const pxr::PcpTargetIndex& );

    pxr::PcpTargetIndex& operator=(pxr::PcpTargetIndex&& ) CPPMM_IGNORE;

    ~PcpTargetIndex();

} CPPMM_OPAQUEPTR; // struct PcpTargetIndex


/// Build a PcpTargetIndex representing the target paths of the given
/// property.
/// 
/// \p propIndex is a PcpPropertyIndex of the relationship or attribute.
/// \p relOrAttrType indicates if the property is a relationship
/// or attribute.
/// \p allErrors will contain any errors encountered while
/// performing this operation.
/// 
/// Note that this function will skip the validation checks performed
/// by PcpBuildFilteredTargetIndex. See documentation below for details.
void PcpBuildTargetIndex(const pxr::PcpSite& propSite, const pxr::PcpPropertyIndex& propIndex, const pxr::SdfSpecType relOrAttrType, pxr::PcpTargetIndex* targetIndex, pxr::PcpErrorVector* allErrors);


/// Like PcpBuildTargetIndex, but optionally filters the result by
/// enforcing permissions restrictions and a stopProperty.
/// 
/// If \p localOnly is \c true then this will compose relationship
/// targets from local nodes only. If \p stopProperty is not \c
/// NULL then this will stop composing relationship targets at \p
/// stopProperty, including \p stopProperty iff \p includeStopProperty
/// is \c true.
/// 
/// \p cacheForValidation is a PcpCache that will be used to compute
/// additional prim indexes as needed for validation. NULL may be
/// passed in, but doing so will disable validation that relies on
/// this cache, which includes permissions checks.
/// 
/// \p deletedPaths, if not \c NULL, will be populated with target
/// paths whose deletion contributed to the computed value of
/// \c targetIndex->paths.
/// 
/// \p allErrors will contain any errors encountered while
/// performing this operation.
void PcpBuildFilteredTargetIndex(const pxr::PcpSite& propSite, const pxr::PcpPropertyIndex& propIndex, const pxr::SdfSpecType relOrAttrType, const bool localOnly, const pxr::SdfSpecHandle& stopProperty, const bool includeStopProperty, pxr::PcpCache* cacheForValidation, pxr::PcpTargetIndex* targetIndex, pxr::SdfPathVector* deletedPaths, pxr::PcpErrorVector* allErrors);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
