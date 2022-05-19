#include <cppmm_bind.hpp>
#include <pxr/usd/kind/registry.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class KindRegistry
///
/// Contains information about a resolved asset.
///
struct KindRegistry
{
public:
    using BoundType = pxr::KindRegistry;

    /// Return the single \c KindRegistry instance.
    static pxr::KindRegistry& GetInstance();

    /// Test whether \a kind is known to the registry.
    static bool HasKind(const pxr::TfToken& kind);

    /// Return the base kind of the given kind.
    /// If there is no base, the result will be an empty token.
    /// Issues a coding error if \a kind is unknown to the registry.
    static pxr::TfToken GetBaseKind(const pxr::TfToken &kind);

    /// Test whether \a derivedKind is the same as \a baseKind or
    /// has it as a base kind (either directly or indirectly).
    ///
    /// It is \em not required that \a derivedKind or \a baseKind
    /// be known to the registry: if they are unknown but equal,
    /// IsA will return \c true; otherwise if either is unknown, we
    /// will simply return false.
    ///
    /// Therefore this method will not raise any errors.
    static bool IsA(const pxr::TfToken& derivedKind, const pxr::TfToken &baseKind);

    /// Return an unordered vector of all kinds known to the registry.
    static std::vector<pxr::TfToken> GetAllKinds();

} CPPMM_OPAQUEPTR; // struct KindRegistry

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

