#include <cppmm_bind.hpp>
#include <pxr/usd/ar/resolverContext.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class ArResolverContext
///
/// Contains information about a resolved asset.
///
struct ArResolverContext
{
public:
    using BoundType = pxr::ArResolverContext;

    /// Construct an empty asset resolver context.
    ArResolverContext();

    ArResolverContext(const pxr::ArResolverContext &);

    /// Construct a resolver context using the given objects \p objs.
    ///
    /// Each argument must either be an ArResolverContext or a registered
    /// context object. See class documentation for requirements on context
    /// objects.
    ///
    /// If an argument is a context object, it will be added to the
    /// constructed ArResolverContext. If an argument is an ArResolverContext,
    /// all of the context objects it holds will be added to the constructed
    /// ArResolverContext.
    ///
    /// Arguments are ordered from strong-to-weak. If a context object is
    /// encountered with the same type as a previously-added object, the
    /// previously-added object will remain and the other context object
    /// will be ignored.
    #if 0
    template <
        class ...Objects,
        typename std::enable_if<Ar_AllValidForContext<Objects...>::value>::type*
            = nullptr>
    ArResolverContext(const Objects&... objs)
    {
        _AddObjects(objs...);
    }
    #endif

    /// Construct a resolver context using the ArResolverContexts in \p ctxs.
    ///
    /// All of the context objects held by each ArResolverContext in \p ctxs
    /// will be added to the constructed ArResolverContext.
    ///
    /// Arguments are ordered from strong-to-weak. If a context object is
    /// encountered with the same type as a previously-added object, the
    /// previously-added object will remain and the other context object
    /// will be ignored.
    ArResolverContext(const std::vector<pxr::ArResolverContext>& ctxs);

    /// Returns whether this resolver context is empty.
    bool IsEmpty() const;

    /// Returns pointer to the context object of the given type
    /// held in this resolver context. Returns NULL if this resolver
    /// context is not holding an object of the requested type.
    #if 0
    template <class ContextObj>
    const ContextObj* Get() const
    {
        for (const auto& context : _contexts) {
            if (context->IsHolding(typeid(ContextObj))) {
                return &_GetTyped<ContextObj>(*context)._context;
            }
        }
        return nullptr;
    }
    #endif

    /// Returns a debug string representing the contained context objects.
    std::string GetDebugString() const;

    /// \name Operators
    /// @{
    bool operator==(const pxr::ArResolverContext& rhs) const;
    bool operator!=(const pxr::ArResolverContext& rhs) const;
    bool operator<(const pxr::ArResolverContext& rhs) const CPPMM_RENAME(lt);

    /// @}

    /// Returns hash value for this asset resolver context.
    size_t hash_value(const pxr::ArResolverContext& context);

} CPPMM_OPAQUEPTR; // struct ArResolverContext

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

