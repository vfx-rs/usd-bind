#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec4f_t_s pxrInternal_v0_21__pxrReserved____GfVec4f_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec4f_t pxr_GfVec4f_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec4d_t_s pxrInternal_v0_21__pxrReserved____GfVec4d_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec4d_t pxr_GfVec4d_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfTimeCode_t_s pxrInternal_v0_21__pxrReserved____SdfTimeCode_t;
typedef pxrInternal_v0_21__pxrReserved____SdfTimeCode_t pxr_SdfTimeCode_t;
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
typedef struct pxrInternal_v0_21__pxrReserved____GfVec2f_t_s pxrInternal_v0_21__pxrReserved____GfVec2f_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec2f_t pxr_GfVec2f_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec2d_t_s pxrInternal_v0_21__pxrReserved____GfVec2d_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec2d_t pxr_GfVec2d_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec2i_t_s pxrInternal_v0_21__pxrReserved____GfVec2i_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec2i_t pxr_GfVec2i_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec3f_t_s pxrInternal_v0_21__pxrReserved____GfVec3f_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec3f_t pxr_GfVec3f_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec3d_t_s pxrInternal_v0_21__pxrReserved____GfVec3d_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec3d_t pxr_GfVec3d_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec3i_t_s pxrInternal_v0_21__pxrReserved____GfVec3i_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec3i_t pxr_GfVec3i_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfVec4i_t_s pxrInternal_v0_21__pxrReserved____GfVec4i_t;
typedef pxrInternal_v0_21__pxrReserved____GfVec4i_t pxr_GfVec4i_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfQuatf_t_s pxrInternal_v0_21__pxrReserved____GfQuatf_t;
typedef pxrInternal_v0_21__pxrReserved____GfQuatf_t pxr_GfQuatf_t;
typedef struct pxrInternal_v0_21__pxrReserved____GfQuatd_t_s pxrInternal_v0_21__pxrReserved____GfQuatd_t;
typedef pxrInternal_v0_21__pxrReserved____GfQuatd_t pxr_GfQuatd_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfAssetPath_t_s pxrInternal_v0_21__pxrReserved____SdfAssetPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfAssetPath_t pxr_SdfAssetPath_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray__Bool__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray__Bool__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray__Bool__t pxr_VtArrayBool_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__t pxr_VtArrayU8_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__t pxr_VtArrayU32_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__t pxr_VtArrayU64_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_int32_t__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_int32_t__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_int32_t__t pxr_VtArrayI32_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_int64_t__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_int64_t__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_int64_t__t pxr_VtArrayI64_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_float__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_float__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_float__t pxr_VtArrayF32_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_double__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_double__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_double__t pxr_VtArrayF64_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__t pxr_VtArraySdfAssetPath_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__t pxr_VtArraySdfTimeCode_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__t pxr_VtArrayTfToken_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_std__string__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_std__string__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_std__string__t pxr_VtArraystring_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__t pxr_VtArrayGfVec2i_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__t pxr_VtArrayGfVec3i_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__t pxr_VtArrayGfVec4i_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__t pxr_VtArrayGfVec2f_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__t pxr_VtArrayGfVec3f_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__t pxr_VtArrayGfVec4f_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__t pxr_VtArrayGfVec2d_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__t pxr_VtArrayGfVec3d_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__t pxr_VtArrayGfVec4d_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__t pxr_VtArrayGfQuatf_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__t pxr_VtArrayGfQuatd_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__t pxr_VtArrayGfMatrix2f_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__t pxr_VtArrayGfMatrix3f_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__t pxr_VtArrayGfMatrix4f_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__t pxr_VtArrayGfMatrix2d_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__t pxr_VtArrayGfMatrix3d_t;

typedef struct pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__t;
typedef pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__t pxr_VtArrayGfMatrix4d_t;


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__ctor(
    pxr_VtArrayBool_t * * this_);
#define pxr_VtArrayBool_ctor pxrInternal_v0_21__pxrReserved____VtArray__Bool__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__dtor(
    pxr_VtArrayBool_t * this_);
#define pxr_VtArrayBool_dtor pxrInternal_v0_21__pxrReserved____VtArray__Bool__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__data_mut(
    pxr_VtArrayBool_t * this_
    , _Bool * * return_);
#define pxr_VtArrayBool_data_mut pxrInternal_v0_21__pxrReserved____VtArray__Bool__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__data_const(
    pxr_VtArrayBool_t const * this_
    , _Bool const * * return_);
#define pxr_VtArrayBool_data_const pxrInternal_v0_21__pxrReserved____VtArray__Bool__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__push_back(
    pxr_VtArrayBool_t * this_
    , _Bool const * elem);
#define pxr_VtArrayBool_push_back pxrInternal_v0_21__pxrReserved____VtArray__Bool__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__size(
    pxr_VtArrayBool_t const * this_
    , size_t * return_);
#define pxr_VtArrayBool_size pxrInternal_v0_21__pxrReserved____VtArray__Bool__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__reserve(
    pxr_VtArrayBool_t * this_
    , size_t num);
#define pxr_VtArrayBool_reserve pxrInternal_v0_21__pxrReserved____VtArray__Bool__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__index_mut(
    pxr_VtArrayBool_t * this_
    , _Bool * * return_
    , size_t index);
#define pxr_VtArrayBool_index_mut pxrInternal_v0_21__pxrReserved____VtArray__Bool__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray__Bool__index(
    pxr_VtArrayBool_t const * this_
    , _Bool const * * return_
    , size_t index);
#define pxr_VtArrayBool_index pxrInternal_v0_21__pxrReserved____VtArray__Bool__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__ctor(
    pxr_VtArrayU8_t * * this_);
#define pxr_VtArrayU8_ctor pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__dtor(
    pxr_VtArrayU8_t * this_);
#define pxr_VtArrayU8_dtor pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__data_mut(
    pxr_VtArrayU8_t * this_
    , unsigned char * * return_);
#define pxr_VtArrayU8_data_mut pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__data_const(
    pxr_VtArrayU8_t const * this_
    , unsigned char const * * return_);
#define pxr_VtArrayU8_data_const pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__push_back(
    pxr_VtArrayU8_t * this_
    , unsigned char const * elem);
#define pxr_VtArrayU8_push_back pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__size(
    pxr_VtArrayU8_t const * this_
    , size_t * return_);
#define pxr_VtArrayU8_size pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__reserve(
    pxr_VtArrayU8_t * this_
    , size_t num);
#define pxr_VtArrayU8_reserve pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__index_mut(
    pxr_VtArrayU8_t * this_
    , unsigned char * * return_
    , size_t index);
#define pxr_VtArrayU8_index_mut pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__index(
    pxr_VtArrayU8_t const * this_
    , unsigned char const * * return_
    , size_t index);
#define pxr_VtArrayU8_index pxrInternal_v0_21__pxrReserved____VtArray_uint8_t__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__ctor(
    pxr_VtArrayU32_t * * this_);
#define pxr_VtArrayU32_ctor pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__dtor(
    pxr_VtArrayU32_t * this_);
#define pxr_VtArrayU32_dtor pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__data_mut(
    pxr_VtArrayU32_t * this_
    , unsigned int * * return_);
#define pxr_VtArrayU32_data_mut pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__data_const(
    pxr_VtArrayU32_t const * this_
    , unsigned int const * * return_);
#define pxr_VtArrayU32_data_const pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__push_back(
    pxr_VtArrayU32_t * this_
    , unsigned int const * elem);
#define pxr_VtArrayU32_push_back pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__size(
    pxr_VtArrayU32_t const * this_
    , size_t * return_);
#define pxr_VtArrayU32_size pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__reserve(
    pxr_VtArrayU32_t * this_
    , size_t num);
#define pxr_VtArrayU32_reserve pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__index_mut(
    pxr_VtArrayU32_t * this_
    , unsigned int * * return_
    , size_t index);
#define pxr_VtArrayU32_index_mut pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__index(
    pxr_VtArrayU32_t const * this_
    , unsigned int const * * return_
    , size_t index);
#define pxr_VtArrayU32_index pxrInternal_v0_21__pxrReserved____VtArray_uint32_t__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__ctor(
    pxr_VtArrayU64_t * * this_);
#define pxr_VtArrayU64_ctor pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__dtor(
    pxr_VtArrayU64_t * this_);
#define pxr_VtArrayU64_dtor pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__data_mut(
    pxr_VtArrayU64_t * this_
    , unsigned long * * return_);
#define pxr_VtArrayU64_data_mut pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__data_const(
    pxr_VtArrayU64_t const * this_
    , unsigned long const * * return_);
#define pxr_VtArrayU64_data_const pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__push_back(
    pxr_VtArrayU64_t * this_
    , unsigned long const * elem);
#define pxr_VtArrayU64_push_back pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__size(
    pxr_VtArrayU64_t const * this_
    , size_t * return_);
#define pxr_VtArrayU64_size pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__reserve(
    pxr_VtArrayU64_t * this_
    , size_t num);
#define pxr_VtArrayU64_reserve pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__index_mut(
    pxr_VtArrayU64_t * this_
    , unsigned long * * return_
    , size_t index);
#define pxr_VtArrayU64_index_mut pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__index(
    pxr_VtArrayU64_t const * this_
    , unsigned long const * * return_
    , size_t index);
#define pxr_VtArrayU64_index pxrInternal_v0_21__pxrReserved____VtArray_uint64_t__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__ctor(
    pxr_VtArrayI32_t * * this_);
#define pxr_VtArrayI32_ctor pxrInternal_v0_21__pxrReserved____VtArray_int32_t__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__dtor(
    pxr_VtArrayI32_t * this_);
#define pxr_VtArrayI32_dtor pxrInternal_v0_21__pxrReserved____VtArray_int32_t__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__data_mut(
    pxr_VtArrayI32_t * this_
    , int * * return_);
#define pxr_VtArrayI32_data_mut pxrInternal_v0_21__pxrReserved____VtArray_int32_t__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__data_const(
    pxr_VtArrayI32_t const * this_
    , int const * * return_);
#define pxr_VtArrayI32_data_const pxrInternal_v0_21__pxrReserved____VtArray_int32_t__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__push_back(
    pxr_VtArrayI32_t * this_
    , int const * elem);
#define pxr_VtArrayI32_push_back pxrInternal_v0_21__pxrReserved____VtArray_int32_t__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__size(
    pxr_VtArrayI32_t const * this_
    , size_t * return_);
#define pxr_VtArrayI32_size pxrInternal_v0_21__pxrReserved____VtArray_int32_t__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__reserve(
    pxr_VtArrayI32_t * this_
    , size_t num);
#define pxr_VtArrayI32_reserve pxrInternal_v0_21__pxrReserved____VtArray_int32_t__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__index_mut(
    pxr_VtArrayI32_t * this_
    , int * * return_
    , size_t index);
#define pxr_VtArrayI32_index_mut pxrInternal_v0_21__pxrReserved____VtArray_int32_t__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int32_t__index(
    pxr_VtArrayI32_t const * this_
    , int const * * return_
    , size_t index);
#define pxr_VtArrayI32_index pxrInternal_v0_21__pxrReserved____VtArray_int32_t__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__ctor(
    pxr_VtArrayI64_t * * this_);
#define pxr_VtArrayI64_ctor pxrInternal_v0_21__pxrReserved____VtArray_int64_t__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__dtor(
    pxr_VtArrayI64_t * this_);
#define pxr_VtArrayI64_dtor pxrInternal_v0_21__pxrReserved____VtArray_int64_t__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__data_mut(
    pxr_VtArrayI64_t * this_
    , long * * return_);
#define pxr_VtArrayI64_data_mut pxrInternal_v0_21__pxrReserved____VtArray_int64_t__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__data_const(
    pxr_VtArrayI64_t const * this_
    , long const * * return_);
#define pxr_VtArrayI64_data_const pxrInternal_v0_21__pxrReserved____VtArray_int64_t__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__push_back(
    pxr_VtArrayI64_t * this_
    , long const * elem);
#define pxr_VtArrayI64_push_back pxrInternal_v0_21__pxrReserved____VtArray_int64_t__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__size(
    pxr_VtArrayI64_t const * this_
    , size_t * return_);
#define pxr_VtArrayI64_size pxrInternal_v0_21__pxrReserved____VtArray_int64_t__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__reserve(
    pxr_VtArrayI64_t * this_
    , size_t num);
#define pxr_VtArrayI64_reserve pxrInternal_v0_21__pxrReserved____VtArray_int64_t__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__index_mut(
    pxr_VtArrayI64_t * this_
    , long * * return_
    , size_t index);
#define pxr_VtArrayI64_index_mut pxrInternal_v0_21__pxrReserved____VtArray_int64_t__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_int64_t__index(
    pxr_VtArrayI64_t const * this_
    , long const * * return_
    , size_t index);
#define pxr_VtArrayI64_index pxrInternal_v0_21__pxrReserved____VtArray_int64_t__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__ctor(
    pxr_VtArrayF32_t * * this_);
#define pxr_VtArrayF32_ctor pxrInternal_v0_21__pxrReserved____VtArray_float__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__dtor(
    pxr_VtArrayF32_t * this_);
#define pxr_VtArrayF32_dtor pxrInternal_v0_21__pxrReserved____VtArray_float__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__data_mut(
    pxr_VtArrayF32_t * this_
    , float * * return_);
#define pxr_VtArrayF32_data_mut pxrInternal_v0_21__pxrReserved____VtArray_float__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__data_const(
    pxr_VtArrayF32_t const * this_
    , float const * * return_);
#define pxr_VtArrayF32_data_const pxrInternal_v0_21__pxrReserved____VtArray_float__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__push_back(
    pxr_VtArrayF32_t * this_
    , float const * elem);
#define pxr_VtArrayF32_push_back pxrInternal_v0_21__pxrReserved____VtArray_float__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__size(
    pxr_VtArrayF32_t const * this_
    , size_t * return_);
#define pxr_VtArrayF32_size pxrInternal_v0_21__pxrReserved____VtArray_float__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__reserve(
    pxr_VtArrayF32_t * this_
    , size_t num);
#define pxr_VtArrayF32_reserve pxrInternal_v0_21__pxrReserved____VtArray_float__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__index_mut(
    pxr_VtArrayF32_t * this_
    , float * * return_
    , size_t index);
#define pxr_VtArrayF32_index_mut pxrInternal_v0_21__pxrReserved____VtArray_float__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_float__index(
    pxr_VtArrayF32_t const * this_
    , float const * * return_
    , size_t index);
#define pxr_VtArrayF32_index pxrInternal_v0_21__pxrReserved____VtArray_float__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__ctor(
    pxr_VtArrayF64_t * * this_);
#define pxr_VtArrayF64_ctor pxrInternal_v0_21__pxrReserved____VtArray_double__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__dtor(
    pxr_VtArrayF64_t * this_);
#define pxr_VtArrayF64_dtor pxrInternal_v0_21__pxrReserved____VtArray_double__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__data_mut(
    pxr_VtArrayF64_t * this_
    , double * * return_);
#define pxr_VtArrayF64_data_mut pxrInternal_v0_21__pxrReserved____VtArray_double__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__data_const(
    pxr_VtArrayF64_t const * this_
    , double const * * return_);
#define pxr_VtArrayF64_data_const pxrInternal_v0_21__pxrReserved____VtArray_double__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__push_back(
    pxr_VtArrayF64_t * this_
    , double const * elem);
#define pxr_VtArrayF64_push_back pxrInternal_v0_21__pxrReserved____VtArray_double__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__size(
    pxr_VtArrayF64_t const * this_
    , size_t * return_);
#define pxr_VtArrayF64_size pxrInternal_v0_21__pxrReserved____VtArray_double__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__reserve(
    pxr_VtArrayF64_t * this_
    , size_t num);
#define pxr_VtArrayF64_reserve pxrInternal_v0_21__pxrReserved____VtArray_double__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__index_mut(
    pxr_VtArrayF64_t * this_
    , double * * return_
    , size_t index);
#define pxr_VtArrayF64_index_mut pxrInternal_v0_21__pxrReserved____VtArray_double__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_double__index(
    pxr_VtArrayF64_t const * this_
    , double const * * return_
    , size_t index);
#define pxr_VtArrayF64_index pxrInternal_v0_21__pxrReserved____VtArray_double__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__ctor(
    pxr_VtArraySdfAssetPath_t * * this_);
#define pxr_VtArraySdfAssetPath_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__dtor(
    pxr_VtArraySdfAssetPath_t * this_);
#define pxr_VtArraySdfAssetPath_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__data_mut(
    pxr_VtArraySdfAssetPath_t * this_
    , pxr_SdfAssetPath_t * * return_);
#define pxr_VtArraySdfAssetPath_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__data_const(
    pxr_VtArraySdfAssetPath_t const * this_
    , pxr_SdfAssetPath_t const * * return_);
#define pxr_VtArraySdfAssetPath_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__push_back(
    pxr_VtArraySdfAssetPath_t * this_
    , pxr_SdfAssetPath_t const * elem);
#define pxr_VtArraySdfAssetPath_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__size(
    pxr_VtArraySdfAssetPath_t const * this_
    , size_t * return_);
#define pxr_VtArraySdfAssetPath_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__reserve(
    pxr_VtArraySdfAssetPath_t * this_
    , size_t num);
#define pxr_VtArraySdfAssetPath_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__index_mut(
    pxr_VtArraySdfAssetPath_t * this_
    , pxr_SdfAssetPath_t * * return_
    , size_t index);
#define pxr_VtArraySdfAssetPath_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__index(
    pxr_VtArraySdfAssetPath_t const * this_
    , pxr_SdfAssetPath_t const * * return_
    , size_t index);
#define pxr_VtArraySdfAssetPath_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfAssetPath__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__ctor(
    pxr_VtArraySdfTimeCode_t * * this_);
#define pxr_VtArraySdfTimeCode_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__dtor(
    pxr_VtArraySdfTimeCode_t * this_);
#define pxr_VtArraySdfTimeCode_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__data_mut(
    pxr_VtArraySdfTimeCode_t * this_
    , pxr_SdfTimeCode_t * * return_);
#define pxr_VtArraySdfTimeCode_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__data_const(
    pxr_VtArraySdfTimeCode_t const * this_
    , pxr_SdfTimeCode_t const * * return_);
#define pxr_VtArraySdfTimeCode_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__push_back(
    pxr_VtArraySdfTimeCode_t * this_
    , pxr_SdfTimeCode_t const * elem);
#define pxr_VtArraySdfTimeCode_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__size(
    pxr_VtArraySdfTimeCode_t const * this_
    , size_t * return_);
#define pxr_VtArraySdfTimeCode_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__reserve(
    pxr_VtArraySdfTimeCode_t * this_
    , size_t num);
#define pxr_VtArraySdfTimeCode_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__index_mut(
    pxr_VtArraySdfTimeCode_t * this_
    , pxr_SdfTimeCode_t * * return_
    , size_t index);
#define pxr_VtArraySdfTimeCode_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__index(
    pxr_VtArraySdfTimeCode_t const * this_
    , pxr_SdfTimeCode_t const * * return_
    , size_t index);
#define pxr_VtArraySdfTimeCode_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__SdfTimeCode__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__ctor(
    pxr_VtArrayTfToken_t * * this_);
#define pxr_VtArrayTfToken_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__dtor(
    pxr_VtArrayTfToken_t * this_);
#define pxr_VtArrayTfToken_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__data_mut(
    pxr_VtArrayTfToken_t * this_
    , pxr_TfToken_t * * return_);
#define pxr_VtArrayTfToken_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__data_const(
    pxr_VtArrayTfToken_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_VtArrayTfToken_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__push_back(
    pxr_VtArrayTfToken_t * this_
    , pxr_TfToken_t const * elem);
#define pxr_VtArrayTfToken_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__size(
    pxr_VtArrayTfToken_t const * this_
    , size_t * return_);
#define pxr_VtArrayTfToken_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__reserve(
    pxr_VtArrayTfToken_t * this_
    , size_t num);
#define pxr_VtArrayTfToken_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__index_mut(
    pxr_VtArrayTfToken_t * this_
    , pxr_TfToken_t * * return_
    , size_t index);
#define pxr_VtArrayTfToken_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__index(
    pxr_VtArrayTfToken_t const * this_
    , pxr_TfToken_t const * * return_
    , size_t index);
#define pxr_VtArrayTfToken_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__TfToken__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__ctor(
    pxr_VtArraystring_t * * this_);
#define pxr_VtArraystring_ctor pxrInternal_v0_21__pxrReserved____VtArray_std__string__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__dtor(
    pxr_VtArraystring_t * this_);
#define pxr_VtArraystring_dtor pxrInternal_v0_21__pxrReserved____VtArray_std__string__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__data_mut(
    pxr_VtArraystring_t * this_
    , std_string_t * * return_);
#define pxr_VtArraystring_data_mut pxrInternal_v0_21__pxrReserved____VtArray_std__string__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__data_const(
    pxr_VtArraystring_t const * this_
    , std_string_t const * * return_);
#define pxr_VtArraystring_data_const pxrInternal_v0_21__pxrReserved____VtArray_std__string__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__push_back(
    pxr_VtArraystring_t * this_
    , std_string_t const * elem);
#define pxr_VtArraystring_push_back pxrInternal_v0_21__pxrReserved____VtArray_std__string__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__size(
    pxr_VtArraystring_t const * this_
    , size_t * return_);
#define pxr_VtArraystring_size pxrInternal_v0_21__pxrReserved____VtArray_std__string__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__reserve(
    pxr_VtArraystring_t * this_
    , size_t num);
#define pxr_VtArraystring_reserve pxrInternal_v0_21__pxrReserved____VtArray_std__string__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__index_mut(
    pxr_VtArraystring_t * this_
    , std_string_t * * return_
    , size_t index);
#define pxr_VtArraystring_index_mut pxrInternal_v0_21__pxrReserved____VtArray_std__string__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_std__string__index(
    pxr_VtArraystring_t const * this_
    , std_string_t const * * return_
    , size_t index);
#define pxr_VtArraystring_index pxrInternal_v0_21__pxrReserved____VtArray_std__string__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__ctor(
    pxr_VtArrayGfVec2i_t * * this_);
#define pxr_VtArrayGfVec2i_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__dtor(
    pxr_VtArrayGfVec2i_t * this_);
#define pxr_VtArrayGfVec2i_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__data_mut(
    pxr_VtArrayGfVec2i_t * this_
    , pxr_GfVec2i_t * * return_);
#define pxr_VtArrayGfVec2i_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__data_const(
    pxr_VtArrayGfVec2i_t const * this_
    , pxr_GfVec2i_t const * * return_);
#define pxr_VtArrayGfVec2i_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__push_back(
    pxr_VtArrayGfVec2i_t * this_
    , pxr_GfVec2i_t const * elem);
#define pxr_VtArrayGfVec2i_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__size(
    pxr_VtArrayGfVec2i_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfVec2i_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__reserve(
    pxr_VtArrayGfVec2i_t * this_
    , size_t num);
#define pxr_VtArrayGfVec2i_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__index_mut(
    pxr_VtArrayGfVec2i_t * this_
    , pxr_GfVec2i_t * * return_
    , size_t index);
#define pxr_VtArrayGfVec2i_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__index(
    pxr_VtArrayGfVec2i_t const * this_
    , pxr_GfVec2i_t const * * return_
    , size_t index);
#define pxr_VtArrayGfVec2i_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2i__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__ctor(
    pxr_VtArrayGfVec3i_t * * this_);
#define pxr_VtArrayGfVec3i_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__dtor(
    pxr_VtArrayGfVec3i_t * this_);
#define pxr_VtArrayGfVec3i_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__data_mut(
    pxr_VtArrayGfVec3i_t * this_
    , pxr_GfVec3i_t * * return_);
#define pxr_VtArrayGfVec3i_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__data_const(
    pxr_VtArrayGfVec3i_t const * this_
    , pxr_GfVec3i_t const * * return_);
#define pxr_VtArrayGfVec3i_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__push_back(
    pxr_VtArrayGfVec3i_t * this_
    , pxr_GfVec3i_t const * elem);
#define pxr_VtArrayGfVec3i_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__size(
    pxr_VtArrayGfVec3i_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfVec3i_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__reserve(
    pxr_VtArrayGfVec3i_t * this_
    , size_t num);
#define pxr_VtArrayGfVec3i_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__index_mut(
    pxr_VtArrayGfVec3i_t * this_
    , pxr_GfVec3i_t * * return_
    , size_t index);
#define pxr_VtArrayGfVec3i_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__index(
    pxr_VtArrayGfVec3i_t const * this_
    , pxr_GfVec3i_t const * * return_
    , size_t index);
#define pxr_VtArrayGfVec3i_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3i__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__ctor(
    pxr_VtArrayGfVec4i_t * * this_);
#define pxr_VtArrayGfVec4i_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__dtor(
    pxr_VtArrayGfVec4i_t * this_);
#define pxr_VtArrayGfVec4i_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__data_mut(
    pxr_VtArrayGfVec4i_t * this_
    , pxr_GfVec4i_t * * return_);
#define pxr_VtArrayGfVec4i_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__data_const(
    pxr_VtArrayGfVec4i_t const * this_
    , pxr_GfVec4i_t const * * return_);
#define pxr_VtArrayGfVec4i_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__push_back(
    pxr_VtArrayGfVec4i_t * this_
    , pxr_GfVec4i_t const * elem);
#define pxr_VtArrayGfVec4i_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__size(
    pxr_VtArrayGfVec4i_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfVec4i_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__reserve(
    pxr_VtArrayGfVec4i_t * this_
    , size_t num);
#define pxr_VtArrayGfVec4i_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__index_mut(
    pxr_VtArrayGfVec4i_t * this_
    , pxr_GfVec4i_t * * return_
    , size_t index);
#define pxr_VtArrayGfVec4i_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__index(
    pxr_VtArrayGfVec4i_t const * this_
    , pxr_GfVec4i_t const * * return_
    , size_t index);
#define pxr_VtArrayGfVec4i_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4i__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__ctor(
    pxr_VtArrayGfVec2f_t * * this_);
#define pxr_VtArrayGfVec2f_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__dtor(
    pxr_VtArrayGfVec2f_t * this_);
#define pxr_VtArrayGfVec2f_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__data_mut(
    pxr_VtArrayGfVec2f_t * this_
    , pxr_GfVec2f_t * * return_);
#define pxr_VtArrayGfVec2f_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__data_const(
    pxr_VtArrayGfVec2f_t const * this_
    , pxr_GfVec2f_t const * * return_);
#define pxr_VtArrayGfVec2f_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__push_back(
    pxr_VtArrayGfVec2f_t * this_
    , pxr_GfVec2f_t const * elem);
#define pxr_VtArrayGfVec2f_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__size(
    pxr_VtArrayGfVec2f_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfVec2f_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__reserve(
    pxr_VtArrayGfVec2f_t * this_
    , size_t num);
#define pxr_VtArrayGfVec2f_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__index_mut(
    pxr_VtArrayGfVec2f_t * this_
    , pxr_GfVec2f_t * * return_
    , size_t index);
#define pxr_VtArrayGfVec2f_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__index(
    pxr_VtArrayGfVec2f_t const * this_
    , pxr_GfVec2f_t const * * return_
    , size_t index);
#define pxr_VtArrayGfVec2f_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2f__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__ctor(
    pxr_VtArrayGfVec3f_t * * this_);
#define pxr_VtArrayGfVec3f_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__dtor(
    pxr_VtArrayGfVec3f_t * this_);
#define pxr_VtArrayGfVec3f_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__data_mut(
    pxr_VtArrayGfVec3f_t * this_
    , pxr_GfVec3f_t * * return_);
#define pxr_VtArrayGfVec3f_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__data_const(
    pxr_VtArrayGfVec3f_t const * this_
    , pxr_GfVec3f_t const * * return_);
#define pxr_VtArrayGfVec3f_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__push_back(
    pxr_VtArrayGfVec3f_t * this_
    , pxr_GfVec3f_t const * elem);
#define pxr_VtArrayGfVec3f_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__size(
    pxr_VtArrayGfVec3f_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfVec3f_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__reserve(
    pxr_VtArrayGfVec3f_t * this_
    , size_t num);
#define pxr_VtArrayGfVec3f_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__index_mut(
    pxr_VtArrayGfVec3f_t * this_
    , pxr_GfVec3f_t * * return_
    , size_t index);
#define pxr_VtArrayGfVec3f_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__index(
    pxr_VtArrayGfVec3f_t const * this_
    , pxr_GfVec3f_t const * * return_
    , size_t index);
#define pxr_VtArrayGfVec3f_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3f__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__ctor(
    pxr_VtArrayGfVec4f_t * * this_);
#define pxr_VtArrayGfVec4f_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__dtor(
    pxr_VtArrayGfVec4f_t * this_);
#define pxr_VtArrayGfVec4f_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__data_mut(
    pxr_VtArrayGfVec4f_t * this_
    , pxr_GfVec4f_t * * return_);
#define pxr_VtArrayGfVec4f_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__data_const(
    pxr_VtArrayGfVec4f_t const * this_
    , pxr_GfVec4f_t const * * return_);
#define pxr_VtArrayGfVec4f_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__push_back(
    pxr_VtArrayGfVec4f_t * this_
    , pxr_GfVec4f_t const * elem);
#define pxr_VtArrayGfVec4f_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__size(
    pxr_VtArrayGfVec4f_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfVec4f_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__reserve(
    pxr_VtArrayGfVec4f_t * this_
    , size_t num);
#define pxr_VtArrayGfVec4f_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__index_mut(
    pxr_VtArrayGfVec4f_t * this_
    , pxr_GfVec4f_t * * return_
    , size_t index);
#define pxr_VtArrayGfVec4f_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__index(
    pxr_VtArrayGfVec4f_t const * this_
    , pxr_GfVec4f_t const * * return_
    , size_t index);
#define pxr_VtArrayGfVec4f_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4f__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__ctor(
    pxr_VtArrayGfVec2d_t * * this_);
#define pxr_VtArrayGfVec2d_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__dtor(
    pxr_VtArrayGfVec2d_t * this_);
#define pxr_VtArrayGfVec2d_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__data_mut(
    pxr_VtArrayGfVec2d_t * this_
    , pxr_GfVec2d_t * * return_);
#define pxr_VtArrayGfVec2d_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__data_const(
    pxr_VtArrayGfVec2d_t const * this_
    , pxr_GfVec2d_t const * * return_);
#define pxr_VtArrayGfVec2d_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__push_back(
    pxr_VtArrayGfVec2d_t * this_
    , pxr_GfVec2d_t const * elem);
#define pxr_VtArrayGfVec2d_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__size(
    pxr_VtArrayGfVec2d_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfVec2d_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__reserve(
    pxr_VtArrayGfVec2d_t * this_
    , size_t num);
#define pxr_VtArrayGfVec2d_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__index_mut(
    pxr_VtArrayGfVec2d_t * this_
    , pxr_GfVec2d_t * * return_
    , size_t index);
#define pxr_VtArrayGfVec2d_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__index(
    pxr_VtArrayGfVec2d_t const * this_
    , pxr_GfVec2d_t const * * return_
    , size_t index);
#define pxr_VtArrayGfVec2d_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec2d__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__ctor(
    pxr_VtArrayGfVec3d_t * * this_);
#define pxr_VtArrayGfVec3d_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__dtor(
    pxr_VtArrayGfVec3d_t * this_);
#define pxr_VtArrayGfVec3d_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__data_mut(
    pxr_VtArrayGfVec3d_t * this_
    , pxr_GfVec3d_t * * return_);
#define pxr_VtArrayGfVec3d_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__data_const(
    pxr_VtArrayGfVec3d_t const * this_
    , pxr_GfVec3d_t const * * return_);
#define pxr_VtArrayGfVec3d_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__push_back(
    pxr_VtArrayGfVec3d_t * this_
    , pxr_GfVec3d_t const * elem);
#define pxr_VtArrayGfVec3d_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__size(
    pxr_VtArrayGfVec3d_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfVec3d_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__reserve(
    pxr_VtArrayGfVec3d_t * this_
    , size_t num);
#define pxr_VtArrayGfVec3d_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__index_mut(
    pxr_VtArrayGfVec3d_t * this_
    , pxr_GfVec3d_t * * return_
    , size_t index);
#define pxr_VtArrayGfVec3d_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__index(
    pxr_VtArrayGfVec3d_t const * this_
    , pxr_GfVec3d_t const * * return_
    , size_t index);
#define pxr_VtArrayGfVec3d_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec3d__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__ctor(
    pxr_VtArrayGfVec4d_t * * this_);
#define pxr_VtArrayGfVec4d_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__dtor(
    pxr_VtArrayGfVec4d_t * this_);
#define pxr_VtArrayGfVec4d_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__data_mut(
    pxr_VtArrayGfVec4d_t * this_
    , pxr_GfVec4d_t * * return_);
#define pxr_VtArrayGfVec4d_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__data_const(
    pxr_VtArrayGfVec4d_t const * this_
    , pxr_GfVec4d_t const * * return_);
#define pxr_VtArrayGfVec4d_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__push_back(
    pxr_VtArrayGfVec4d_t * this_
    , pxr_GfVec4d_t const * elem);
#define pxr_VtArrayGfVec4d_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__size(
    pxr_VtArrayGfVec4d_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfVec4d_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__reserve(
    pxr_VtArrayGfVec4d_t * this_
    , size_t num);
#define pxr_VtArrayGfVec4d_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__index_mut(
    pxr_VtArrayGfVec4d_t * this_
    , pxr_GfVec4d_t * * return_
    , size_t index);
#define pxr_VtArrayGfVec4d_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__index(
    pxr_VtArrayGfVec4d_t const * this_
    , pxr_GfVec4d_t const * * return_
    , size_t index);
#define pxr_VtArrayGfVec4d_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfVec4d__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__ctor(
    pxr_VtArrayGfQuatf_t * * this_);
#define pxr_VtArrayGfQuatf_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__dtor(
    pxr_VtArrayGfQuatf_t * this_);
#define pxr_VtArrayGfQuatf_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__data_mut(
    pxr_VtArrayGfQuatf_t * this_
    , pxr_GfQuatf_t * * return_);
#define pxr_VtArrayGfQuatf_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__data_const(
    pxr_VtArrayGfQuatf_t const * this_
    , pxr_GfQuatf_t const * * return_);
#define pxr_VtArrayGfQuatf_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__push_back(
    pxr_VtArrayGfQuatf_t * this_
    , pxr_GfQuatf_t const * elem);
#define pxr_VtArrayGfQuatf_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__size(
    pxr_VtArrayGfQuatf_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfQuatf_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__reserve(
    pxr_VtArrayGfQuatf_t * this_
    , size_t num);
#define pxr_VtArrayGfQuatf_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__index_mut(
    pxr_VtArrayGfQuatf_t * this_
    , pxr_GfQuatf_t * * return_
    , size_t index);
#define pxr_VtArrayGfQuatf_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__index(
    pxr_VtArrayGfQuatf_t const * this_
    , pxr_GfQuatf_t const * * return_
    , size_t index);
#define pxr_VtArrayGfQuatf_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatf__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__ctor(
    pxr_VtArrayGfQuatd_t * * this_);
#define pxr_VtArrayGfQuatd_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__dtor(
    pxr_VtArrayGfQuatd_t * this_);
#define pxr_VtArrayGfQuatd_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__data_mut(
    pxr_VtArrayGfQuatd_t * this_
    , pxr_GfQuatd_t * * return_);
#define pxr_VtArrayGfQuatd_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__data_const(
    pxr_VtArrayGfQuatd_t const * this_
    , pxr_GfQuatd_t const * * return_);
#define pxr_VtArrayGfQuatd_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__push_back(
    pxr_VtArrayGfQuatd_t * this_
    , pxr_GfQuatd_t const * elem);
#define pxr_VtArrayGfQuatd_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__size(
    pxr_VtArrayGfQuatd_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfQuatd_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__reserve(
    pxr_VtArrayGfQuatd_t * this_
    , size_t num);
#define pxr_VtArrayGfQuatd_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__index_mut(
    pxr_VtArrayGfQuatd_t * this_
    , pxr_GfQuatd_t * * return_
    , size_t index);
#define pxr_VtArrayGfQuatd_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__index(
    pxr_VtArrayGfQuatd_t const * this_
    , pxr_GfQuatd_t const * * return_
    , size_t index);
#define pxr_VtArrayGfQuatd_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfQuatd__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__ctor(
    pxr_VtArrayGfMatrix2f_t * * this_);
#define pxr_VtArrayGfMatrix2f_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__dtor(
    pxr_VtArrayGfMatrix2f_t * this_);
#define pxr_VtArrayGfMatrix2f_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__data_mut(
    pxr_VtArrayGfMatrix2f_t * this_
    , pxr_GfMatrix2f_t * * return_);
#define pxr_VtArrayGfMatrix2f_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__data_const(
    pxr_VtArrayGfMatrix2f_t const * this_
    , pxr_GfMatrix2f_t const * * return_);
#define pxr_VtArrayGfMatrix2f_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__push_back(
    pxr_VtArrayGfMatrix2f_t * this_
    , pxr_GfMatrix2f_t const * elem);
#define pxr_VtArrayGfMatrix2f_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__size(
    pxr_VtArrayGfMatrix2f_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfMatrix2f_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__reserve(
    pxr_VtArrayGfMatrix2f_t * this_
    , size_t num);
#define pxr_VtArrayGfMatrix2f_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__index_mut(
    pxr_VtArrayGfMatrix2f_t * this_
    , pxr_GfMatrix2f_t * * return_
    , size_t index);
#define pxr_VtArrayGfMatrix2f_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__index(
    pxr_VtArrayGfMatrix2f_t const * this_
    , pxr_GfMatrix2f_t const * * return_
    , size_t index);
#define pxr_VtArrayGfMatrix2f_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2f__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__ctor(
    pxr_VtArrayGfMatrix3f_t * * this_);
#define pxr_VtArrayGfMatrix3f_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__dtor(
    pxr_VtArrayGfMatrix3f_t * this_);
#define pxr_VtArrayGfMatrix3f_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__data_mut(
    pxr_VtArrayGfMatrix3f_t * this_
    , pxr_GfMatrix3f_t * * return_);
#define pxr_VtArrayGfMatrix3f_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__data_const(
    pxr_VtArrayGfMatrix3f_t const * this_
    , pxr_GfMatrix3f_t const * * return_);
#define pxr_VtArrayGfMatrix3f_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__push_back(
    pxr_VtArrayGfMatrix3f_t * this_
    , pxr_GfMatrix3f_t const * elem);
#define pxr_VtArrayGfMatrix3f_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__size(
    pxr_VtArrayGfMatrix3f_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfMatrix3f_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__reserve(
    pxr_VtArrayGfMatrix3f_t * this_
    , size_t num);
#define pxr_VtArrayGfMatrix3f_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__index_mut(
    pxr_VtArrayGfMatrix3f_t * this_
    , pxr_GfMatrix3f_t * * return_
    , size_t index);
#define pxr_VtArrayGfMatrix3f_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__index(
    pxr_VtArrayGfMatrix3f_t const * this_
    , pxr_GfMatrix3f_t const * * return_
    , size_t index);
#define pxr_VtArrayGfMatrix3f_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3f__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__ctor(
    pxr_VtArrayGfMatrix4f_t * * this_);
#define pxr_VtArrayGfMatrix4f_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__dtor(
    pxr_VtArrayGfMatrix4f_t * this_);
#define pxr_VtArrayGfMatrix4f_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__data_mut(
    pxr_VtArrayGfMatrix4f_t * this_
    , pxr_GfMatrix4f_t * * return_);
#define pxr_VtArrayGfMatrix4f_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__data_const(
    pxr_VtArrayGfMatrix4f_t const * this_
    , pxr_GfMatrix4f_t const * * return_);
#define pxr_VtArrayGfMatrix4f_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__push_back(
    pxr_VtArrayGfMatrix4f_t * this_
    , pxr_GfMatrix4f_t const * elem);
#define pxr_VtArrayGfMatrix4f_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__size(
    pxr_VtArrayGfMatrix4f_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfMatrix4f_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__reserve(
    pxr_VtArrayGfMatrix4f_t * this_
    , size_t num);
#define pxr_VtArrayGfMatrix4f_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__index_mut(
    pxr_VtArrayGfMatrix4f_t * this_
    , pxr_GfMatrix4f_t * * return_
    , size_t index);
#define pxr_VtArrayGfMatrix4f_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__index(
    pxr_VtArrayGfMatrix4f_t const * this_
    , pxr_GfMatrix4f_t const * * return_
    , size_t index);
#define pxr_VtArrayGfMatrix4f_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4f__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__ctor(
    pxr_VtArrayGfMatrix2d_t * * this_);
#define pxr_VtArrayGfMatrix2d_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__dtor(
    pxr_VtArrayGfMatrix2d_t * this_);
#define pxr_VtArrayGfMatrix2d_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__data_mut(
    pxr_VtArrayGfMatrix2d_t * this_
    , pxr_GfMatrix2d_t * * return_);
#define pxr_VtArrayGfMatrix2d_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__data_const(
    pxr_VtArrayGfMatrix2d_t const * this_
    , pxr_GfMatrix2d_t const * * return_);
#define pxr_VtArrayGfMatrix2d_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__push_back(
    pxr_VtArrayGfMatrix2d_t * this_
    , pxr_GfMatrix2d_t const * elem);
#define pxr_VtArrayGfMatrix2d_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__size(
    pxr_VtArrayGfMatrix2d_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfMatrix2d_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__reserve(
    pxr_VtArrayGfMatrix2d_t * this_
    , size_t num);
#define pxr_VtArrayGfMatrix2d_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__index_mut(
    pxr_VtArrayGfMatrix2d_t * this_
    , pxr_GfMatrix2d_t * * return_
    , size_t index);
#define pxr_VtArrayGfMatrix2d_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__index(
    pxr_VtArrayGfMatrix2d_t const * this_
    , pxr_GfMatrix2d_t const * * return_
    , size_t index);
#define pxr_VtArrayGfMatrix2d_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix2d__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__ctor(
    pxr_VtArrayGfMatrix3d_t * * this_);
#define pxr_VtArrayGfMatrix3d_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__dtor(
    pxr_VtArrayGfMatrix3d_t * this_);
#define pxr_VtArrayGfMatrix3d_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__data_mut(
    pxr_VtArrayGfMatrix3d_t * this_
    , pxr_GfMatrix3d_t * * return_);
#define pxr_VtArrayGfMatrix3d_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__data_const(
    pxr_VtArrayGfMatrix3d_t const * this_
    , pxr_GfMatrix3d_t const * * return_);
#define pxr_VtArrayGfMatrix3d_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__push_back(
    pxr_VtArrayGfMatrix3d_t * this_
    , pxr_GfMatrix3d_t const * elem);
#define pxr_VtArrayGfMatrix3d_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__size(
    pxr_VtArrayGfMatrix3d_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfMatrix3d_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__reserve(
    pxr_VtArrayGfMatrix3d_t * this_
    , size_t num);
#define pxr_VtArrayGfMatrix3d_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__index_mut(
    pxr_VtArrayGfMatrix3d_t * this_
    , pxr_GfMatrix3d_t * * return_
    , size_t index);
#define pxr_VtArrayGfMatrix3d_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__index(
    pxr_VtArrayGfMatrix3d_t const * this_
    , pxr_GfMatrix3d_t const * * return_
    , size_t index);
#define pxr_VtArrayGfMatrix3d_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix3d__index


/** Create an empty array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__ctor(
    pxr_VtArrayGfMatrix4d_t * * this_);
#define pxr_VtArrayGfMatrix4d_ctor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__dtor(
    pxr_VtArrayGfMatrix4d_t * this_);
#define pxr_VtArrayGfMatrix4d_dtor pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__dtor


/** Return a non-const pointer to this array's data.  The underlying data is
copied if it is not uniquely owned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__data_mut(
    pxr_VtArrayGfMatrix4d_t * this_
    , pxr_GfMatrix4d_t * * return_);
#define pxr_VtArrayGfMatrix4d_data_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__data_mut


/** Return a const pointer to this array's data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__data_const(
    pxr_VtArrayGfMatrix4d_t const * this_
    , pxr_GfMatrix4d_t const * * return_);
#define pxr_VtArrayGfMatrix4d_data_const pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__data_const


/** Appends an element at the end of the array. The underlying data
is first copied if it is not uniquely owned.

\sa emplace_back
\sa push_back(ElementType&&) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__push_back(
    pxr_VtArrayGfMatrix4d_t * this_
    , pxr_GfMatrix4d_t const * elem);
#define pxr_VtArrayGfMatrix4d_push_back pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__push_back


/** Return the total number of elements in this array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__size(
    pxr_VtArrayGfMatrix4d_t const * this_
    , size_t * return_);
#define pxr_VtArrayGfMatrix4d_size pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__size


/** Ensure enough memory is allocated to hold \p num elements.  Note that
this currently does not ensure that the underlying data is uniquely
owned.  If that is desired, invoke a method like data() first. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__reserve(
    pxr_VtArrayGfMatrix4d_t * this_
    , size_t num);
#define pxr_VtArrayGfMatrix4d_reserve pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__reserve


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__index_mut(
    pxr_VtArrayGfMatrix4d_t * this_
    , pxr_GfMatrix4d_t * * return_
    , size_t index);
#define pxr_VtArrayGfMatrix4d_index_mut pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__index_mut


/** Allows usage of [i]. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__index(
    pxr_VtArrayGfMatrix4d_t const * this_
    , pxr_GfMatrix4d_t const * * return_
    , size_t index);
#define pxr_VtArrayGfMatrix4d_index pxrInternal_v0_21__pxrReserved____VtArray_pxr__GfMatrix4d__index


#ifdef __cplusplus
}
#endif
