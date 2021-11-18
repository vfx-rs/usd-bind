#include <cppmm_bind.hpp>
#include <pxr/usd/sdf/reference.h>

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
///
struct SdfReference {
    using BoundType = pxr::SdfReference;

} CPPMM_OPAQUEPTR; // struct SdfReference

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
