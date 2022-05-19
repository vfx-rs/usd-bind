#include <cppmm_bind.hpp>
#include <pxr/usd/ar/writableAsset.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArWritableAsset
///
/// Contains information about a resolved asset.
///
struct ArWritableAsset
{
public:
    using BoundType = pxr::ArWritableAsset;

    ~ArWritableAsset();

    /// Close this asset, performing any necessary finalization or commits
    /// of data that was previously written. Returns true on success, false
    /// otherwise.
    ///
    /// If successful, reads to the written asset in the same process should
    /// reflect the fully written state by the time this function returns.
    /// Also, further calls to any functions on this interface are invalid.
    bool Close();

    /// Writes \p count bytes from \p buffer at \p offset from the beginning
    /// of the asset. Returns number of bytes written, or 0 on error.
    size_t Write(const void* buffer, size_t count, size_t offset);

} CPPMM_OPAQUEPTR; // struct ArWritableAsset

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

