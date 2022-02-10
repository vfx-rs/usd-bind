#include <pxr/usd/sdf/reference.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfReference
/// 
/// Represents a reference and all its meta data.
/// 
/// A reference is expressed on a prim in a given layer and it identifies a
/// prim in a layer stack.  All opinions in the namespace hierarchy
/// under the referenced prim will be composed with the opinions in the
/// namespace hierarchy under the referencing prim.
/// 
/// The asset path specifies the layer stack being referenced.  If this
/// asset path is non-empty, this reference is considered an 'external' 
/// reference to the layer stack rooted at the specified layer.  If this
/// is empty, this reference is considered an 'internal' reference to the
/// layer stack containing (but not necessarily rooted at) the layer where
/// the reference is authored.
/// 
/// The prim path specifies the prim in the referenced layer stack from
/// which opinions will be composed.  If this prim path is empty, it will
/// be considered a reference to the default prim specified in the root layer
/// of the referenced layer stack -- see SdfLayer::GetDefaultPrim.
/// 
/// The meta data for a reference is its layer offset and custom data.  The
/// layer offset is an affine transformation applied to all anim splines in
/// the referenced prim's namespace hierarchy, see SdfLayerOffset for details.
/// Custom data is for use by plugins or other non-tools supplied extensions
/// that need to be able to store data associated with references.
struct SdfReference {
    using BoundType = pxr::SdfReference;

    /// Creates a reference with all its meta data.  The default reference is an
    /// internal reference to the default prim.  See SdfAssetPath for what
    /// characters are valid in \p assetPath.  If \p assetPath contains invalid
    /// characters, issue an error and set this reference's asset path to the
    /// empty asset path.
    SdfReference(const std::string& assetPath, const pxr::SdfPath& primPath, const pxr::SdfLayerOffset& layerOffset, const pxr::VtDictionary& customData);

    /// Returns the asset path to the root layer of the referenced layer
    /// stack.  This will be empty in the case of an internal reference.
    const std::string& GetAssetPath() const;

    /// Sets the asset path for the root layer of the referenced layer stack.
    /// This may be set to an empty string to specify an internal reference.
    /// See SdfAssetPath for what characters are valid in \p assetPath.  If \p
    /// assetPath contains invalid characters, issue an error and set this
    /// reference's asset path to the empty asset path.
    void SetAssetPath(const std::string& assetPath);

    /// Returns the path of the referenced prim.
    /// This will be empty if the referenced prim is the default prim specified
    /// in the referenced layer stack.
    const pxr::SdfPath& GetPrimPath() const;

    /// Sets the path of the referenced prim.
    /// This may be set to an empty path to specify a reference to the default
    /// prim in the referenced layer stack.
    void SetPrimPath(const pxr::SdfPath& primPath);

    /// Returns the layer offset associated with the reference.
    const pxr::SdfLayerOffset& GetLayerOffset() const;

    /// Sets a new layer offset.
    void SetLayerOffset(const pxr::SdfLayerOffset& layerOffset);

    /// Returns the custom data associated with the reference.
    const pxr::VtDictionary& GetCustomData() const;

    /// Sets the custom data associated with the reference.
    void SetCustomData(const pxr::VtDictionary& customData);

    /// Sets a custom data entry for the reference.
    /// 
    /// If \a value is empty, then this removes the given custom data entry.
    void SetCustomData(const std::string& name, const pxr::VtValue& value);

    /// Swaps the custom data dictionary for this reference.
    void SwapCustomData(pxr::VtDictionary& customData);

    /// Returns \c true in the case of an internal reference.
    /// 
    /// An internal reference is a reference with an empty asset path.
    bool IsInternal() const;

    /// Returns whether this reference equals \a rhs.
    bool operator==(const pxr::SdfReference& rhs) const;

    /// Returns whether this reference is less than \a rhs.  The meaning
    /// of less than is somewhat arbitrary.
    bool operator<(const pxr::SdfReference& rhs) const;

    SdfReference(const pxr::SdfReference& );

    SdfReference(pxr::SdfReference&& ) CPPMM_IGNORE;

    pxr::SdfReference& operator=(const pxr::SdfReference& );

    pxr::SdfReference& operator=(pxr::SdfReference&& ) CPPMM_IGNORE;

    ~SdfReference();


    /// Struct that defines equality of SdfReferences based on their
    /// identity (the asset path and prim path).
    struct IdentityEqual {
        using BoundType = pxr::SdfReference::IdentityEqual;

        bool operator()(const pxr::SdfReference& lhs, const pxr::SdfReference& rhs) const;

    } CPPMM_OPAQUEPTR; // struct IdentityEqual


    /// Struct that defines a strict weak ordering of SdfReferences based on
    /// their identity (the asset path and prim path).
    struct IdentityLessThan {
        using BoundType = pxr::SdfReference::IdentityLessThan;

        bool operator()(const pxr::SdfReference& lhs, const pxr::SdfReference& rhs) const;

    } CPPMM_OPAQUEPTR; // struct IdentityLessThan

} CPPMM_OPAQUEPTR; // struct SdfReference


    using SdfReferenceVector = pxr::SdfReferenceVector;


/// Convenience function to find the index of the reference in \a references
/// that has the same identity as the given reference \a referenceId.
/// 
/// A reference's identity is given by its asset path and prim path alone
/// (i.e. the layer offset and custom data is ignored).
/// 
/// If no reference with the same identity exists in \a reference, -1 is
/// returned.  If more than one reference with the same identity exist in
/// \a references the index of the first one is returned.
int SdfFindReferenceByIdentity(const pxr::SdfReferenceVector& references, const pxr::SdfReference& referenceId);


/// Writes the string representation of \a SdfReference to \a out.
std::ostream& operator<<(std::ostream& out, const pxr::SdfReference& reference);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
