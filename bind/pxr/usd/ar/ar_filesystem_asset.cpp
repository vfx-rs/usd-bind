#include <cppmm_bind.hpp>
#include <pxr/usd/ar/filesystemAsset.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArFilesystemAsset
///
/// Contains information about a resolved asset.
///
struct ArFilesystemAsset 
{
public:
    using BoundType = pxr::ArFilesystemAsset;

	/// Constructs a new ArFilesystemAsset for the file at \p resolvedPath.
    /// Returns a null pointer if the file could not be opened.
    static std::shared_ptr<pxr::ArFilesystemAsset> Open(
        const pxr::ArResolvedPath& resolvedPath);

    /// Returns an ArTimestamp holding the mtime of the file at \p resolvedPath.
    /// Returns an invalid ArTimestamp if the mtime could not be retrieved.
    static pxr::ArTimestamp GetModificationTimestamp(
        const pxr::ArResolvedPath& resolvedPath);

    /// Constructs an ArFilesystemAsset for the given \p file. 
    /// The ArFilesystemAsset object takes ownership of \p file and will
    /// close the file handle on destruction.
    explicit ArFilesystemAsset(FILE* file);

    /// Closes the file owned by this object.
    ~ArFilesystemAsset();

    /// Returns the size of the file held by this object.
    size_t GetSize() const;

    /// Creates a read-only memory map for the file held by this object
    /// and returns a pointer to the start of the mapped contents.
    std::shared_ptr<const char> GetBuffer() const;

    /// Reads \p count bytes from the file held by this object at the
    /// given \p offset into \p buffer.
    size_t Read(
        void* buffer, size_t count, size_t offset) const;

    /// Returns the FILE* handle this object was created with and an offset
    /// of 0, since the asset's contents are located at the beginning of the
    /// file.
    std::pair<FILE*, size_t> GetFileUnsafe() const;

} CPPMM_OPAQUEPTR; // struct ArFilesystemAsset

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
