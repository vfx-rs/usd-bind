#if 0
#include <pxr/usd/pcp/site.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpLayerStackSite
/// 
/// A site specifies a path in a layer stack of scene description.
struct PcpLayerStackSite {
    using BoundType = pxr::PcpLayerStackSite;

    PcpLayerStackSite();

    PcpLayerStackSite(const pxr::PcpLayerStackRefPtr& , const pxr::SdfPath& path);

    bool operator==(const pxr::PcpLayerStackSite& rhs) const;

    bool operator<(const pxr::PcpLayerStackSite& rhs) const;

    PcpLayerStackSite(const pxr::PcpLayerStackSite& );

    PcpLayerStackSite(pxr::PcpLayerStackSite&& ) CPPMM_IGNORE;

    pxr::PcpLayerStackSite& operator=(const pxr::PcpLayerStackSite& );

    pxr::PcpLayerStackSite& operator=(pxr::PcpLayerStackSite&& ) CPPMM_IGNORE;

    ~PcpLayerStackSite();


    struct Hash {
        using BoundType = pxr::PcpLayerStackSite::Hash;

        size_t operator()(const pxr::PcpLayerStackSite& ) const;

        Hash();

        Hash(const pxr::PcpLayerStackSite::Hash& );

        Hash(pxr::PcpLayerStackSite::Hash&& ) CPPMM_IGNORE;

        ~Hash();

    } CPPMM_OPAQUEPTR; // struct Hash

} CPPMM_OPAQUEPTR; // struct PcpLayerStackSite


/// \class PcpSite
/// 
/// A site specifies a path in a layer stack of scene description.
struct PcpSite {
    using BoundType = pxr::PcpSite;

    PcpSite();

    PcpSite(const pxr::PcpLayerStackIdentifier& , const pxr::SdfPath& path);

    PcpSite(const pxr::PcpLayerStackPtr& , const pxr::SdfPath& path);

    PcpSite(const pxr::SdfLayerHandle& , const pxr::SdfPath& path);

    PcpSite(const pxr::PcpLayerStackSite& );

    bool operator==(const pxr::PcpSite& rhs) const;

    bool operator<(const pxr::PcpSite& rhs) const;

    PcpSite(pxr::PcpSite&& ) CPPMM_IGNORE;

    pxr::PcpSite& operator=(const pxr::PcpSite& );

    pxr::PcpSite& operator=(pxr::PcpSite&& ) CPPMM_IGNORE;

    PcpSite(const pxr::PcpSite& );


    struct Hash {
        using BoundType = pxr::PcpSite::Hash;

        size_t operator()(const pxr::PcpSite& ) const;

        Hash();

        Hash(const pxr::PcpSite::Hash& );

        Hash(pxr::PcpSite::Hash&& ) CPPMM_IGNORE;

        ~Hash();

    } CPPMM_OPAQUEPTR; // struct Hash

} CPPMM_OPAQUEPTR; // struct PcpSite


/// \class PcpSiteStr
/// 
/// A "string-based" version of PcpSite.  This stores layer identifiers as
/// strings rather than SdfLayerHandles, making it stable wrt layer lifetimes.
struct PcpSiteStr {
    using BoundType = pxr::PcpSiteStr;

    PcpSiteStr();

    PcpSiteStr(const pxr::PcpLayerStackIdentifierStr& , const pxr::SdfPath& path);

    PcpSiteStr(const pxr::PcpLayerStackIdentifier& , const pxr::SdfPath& path);

    PcpSiteStr(const pxr::SdfLayerHandle& , const pxr::SdfPath& path);

    PcpSiteStr(const pxr::PcpLayerStackSite& );

    PcpSiteStr(const pxr::PcpSite& );

    bool operator==(const pxr::PcpSiteStr& rhs) const;

    bool operator<(const pxr::PcpSiteStr& rhs) const;

    PcpSiteStr(const pxr::PcpSiteStr& );

    PcpSiteStr(pxr::PcpSiteStr&& ) CPPMM_IGNORE;


    struct Hash {
        using BoundType = pxr::PcpSiteStr::Hash;

        size_t operator()(const pxr::PcpSiteStr& ) const;

        Hash();

        Hash(const pxr::PcpSiteStr::Hash& );

        Hash(pxr::PcpSiteStr::Hash&& ) CPPMM_IGNORE;

        ~Hash();

    } CPPMM_OPAQUEPTR; // struct Hash

} CPPMM_OPAQUEPTR; // struct PcpSiteStr


std::ostream& operator<<(std::ostream& , const pxr::PcpSite& );


std::ostream& operator<<(std::ostream& , const pxr::PcpSiteStr& );


std::ostream& operator<<(std::ostream& , const pxr::PcpLayerStackSite& );


size_t hash_value(const pxr::PcpSite& site);


size_t hash_value(const pxr::PcpSiteStr& site);


size_t hash_value(const pxr::PcpLayerStackSite& site);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
