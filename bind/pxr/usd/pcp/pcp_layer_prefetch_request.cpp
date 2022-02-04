#if 0
#include <pxr/usd/pcp/layerPrefetchRequest.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpLayerPrefetchRequest
/// 
/// PcpLayerPrefetchRequest represents a request to pre-fetch and retain
/// a set of layers in memory. It performs the fetch as a parallel
/// operation using a thread pool. Fetched layers are retained by the
/// request to keep them alive until the client can decide what to do
/// with them.
struct PcpLayerPrefetchRequest {
    using BoundType = pxr::PcpLayerPrefetchRequest;

    /// Enqueue a request to pre-fetch of the sublayers of \a layer.
    /// This recursively includes any nested sublayers. Arguments in \a args
    /// will be passed to Sdf when finding or opening sublayers.
    void RequestSublayerStack(const pxr::SdfLayerRefPtr& layer, const pxr::SdfLayer::FileFormatArguments& args);

    /// Run the queued requests, returning when complete.
    void Run(const pxr::Pcp_MutedLayers& mutedLayers);

    PcpLayerPrefetchRequest(const pxr::PcpLayerPrefetchRequest& );

    PcpLayerPrefetchRequest(pxr::PcpLayerPrefetchRequest&& ) CPPMM_IGNORE;

    pxr::PcpLayerPrefetchRequest& operator=(const pxr::PcpLayerPrefetchRequest& );

    pxr::PcpLayerPrefetchRequest& operator=(pxr::PcpLayerPrefetchRequest&& ) CPPMM_IGNORE;

    ~PcpLayerPrefetchRequest();

} CPPMM_OPAQUEPTR; // struct PcpLayerPrefetchRequest


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
