#include <cppmm_bind.hpp>
#include <pxr/usd/ar/notice.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArNotice
///
/// Contains information about a resolved asset.
///
struct ArNotice 
{
public:
    using BoundType = pxr::ArNotice;

    /// \class ResolverNotice
    /// Base class for all ArResolver-related notices.
    class ResolverNotice
    {
    public:
        using BoundType = pxr::ArNotice::ResolverNotice;
        ~ResolverNotice();

    } CPPMM_OPAQUEPTR;

    /// \class ResolverChanged
    /// Notice sent when asset paths may resolve to a different path than
    /// before due to a change in the resolver.
    class ResolverChanged 
    {
    public:
        using BoundType = pxr::ArNotice::ResolverChanged;

        /// Create a notice indicating that the results of asset resolution
        /// might have changed, regardless of what ArResolverContext object
        /// is bound.
        ResolverChanged();

        /// Create a notice using \p affectsFn to determine the
        /// ArResolverContext objects that are affected by this resolver
        /// change. If \p affectsFn returns true, it means the results of asset
        /// resolution when the given ArResolverContext is bound might have
        /// changed.
        ResolverChanged(
            const std::function<bool(const pxr::ArResolverContext&)>& affectsFn);

        /// Create a notice indicating that the results of asset resolution when
        /// any ArResolverContext containing \p contextObj is bound might have
        /// changed.
		#if 0
        template <
            class ContextObj,
            typename std::enable_if<ArIsContextObject<ContextObj>::value>::type*
                = nullptr>
        ResolverChanged(
            const ContextObj& contextObj)
            // XXX: Ideally this would just use a lambda and forward it to
            // the other c'tor. Both of those cause issues in MSVC 2015; the
            // first causes an unspecified type error and the second causes
            // odd linker errors.
            : _affects(std::bind(&Ar_ContextIsHolding<ContextObj>, contextObj, 
                    std::placeholders::_1))
        {
        }
		#endif
 
        ~ResolverChanged();

        /// Returns true if the results of asset resolution when \p ctx
        /// is bound may be affected by this resolver change.
        
        bool AffectsContext(const pxr::ArResolverContext& ctx) const;
    } CPPMM_OPAQUEPTR;

} CPPMM_OPAQUEPTR; // struct ArNotice

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
