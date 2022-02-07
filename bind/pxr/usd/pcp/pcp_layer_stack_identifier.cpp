#if 0
#include <pxr/usd/pcp/layerStackIdentifier.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpLayerStackIdentifier
/// 
/// Arguments used to identify a layer stack.
/// 
/// Objects of this type are immutable.
struct PcpLayerStackIdentifier {
    using BoundType = pxr::PcpLayerStackIdentifier;

    /// Construct with all empty pointers.
    PcpLayerStackIdentifier();

    /// Construct with given pointers.  If all arguments are \c TfNullPtr
    /// then the result is identical to the default constructed object.
    PcpLayerStackIdentifier(const pxr::SdfLayerHandle& rootLayer_, const pxr::SdfLayerHandle& sessionLayer_, const pxr::ArResolverContext& pathResolverContext_);

    pxr::PcpLayerStackIdentifier& operator=(const pxr::PcpLayerStackIdentifier& );

    operator const unsigned long pxr::PcpLayerStackIdentifier::*() const;

    bool operator==(const pxr::PcpLayerStackIdentifier& rhs) const;

    bool operator<(const pxr::PcpLayerStackIdentifier& rhs) const;

    size_t GetHash() const;

    PcpLayerStackIdentifier(const pxr::PcpLayerStackIdentifier& );


    struct Hash {
        using BoundType = pxr::PcpLayerStackIdentifier::Hash;

        size_t operator()(const pxr::PcpLayerStackIdentifier& x) const;

    } CPPMM_OPAQUEPTR; // struct Hash

} CPPMM_OPAQUEPTR; // struct PcpLayerStackIdentifier


/// \class PcpLayerStackIdentifierStr
/// 
/// A "string"-based version of PcpLayerStackIdentifier.  These are used in
/// places where they should be stable wrt layer lifetimes.  This is done by
/// storing layer identifiers as strings rather than SdfLayerHandles.
struct PcpLayerStackIdentifierStr {
    using BoundType = pxr::PcpLayerStackIdentifierStr;

    /// Construct with given identifier strings and context.  If all arguments
    /// are empty strings and default-constructed ArResolverContext, then the
    /// result is identical to the default constructed object.
    PcpLayerStackIdentifierStr(const std::string& rootLayerId, const std::string& sessionLayerId, const pxr::ArResolverContext& resolverContext);

    /// Allow implicit conversion from PcpLayerStackIdentifier
    PcpLayerStackIdentifierStr(const pxr::PcpLayerStackIdentifier& lsid);

    operator const unsigned long pxr::PcpLayerStackIdentifierStr::*() const;

    bool operator==(const pxr::PcpLayerStackIdentifierStr::This& rhs) const;

    bool operator<(const pxr::PcpLayerStackIdentifierStr::This& rhs) const;

    size_t GetHash() const;

    PcpLayerStackIdentifierStr(const pxr::PcpLayerStackIdentifierStr::This& );

    PcpLayerStackIdentifierStr(pxr::PcpLayerStackIdentifierStr&& ) CPPMM_IGNORE;

    pxr::PcpLayerStackIdentifierStr& operator=(const pxr::PcpLayerStackIdentifierStr::This& );

    pxr::PcpLayerStackIdentifierStr& operator=(pxr::PcpLayerStackIdentifierStr&& ) CPPMM_IGNORE;

    ~PcpLayerStackIdentifierStr();


    struct Hash {
        using BoundType = pxr::PcpLayerStackIdentifierStr::Hash;

        size_t operator()(const pxr::PcpLayerStackIdentifierStr::This& x) const;

    } CPPMM_OPAQUEPTR; // struct Hash

} CPPMM_OPAQUEPTR; // struct PcpLayerStackIdentifierStr


size_t hash_value(const pxr::PcpLayerStackIdentifier& x);


size_t hash_value(const pxr::PcpLayerStackIdentifierStr::This& x);


std::ostream& operator<<(std::ostream& , const pxr::PcpLayerStackIdentifier& );


std::ostream& operator<<(std::ostream& , const pxr::PcpLayerStackIdentifierStr::This& );


/// Manipulator to cause the next PcpLayerStackIdentifier or
/// PcpLayerStackIdentifierStr written to the ostream to write the base name of
/// its layers, rather than the full identifier.
std::ostream& PcpIdentifierFormatBaseName(std::ostream& );


/// Manipulator to cause the next PcpLayerStackIdentifier or
/// PcpLayerStackIdentifierStr written to the ostream to write the real path of
/// its layers, rather than the identifier.
std::ostream& PcpIdentifierFormatRealPath(std::ostream& );


/// Manipulator to cause the next PcpLayerStackIdentifier or
/// PcpLayerStackIdentifierStr written to the ostream to write the identifier of
/// its layers.  This is the default state; this manipulator is only to nullify
/// one of the above manipulators.
std::ostream& PcpIdentifierFormatIdentifier(std::ostream& );


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
