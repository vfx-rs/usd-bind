#include <pxr/usd/sdf/allowed.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfAllowed
/// 
/// Indicates if an operation is allowed and, if not, why not.
/// 
/// A \c SdfAllowed either evaluates to \c true in a boolean context
/// or evaluates to \c false and has a string annotation.
struct SdfAllowed {
    using BoundType = pxr::SdfAllowed;

    /// Construct \c true.
    SdfAllowed();

    /// Construct \c true.
    SdfAllowed(bool x);

    /// Construct \c false with annotation \p whyNot.
    SdfAllowed(const char* whyNot);

    /// Construct \c false with annotation \p whyNot.
    SdfAllowed(const std::string& whyNot);

    /// Construct in \p condition with annotation \p whyNot if \c false.
    SdfAllowed(bool condition, const char* whyNot);

    /// Construct in \p condition with annotation \p whyNot if \c false.
    SdfAllowed(bool condition, const std::string& whyNot);

    /// Construct from bool,string pair \p x.
    SdfAllowed(const pxr::SdfAllowed::Pair& x);

    ~SdfAllowed();

    /// Returns \c true in a boolean context if allowed, \c false otherwise.
#if 0
    operator boost::optional<std::__cxx11::basic_string<char> > pxrInternal_v0_21__pxrReserved__::SdfAllowed::*() const;
#endif

    /// Returns \c false in a boolean context if allowed, \c true otherwise.
    bool operator!() const;

    /// Returns the reason why the operation is not allowed.  If the
    /// operation is allowed this returns the empty string.
#if 0
    operator const std::__cxx11::basic_string<char> &() const;
#endif

    /// Returns the reason why the operation is not allowed.  If the
    /// operation is allowed this returns the empty string.
    const std::string& GetWhyNot() const;

    /// Returns \c true if allowed, otherwise fills \p whyNot if not \c NULL
    /// and returns \c false.
    bool IsAllowed(std::string* whyNot) const;

    /// Compare to \p other.  Returns \c true if both are \c true or
    /// both are \c false and reasons why not are identical.
    bool operator==(const pxr::SdfAllowed& other) const;

    SdfAllowed(const pxr::SdfAllowed& rhs);

    pxr::SdfAllowed& operator=(const pxr::SdfAllowed& rhs);

} CPPMM_OPAQUEPTR; // struct SdfAllowed


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
