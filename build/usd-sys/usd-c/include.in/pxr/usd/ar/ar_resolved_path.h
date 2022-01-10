#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \class ArResolvedPath
Represents a resolved asset path. */
typedef struct pxrInternal_v0_21__pxrReserved____ArResolvedPath_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____ArResolvedPath_t;
typedef pxrInternal_v0_21__pxrReserved____ArResolvedPath_t pxr_ArResolvedPath_t;


/** Construct an ArResolvedPath holding the given \p resolvedPath. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_ctor(
    pxr_ArResolvedPath_t * * this_
    , std_string_t const * resolvedPath);
#define pxr_ArResolvedPath_ctor pxrInternal_v0_21__pxrReserved____ArResolvedPath_ctor


/** \overload */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_ctor_1(
    pxr_ArResolvedPath_t * * this_
    , std_string_t * resolvedPath);
#define pxr_ArResolvedPath_ctor_1 pxrInternal_v0_21__pxrReserved____ArResolvedPath_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_ctor_2(
    pxr_ArResolvedPath_t * * this_);
#define pxr_ArResolvedPath_ctor_2 pxrInternal_v0_21__pxrReserved____ArResolvedPath_ctor_2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_copy(
    pxr_ArResolvedPath_t * * this_
    , pxr_ArResolvedPath_t const * rhs);
#define pxr_ArResolvedPath_copy pxrInternal_v0_21__pxrReserved____ArResolvedPath_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_move(
    pxr_ArResolvedPath_t * * this_
    , pxr_ArResolvedPath_t * rhs);
#define pxr_ArResolvedPath_move pxrInternal_v0_21__pxrReserved____ArResolvedPath_move


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath__eq(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * rhs);
#define pxr_ArResolvedPath__eq pxrInternal_v0_21__pxrReserved____ArResolvedPath__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath__ne(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * rhs);
#define pxr_ArResolvedPath__ne pxrInternal_v0_21__pxrReserved____ArResolvedPath__ne


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * rhs);
#define pxr_ArResolvedPath_operator_ pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator__1(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * rhs);
#define pxr_ArResolvedPath_operator__1 pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator__1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_=(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * rhs);
#define pxr_ArResolvedPath_operator_= pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_=


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_=_1(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * rhs);
#define pxr_ArResolvedPath_operator_=_1 pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_=_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath__eq_1(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , std_string_t const * rhs);
#define pxr_ArResolvedPath__eq_1 pxrInternal_v0_21__pxrReserved____ArResolvedPath__eq_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath__ne_1(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , std_string_t const * rhs);
#define pxr_ArResolvedPath__ne_1 pxrInternal_v0_21__pxrReserved____ArResolvedPath__ne_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator__2(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , std_string_t const * rhs);
#define pxr_ArResolvedPath_operator__2 pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator__2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator__3(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , std_string_t const * rhs);
#define pxr_ArResolvedPath_operator__3 pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator__3


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_=_2(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , std_string_t const * rhs);
#define pxr_ArResolvedPath_operator_=_2 pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_=_2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_=_3(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_
    , std_string_t const * rhs);
#define pxr_ArResolvedPath_operator_=_3 pxrInternal_v0_21__pxrReserved____ArResolvedPath_operator_=_3


/** Return hash value for this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_GetHash(
    pxr_ArResolvedPath_t const * this_
    , size_t * return_);
#define pxr_ArResolvedPath_GetHash pxrInternal_v0_21__pxrReserved____ArResolvedPath_GetHash


/** Return true if this object is holding a non-empty resolved path,
false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operatorbool(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_);
#define pxr_ArResolvedPath_operatorbool pxrInternal_v0_21__pxrReserved____ArResolvedPath_operatorbool


/** Return true if this object is holding an empty resolved path,
false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_IsEmpty(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_);
#define pxr_ArResolvedPath_IsEmpty pxrInternal_v0_21__pxrReserved____ArResolvedPath_IsEmpty


/** Equivalent to IsEmpty. This exists primarily for backwards
compatibility. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_empty(
    pxr_ArResolvedPath_t const * this_
    , _Bool * return_);
#define pxr_ArResolvedPath_empty pxrInternal_v0_21__pxrReserved____ArResolvedPath_empty


/** Return the resolved path held by this object as a string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_operatorconststd____cxx11__basic_string_char_&(
    pxr_ArResolvedPath_t const * this_
    , std_string_t const * * return_);
#define pxr_ArResolvedPath_operatorconststd____cxx11__basic_string_char_& pxrInternal_v0_21__pxrReserved____ArResolvedPath_operatorconststd____cxx11__basic_string_char_&


/** Return the resolved path held by this object as a string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolvedPath_GetPathString(
    pxr_ArResolvedPath_t const * this_
    , std_string_t const * * return_);
#define pxr_ArResolvedPath_GetPathString pxrInternal_v0_21__pxrReserved____ArResolvedPath_GetPathString


#ifdef __cplusplus
}
#endif
