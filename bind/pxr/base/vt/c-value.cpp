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
///
/// These are the supported types
///
/// [*]bool		bool
/// [*]uchar		uint8_t	8 bit unsigned integer
/// [*]int		    int32_t	32 bit signed integer
/// [*]uint		uint32_t	32 bit unsigned integer
/// [*]int64		int64_t	64 bit signed integer
/// [*]uint64		uint64_t	64 bit unsigned integer
/// [ ]half		GfHalf	16 bit floating point
/// [*]float		float	32 bit floating point
/// [*]double		double	64 bit floating point
/// [ ]timecode	SdfTimeCode	double representing a resolvable time
/// [ ]string		std::string	stl string
/// [ ]token		TfToken	interned string with fast comparison and hashing
/// [ ]asset		SdfAssetPath	represents a resolvable path to another asset
/// [ ]matrix2d	GfMatrix2d	2x2 matrix of doubles
/// [ ]matrix3d	GfMatrix3d	3x3 matrix of doubles
/// [ ]matrix4d	GfMatrix4d	4x4 matrix of doubles
/// [ ]quatd		GfQuatd	double-precision quaternion
/// [ ]quatf		GfQuatf	single-precision quaternion
/// [ ]quath		GfQuath	half-precision quaternion
/// [ ]double2		GfVec2d	vector of 2 doubles
/// [ ]float2		GfVec2f	vector of 2 floats
/// [ ]half2		GfVec2h	vector of 2 half's
/// [ ]int2		GfVec2i	vector of 2 ints
/// [ ]double3		GfVec3d	vector of 3 doubles
/// [ ]float3		GfVec3f	vector of 3 floats
/// [ ]half3		GfVec3h	vector of 3 half's
/// [ ]int3		GfVec3i	vector of 3 ints
/// [ ]double4		GfVec4d	vector of 4 doubles
/// [ ]float4		GfVec4f	vector of 4 floats
/// [ ]half4		GfVec4h	vector of 4 half's
/// [ ]int4		GfVec4i	vector of 4 ints
struct VtValue {
    using BoundType = pxr::VtValue;

    /// Default ctor gives empty VtValue.
    VtValue();

    template <typename T>
    VtValue(const T& obj);

    template <class T>
    T const &Get() const;

#if 0
    template <typename T>
    VtValue(const T& obj);

    /// Copy construct with \p other.
    VtValue(const pxr::VtValue& other);

    /// Move construct with \p other.
    VtValue(pxr::VtValue&& other) CPPMM_IGNORE;


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

// Constructors
extern template CPPMM_RENAME(ctor_bool) VtValue::VtValue(const bool& obj);
extern template CPPMM_RENAME(ctor_uchar) VtValue::VtValue(const uint8_t& obj);
extern template CPPMM_RENAME(ctor_int) VtValue::VtValue(const int32_t& obj);
extern template CPPMM_RENAME(ctor_uint) VtValue::VtValue(const uint32_t& obj);
extern template CPPMM_RENAME(ctor_int64) VtValue::VtValue(const int64_t& obj);
extern template CPPMM_RENAME(ctor_uint64) VtValue::VtValue(const uint64_t& obj);
// half - missing
extern template CPPMM_RENAME(ctor_float) VtValue::VtValue(const float& obj);
extern template CPPMM_RENAME(ctor_double) VtValue::VtValue(const double& obj);
// timecode - missing
// string - missing
// token - TfToken missing

// Getter
extern template bool const & CPPMM_RENAME(GetBool) VtValue::Get<bool>() const;
extern template uint8_t const & CPPMM_RENAME(GetBool) VtValue::Get<uint8_t>() const;
extern template int32_t const & CPPMM_RENAME(GetBool) VtValue::Get<int32_t>() const;
extern template uint32_t const & CPPMM_RENAME(GetBool) VtValue::Get<uint32_t>() const;
extern template int64_t const & CPPMM_RENAME(GetBool) VtValue::Get<int64_t>() const;
extern template uint64_t const & CPPMM_RENAME(GetBool) VtValue::Get<uint64_t>() const;
extern template float const & CPPMM_RENAME(GetBool) VtValue::Get<float>() const;
extern template double const & CPPMM_RENAME(GetFloat) VtValue::Get<double>() const;

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

template pxr::VtValue::VtValue(const bool& obj);
template pxr::VtValue::VtValue(const uint8_t& obj);
template pxr::VtValue::VtValue(const int32_t& obj);
template pxr::VtValue::VtValue(const uint32_t& obj);
template pxr::VtValue::VtValue(const int64_t& obj);
template pxr::VtValue::VtValue(const uint64_t& obj);
template pxr::VtValue::VtValue(const float& obj);
template pxr::VtValue::VtValue(const double& obj);

template bool const & pxr::VtValue::Get<bool>() const;
template uint8_t const & pxr::VtValue::Get<uint8_t>() const;
template int32_t const & pxr::VtValue::Get<int32_t>() const;
template uint32_t const & pxr::VtValue::Get<uint32_t>() const;
template int64_t const & pxr::VtValue::Get<int64_t>() const;
template uint64_t const & pxr::VtValue::Get<uint64_t>() const;
template float const & pxr::VtValue::Get<float>() const;
template double const & pxr::VtValue::Get<double>() const;
