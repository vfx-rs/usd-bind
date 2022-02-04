#if 0
#include <pxr/usd/pcp/mapFunction.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpMapFunction
/// 
/// A function that maps values from one namespace (and time domain) to
/// another. It represents the transformation that an arc such as a reference
/// arc applies as it incorporates values across the arc.
/// 
/// Take the example of a reference arc, where a source path
/// \</Model\> is referenced as a target path, \</Model_1\>.
/// The source path \</Model\> is the source of the opinions;
/// the target path \</Model_1\> is where they are incorporated in the scene.
/// Values in the model that refer to paths relative to \</Model\> must be
/// transformed to be relative to \</Model_1\> instead.
/// The PcpMapFunction for the arc provides this service.
/// 
/// Map functions have a specific \em domain, or set of values they can
/// operate on.  Any values outside the domain cannot be mapped.
/// The domain precisely tracks what areas of namespace can be
/// referred to across various forms of arcs.
/// 
/// Map functions can be chained to represent a series of map
/// operations applied in sequence.  The map function represent the
/// cumulative effect as efficiently as possible.  For example, in
/// the case of a chained reference from \</Model\> to \</Model\>
/// to \</Model\> to \</Model_1\>, this is effectively the same as
/// a mapping directly from \</Model\> to \</Model_1\>.  Representing
/// the cumulative effect of arcs in this way is important for
/// handling larger scenes efficiently.
/// 
/// Map functions can be \em inverted. Formally, map functions are
/// bijections (one-to-one and onto), which ensures that they can
/// be inverted.  Put differently, no information is lost by applying
/// a map function to set of values within its domain; they retain
/// their distinct identities and can always be mapped back.
/// 
/// One analogy that may or may not be helpful:
/// In the same way a geometric transform maps a model's points in its
/// rest space into the world coordinates for a particular instance,
/// a PcpMapFunction maps values about a referenced model into the
/// composed scene for a particular instance of that model. But rather
/// than translating and rotating points, the map function shifts the
/// values in namespace (and time).
struct PcpMapFunction {
    using BoundType = pxr::PcpMapFunction;

    /// Construct a null function.
    PcpMapFunction();

    /// Constructs a map function with the given arguments.
    /// Returns a null map function on error (see IsNull()).
    /// 
    /// \param sourceToTargetMap The map from source paths to target paths.
    /// \param offset The time offset to apply from source to target.
    static pxr::PcpMapFunction Create(const pxr::PcpMapFunction::PathMap& sourceToTargetMap, const pxr::SdfLayerOffset& offset);

    /// Construct an identity map function.
    static const pxr::PcpMapFunction& Identity();

    /// Returns an identity path mapping.
    static const pxr::PcpMapFunction::PathMap& IdentityPathMap();

    /// Swap the contents of this map function with \p map.
    void Swap(pxr::PcpMapFunction& map);

    void swap(pxr::PcpMapFunction& map);

    /// Equality.
    bool operator==(const pxr::PcpMapFunction& map) const;

    /// Inequality.
    bool operator!=(const pxr::PcpMapFunction& map) const;

    /// Return true if this map function is the null function.
    /// For a null function, MapSourceToTarget() always returns an empty path.
    bool IsNull() const;

    /// Return true if the map function is the identity function.
    /// For identity, MapSourceToTarget() always returns the path unchanged.
    bool IsIdentity() const;

    /// Return true if the map function maps the absolute root path to the
    /// absolute root path, false otherwise.
    bool HasRootIdentity() const;

    /// Map a path in the source namespace to the target.
    /// If the path is not in the domain, returns an empty path.
    pxr::SdfPath MapSourceToTarget(const pxr::SdfPath& path) const;

    /// Map a path in the target namespace to the source.
    /// If the path is not in the co-domain, returns an empty path.
    pxr::SdfPath MapTargetToSource(const pxr::SdfPath& path) const;

    /// Compose this map over the given map function.
    /// The result will represent the application of f followed by
    /// the application of this function.
    pxr::PcpMapFunction Compose(const pxr::PcpMapFunction& f) const;

    /// Compose this map function over a hypothetical map function that has an
    /// identity path mapping and \p offset.  This is equivalent to building
    /// such a map function and invoking Compose(), but is faster.
    pxr::PcpMapFunction ComposeOffset(const pxr::SdfLayerOffset& newOffset) const;

    /// Return the inverse of this map function.
    /// This returns a true inverse \p inv: for any path p in this function's
    /// domain that it maps to p', inv(p') -> p.
    pxr::PcpMapFunction GetInverse() const;

    /// The set of path mappings, from source to target.
    pxr::PcpMapFunction::PathMap GetSourceToTargetMap() const;

    /// The time offset of the mapping.
    const pxr::SdfLayerOffset& GetTimeOffset() const;

    /// Returns a string representation of this mapping for debugging
    /// purposes.
    std::string GetString() const;

    /// Return a size_t hash for this map function.
    size_t Hash() const;

    PcpMapFunction(const pxr::PcpMapFunction& );

    PcpMapFunction(pxr::PcpMapFunction&& ) CPPMM_IGNORE;

    pxr::PcpMapFunction& operator=(const pxr::PcpMapFunction& );

    pxr::PcpMapFunction& operator=(pxr::PcpMapFunction&& ) CPPMM_IGNORE;

    ~PcpMapFunction();


    struct _Data {
        using BoundType = pxr::PcpMapFunction::_Data;

        _Data();

        _Data(const pxr::PcpMapFunction::PathPair* begin, const pxr::PcpMapFunction::PathPair* end, bool hasRootIdentity);

        _Data(const pxr::PcpMapFunction::_Data& other);

        _Data(pxr::PcpMapFunction::_Data&& other) CPPMM_IGNORE;

        pxr::PcpMapFunction::_Data& operator=(const pxr::PcpMapFunction::_Data& other);

        pxr::PcpMapFunction::_Data& operator=(pxr::PcpMapFunction::_Data&& other) CPPMM_IGNORE;

        ~_Data();

        bool IsNull() const;

        const pxr::PcpMapFunction::PathPair* begin() const;

        const pxr::PcpMapFunction::PathPair* end() const;

        bool operator==(const pxr::PcpMapFunction::_Data& other) const;

        bool operator!=(const pxr::PcpMapFunction::_Data& other) const;


        struct  {
            using BoundType = pxr::PcpMapFunction::_Data::;

            (const pxr::PcpMapFunction::_Data::& );

            (pxr::PcpMapFunction::_Data::&& ) CPPMM_IGNORE;

            pxr::PcpMapFunction::_Data::& operator=(const pxr::PcpMapFunction::_Data::& );

            pxr::PcpMapFunction::_Data::& operator=(pxr::PcpMapFunction::_Data::&& ) CPPMM_IGNORE;

            ~();

        } CPPMM_OPAQUEPTR; // struct 

    } CPPMM_OPAQUEPTR; // struct _Data

} CPPMM_OPAQUEPTR; // struct PcpMapFunction


size_t hash_value(const pxr::PcpMapFunction& x);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
