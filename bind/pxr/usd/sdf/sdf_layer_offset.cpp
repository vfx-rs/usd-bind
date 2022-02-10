#include <pxr/usd/sdf/layerOffset.h>
#include <cppmm_bind.hpp>

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
struct SdfLayerOffset {
    using BoundType = pxr::SdfLayerOffset;

    /// Constructs a new SdfLayerOffset instance.
    SdfLayerOffset(double offset, double scale);

    /// Returns the time offset.
    double GetOffset() const;

    /// Returns the time scale factor.
    double GetScale() const;

    /// Sets the time offset.
    void SetOffset(double newOffset);

    /// Sets the time scale factor.
    void SetScale(double newScale);

    /// Returns \c true if this is an identity transformation, with
    /// an offset of 0.0 and a scale of 1.0.
    bool IsIdentity() const;

    /// Returns \c true if this offset is valid, i.e. both the offset and
    /// scale are finite (not infinite or NaN).  Note that a valid layer
    /// offset's inverse may be invalid.
    bool IsValid() const;

    /// Gets the inverse offset, which performs the opposite transformation.
    pxr::SdfLayerOffset GetInverse() const;

    /// Returns hash for this offset.
    size_t GetHash() const;

    /// Returns whether the offsets are equal.
    bool operator==(const pxr::SdfLayerOffset& rhs) const;

    /// Returns whether this offset is less than another.  The meaning
    /// of less than is somewhat arbitrary.
    bool operator<(const pxr::SdfLayerOffset& rhs) const;

    /// Composes this with the offset \e rhs, such that the resulting
    /// offset is equivalent to first applying \e rhs and then \e *this.
    pxr::SdfLayerOffset operator*(const pxr::SdfLayerOffset& rhs) const;

    /// Applies the offset to the given value.
    double operator*(double rhs) const;

    /// Applies the offset to the given value.
    pxr::SdfTimeCode operator*(const pxr::SdfTimeCode& rhs) const;


    /// Hash functor for hash maps and sets.
    struct Hash {
        using BoundType = pxr::SdfLayerOffset::Hash;

        size_t operator()(const pxr::SdfLayerOffset& offset) const;

    } CPPMM_OPAQUEPTR; // struct Hash

} CPPMM_OPAQUEPTR; // struct SdfLayerOffset


using SdfLayerOffsetVector = pxr::SdfLayerOffsetVector;


/// 
///  Writes the string representation of \a SdfLayerOffset to \a out.
std::ostream& operator<<(std::ostream& out, const pxr::SdfLayerOffset& layerOffset);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
