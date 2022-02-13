#pragma once
#include "usd-api-export.h"

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____UsdAttribute_t_s pxrInternal_v0_21__pxrReserved____UsdAttribute_t;
typedef pxrInternal_v0_21__pxrReserved____UsdAttribute_t pxr_UsdAttribute_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

typedef struct std__vector_std__string__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;

typedef struct std__vector_char__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) std__vector_char__t;
typedef std__vector_char__t std_vector_char_t;

typedef struct std__vector_unsignedchar__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) std__vector_unsignedchar__t;
typedef std__vector_unsignedchar__t std_vector_uchar_t;

typedef struct std__vector_float__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) std__vector_float__t;
typedef std__vector_float__t std_vector_float_t;

typedef struct std__vector_double__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) std__vector_double__t;
typedef std__vector_double__t std_vector_double_t;

typedef struct std__vector_int__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) std__vector_int__t;
typedef std__vector_int__t std_vector_int_t;

typedef struct std__vector_size_t__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) std__vector_size_t__t;
typedef std__vector_size_t__t std_vector_size_t_t;

typedef struct std__vector_pxr__UsdAttribute__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) std__vector_pxr__UsdAttribute__t;
typedef std__vector_pxr__UsdAttribute__t std_UsdAttributeVector_t;

typedef struct std__vector_pxr__SdfPath__t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) std__vector_pxr__SdfPath__t;
typedef std__vector_pxr__SdfPath__t std_SdfPathVector_t;


USD_CPPMM_API unsigned int std__vector_std__string__ctor(
    std_vector_string_t * * this_);
#define std_vector_string_ctor std__vector_std__string__ctor


USD_CPPMM_API unsigned int std__vector_std__string__copy(
    std_vector_string_t * * this_
    , std_vector_string_t const * rhs);
#define std_vector_string_copy std__vector_std__string__copy


USD_CPPMM_API unsigned int std__vector_std__string__dtor(
    std_vector_string_t * this_);
#define std_vector_string_dtor std__vector_std__string__dtor


USD_CPPMM_API unsigned int std__vector_std__string__size(
    std_vector_string_t const * this_
    , size_t * return_);
#define std_vector_string_size std__vector_std__string__size


USD_CPPMM_API unsigned int std__vector_std__string__resize(
    std_vector_string_t * this_
    , size_t count);
#define std_vector_string_resize std__vector_std__string__resize


USD_CPPMM_API unsigned int std__vector_std__string__reserve(
    std_vector_string_t * this_
    , size_t count);
#define std_vector_string_reserve std__vector_std__string__reserve


USD_CPPMM_API unsigned int std__vector_std__string__index_mut(
    std_vector_string_t * this_
    , std_string_t * * return_
    , size_t pos);
#define std_vector_string_index_mut std__vector_std__string__index_mut


USD_CPPMM_API unsigned int std__vector_std__string__index(
    std_vector_string_t const * this_
    , std_string_t const * * return_
    , size_t pos);
#define std_vector_string_index std__vector_std__string__index


USD_CPPMM_API unsigned int std__vector_std__string__data(
    std_vector_string_t * this_
    , std_string_t * * return_);
#define std_vector_string_data std__vector_std__string__data


USD_CPPMM_API unsigned int std__vector_std__string__data_const(
    std_vector_string_t const * this_
    , std_string_t const * * return_);
#define std_vector_string_data_const std__vector_std__string__data_const


USD_CPPMM_API unsigned int std__vector_std__string__push_back(
    std_vector_string_t * this_
    , std_string_t const * value);
#define std_vector_string_push_back std__vector_std__string__push_back


USD_CPPMM_API unsigned int std__vector_char__ctor(
    std_vector_char_t * * this_);
#define std_vector_char_ctor std__vector_char__ctor


USD_CPPMM_API unsigned int std__vector_char__copy(
    std_vector_char_t * * this_
    , std_vector_char_t const * rhs);
#define std_vector_char_copy std__vector_char__copy


USD_CPPMM_API unsigned int std__vector_char__dtor(
    std_vector_char_t * this_);
#define std_vector_char_dtor std__vector_char__dtor


USD_CPPMM_API unsigned int std__vector_char__size(
    std_vector_char_t const * this_
    , size_t * return_);
#define std_vector_char_size std__vector_char__size


USD_CPPMM_API unsigned int std__vector_char__resize(
    std_vector_char_t * this_
    , size_t count);
#define std_vector_char_resize std__vector_char__resize


USD_CPPMM_API unsigned int std__vector_char__reserve(
    std_vector_char_t * this_
    , size_t count);
#define std_vector_char_reserve std__vector_char__reserve


USD_CPPMM_API unsigned int std__vector_char__index_mut(
    std_vector_char_t * this_
    , char * * return_
    , size_t pos);
#define std_vector_char_index_mut std__vector_char__index_mut


USD_CPPMM_API unsigned int std__vector_char__index(
    std_vector_char_t const * this_
    , char const * * return_
    , size_t pos);
#define std_vector_char_index std__vector_char__index


USD_CPPMM_API unsigned int std__vector_char__data(
    std_vector_char_t * this_
    , char * * return_);
#define std_vector_char_data std__vector_char__data


USD_CPPMM_API unsigned int std__vector_char__data_const(
    std_vector_char_t const * this_
    , char const * * return_);
#define std_vector_char_data_const std__vector_char__data_const


USD_CPPMM_API unsigned int std__vector_char__push_back(
    std_vector_char_t * this_
    , char const * value);
#define std_vector_char_push_back std__vector_char__push_back


USD_CPPMM_API unsigned int std__vector_unsignedchar__ctor(
    std_vector_uchar_t * * this_);
#define std_vector_uchar_ctor std__vector_unsignedchar__ctor


USD_CPPMM_API unsigned int std__vector_unsignedchar__copy(
    std_vector_uchar_t * * this_
    , std_vector_uchar_t const * rhs);
#define std_vector_uchar_copy std__vector_unsignedchar__copy


USD_CPPMM_API unsigned int std__vector_unsignedchar__dtor(
    std_vector_uchar_t * this_);
#define std_vector_uchar_dtor std__vector_unsignedchar__dtor


USD_CPPMM_API unsigned int std__vector_unsignedchar__size(
    std_vector_uchar_t const * this_
    , size_t * return_);
#define std_vector_uchar_size std__vector_unsignedchar__size


USD_CPPMM_API unsigned int std__vector_unsignedchar__resize(
    std_vector_uchar_t * this_
    , size_t count);
#define std_vector_uchar_resize std__vector_unsignedchar__resize


USD_CPPMM_API unsigned int std__vector_unsignedchar__reserve(
    std_vector_uchar_t * this_
    , size_t count);
#define std_vector_uchar_reserve std__vector_unsignedchar__reserve


USD_CPPMM_API unsigned int std__vector_unsignedchar__index_mut(
    std_vector_uchar_t * this_
    , unsigned char * * return_
    , size_t pos);
#define std_vector_uchar_index_mut std__vector_unsignedchar__index_mut


USD_CPPMM_API unsigned int std__vector_unsignedchar__index(
    std_vector_uchar_t const * this_
    , unsigned char const * * return_
    , size_t pos);
#define std_vector_uchar_index std__vector_unsignedchar__index


USD_CPPMM_API unsigned int std__vector_unsignedchar__data(
    std_vector_uchar_t * this_
    , unsigned char * * return_);
#define std_vector_uchar_data std__vector_unsignedchar__data


USD_CPPMM_API unsigned int std__vector_unsignedchar__data_const(
    std_vector_uchar_t const * this_
    , unsigned char const * * return_);
#define std_vector_uchar_data_const std__vector_unsignedchar__data_const


USD_CPPMM_API unsigned int std__vector_unsignedchar__push_back(
    std_vector_uchar_t * this_
    , unsigned char const * value);
#define std_vector_uchar_push_back std__vector_unsignedchar__push_back


USD_CPPMM_API unsigned int std__vector_float__ctor(
    std_vector_float_t * * this_);
#define std_vector_float_ctor std__vector_float__ctor


USD_CPPMM_API unsigned int std__vector_float__copy(
    std_vector_float_t * * this_
    , std_vector_float_t const * rhs);
#define std_vector_float_copy std__vector_float__copy


USD_CPPMM_API unsigned int std__vector_float__dtor(
    std_vector_float_t * this_);
#define std_vector_float_dtor std__vector_float__dtor


USD_CPPMM_API unsigned int std__vector_float__size(
    std_vector_float_t const * this_
    , size_t * return_);
#define std_vector_float_size std__vector_float__size


USD_CPPMM_API unsigned int std__vector_float__resize(
    std_vector_float_t * this_
    , size_t count);
#define std_vector_float_resize std__vector_float__resize


USD_CPPMM_API unsigned int std__vector_float__reserve(
    std_vector_float_t * this_
    , size_t count);
#define std_vector_float_reserve std__vector_float__reserve


USD_CPPMM_API unsigned int std__vector_float__index_mut(
    std_vector_float_t * this_
    , float * * return_
    , size_t pos);
#define std_vector_float_index_mut std__vector_float__index_mut


USD_CPPMM_API unsigned int std__vector_float__index(
    std_vector_float_t const * this_
    , float const * * return_
    , size_t pos);
#define std_vector_float_index std__vector_float__index


USD_CPPMM_API unsigned int std__vector_float__data(
    std_vector_float_t * this_
    , float * * return_);
#define std_vector_float_data std__vector_float__data


USD_CPPMM_API unsigned int std__vector_float__data_const(
    std_vector_float_t const * this_
    , float const * * return_);
#define std_vector_float_data_const std__vector_float__data_const


USD_CPPMM_API unsigned int std__vector_float__push_back(
    std_vector_float_t * this_
    , float const * value);
#define std_vector_float_push_back std__vector_float__push_back


USD_CPPMM_API unsigned int std__vector_double__ctor(
    std_vector_double_t * * this_);
#define std_vector_double_ctor std__vector_double__ctor


USD_CPPMM_API unsigned int std__vector_double__copy(
    std_vector_double_t * * this_
    , std_vector_double_t const * rhs);
#define std_vector_double_copy std__vector_double__copy


USD_CPPMM_API unsigned int std__vector_double__dtor(
    std_vector_double_t * this_);
#define std_vector_double_dtor std__vector_double__dtor


USD_CPPMM_API unsigned int std__vector_double__size(
    std_vector_double_t const * this_
    , size_t * return_);
#define std_vector_double_size std__vector_double__size


USD_CPPMM_API unsigned int std__vector_double__resize(
    std_vector_double_t * this_
    , size_t count);
#define std_vector_double_resize std__vector_double__resize


USD_CPPMM_API unsigned int std__vector_double__reserve(
    std_vector_double_t * this_
    , size_t count);
#define std_vector_double_reserve std__vector_double__reserve


USD_CPPMM_API unsigned int std__vector_double__index_mut(
    std_vector_double_t * this_
    , double * * return_
    , size_t pos);
#define std_vector_double_index_mut std__vector_double__index_mut


USD_CPPMM_API unsigned int std__vector_double__index(
    std_vector_double_t const * this_
    , double const * * return_
    , size_t pos);
#define std_vector_double_index std__vector_double__index


USD_CPPMM_API unsigned int std__vector_double__data(
    std_vector_double_t * this_
    , double * * return_);
#define std_vector_double_data std__vector_double__data


USD_CPPMM_API unsigned int std__vector_double__data_const(
    std_vector_double_t const * this_
    , double const * * return_);
#define std_vector_double_data_const std__vector_double__data_const


USD_CPPMM_API unsigned int std__vector_double__push_back(
    std_vector_double_t * this_
    , double const * value);
#define std_vector_double_push_back std__vector_double__push_back


USD_CPPMM_API unsigned int std__vector_int__ctor(
    std_vector_int_t * * this_);
#define std_vector_int_ctor std__vector_int__ctor


USD_CPPMM_API unsigned int std__vector_int__copy(
    std_vector_int_t * * this_
    , std_vector_int_t const * rhs);
#define std_vector_int_copy std__vector_int__copy


USD_CPPMM_API unsigned int std__vector_int__dtor(
    std_vector_int_t * this_);
#define std_vector_int_dtor std__vector_int__dtor


USD_CPPMM_API unsigned int std__vector_int__size(
    std_vector_int_t const * this_
    , size_t * return_);
#define std_vector_int_size std__vector_int__size


USD_CPPMM_API unsigned int std__vector_int__resize(
    std_vector_int_t * this_
    , size_t count);
#define std_vector_int_resize std__vector_int__resize


USD_CPPMM_API unsigned int std__vector_int__reserve(
    std_vector_int_t * this_
    , size_t count);
#define std_vector_int_reserve std__vector_int__reserve


USD_CPPMM_API unsigned int std__vector_int__index_mut(
    std_vector_int_t * this_
    , int * * return_
    , size_t pos);
#define std_vector_int_index_mut std__vector_int__index_mut


USD_CPPMM_API unsigned int std__vector_int__index(
    std_vector_int_t const * this_
    , int const * * return_
    , size_t pos);
#define std_vector_int_index std__vector_int__index


USD_CPPMM_API unsigned int std__vector_int__data(
    std_vector_int_t * this_
    , int * * return_);
#define std_vector_int_data std__vector_int__data


USD_CPPMM_API unsigned int std__vector_int__data_const(
    std_vector_int_t const * this_
    , int const * * return_);
#define std_vector_int_data_const std__vector_int__data_const


USD_CPPMM_API unsigned int std__vector_int__push_back(
    std_vector_int_t * this_
    , int const * value);
#define std_vector_int_push_back std__vector_int__push_back


USD_CPPMM_API unsigned int std__vector_size_t__ctor(
    std_vector_size_t_t * * this_);
#define std_vector_size_t_ctor std__vector_size_t__ctor


USD_CPPMM_API unsigned int std__vector_size_t__copy(
    std_vector_size_t_t * * this_
    , std_vector_size_t_t const * rhs);
#define std_vector_size_t_copy std__vector_size_t__copy


USD_CPPMM_API unsigned int std__vector_size_t__dtor(
    std_vector_size_t_t * this_);
#define std_vector_size_t_dtor std__vector_size_t__dtor


USD_CPPMM_API unsigned int std__vector_size_t__size(
    std_vector_size_t_t const * this_
    , size_t * return_);
#define std_vector_size_t_size std__vector_size_t__size


USD_CPPMM_API unsigned int std__vector_size_t__resize(
    std_vector_size_t_t * this_
    , size_t count);
#define std_vector_size_t_resize std__vector_size_t__resize


USD_CPPMM_API unsigned int std__vector_size_t__reserve(
    std_vector_size_t_t * this_
    , size_t count);
#define std_vector_size_t_reserve std__vector_size_t__reserve


USD_CPPMM_API unsigned int std__vector_size_t__index_mut(
    std_vector_size_t_t * this_
    , unsigned long * * return_
    , size_t pos);
#define std_vector_size_t_index_mut std__vector_size_t__index_mut


USD_CPPMM_API unsigned int std__vector_size_t__index(
    std_vector_size_t_t const * this_
    , unsigned long const * * return_
    , size_t pos);
#define std_vector_size_t_index std__vector_size_t__index


USD_CPPMM_API unsigned int std__vector_size_t__data(
    std_vector_size_t_t * this_
    , unsigned long * * return_);
#define std_vector_size_t_data std__vector_size_t__data


USD_CPPMM_API unsigned int std__vector_size_t__data_const(
    std_vector_size_t_t const * this_
    , unsigned long const * * return_);
#define std_vector_size_t_data_const std__vector_size_t__data_const


USD_CPPMM_API unsigned int std__vector_size_t__push_back(
    std_vector_size_t_t * this_
    , unsigned long const * value);
#define std_vector_size_t_push_back std__vector_size_t__push_back


USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__ctor(
    std_UsdAttributeVector_t * * this_);
#define std_UsdAttributeVector_ctor std__vector_pxr__UsdAttribute__ctor


USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__copy(
    std_UsdAttributeVector_t * * this_
    , std_UsdAttributeVector_t const * rhs);
#define std_UsdAttributeVector_copy std__vector_pxr__UsdAttribute__copy


USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__dtor(
    std_UsdAttributeVector_t * this_);
#define std_UsdAttributeVector_dtor std__vector_pxr__UsdAttribute__dtor


USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__size(
    std_UsdAttributeVector_t const * this_
    , size_t * return_);
#define std_UsdAttributeVector_size std__vector_pxr__UsdAttribute__size


USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__resize(
    std_UsdAttributeVector_t * this_
    , size_t count);
#define std_UsdAttributeVector_resize std__vector_pxr__UsdAttribute__resize


USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__reserve(
    std_UsdAttributeVector_t * this_
    , size_t count);
#define std_UsdAttributeVector_reserve std__vector_pxr__UsdAttribute__reserve


USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__index_mut(
    std_UsdAttributeVector_t * this_
    , pxr_UsdAttribute_t * * return_
    , size_t pos);
#define std_UsdAttributeVector_index_mut std__vector_pxr__UsdAttribute__index_mut


USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__index(
    std_UsdAttributeVector_t const * this_
    , pxr_UsdAttribute_t const * * return_
    , size_t pos);
#define std_UsdAttributeVector_index std__vector_pxr__UsdAttribute__index


USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__data(
    std_UsdAttributeVector_t * this_
    , pxr_UsdAttribute_t * * return_);
#define std_UsdAttributeVector_data std__vector_pxr__UsdAttribute__data


USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__data_const(
    std_UsdAttributeVector_t const * this_
    , pxr_UsdAttribute_t const * * return_);
#define std_UsdAttributeVector_data_const std__vector_pxr__UsdAttribute__data_const


USD_CPPMM_API unsigned int std__vector_pxr__UsdAttribute__push_back(
    std_UsdAttributeVector_t * this_
    , pxr_UsdAttribute_t const * value);
#define std_UsdAttributeVector_push_back std__vector_pxr__UsdAttribute__push_back


USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__ctor(
    std_SdfPathVector_t * * this_);
#define std_SdfPathVector_ctor std__vector_pxr__SdfPath__ctor


USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__copy(
    std_SdfPathVector_t * * this_
    , std_SdfPathVector_t const * rhs);
#define std_SdfPathVector_copy std__vector_pxr__SdfPath__copy


USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__dtor(
    std_SdfPathVector_t * this_);
#define std_SdfPathVector_dtor std__vector_pxr__SdfPath__dtor


USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__size(
    std_SdfPathVector_t const * this_
    , size_t * return_);
#define std_SdfPathVector_size std__vector_pxr__SdfPath__size


USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__resize(
    std_SdfPathVector_t * this_
    , size_t count);
#define std_SdfPathVector_resize std__vector_pxr__SdfPath__resize


USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__reserve(
    std_SdfPathVector_t * this_
    , size_t count);
#define std_SdfPathVector_reserve std__vector_pxr__SdfPath__reserve


USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__index_mut(
    std_SdfPathVector_t * this_
    , pxr_SdfPath_t * * return_
    , size_t pos);
#define std_SdfPathVector_index_mut std__vector_pxr__SdfPath__index_mut


USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__index(
    std_SdfPathVector_t const * this_
    , pxr_SdfPath_t const * * return_
    , size_t pos);
#define std_SdfPathVector_index std__vector_pxr__SdfPath__index


USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__data(
    std_SdfPathVector_t * this_
    , pxr_SdfPath_t * * return_);
#define std_SdfPathVector_data std__vector_pxr__SdfPath__data


USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__data_const(
    std_SdfPathVector_t const * this_
    , pxr_SdfPath_t const * * return_);
#define std_SdfPathVector_data_const std__vector_pxr__SdfPath__data_const


USD_CPPMM_API unsigned int std__vector_pxr__SdfPath__push_back(
    std_SdfPathVector_t * this_
    , pxr_SdfPath_t const * value);
#define std_SdfPathVector_push_back std__vector_pxr__SdfPath__push_back


#ifdef __cplusplus
}
#endif
