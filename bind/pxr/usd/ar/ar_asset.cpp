#include <cppmm_bind.hpp>

#define AR_VERSION 2
#include <pxr/usd/ar/asset.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArAsset
///
/// Contains information about a resolved asset.
///
struct ArAsset 
{
public:
    using BoundType = pxr::ArAsset;

    virtual ~ArAsset();

    /// Returns size of the asset.
    virtual size_t GetSize() const = 0;

    #if 0
    /// Returns a pointer to a buffer with the contents of the asset,
    /// with size given by GetSize(). Returns an invalid std::shared_ptr 
    /// if the contents could not be retrieved.
    ///
    /// The data in the returned buffer must remain valid while there are 
    /// outstanding copies of the returned std::shared_ptr. Note that the 
    /// deleter stored in the std::shared_ptr may contain additional data 
    /// needed to maintain the buffer's validity.
    virtual std::shared_ptr<const char> GetBuffer() const = 0;
    #endif

    /// Read \p count bytes at \p offset from the beginning of the asset
    /// into \p buffer. Returns number of bytes read, or 0 on error.
    ///
    /// Implementers should range-check calls and return zero for out-of-bounds
    /// reads.
    virtual size_t Read(void* buffer, size_t count, size_t offset) const = 0;

    #if 0        
    /// Returns a read-only FILE* handle and offset for this asset if
    /// available, or (nullptr, 0) otherwise.
    ///
    /// The returned handle must remain valid for the lifetime of this 
    /// ArAsset object. The returned offset is the offset from the beginning 
    /// of the FILE* where the asset's contents begins.
    ///
    /// This function is marked unsafe because the handle may wind up
    /// being used in multiple threads depending on the underlying
    /// resolver implementation. For instance, a resolver may cache
    /// and return ArAsset objects with the same FILE* to multiple 
    /// threads.
    ///
    /// Clients MUST NOT use this handle with functions that cannot be
    /// called concurrently on the same file descriptor, e.g. read, 
    /// fread, fseek, etc. See ArchPRead for a function that can be used
    /// to read data from this handle safely.
    virtual std::pair<FILE*, size_t> GetFileUnsafe() const = 0;
    #endif

} CPPMM_OPAQUEPTR; // struct ArAsset

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

