#include <pxr/usd/sdf/identity.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class Sdf_Identity
/// 
/// Identifies the logical object behind an SdfSpec.
/// 
/// This is simply the layer the spec belongs to and the path to the spec.
struct Sdf_Identity {
    using BoundType = pxr::Sdf_Identity;

    /// Returns the layer that this identity refers to.
    const pxr::SdfLayerHandle& GetLayer() const;

    /// Returns the path that this identity refers to.
    const pxr::SdfPath& GetPath() const;

    Sdf_Identity(const pxr::Sdf_Identity& rhs);

    pxr::Sdf_Identity& operator=(const pxr::Sdf_Identity& rhs);

} CPPMM_OPAQUEPTR; // struct Sdf_Identity


struct Sdf_IdentityRegistry {
    using BoundType = pxr::Sdf_IdentityRegistry;

    Sdf_IdentityRegistry(const pxr::SdfLayerHandle& layer);

    ~Sdf_IdentityRegistry();

    /// Returns the layer that owns this registry.
    const pxr::SdfLayerHandle& GetLayer() const;

    /// Return the identity associated with \a path, issuing a new
    /// one if necessary. The registry will track the identity
    /// and update it if the logical object it represents moves
    /// in namespace.
    pxr::Sdf_IdentityRefPtr Identify(const pxr::SdfPath& path);

    /// Update identity in response to a namespace edit.
    void MoveIdentity(const pxr::SdfPath& oldPath, const pxr::SdfPath& newPath);

    Sdf_IdentityRegistry(const pxr::Sdf_IdentityRegistry& rhs);

    pxr::Sdf_IdentityRegistry& operator=(const pxr::Sdf_IdentityRegistry& rhs);

} CPPMM_OPAQUEPTR; // struct Sdf_IdentityRegistry


void intrusive_ptr_add_ref(pxr::Sdf_Identity* p);


void intrusive_ptr_release(pxr::Sdf_Identity* p);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
