#include <pxr/base/vt/value.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// Make a default value.  VtValue uses this to create values to be returned
/// from failed calls to \a Get.  Clients may specialize this for their own
/// types.

/// Provides a container which may hold any type, and provides introspection
/// and iteration over array types.  See \a VtIsArray for more info.
/// 
/// \section VtValue_Casting Held-type Conversion with VtValue::Cast
/// 
/// VtValue provides a suite of "Cast" methods that convert or create a
/// VtValue holding a requested type (via template parameter, typeid, or
/// type-matching to another VtValue) from the type of the currently-held
/// value.  Clients can add conversions between their own types using the
/// RegisterCast(), RegisterSimpleCast(), and
/// RegisterSimpleBidirectionalCast() methods.  Conversions from plugins can
/// be guaranteed to be registered before they are needed by registering them
/// from within a
/// \code
/// TF_REGISTRY_FUNCTION(VtValue) {
/// }
/// \endcode
/// block.
/// 
/// \subsection VtValue_builtin_conversions Builtin Type Conversion
/// 
/// Conversions between most of the basic "value types" that are intrinsically
/// convertible are builtin, including all numeric types (including Gf's \c
/// half), std::string/TfToken, GfVec* (for vecs of the same dimension), and
/// VtArray<T> for floating-point POD and GfVec of the preceding.
/// 
/// \subsection VtValue_numeric_conversion Numeric Conversion Safety
/// 
/// The conversions between all scalar numeric types are performed with range
/// checks such as provided by boost::numeric_cast(), and will fail, returning
/// an empty VtValue if the source value is out of range of the destination
/// type.
/// 
/// Conversions between GfVec and other compound-numeric types provide no more
/// or less safety or checking than the conversion constructors of the types
/// themselves.  This includes VtArray, even VtArray<T> for T in scalar types
/// that are range-checked when held singly.
struct VtValue {
    using BoundType = pxr::VtValue;

    /// Default ctor gives empty VtValue.
    VtValue();

#if 0
    /// Copy construct with \p other.
    VtValue(const pxr::VtValue& other);

    /// Move construct with \p other.
    VtValue(pxr::VtValue&& other) CPPMM_IGNORE;

    template <typename T>
    void VtValue(const T& obj);

    template <typename T>
    static pxr::VtValue Take(T& obj);
#endif

    /// Destructor.
    ~VtValue();

#if 0

    /// Copy assignment from another \a VtValue.
    pxr::VtValue& operator=(const pxr::VtValue& other);

    /// Move assignment from another \a VtValue.
    pxr::VtValue& operator=(pxr::VtValue&& other) CPPMM_IGNORE;

    template <typename T>
    UNKNOWN operator=(T obj);

    template <typename T>
    UNKNOWN operator=(const T& obj);

    /// Assigning a char const * gives a VtValue holding a std::string.
    pxr::VtValue& operator=(const char* cstr);

    /// Assigning a char * gives a VtValue holding a std::string.
    pxr::VtValue& operator=(char* cstr);

    /// Swap this with \a rhs.
    pxr::VtValue& Swap(pxr::VtValue& rhs);

    template <typename T>
    UNKNOWN Swap(T& rhs);

    template <typename T>
    UNKNOWN UncheckedSwap(T& rhs);

    /// \overload
    void UncheckedSwap(pxr::VtValue& rhs);

    template <typename T>
    T Remove();

    template <typename T>
    T UncheckedRemove();
#endif

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct VtValue

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::Vt_DefaultValueFactory<int>;
// template class pxr::VtValue::_Counted<int>;
// template class pxr::VtValue::_IsTriviallyCopyable<int>;
// template class pxr::VtValue::_UsesLocalStore<int>;
// template class pxr::VtValue::_ArrayHelper<int, int>;
// template class pxr::VtValue::_ProxyHelper<int, int>;
// template class pxr::VtValue::_TypeInfoImpl<int, int, int>;
// template class pxr::VtValue::_LocalTypeInfo<int>;
// template class pxr::VtValue::_RemoteTypeInfo<int>;
// template class pxr::VtValue::_TypeInfoFor<int>;
// template class pxr::Vt_ValueStoredType<int>;
// template class pxr::Vt_ValueGetStored<int>;
