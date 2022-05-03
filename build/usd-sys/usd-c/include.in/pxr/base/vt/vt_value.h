#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfType_t_s pxrInternal_v0_21__pxrReserved____TfType_t;
typedef pxrInternal_v0_21__pxrReserved____TfType_t pxr_TfType_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray__Bool__t_s pxrInternal_v0_21__pxrReserved____VtArray__Bool__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray__Bool__t pxr_VtArrayBool_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__t_s pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__t pxr_VtArrayU32_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__t_s pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__t pxr_VtArrayU64_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_int32_t__t_s pxrInternal_v0_21__pxrReserved____VtArray_int32_t__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_int32_t__t pxr_VtArrayI32_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_int64_t__t_s pxrInternal_v0_21__pxrReserved____VtArray_int64_t__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_int64_t__t pxr_VtArrayI64_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_float__t_s pxrInternal_v0_21__pxrReserved____VtArray_float__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_float__t pxr_VtArrayF32_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_double__t_s pxrInternal_v0_21__pxrReserved____VtArray_double__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_double__t pxr_VtArrayF64_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__t pxr_VtArraySdfAssetPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__t pxr_VtArraySdfTimeCode_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__t pxr_VtArrayTfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_std__string__t_s pxrInternal_v0_21__pxrReserved____VtArray_std__string__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_std__string__t pxr_VtArraystring_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__t pxr_VtArrayGfVec2i_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__t pxr_VtArrayGfVec3i_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__t pxr_VtArrayGfVec4i_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__t pxr_VtArrayGfVec2f_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec4f_t_s pxrInternal_v0_21__pxrReserved____GfVec4f_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec4f_t pxr_GfVec4f_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec4h_t_s pxrInternal_v0_21__pxrReserved____GfVec4h_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec4h_t pxr_GfVec4h_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfTimeCode_t_s pxrInternal_v0_21__pxrReserved____SdfTimeCode_t;
typedef pxrInternal_v0_21__pxrReserved____SdfTimeCode_t pxr_SdfTimeCode_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfAssetPath_t_s pxrInternal_v0_21__pxrReserved____SdfAssetPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfAssetPath_t pxr_SdfAssetPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__t pxr_VtArrayGfVec3f_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__t pxr_VtArrayGfVec4f_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__t pxr_VtArrayGfVec2d_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__t pxr_VtArrayGfVec3d_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__t pxr_VtArrayGfVec4d_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__t pxr_VtArrayGfQuatf_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__t pxr_VtArrayGfQuatd_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__t pxr_VtArrayGfMatrix2f_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__t pxr_VtArrayGfMatrix3f_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__t pxr_VtArrayGfMatrix4f_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__t pxr_VtArrayGfMatrix2d_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__t pxr_VtArrayGfMatrix3d_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__t_s pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__t pxr_VtArrayGfMatrix4d_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfMatrix2f_t_s pxrInternal_v0_21__pxrReserved____GfMatrix2f_t;
typedef pxrInternal_v0_21__pxrReserved____GfMatrix2f_t pxr_GfMatrix2f_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfMatrix2d_t_s pxrInternal_v0_21__pxrReserved____GfMatrix2d_t;
typedef pxrInternal_v0_21__pxrReserved____GfMatrix2d_t pxr_GfMatrix2d_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfMatrix3f_t_s pxrInternal_v0_21__pxrReserved____GfMatrix3f_t;
typedef pxrInternal_v0_21__pxrReserved____GfMatrix3f_t pxr_GfMatrix3f_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfMatrix3d_t_s pxrInternal_v0_21__pxrReserved____GfMatrix3d_t;
typedef pxrInternal_v0_21__pxrReserved____GfMatrix3d_t pxr_GfMatrix3d_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfMatrix4f_t_s pxrInternal_v0_21__pxrReserved____GfMatrix4f_t;
typedef pxrInternal_v0_21__pxrReserved____GfMatrix4f_t pxr_GfMatrix4f_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfMatrix4d_t_s pxrInternal_v0_21__pxrReserved____GfMatrix4d_t;
typedef pxrInternal_v0_21__pxrReserved____GfMatrix4d_t pxr_GfMatrix4d_t;
typedef struct pxrInternal_v0_21__pxrReserved____pxr_half__half_t_s pxrInternal_v0_21__pxrReserved____pxr_half__half_t;
typedef pxrInternal_v0_21__pxrReserved____pxr_half__half_t pxr_pxr_half_half_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec2f_t_s pxrInternal_v0_21__pxrReserved____GfVec2f_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec2f_t pxr_GfVec2f_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec2h_t_s pxrInternal_v0_21__pxrReserved____GfVec2h_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec2h_t pxr_GfVec2h_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec2d_t_s pxrInternal_v0_21__pxrReserved____GfVec2d_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec2d_t pxr_GfVec2d_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec2i_t_s pxrInternal_v0_21__pxrReserved____GfVec2i_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec2i_t pxr_GfVec2i_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec3f_t_s pxrInternal_v0_21__pxrReserved____GfVec3f_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec3f_t pxr_GfVec3f_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec3h_t_s pxrInternal_v0_21__pxrReserved____GfVec3h_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec3h_t pxr_GfVec3h_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec3d_t_s pxrInternal_v0_21__pxrReserved____GfVec3d_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec3d_t pxr_GfVec3d_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec3i_t_s pxrInternal_v0_21__pxrReserved____GfVec3i_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec3i_t pxr_GfVec3i_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec4d_t_s pxrInternal_v0_21__pxrReserved____GfVec4d_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec4d_t pxr_GfVec4d_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec4i_t_s pxrInternal_v0_21__pxrReserved____GfVec4i_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec4i_t pxr_GfVec4i_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfQuatf_t_s pxrInternal_v0_21__pxrReserved____GfQuatf_t;
typedef pxrInternal_v0_21__pxrReserved____GfQuatf_t pxr_GfQuatf_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfQuatd_t_s pxrInternal_v0_21__pxrReserved____GfQuatd_t;
typedef pxrInternal_v0_21__pxrReserved____GfQuatd_t pxr_GfQuatd_t;

/** Provides a container which may hold any type, and provides introspection
and iteration over array types.  See \a VtIsArray for more info.

\section VtValue_Casting Held-type Conversion with VtValue::Cast

VtValue provides a suite of "Cast" methods that convert or create a
VtValue holding a requested type (via template parameter, typeid, or
type-matching to another VtValue) from the type of the currently-held
value.  Clients can add conversions between their own types using the
RegisterCast(), RegisterSimpleCast(), and
RegisterSimpleBidirectionalCast() methods.  Conversions from plugins can
be guaranteed to be registered before they are needed by registering them
from within a
\code
TF_REGISTRY_FUNCTION(VtValue) {
}
\endcode
block.

\subsection VtValue_builtin_conversions Builtin Type Conversion

Conversions between most of the basic "value types" that are intrinsically
convertible are builtin, including all numeric types (including Gf's \c
half), std::string/TfToken, GfVec* (for vecs of the same dimension), and
VtArray<T> for floating-point POD and GfVec of the preceding.

\subsection VtValue_numeric_conversion Numeric Conversion Safety

The conversions between all scalar numeric types are performed with range
checks such as provided by boost::numeric_cast(), and will fail, returning
an empty VtValue if the source value is out of range of the destination
type.

Conversions between GfVec and other compound-numeric types provide no more
or less safety or checking than the conversion constructors of the types
themselves.  This includes VtArray, even VtArray<T> for T in scalar types
that are range-checked when held singly. */
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;


/** Default ctor gives empty VtValue. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor(
    pxr_VtValue_t * * this_);
#define pxr_VtValue_ctor pxrInternal_v0_21__pxrReserved____VtValue_ctor


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_bool(
    pxr_VtValue_t * * this_
    , _Bool const * obj);
#define pxr_VtValue_ctor_bool pxrInternal_v0_21__pxrReserved____VtValue_ctor_bool


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_uint8_t(
    pxr_VtValue_t * * this_
    , unsigned char const * obj);
#define pxr_VtValue_ctor_uint8_t pxrInternal_v0_21__pxrReserved____VtValue_ctor_uint8_t


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_uint32_t(
    pxr_VtValue_t * * this_
    , unsigned int const * obj);
#define pxr_VtValue_ctor_uint32_t pxrInternal_v0_21__pxrReserved____VtValue_ctor_uint32_t


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_uint64_t(
    pxr_VtValue_t * * this_
    , unsigned long const * obj);
#define pxr_VtValue_ctor_uint64_t pxrInternal_v0_21__pxrReserved____VtValue_ctor_uint64_t


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_int32_t(
    pxr_VtValue_t * * this_
    , int const * obj);
#define pxr_VtValue_ctor_int32_t pxrInternal_v0_21__pxrReserved____VtValue_ctor_int32_t


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_int64_t(
    pxr_VtValue_t * * this_
    , long const * obj);
#define pxr_VtValue_ctor_int64_t pxrInternal_v0_21__pxrReserved____VtValue_ctor_int64_t


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_float(
    pxr_VtValue_t * * this_
    , float const * obj);
#define pxr_VtValue_ctor_float pxrInternal_v0_21__pxrReserved____VtValue_ctor_float


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_double(
    pxr_VtValue_t * * this_
    , double const * obj);
#define pxr_VtValue_ctor_double pxrInternal_v0_21__pxrReserved____VtValue_ctor_double


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_half(
    pxr_VtValue_t * * this_
    , pxr_pxr_half_half_t const * obj);
#define pxr_VtValue_ctor_half pxrInternal_v0_21__pxrReserved____VtValue_ctor_half


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_SdfTimeCode(
    pxr_VtValue_t * * this_
    , pxr_SdfTimeCode_t const * obj);
#define pxr_VtValue_ctor_SdfTimeCode pxrInternal_v0_21__pxrReserved____VtValue_ctor_SdfTimeCode


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_SdfAssetPath(
    pxr_VtValue_t * * this_
    , pxr_SdfAssetPath_t const * obj);
#define pxr_VtValue_ctor_SdfAssetPath pxrInternal_v0_21__pxrReserved____VtValue_ctor_SdfAssetPath


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_TfToken(
    pxr_VtValue_t * * this_
    , pxr_TfToken_t const * obj);
#define pxr_VtValue_ctor_TfToken pxrInternal_v0_21__pxrReserved____VtValue_ctor_TfToken


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_string(
    pxr_VtValue_t * * this_
    , std_string_t const * obj);
#define pxr_VtValue_ctor_string pxrInternal_v0_21__pxrReserved____VtValue_ctor_string


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2h(
    pxr_VtValue_t * * this_
    , pxr_GfVec2h_t const * obj);
#define pxr_VtValue_ctor_GfVec2h pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2h


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3h(
    pxr_VtValue_t * * this_
    , pxr_GfVec3h_t const * obj);
#define pxr_VtValue_ctor_GfVec3h pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3h


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4h(
    pxr_VtValue_t * * this_
    , pxr_GfVec4h_t const * obj);
#define pxr_VtValue_ctor_GfVec4h pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4h


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2d(
    pxr_VtValue_t * * this_
    , pxr_GfVec2d_t const * obj);
#define pxr_VtValue_ctor_GfVec2d pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2d


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3d(
    pxr_VtValue_t * * this_
    , pxr_GfVec3d_t const * obj);
#define pxr_VtValue_ctor_GfVec3d pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3d


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4d(
    pxr_VtValue_t * * this_
    , pxr_GfVec4d_t const * obj);
#define pxr_VtValue_ctor_GfVec4d pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4d


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2f(
    pxr_VtValue_t * * this_
    , pxr_GfVec2f_t const * obj);
#define pxr_VtValue_ctor_GfVec2f pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2f


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3f(
    pxr_VtValue_t * * this_
    , pxr_GfVec3f_t const * obj);
#define pxr_VtValue_ctor_GfVec3f pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3f


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4f(
    pxr_VtValue_t * * this_
    , pxr_GfVec4f_t const * obj);
#define pxr_VtValue_ctor_GfVec4f pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4f


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2i(
    pxr_VtValue_t * * this_
    , pxr_GfVec2i_t const * obj);
#define pxr_VtValue_ctor_GfVec2i pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec2i


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3i(
    pxr_VtValue_t * * this_
    , pxr_GfVec3i_t const * obj);
#define pxr_VtValue_ctor_GfVec3i pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec3i


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4i(
    pxr_VtValue_t * * this_
    , pxr_GfVec4i_t const * obj);
#define pxr_VtValue_ctor_GfVec4i pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfVec4i


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfQuatf(
    pxr_VtValue_t * * this_
    , pxr_GfQuatf_t const * obj);
#define pxr_VtValue_ctor_GfQuatf pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfQuatf


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfQuatd(
    pxr_VtValue_t * * this_
    , pxr_GfQuatd_t const * obj);
#define pxr_VtValue_ctor_GfQuatd pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfQuatd


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix2f(
    pxr_VtValue_t * * this_
    , pxr_GfMatrix2f_t const * obj);
#define pxr_VtValue_ctor_GfMatrix2f pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix2f


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix2d(
    pxr_VtValue_t * * this_
    , pxr_GfMatrix2d_t const * obj);
#define pxr_VtValue_ctor_GfMatrix2d pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix2d


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix3f(
    pxr_VtValue_t * * this_
    , pxr_GfMatrix3f_t const * obj);
#define pxr_VtValue_ctor_GfMatrix3f pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix3f


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix3d(
    pxr_VtValue_t * * this_
    , pxr_GfMatrix3d_t const * obj);
#define pxr_VtValue_ctor_GfMatrix3d pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix3d


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix4f(
    pxr_VtValue_t * * this_
    , pxr_GfMatrix4f_t const * obj);
#define pxr_VtValue_ctor_GfMatrix4f pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix4f


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix4d(
    pxr_VtValue_t * * this_
    , pxr_GfMatrix4d_t const * obj);
#define pxr_VtValue_ctor_GfMatrix4d pxrInternal_v0_21__pxrReserved____VtValue_ctor_GfMatrix4d


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayBool(
    pxr_VtValue_t * * this_
    , pxr_VtArrayBool_t const * obj);
#define pxr_VtValue_ctor_VtArrayBool pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayBool


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayU32(
    pxr_VtValue_t * * this_
    , pxr_VtArrayU32_t const * obj);
#define pxr_VtValue_ctor_VtArrayU32 pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayU32


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayI32(
    pxr_VtValue_t * * this_
    , pxr_VtArrayI32_t const * obj);
#define pxr_VtValue_ctor_VtArrayI32 pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayI32


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayI64(
    pxr_VtValue_t * * this_
    , pxr_VtArrayI64_t const * obj);
#define pxr_VtValue_ctor_VtArrayI64 pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayI64


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayU64(
    pxr_VtValue_t * * this_
    , pxr_VtArrayU64_t const * obj);
#define pxr_VtValue_ctor_VtArrayU64 pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayU64


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayF32(
    pxr_VtValue_t * * this_
    , pxr_VtArrayF32_t const * obj);
#define pxr_VtValue_ctor_VtArrayF32 pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayF32


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayF64(
    pxr_VtValue_t * * this_
    , pxr_VtArrayF64_t const * obj);
#define pxr_VtValue_ctor_VtArrayF64 pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayF64


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayTfToken(
    pxr_VtValue_t * * this_
    , pxr_VtArrayTfToken_t const * obj);
#define pxr_VtValue_ctor_VtArrayTfToken pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayTfToken


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArraySdfAssetPath(
    pxr_VtValue_t * * this_
    , pxr_VtArraySdfAssetPath_t const * obj);
#define pxr_VtValue_ctor_VtArraySdfAssetPath pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArraySdfAssetPath


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArraySdfTimeCode(
    pxr_VtValue_t * * this_
    , pxr_VtArraySdfTimeCode_t const * obj);
#define pxr_VtValue_ctor_VtArraySdfTimeCode pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArraySdfTimeCode


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayString(
    pxr_VtValue_t * * this_
    , pxr_VtArraystring_t const * obj);
#define pxr_VtValue_ctor_VtArrayString pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayString


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec2f(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec2f_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfVec2f pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec2f


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec3f(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec3f_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfVec3f pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec3f


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec4f(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec4f_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfVec4f pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec4f


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec2d(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec2d_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfVec2d pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec2d


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec3d(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec3d_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfVec3d pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec3d


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec4d(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec4d_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfVec4d pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec4d


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec2i(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec2i_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfVec2i pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec2i


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec3i(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec3i_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfVec3i pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec3i


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec4i(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfVec4i_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfVec4i pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfVec4i


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfQuatf(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfQuatf_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfQuatf pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfQuatf


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfQuatd(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfQuatd_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfQuatd pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfQuatd


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix2f(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfMatrix2f_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfMatrix2f pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix2f


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix3f(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfMatrix3f_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfMatrix3f pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix3f


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix4f(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfMatrix4f_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfMatrix4f pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix4f


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix2d(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfMatrix2d_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfMatrix2d pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix2d


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix3d(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfMatrix3d_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfMatrix3d pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix3d


/** Construct a VtValue holding a copy of \p obj.

If T is a char pointer or array, produce a VtValue holding a
std::string. If T is boost::python::object, produce a VtValue holding
a TfPyObjWrapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix4d(
    pxr_VtValue_t * * this_
    , pxr_VtArrayGfMatrix4d_t const * obj);
#define pxr_VtValue_ctor_VtArrayGfMatrix4d pxrInternal_v0_21__pxrReserved____VtValue_ctor_VtArrayGfMatrix4d


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_dtor(
    pxr_VtValue_t * this_);
#define pxr_VtValue_dtor pxrInternal_v0_21__pxrReserved____VtValue_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_bool(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , _Bool obj);
#define pxr_VtValue_assign_bool pxrInternal_v0_21__pxrReserved____VtValue_assign_bool


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_uint8_t(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , unsigned char obj);
#define pxr_VtValue_assign_uint8_t pxrInternal_v0_21__pxrReserved____VtValue_assign_uint8_t


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_uint32_t(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , unsigned int obj);
#define pxr_VtValue_assign_uint32_t pxrInternal_v0_21__pxrReserved____VtValue_assign_uint32_t


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_uint64_t(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , unsigned long obj);
#define pxr_VtValue_assign_uint64_t pxrInternal_v0_21__pxrReserved____VtValue_assign_uint64_t


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_int32_t(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , int obj);
#define pxr_VtValue_assign_int32_t pxrInternal_v0_21__pxrReserved____VtValue_assign_int32_t


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_int64_t(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , long obj);
#define pxr_VtValue_assign_int64_t pxrInternal_v0_21__pxrReserved____VtValue_assign_int64_t


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_float(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , float obj);
#define pxr_VtValue_assign_float pxrInternal_v0_21__pxrReserved____VtValue_assign_float


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_double(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , double obj);
#define pxr_VtValue_assign_double pxrInternal_v0_21__pxrReserved____VtValue_assign_double


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_half(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_pxr_half_half_t obj);
#define pxr_VtValue_assign_half pxrInternal_v0_21__pxrReserved____VtValue_assign_half


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2h(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec2h_t obj);
#define pxr_VtValue_assign_GfVec2h pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2h


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3h(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec3h_t obj);
#define pxr_VtValue_assign_GfVec3h pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3h


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4h(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec4h_t obj);
#define pxr_VtValue_assign_GfVec4h pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4h


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec2f_t obj);
#define pxr_VtValue_assign_GfVec2f pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2f


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2i(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec2i_t obj);
#define pxr_VtValue_assign_GfVec2i pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2i


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_SdfTimeCode(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_SdfTimeCode_t const * obj);
#define pxr_VtValue_assign_SdfTimeCode pxrInternal_v0_21__pxrReserved____VtValue_assign_SdfTimeCode


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_SdfAssetPath(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_SdfAssetPath_t const * obj);
#define pxr_VtValue_assign_SdfAssetPath pxrInternal_v0_21__pxrReserved____VtValue_assign_SdfAssetPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_TfToken(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_TfToken_t const * obj);
#define pxr_VtValue_assign_TfToken pxrInternal_v0_21__pxrReserved____VtValue_assign_TfToken


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_string(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , std_string_t const * obj);
#define pxr_VtValue_assign_string pxrInternal_v0_21__pxrReserved____VtValue_assign_string


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec2d_t const * obj);
#define pxr_VtValue_assign_GfVec2d pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec2d


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec3d_t const * obj);
#define pxr_VtValue_assign_GfVec3d pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3d


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec4d_t const * obj);
#define pxr_VtValue_assign_GfVec4d pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4d


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec3f_t const * obj);
#define pxr_VtValue_assign_GfVec3f pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3f


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec4f_t const * obj);
#define pxr_VtValue_assign_GfVec4f pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4f


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3i(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec3i_t const * obj);
#define pxr_VtValue_assign_GfVec3i pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec3i


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4i(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfVec4i_t const * obj);
#define pxr_VtValue_assign_GfVec4i pxrInternal_v0_21__pxrReserved____VtValue_assign_GfVec4i


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfQuatf(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfQuatf_t const * obj);
#define pxr_VtValue_assign_GfQuatf pxrInternal_v0_21__pxrReserved____VtValue_assign_GfQuatf


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfQuatd(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfQuatd_t const * obj);
#define pxr_VtValue_assign_GfQuatd pxrInternal_v0_21__pxrReserved____VtValue_assign_GfQuatd


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix2f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfMatrix2f_t const * obj);
#define pxr_VtValue_assign_GfMatrix2f pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix2f


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix2d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfMatrix2d_t const * obj);
#define pxr_VtValue_assign_GfMatrix2d pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix2d


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix3f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfMatrix3f_t const * obj);
#define pxr_VtValue_assign_GfMatrix3f pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix3f


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix3d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfMatrix3d_t const * obj);
#define pxr_VtValue_assign_GfMatrix3d pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix3d


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix4f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfMatrix4f_t const * obj);
#define pxr_VtValue_assign_GfMatrix4f pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix4f


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix4d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_GfMatrix4d_t const * obj);
#define pxr_VtValue_assign_GfMatrix4d pxrInternal_v0_21__pxrReserved____VtValue_assign_GfMatrix4d


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayBool(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayBool_t const * obj);
#define pxr_VtValue_assign_VtArrayBool pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayBool


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayU32(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayU32_t const * obj);
#define pxr_VtValue_assign_VtArrayU32 pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayU32


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayI32(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayI32_t const * obj);
#define pxr_VtValue_assign_VtArrayI32 pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayI32


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayI64(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayI64_t const * obj);
#define pxr_VtValue_assign_VtArrayI64 pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayI64


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayU64(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayU64_t const * obj);
#define pxr_VtValue_assign_VtArrayU64 pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayU64


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayF32(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayF32_t const * obj);
#define pxr_VtValue_assign_VtArrayF32 pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayF32


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayF64(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayF64_t const * obj);
#define pxr_VtValue_assign_VtArrayF64 pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayF64


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayTfToken(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayTfToken_t const * obj);
#define pxr_VtValue_assign_VtArrayTfToken pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayTfToken


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArraySdfAssetPath(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArraySdfAssetPath_t const * obj);
#define pxr_VtValue_assign_VtArraySdfAssetPath pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArraySdfAssetPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArraySdfTimeCode(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArraySdfTimeCode_t const * obj);
#define pxr_VtValue_assign_VtArraySdfTimeCode pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArraySdfTimeCode


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayString(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArraystring_t const * obj);
#define pxr_VtValue_assign_VtArrayString pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayString


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec2f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec2f_t const * obj);
#define pxr_VtValue_assign_VtArrayGfVec2f pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec2f


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec3f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec3f_t const * obj);
#define pxr_VtValue_assign_VtArrayGfVec3f pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec3f


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec4f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec4f_t const * obj);
#define pxr_VtValue_assign_VtArrayGfVec4f pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec4f


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec2d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec2d_t const * obj);
#define pxr_VtValue_assign_VtArrayGfVec2d pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec2d


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec3d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec3d_t const * obj);
#define pxr_VtValue_assign_VtArrayGfVec3d pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec3d


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec4d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec4d_t const * obj);
#define pxr_VtValue_assign_VtArrayGfVec4d pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec4d


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec2i(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec2i_t const * obj);
#define pxr_VtValue_assign_VtArrayGfVec2i pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec2i


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec3i(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec3i_t const * obj);
#define pxr_VtValue_assign_VtArrayGfVec3i pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec3i


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec4i(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfVec4i_t const * obj);
#define pxr_VtValue_assign_VtArrayGfVec4i pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfVec4i


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfQuatf(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfQuatf_t const * obj);
#define pxr_VtValue_assign_VtArrayGfQuatf pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfQuatf


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfQuatd(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfQuatd_t const * obj);
#define pxr_VtValue_assign_VtArrayGfQuatd pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfQuatd


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix2f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfMatrix2f_t const * obj);
#define pxr_VtValue_assign_VtArrayGfMatrix2f pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix2f


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix3f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfMatrix3f_t const * obj);
#define pxr_VtValue_assign_VtArrayGfMatrix3f pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix3f


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix4f(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfMatrix4f_t const * obj);
#define pxr_VtValue_assign_VtArrayGfMatrix4f pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix4f


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix2d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfMatrix2d_t const * obj);
#define pxr_VtValue_assign_VtArrayGfMatrix2d pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix2d


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix3d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfMatrix3d_t const * obj);
#define pxr_VtValue_assign_VtArrayGfMatrix3d pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix3d


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix4d(
    pxr_VtValue_t * this_
    , pxr_VtValue_t * * return_
    , pxr_VtArrayGfMatrix4d_t const * obj);
#define pxr_VtValue_assign_VtArrayGfMatrix4d pxrInternal_v0_21__pxrReserved____VtValue_assign_VtArrayGfMatrix4d


/** Returns the TfType of the type held by this value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_GetType(
    pxr_VtValue_t const * this_
    , pxr_TfType_t * * return_);
#define pxr_VtValue_GetType pxrInternal_v0_21__pxrReserved____VtValue_GetType


/** Return the type name of the held typeid. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_GetTypeName(
    pxr_VtValue_t const * this_
    , std_string_t * * return_);
#define pxr_VtValue_GetTypeName pxrInternal_v0_21__pxrReserved____VtValue_GetTypeName


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_bool(
    pxr_VtValue_t const * this_
    , _Bool const * * return_);
#define pxr_VtValue_Get_bool pxrInternal_v0_21__pxrReserved____VtValue_Get_bool


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_uint8_t(
    pxr_VtValue_t const * this_
    , unsigned char const * * return_);
#define pxr_VtValue_Get_uint8_t pxrInternal_v0_21__pxrReserved____VtValue_Get_uint8_t


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_uint32_t(
    pxr_VtValue_t const * this_
    , unsigned int const * * return_);
#define pxr_VtValue_Get_uint32_t pxrInternal_v0_21__pxrReserved____VtValue_Get_uint32_t


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_uint64_t(
    pxr_VtValue_t const * this_
    , unsigned long const * * return_);
#define pxr_VtValue_Get_uint64_t pxrInternal_v0_21__pxrReserved____VtValue_Get_uint64_t


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_int32_t(
    pxr_VtValue_t const * this_
    , int const * * return_);
#define pxr_VtValue_Get_int32_t pxrInternal_v0_21__pxrReserved____VtValue_Get_int32_t


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_int64_t(
    pxr_VtValue_t const * this_
    , long const * * return_);
#define pxr_VtValue_Get_int64_t pxrInternal_v0_21__pxrReserved____VtValue_Get_int64_t


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_float(
    pxr_VtValue_t const * this_
    , float const * * return_);
#define pxr_VtValue_Get_float pxrInternal_v0_21__pxrReserved____VtValue_Get_float


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_double(
    pxr_VtValue_t const * this_
    , double const * * return_);
#define pxr_VtValue_Get_double pxrInternal_v0_21__pxrReserved____VtValue_Get_double


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_half(
    pxr_VtValue_t const * this_
    , pxr_pxr_half_half_t const * * return_);
#define pxr_VtValue_Get_half pxrInternal_v0_21__pxrReserved____VtValue_Get_half


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_SdfTimeCode(
    pxr_VtValue_t const * this_
    , pxr_SdfTimeCode_t const * * return_);
#define pxr_VtValue_Get_SdfTimeCode pxrInternal_v0_21__pxrReserved____VtValue_Get_SdfTimeCode


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_SdfAssetPath(
    pxr_VtValue_t const * this_
    , pxr_SdfAssetPath_t const * * return_);
#define pxr_VtValue_Get_SdfAssetPath pxrInternal_v0_21__pxrReserved____VtValue_Get_SdfAssetPath


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_TfToken(
    pxr_VtValue_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_VtValue_Get_TfToken pxrInternal_v0_21__pxrReserved____VtValue_Get_TfToken


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_string(
    pxr_VtValue_t const * this_
    , std_string_t const * * return_);
#define pxr_VtValue_Get_string pxrInternal_v0_21__pxrReserved____VtValue_Get_string


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2h(
    pxr_VtValue_t const * this_
    , pxr_GfVec2h_t const * * return_);
#define pxr_VtValue_Get_GfVec2h pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2h


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3h(
    pxr_VtValue_t const * this_
    , pxr_GfVec3h_t const * * return_);
#define pxr_VtValue_Get_GfVec3h pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3h


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4h(
    pxr_VtValue_t const * this_
    , pxr_GfVec4h_t const * * return_);
#define pxr_VtValue_Get_GfVec4h pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4h


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2d(
    pxr_VtValue_t const * this_
    , pxr_GfVec2d_t const * * return_);
#define pxr_VtValue_Get_GfVec2d pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2d


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3d(
    pxr_VtValue_t const * this_
    , pxr_GfVec3d_t const * * return_);
#define pxr_VtValue_Get_GfVec3d pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3d


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4d(
    pxr_VtValue_t const * this_
    , pxr_GfVec4d_t const * * return_);
#define pxr_VtValue_Get_GfVec4d pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4d


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2f(
    pxr_VtValue_t const * this_
    , pxr_GfVec2f_t const * * return_);
#define pxr_VtValue_Get_GfVec2f pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2f


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3f(
    pxr_VtValue_t const * this_
    , pxr_GfVec3f_t const * * return_);
#define pxr_VtValue_Get_GfVec3f pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3f


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4f(
    pxr_VtValue_t const * this_
    , pxr_GfVec4f_t const * * return_);
#define pxr_VtValue_Get_GfVec4f pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4f


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2i(
    pxr_VtValue_t const * this_
    , pxr_GfVec2i_t const * * return_);
#define pxr_VtValue_Get_GfVec2i pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec2i


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3i(
    pxr_VtValue_t const * this_
    , pxr_GfVec3i_t const * * return_);
#define pxr_VtValue_Get_GfVec3i pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec3i


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4i(
    pxr_VtValue_t const * this_
    , pxr_GfVec4i_t const * * return_);
#define pxr_VtValue_Get_GfVec4i pxrInternal_v0_21__pxrReserved____VtValue_Get_GfVec4i


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfQuatf(
    pxr_VtValue_t const * this_
    , pxr_GfQuatf_t const * * return_);
#define pxr_VtValue_Get_GfQuatf pxrInternal_v0_21__pxrReserved____VtValue_Get_GfQuatf


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfQuatd(
    pxr_VtValue_t const * this_
    , pxr_GfQuatd_t const * * return_);
#define pxr_VtValue_Get_GfQuatd pxrInternal_v0_21__pxrReserved____VtValue_Get_GfQuatd


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix2f(
    pxr_VtValue_t const * this_
    , pxr_GfMatrix2f_t const * * return_);
#define pxr_VtValue_Get_GfMatrix2f pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix2f


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix2d(
    pxr_VtValue_t const * this_
    , pxr_GfMatrix2d_t const * * return_);
#define pxr_VtValue_Get_GfMatrix2d pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix2d


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix3f(
    pxr_VtValue_t const * this_
    , pxr_GfMatrix3f_t const * * return_);
#define pxr_VtValue_Get_GfMatrix3f pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix3f


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix3d(
    pxr_VtValue_t const * this_
    , pxr_GfMatrix3d_t const * * return_);
#define pxr_VtValue_Get_GfMatrix3d pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix3d


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix4f(
    pxr_VtValue_t const * this_
    , pxr_GfMatrix4f_t const * * return_);
#define pxr_VtValue_Get_GfMatrix4f pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix4f


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix4d(
    pxr_VtValue_t const * this_
    , pxr_GfMatrix4d_t const * * return_);
#define pxr_VtValue_Get_GfMatrix4d pxrInternal_v0_21__pxrReserved____VtValue_Get_GfMatrix4d


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayBool(
    pxr_VtValue_t const * this_
    , pxr_VtArrayBool_t const * * return_);
#define pxr_VtValue_Get_VtArrayBool pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayBool


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayU32(
    pxr_VtValue_t const * this_
    , pxr_VtArrayU32_t const * * return_);
#define pxr_VtValue_Get_VtArrayU32 pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayU32


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayI32(
    pxr_VtValue_t const * this_
    , pxr_VtArrayI32_t const * * return_);
#define pxr_VtValue_Get_VtArrayI32 pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayI32


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayI64(
    pxr_VtValue_t const * this_
    , pxr_VtArrayI64_t const * * return_);
#define pxr_VtValue_Get_VtArrayI64 pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayI64


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayU64(
    pxr_VtValue_t const * this_
    , pxr_VtArrayU64_t const * * return_);
#define pxr_VtValue_Get_VtArrayU64 pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayU64


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayF32(
    pxr_VtValue_t const * this_
    , pxr_VtArrayF32_t const * * return_);
#define pxr_VtValue_Get_VtArrayF32 pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayF32


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayF64(
    pxr_VtValue_t const * this_
    , pxr_VtArrayF64_t const * * return_);
#define pxr_VtValue_Get_VtArrayF64 pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayF64


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayTfToken(
    pxr_VtValue_t const * this_
    , pxr_VtArrayTfToken_t const * * return_);
#define pxr_VtValue_Get_VtArrayTfToken pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayTfToken


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArraySdfAssetPath(
    pxr_VtValue_t const * this_
    , pxr_VtArraySdfAssetPath_t const * * return_);
#define pxr_VtValue_Get_VtArraySdfAssetPath pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArraySdfAssetPath


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArraySdfTimeCode(
    pxr_VtValue_t const * this_
    , pxr_VtArraySdfTimeCode_t const * * return_);
#define pxr_VtValue_Get_VtArraySdfTimeCode pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArraySdfTimeCode


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayString(
    pxr_VtValue_t const * this_
    , pxr_VtArraystring_t const * * return_);
#define pxr_VtValue_Get_VtArrayString pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayString


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec2f(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec2f_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfVec2f pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec2f


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec3f(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec3f_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfVec3f pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec3f


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec4f(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec4f_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfVec4f pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec4f


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec2d(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec2d_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfVec2d pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec2d


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec3d(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec3d_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfVec3d pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec3d


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec4d(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec4d_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfVec4d pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec4d


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec2i(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec2i_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfVec2i pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec2i


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec3i(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec3i_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfVec3i pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec3i


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec4i(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfVec4i_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfVec4i pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfVec4i


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfQuatf(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfQuatf_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfQuatf pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfQuatf


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfQuatd(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfQuatd_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfQuatd pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfQuatd


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix2f(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfMatrix2f_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfMatrix2f pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix2f


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix3f(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfMatrix3f_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfMatrix3f pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix3f


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix4f(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfMatrix4f_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfMatrix4f pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix4f


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix2d(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfMatrix2d_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfMatrix2d pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix2d


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix3d(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfMatrix3d_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfMatrix3d pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix3d


/** Returns a const reference to the held object if the held object
is of type \a T.  Issues an error and returns a const reference to a
default value if the held object is not of type \a T.  Use \a IsHolding
to verify correct type before calling this function.  The default value
returned in case of type mismatch is constructed using
Vt_DefaultValueFactory<T>.  That may be specialized for client types.
The default implementation of the default value factory produces a
value-initialized T. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix4d(
    pxr_VtValue_t const * this_
    , pxr_VtArrayGfMatrix4d_t const * * return_);
#define pxr_VtValue_Get_VtArrayGfMatrix4d pxrInternal_v0_21__pxrReserved____VtValue_Get_VtArrayGfMatrix4d


USD_CPPMM_API unsigned int value_is_holding_bool(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_uint8_t(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_uint32_t(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_uint64_t(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_int32_t(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_int64_t(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_float(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_double(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_half(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_SdfTimeCode(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_SdfAssetPath(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_TfToken(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_string(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfVec2h(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfVec3h(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfVec4h(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfVec2d(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfVec3d(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfVec4d(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfVec2f(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfVec3f(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfVec4f(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfVec2i(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfVec3i(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfVec4i(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfQuatf(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfQuatd(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfMatrix2f(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfMatrix2d(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfMatrix3f(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfMatrix3d(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfMatrix4f(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_GfMatrix4d(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayBool(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayU32(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayI32(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayI64(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayU64(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayF32(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayF64(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayTfToken(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArraySdfAssetPath(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArraySdfTimeCode(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayString(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec2f(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec3f(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec4f(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec2d(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec3d(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec4d(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec2i(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec3i(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfVec4i(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfQuatf(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfQuatd(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfMatrix2f(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfMatrix3f(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfMatrix4f(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfMatrix2d(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfMatrix3d(
    _Bool * return_
    , pxr_VtValue_t const * v);

USD_CPPMM_API unsigned int value_is_holding_VtArrayGfMatrix4d(
    _Bool * return_
    , pxr_VtValue_t const * v);

#ifdef __cplusplus
}
#endif
