#include <cppmm_bind.hpp>
#include <pxr/usd/ar/filesystemWritableAsset.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArFilesystemWriteableAsset
///
/// Contains information about a resolved asset.
///
struct ArFilesystemWritableAsset 
{
public:
    using BoundType = pxr::ArFilesystemWritableAsset;

    /// Constructs a new ArFilesystemWritableAsset for the file at
    /// \p resolvedPath with the given \p writeMode. Returns a null pointer
    /// if the file could not be opened.
    static std::shared_ptr<pxr::ArFilesystemWritableAsset> Create(
        const pxr::ArResolvedPath& resolvedPath,
        pxr::ArResolver::WriteMode writeMode);

    /// Constructs an ArFilesystemWritableAsset for the given \p file.
    /// The ArFilesystemWritableAsset takes ownership of \p file.
    ArFilesystemWritableAsset(pxr::TfSafeOutputFile&& file);

    ~ArFilesystemWritableAsset();

    /// Closes the file owned by this asset. If the TfSafeOutputFile was
    /// opened for replacement, the temporary file that was being written
    /// to be will be renamed over the destination file.
    bool Close();

    /// Writes \p count bytes from \p buffer at \p offset from the beginning
    /// of the file held by this object. Returns number of bytes written, or
    /// 0 on error.
    size_t Write(const void* buffer, size_t count, size_t offset);

} CPPMM_OPAQUEPTR; // struct ArFilesystemWritebleAsset

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
