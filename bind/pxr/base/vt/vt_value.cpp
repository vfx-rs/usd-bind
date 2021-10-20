#include <pxr/base/gf/half.h>
#include <pxr/base/gf/quatf.h>
#include <pxr/base/gf/quatd.h>
#include <pxr/base/gf/vec2h.h>
#include <pxr/base/gf/vec2f.h>
#include <pxr/base/gf/vec2d.h>
#include <pxr/base/gf/vec2i.h>
#include <pxr/base/gf/vec3h.h>
#include <pxr/base/gf/vec3f.h>
#include <pxr/base/gf/vec3d.h>
#include <pxr/base/gf/vec3i.h>
#include <pxr/base/gf/vec4h.h>
#include <pxr/base/gf/vec4f.h>
#include <pxr/base/gf/vec4d.h>
#include <pxr/base/gf/vec4i.h>
#include <pxr/base/gf/matrix2f.h>
#include <pxr/base/gf/matrix2d.h>
#include <pxr/base/gf/matrix3f.h>
#include <pxr/base/gf/matrix3d.h>
#include <pxr/base/gf/matrix4f.h>
#include <pxr/base/gf/matrix4d.h>
#include <pxr/base/tf/token.h>
#include <pxr/base/vt/value.h>
#include <pxr/base/vt/array.h>
#include <pxr/base/vt/types.h>
#include <pxr/usd/sdf/timeCode.h>
#include <pxr/usd/sdf/assetPath.h>
#include <string>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// Make a default value.  VtValue uses this to create values to be returned
/// from failed calls to *Get*.  Clients may specialize this for their own
/// types.

/// Provides a container which may hold any type, and provides introspection
/// and iteration over array types.  See *VtIsArray* for more info.
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
/// ```
/// TF_REGISTRY_FUNCTION(VtValue) {
/// }
/// ```
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
/// [x]half		GfHalf	16 bit floating point
/// [*]float		float	32 bit floating point
/// [*]double		double	64 bit floating point
/// [x]timecode	SdfTimeCode	double representing a resolvable time
/// [x]string		std::string	stl string
/// [x]token		TfToken	interned string with fast comparison and hashing
/// [x]asset		SdfAssetPath	represents a resolvable path to an asset
/// [x]matrix2d	GfMatrix2d	2x2 matrix of doubles
//  [x]matrix3d GfMatrix3d	3x3 matrix of doubles
/// [x]matrix4d	GfMatrix4d	4x4 matrix of doubles
/// [x]quatd		GfQuatd	double-precision quaternion
/// [x]quatf		GfQuatf	single-precision quaternion
/// [ ]quath		GfQuath	half-precision quaternion
/// [x]double2		GfVec2d	vector of 2 doubles
/// [x]float2		GfVec2f	vector of 2 floats
/// [x]half2		GfVec2h	vector of 2 half's
/// [x]int2		GfVec2i	vector of 2 ints
/// [x]double3		GfVec3d	vector of 3 doubles
/// [x]float3		GfVec3f	vector of 3 floats
/// [x]half3		GfVec3h	vector of 3 half's
/// [x]int3		GfVec3i	vector of 3 ints
/// [x]double4		GfVec4d	vector of 4 doubles
/// [x]float4		GfVec4f	vector of 4 floats
/// [x]half4		GfVec4h	vector of 4 half's
/// [x]int4		GfVec4i	vector of 4 ints
struct VtValue {
    using BoundType = pxr::VtValue;

    /// Default ctor gives empty VtValue.
    VtValue();

    template <typename T> VtValue(const T& obj);

    template <class T> T const& Get() const;

    template <typename T> pxr::VtValue& operator=(T obj);

    template <typename T> pxr::VtValue& operator=(const T& obj);

    /// Returns the TfType of the type held by this value.
    VT_API pxr::TfType GetType() const;

    /// Return the type name of the held typeid.
    VT_API std::string GetTypeName() const;

    template <class T> bool IsHolding() const;

    /// Returns the typeid of the type held by this value.
    VT_API std::type_info const& GetTypeid() const;

    /// Return the typeid of elements in a array valued type.  If not
    /// holding an array valued type, return typeid(void).
    VT_API std::type_info const& GetElementTypeid() const;

#if 0
    template <typename T>
    VtValue(const T& obj);

    /// Copy construct with *other*.
    VtValue(const pxr::VtValue& other);

    /// Move construct with *other*.
    VtValue(pxr::VtValue&& other) CPPMM_IGNORE;


    template <typename T>
    static pxr::VtValue Take(T& obj);

#endif

    /// Destructor.
    ~VtValue();

#if 0

    /// Copy assignment from another *VtValue*.
    pxr::VtValue& operator=(const pxr::VtValue& other);

    /// Move assignment from another *VtValue*.
    pxr::VtValue& operator=(pxr::VtValue&& other) CPPMM_IGNORE;

    /// Assigning a char * gives a VtValue holding a std::string.
    pxr::VtValue& operator=(char* cstr);

    /// Swap this with *rhs*.
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

#define VALUE_METHODS(T, NAME)                                                 \
    namespace cppmm_bind {                                                     \
    namespace PXR_INTERNAL_NS {                                                \
    namespace pxr = ::PXR_INTERNAL_NS;                                         \
                                                                               \
    extern template CPPMM_RENAME(ctor_##NAME) VtValue::VtValue(const T& obj);  \
                                                                               \
    extern template T const& VtValue::Get<T>() const;                          \
    T const& (VtValue::*Get_##NAME)() const = &VtValue::Get<T>;                \
                                                                               \
    extern template pxr::VtValue& VtValue::operator=(T);                       \
    pxr::VtValue& (VtValue::*assign_##NAME)(T) = &VtValue::operator=<T>;       \
    }                                                                          \
                                                                               \
    bool value_is_holding_##NAME(const pxr::VtValue& v) CPPMM_IMPL {           \
        return v.IsHolding<T>();                                               \
    }                                                                          \
    }                                                                          \
    extern template pxr::VtValue::VtValue(const T& obj);                       \
    extern template T const& pxr::VtValue::Get<T>() const;                     \
    extern template pxr::VtValue& pxr::VtValue::operator=(T);

#define REF_METHODS(T, NAME)                                                   \
    namespace cppmm_bind {                                                     \
    namespace PXR_INTERNAL_NS {                                                \
    namespace pxr = ::PXR_INTERNAL_NS;                                         \
                                                                               \
    extern template CPPMM_RENAME(ctor_##NAME) VtValue::VtValue(const T& obj);  \
                                                                               \
    extern template T const& VtValue::Get<T>() const;                          \
    T const& (VtValue::*Get_##NAME)() const = &VtValue::Get<T>;                \
                                                                               \
    extern template pxr::VtValue& VtValue::operator=(const T&);                \
    pxr::VtValue& (VtValue::*assign_##NAME)(const T&) = &VtValue::operator=    \
                                                            <T>;               \
    }                                                                          \
                                                                               \
    bool value_is_holding_##NAME(const pxr::VtValue& v) CPPMM_IMPL {           \
        return v.IsHolding<T>();                                               \
    }                                                                          \
    }                                                                          \
    extern template pxr::VtValue::VtValue(const T& obj);                       \
    extern template T const& pxr::VtValue::Get<T>() const;                     \
    extern template pxr::VtValue& pxr::VtValue::operator=(const T&);

// Scalars
VALUE_METHODS(bool, bool);
VALUE_METHODS(uint8_t, uint8_t);
VALUE_METHODS(uint32_t, uint32_t);
VALUE_METHODS(uint64_t, uint64_t);
VALUE_METHODS(int32_t, int32_t);
VALUE_METHODS(int64_t, int64_t);
VALUE_METHODS(float, float);
VALUE_METHODS(double, double);
VALUE_METHODS(pxr::GfHalf, half);

REF_METHODS(pxr::SdfTimeCode, SdfTimeCode);
REF_METHODS(pxr::SdfAssetPath, SdfAssetPath);
REF_METHODS(pxr::TfToken, TfToken);
REF_METHODS(std::string, string);

// Vec
VALUE_METHODS(pxr::GfVec2h, GfVec2h);
VALUE_METHODS(pxr::GfVec3h, GfVec3h);
VALUE_METHODS(pxr::GfVec4h, GfVec4h);

REF_METHODS(pxr::GfVec2d, GfVec2d);
REF_METHODS(pxr::GfVec3d, GfVec3d);
REF_METHODS(pxr::GfVec4d, GfVec4d);

VALUE_METHODS(pxr::GfVec2f, GfVec2f);
REF_METHODS(pxr::GfVec3f, GfVec3f);
REF_METHODS(pxr::GfVec4f, GfVec4f);

VALUE_METHODS(pxr::GfVec2i, GfVec2i);
REF_METHODS(pxr::GfVec3i, GfVec3i);
REF_METHODS(pxr::GfVec4i, GfVec4i);

// Quat
REF_METHODS(pxr::GfQuatf, GfQuatf);
REF_METHODS(pxr::GfQuatd, GfQuatd);

// Matrix
REF_METHODS(pxr::GfMatrix2f, GfMatrix2f);
REF_METHODS(pxr::GfMatrix2d, GfMatrix2d);

REF_METHODS(pxr::GfMatrix3f, GfMatrix3f);
REF_METHODS(pxr::GfMatrix3d, GfMatrix3d);

REF_METHODS(pxr::GfMatrix4f, GfMatrix4f);
REF_METHODS(pxr::GfMatrix4d, GfMatrix4d);

// Array - Scalar
REF_METHODS(pxr::VtBoolArray, VtArrayBool);
REF_METHODS(pxr::VtIntArray, VtArrayI32);
REF_METHODS(pxr::VtFloatArray, VtArrayF32);
REF_METHODS(pxr::VtTokenArray, VtArrayTfToken);

// Array - Vec
REF_METHODS(pxr::VtArray<pxr::GfVec2f>, VtArrayGfVec2f);
REF_METHODS(pxr::VtArray<pxr::GfVec3f>, VtArrayGfVec3f);
REF_METHODS(pxr::VtArray<pxr::GfVec4f>, VtArrayGfVec4f);

REF_METHODS(pxr::VtArray<pxr::GfVec2d>, VtArrayGfVec2d);
REF_METHODS(pxr::VtArray<pxr::GfVec3d>, VtArrayGfVec3d);
REF_METHODS(pxr::VtArray<pxr::GfVec4d>, VtArrayGfVec4d);

REF_METHODS(pxr::VtArray<pxr::GfVec2i>, VtArrayGfVec2i);
REF_METHODS(pxr::VtArray<pxr::GfVec3i>, VtArrayGfVec3i);
REF_METHODS(pxr::VtArray<pxr::GfVec4i>, VtArrayGfVec4i);

// Array - Quat
REF_METHODS(pxr::VtArray<pxr::GfQuatf>, VtArrayGfQuatf);
REF_METHODS(pxr::VtArray<pxr::GfQuatd>, VtArrayGfQuatd);

// Array - Matrix
REF_METHODS(pxr::VtArray<pxr::GfMatrix2f>, VtArrayGfMatrix2f);
REF_METHODS(pxr::VtArray<pxr::GfMatrix3f>, VtArrayGfMatrix3f);
REF_METHODS(pxr::VtArray<pxr::GfMatrix4f>, VtArrayGfMatrix4f);

REF_METHODS(pxr::VtArray<pxr::GfMatrix2d>, VtArrayGfMatrix2d);
REF_METHODS(pxr::VtArray<pxr::GfMatrix3d>, VtArrayGfMatrix3d);
REF_METHODS(pxr::VtArray<pxr::GfMatrix4d>, VtArrayGfMatrix4d);
