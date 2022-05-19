#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \class SdfAllowed

Indicates if an operation is allowed and, if not, why not.

A \c SdfAllowed either evaluates to \c true in a boolean context
or evaluates to \c false and has a string annotation. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfAllowed_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfAllowed_t;
typedef pxrInternal_v0_21__pxrReserved____SdfAllowed_t pxr_SdfAllowed_t;


/** Construct \c true. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor(
    pxr_SdfAllowed_t * * this_);
#define pxr_SdfAllowed_ctor pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor


/** Construct \c true. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_1(
    pxr_SdfAllowed_t * * this_
    , _Bool x);
#define pxr_SdfAllowed_ctor_1 pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_1


/** Construct \c false with annotation \p whyNot. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_2(
    pxr_SdfAllowed_t * * this_
    , char const * whyNot);
#define pxr_SdfAllowed_ctor_2 pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_2


/** Construct \c false with annotation \p whyNot. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_3(
    pxr_SdfAllowed_t * * this_
    , std_string_t const * whyNot);
#define pxr_SdfAllowed_ctor_3 pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_3


/** Construct in \p condition with annotation \p whyNot if \c false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_4(
    pxr_SdfAllowed_t * * this_
    , _Bool condition
    , char const * whyNot);
#define pxr_SdfAllowed_ctor_4 pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_4


/** Construct in \p condition with annotation \p whyNot if \c false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_5(
    pxr_SdfAllowed_t * * this_
    , _Bool condition
    , std_string_t const * whyNot);
#define pxr_SdfAllowed_ctor_5 pxrInternal_v0_21__pxrReserved____SdfAllowed_ctor_5


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_dtor(
    pxr_SdfAllowed_t * this_);
#define pxr_SdfAllowed_dtor pxrInternal_v0_21__pxrReserved____SdfAllowed_dtor


/** Returns \c false in a boolean context if allowed, \c true otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed__neg(
    pxr_SdfAllowed_t const * this_
    , _Bool * return_);
#define pxr_SdfAllowed__neg pxrInternal_v0_21__pxrReserved____SdfAllowed__neg


/** Returns the reason why the operation is not allowed.  If the
operation is allowed this returns the empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_GetWhyNot(
    pxr_SdfAllowed_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfAllowed_GetWhyNot pxrInternal_v0_21__pxrReserved____SdfAllowed_GetWhyNot


/** Returns \c true if allowed, otherwise fills \p whyNot if not \c NULL
and returns \c false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_IsAllowed(
    pxr_SdfAllowed_t const * this_
    , _Bool * return_
    , std_string_t * whyNot);
#define pxr_SdfAllowed_IsAllowed pxrInternal_v0_21__pxrReserved____SdfAllowed_IsAllowed


/** Compare to \p other.  Returns \c true if both are \c true or
both are \c false and reasons why not are identical. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed__eq(
    pxr_SdfAllowed_t const * this_
    , _Bool * return_
    , pxr_SdfAllowed_t const * other);
#define pxr_SdfAllowed__eq pxrInternal_v0_21__pxrReserved____SdfAllowed__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed_copy(
    pxr_SdfAllowed_t * * this_
    , pxr_SdfAllowed_t const * rhs);
#define pxr_SdfAllowed_copy pxrInternal_v0_21__pxrReserved____SdfAllowed_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAllowed__assign(
    pxr_SdfAllowed_t * this_
    , pxr_SdfAllowed_t * * return_
    , pxr_SdfAllowed_t const * rhs);
#define pxr_SdfAllowed__assign pxrInternal_v0_21__pxrReserved____SdfAllowed__assign


#ifdef __cplusplus
}
#endif
