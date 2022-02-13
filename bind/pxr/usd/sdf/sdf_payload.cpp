#if 0
#include <pxr/usd/sdf/payload.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfPayload
/// 
/// Represents a payload and all its meta data.
/// 
/// A payload represents a prim reference to an external layer.  A payload
/// is similar to a prim reference (see SdfReference) with the major
/// difference that payloads are explicitly loaded by the user.
/// 
/// Unloaded payloads represent a boundary that lazy composition and
/// system behaviors will not traverse across, providing a user-visible
/// way to manage the working set of the scene.
struct SdfPayload {
    using BoundType = pxr::SdfPayload;

    /// Create a payload. See SdfAssetPath for what characters are valid in \p
    /// assetPath.  If \p assetPath contains invalid characters, issue an error
    /// and set this payload's asset path to the empty asset path.
    SdfPayload(const std::string& assetPath, const pxr::SdfPath& primPath, const pxr::SdfLayerOffset& layerOffset);

    /// Returns the asset path of the layer that the payload uses.
    const std::string& GetAssetPath() const;

    /// Sets a new asset path for the layer the payload uses.  See SdfAssetPath
    /// for what characters are valid in \p assetPath.  If \p assetPath contains
    /// invalid characters, issue an error and set this payload's asset path to
    /// the empty asset path.
    void SetAssetPath(const std::string& assetPath);

    /// Returns the scene path of the prim for the payload.
    const pxr::SdfPath& GetPrimPath() const;

    /// Sets a new prim path for the prim that the payload uses.
    void SetPrimPath(const pxr::SdfPath& primPath);

    /// Returns the layer offset associated with the payload.
    const pxr::SdfLayerOffset& GetLayerOffset() const;

    /// Sets a new layer offset.
    void SetLayerOffset(const pxr::SdfLayerOffset& layerOffset);

    /// Returns whether this payload equals \a rhs.
    bool operator==(const pxr::SdfPayload& rhs) const;

    /// Returns whether this payload is less than \a rhs.
    /// The meaning of less than is arbitrary but stable.
    bool operator<(const pxr::SdfPayload& rhs) const;

    SdfPayload(const pxr::SdfPayload& );

    SdfPayload(pxr::SdfPayload&& ) CPPMM_IGNORE;

    pxr::SdfPayload& operator=(const pxr::SdfPayload& );

    pxr::SdfPayload& operator=(pxr::SdfPayload&& ) CPPMM_IGNORE;

    ~SdfPayload();

} CPPMM_OPAQUEPTR; // struct SdfPayload


    using SdfPayloadVector = pxr::SdfPayloadVector;


/// Writes the string representation of \a SdfPayload to \a out.
std::ostream& operator<<(std::ostream& out, const pxr::SdfPayload& payload);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
