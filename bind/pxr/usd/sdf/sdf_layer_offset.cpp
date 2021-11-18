#include <cppmm_bind.hpp>
#include <pxr/usd/sdf/layerOffset.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfLayerOffset 
///
/// Represents a time offset and scale between layers.
///
/// The SdfLayerOffset class is an affine transform, providing both a scale and
/// a translate.  It supports vector algebra semantics for composing
/// SdfLayerOffsets together via multiplication.  The SdfLayerOffset class is 
/// unitless: it does not refer to seconds or frames.
///
/// For example, suppose layer A uses layer B, with an offset of X:  
/// when bringing animation from B into A, you first apply the scale of X, and 
/// then the offset.  Suppose you have a scale of 2 and an offset of 24: 
/// first multiply B's frame numbers by 2, and then add 24.  The animation from 
/// B as seen in A will take twice as long and start 24 frames later.
///
/// Offsets are typically used in either sublayers or prim references. For more 
/// information, see the SetSubLayerOffset() method of the SdfLayer class (the 
/// subLayerOffsets property in Python), as well as the SetReference() and 
/// GetReferenceLayerOffset() methods (the latter is the referenceLayerOffset 
/// property in Python) of the SdfPrimSpec class.
///
struct SdfLayerOffset {
    using BoundType = pxr::SdfLayerOffset;

    /// \name Constructors
    /// @{

    /// Constructs a new SdfLayerOffset instance.
    explicit SdfLayerOffset(double offset = 0.0, double scale = 1.0);

} CPPMM_OPAQUEBYTES; // struct SdfLayerOffset

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
