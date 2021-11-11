#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \class SdfTimeCode

Value type that represents a time code. It's equivalent to a double type
value but is used to indicate that this value should be resolved by any
time based value resolution. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfTimeCode_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::SdfTimeCode%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::SdfTimeCode%) pxrInternal_v0_21__pxrReserved____SdfTimeCode_t;
typedef pxrInternal_v0_21__pxrReserved____SdfTimeCode_t pxr_SdfTimeCode_t;


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode_sizeof();
#define pxr_SdfTimeCode_sizeof pxrInternal_v0_21__pxrReserved____SdfTimeCode_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode_alignof();
#define pxr_SdfTimeCode_alignof pxrInternal_v0_21__pxrReserved____SdfTimeCode_alignof


/** Construct a time code with the given time. 
A default constructed SdfTimeCode has a time of 0.0.
A double value can implicitly cast to SdfTimeCode. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode_ctor(
    pxr_SdfTimeCode_t * this_
    , double time);
#define pxr_SdfTimeCode_ctor pxrInternal_v0_21__pxrReserved____SdfTimeCode_ctor


/** \name Operators
 @{ */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode__eq(
    pxr_SdfTimeCode_t const * this_
    , _Bool * return_
    , pxr_SdfTimeCode_t const * rhs);
#define pxr_SdfTimeCode__eq pxrInternal_v0_21__pxrReserved____SdfTimeCode__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode__ne(
    pxr_SdfTimeCode_t const * this_
    , _Bool * return_
    , pxr_SdfTimeCode_t const * rhs);
#define pxr_SdfTimeCode__ne pxrInternal_v0_21__pxrReserved____SdfTimeCode__ne


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode_op_lt(
    pxr_SdfTimeCode_t const * this_
    , _Bool * return_
    , pxr_SdfTimeCode_t const * rhs);
#define pxr_SdfTimeCode_op_lt pxrInternal_v0_21__pxrReserved____SdfTimeCode_op_lt


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode_op_gt(
    pxr_SdfTimeCode_t const * this_
    , _Bool * return_
    , pxr_SdfTimeCode_t const * rhs);
#define pxr_SdfTimeCode_op_gt pxrInternal_v0_21__pxrReserved____SdfTimeCode_op_gt


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode_op_le(
    pxr_SdfTimeCode_t const * this_
    , _Bool * return_
    , pxr_SdfTimeCode_t const * rhs);
#define pxr_SdfTimeCode_op_le pxrInternal_v0_21__pxrReserved____SdfTimeCode_op_le


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode_op_ge(
    pxr_SdfTimeCode_t const * this_
    , _Bool * return_
    , pxr_SdfTimeCode_t const * rhs);
#define pxr_SdfTimeCode_op_ge pxrInternal_v0_21__pxrReserved____SdfTimeCode_op_ge


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode__op_mul(
    pxr_SdfTimeCode_t const * this_
    , pxr_SdfTimeCode_t * return_
    , pxr_SdfTimeCode_t const * rhs);
#define pxr_SdfTimeCode__op_mul pxrInternal_v0_21__pxrReserved____SdfTimeCode__op_mul


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode__op_div(
    pxr_SdfTimeCode_t const * this_
    , pxr_SdfTimeCode_t * return_
    , pxr_SdfTimeCode_t const * rhs);
#define pxr_SdfTimeCode__op_div pxrInternal_v0_21__pxrReserved____SdfTimeCode__op_div


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode__op_add(
    pxr_SdfTimeCode_t const * this_
    , pxr_SdfTimeCode_t * return_
    , pxr_SdfTimeCode_t const * rhs);
#define pxr_SdfTimeCode__op_add pxrInternal_v0_21__pxrReserved____SdfTimeCode__op_add


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode__op_sub(
    pxr_SdfTimeCode_t const * this_
    , pxr_SdfTimeCode_t * return_
    , pxr_SdfTimeCode_t const * rhs);
#define pxr_SdfTimeCode__op_sub pxrInternal_v0_21__pxrReserved____SdfTimeCode__op_sub


/** Hash function */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode_GetHash(
    pxr_SdfTimeCode_t const * this_
    , size_t * return_);
#define pxr_SdfTimeCode_GetHash pxrInternal_v0_21__pxrReserved____SdfTimeCode_GetHash


/** Return the time value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode_GetValue(
    pxr_SdfTimeCode_t const * this_
    , double * return_);
#define pxr_SdfTimeCode_GetValue pxrInternal_v0_21__pxrReserved____SdfTimeCode_GetValue


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode_copy(
    pxr_SdfTimeCode_t * this_
    , pxr_SdfTimeCode_t const * rhs);
#define pxr_SdfTimeCode_copy pxrInternal_v0_21__pxrReserved____SdfTimeCode_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTimeCode_dtor(
    pxr_SdfTimeCode_t * this_);
#define pxr_SdfTimeCode_dtor pxrInternal_v0_21__pxrReserved____SdfTimeCode_dtor


#ifdef __cplusplus
}
#endif
