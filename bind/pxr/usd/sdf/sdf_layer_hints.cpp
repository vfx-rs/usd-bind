#include <pxr/usd/sdf/layerHints.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// Contains hints about layer contents that may be used to accelerate certain
/// composition operations.
struct SdfLayerHints {
    using BoundType = pxr::SdfLayerHints;

    /// Default constructed hints provide the most conservative set of values
    /// such that consumers of the hints will act correctly if not optimally.
    SdfLayerHints();

    /// Construct hints with specific values.  Using this constructor requires
    /// that all hint fields be specified.
    SdfLayerHints(bool mightHaveRelocates);

} CPPMM_OPAQUEPTR; // struct SdfLayerHints


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
