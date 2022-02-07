#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \class PcpInstanceKey

A PcpInstanceKey identifies instanceable prim indexes that share the
same set of opinions. Instanceable prim indexes with equal instance
keys are guaranteed to have the same opinions for name children and
properties beneath those name children. They are NOT guaranteed to have
the same opinions for direct properties of the prim indexes themselves. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpInstanceKey_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpInstanceKey_t;
typedef pxrInternal_v0_21__pxrReserved____PcpInstanceKey_t pxr_PcpInstanceKey_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpInstanceKey_ctor(
    pxr_PcpInstanceKey_t * * this_);
#define pxr_PcpInstanceKey_ctor pxrInternal_v0_21__pxrReserved____PcpInstanceKey_ctor


/** Comparison operators */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpInstanceKey__eq(
    pxr_PcpInstanceKey_t const * this_
    , _Bool * return_
    , pxr_PcpInstanceKey_t const * rhs);
#define pxr_PcpInstanceKey__eq pxrInternal_v0_21__pxrReserved____PcpInstanceKey__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpInstanceKey__ne(
    pxr_PcpInstanceKey_t const * this_
    , _Bool * return_
    , pxr_PcpInstanceKey_t const * rhs);
#define pxr_PcpInstanceKey__ne pxrInternal_v0_21__pxrReserved____PcpInstanceKey__ne


/** Returns string representation of this instance key
for debugging purposes. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpInstanceKey_GetString(
    pxr_PcpInstanceKey_t const * this_
    , std_string_t * * return_);
#define pxr_PcpInstanceKey_GetString pxrInternal_v0_21__pxrReserved____PcpInstanceKey_GetString


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpInstanceKey_copy(
    pxr_PcpInstanceKey_t * * this_
    , pxr_PcpInstanceKey_t const * rhs);
#define pxr_PcpInstanceKey_copy pxrInternal_v0_21__pxrReserved____PcpInstanceKey_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpInstanceKey__assign(
    pxr_PcpInstanceKey_t * this_
    , pxr_PcpInstanceKey_t * * return_
    , pxr_PcpInstanceKey_t const * rhs);
#define pxr_PcpInstanceKey__assign pxrInternal_v0_21__pxrReserved____PcpInstanceKey__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpInstanceKey_dtor(
    pxr_PcpInstanceKey_t * this_);
#define pxr_PcpInstanceKey_dtor pxrInternal_v0_21__pxrReserved____PcpInstanceKey_dtor


#ifdef __cplusplus
}
#endif
