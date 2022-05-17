#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____ArResolverContext_t_s pxrInternal_v0_21__pxrReserved____ArResolverContext_t;
typedef pxrInternal_v0_21__pxrReserved____ArResolverContext_t pxr_ArResolverContext_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \class PcpLayerStackIdentifier

Arguments used to identify a layer stack.

Objects of this type are immutable. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_t pxr_PcpLayerStackIdentifier_t;

typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__Hash_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__Hash_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__Hash_t pxr_PcpLayerStackIdentifier_Hash_t;

/** \class PcpLayerStackIdentifierStr

A "string"-based version of PcpLayerStackIdentifier.  These are used in
places where they should be stable wrt layer lifetimes.  This is done by
storing layer identifiers as strings rather than SdfLayerHandles. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_t pxr_PcpLayerStackIdentifierStr_t;

typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__Hash_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__Hash_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__Hash_t pxr_PcpLayerStackIdentifierStr_Hash_t;


/** Construct with all empty pointers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_ctor(
    pxr_PcpLayerStackIdentifier_t * * this_);
#define pxr_PcpLayerStackIdentifier_ctor pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_ctor


/** Construct with given pointers.  If all arguments are \c TfNullPtr
then the result is identical to the default constructed object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_ctor_1(
    pxr_PcpLayerStackIdentifier_t * * this_
    , pxr_SdfLayerHandle_t const * rootLayer_
    , pxr_SdfLayerHandle_t const * sessionLayer_
    , pxr_ArResolverContext_t const * pathResolverContext_);
#define pxr_PcpLayerStackIdentifier_ctor_1 pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__assign(
    pxr_PcpLayerStackIdentifier_t * this_
    , pxr_PcpLayerStackIdentifier_t * * return_
    , pxr_PcpLayerStackIdentifier_t const * rhs);
#define pxr_PcpLayerStackIdentifier__assign pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__eq(
    pxr_PcpLayerStackIdentifier_t const * this_
    , _Bool * return_
    , pxr_PcpLayerStackIdentifier_t const * rhs);
#define pxr_PcpLayerStackIdentifier__eq pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_operator_(
    pxr_PcpLayerStackIdentifier_t const * this_
    , _Bool * return_
    , pxr_PcpLayerStackIdentifier_t const * rhs);
#define pxr_PcpLayerStackIdentifier_operator_ pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_operator_


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_GetHash(
    pxr_PcpLayerStackIdentifier_t const * this_
    , size_t * return_);
#define pxr_PcpLayerStackIdentifier_GetHash pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_GetHash


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_copy(
    pxr_PcpLayerStackIdentifier_t * * this_
    , pxr_PcpLayerStackIdentifier_t const * rhs);
#define pxr_PcpLayerStackIdentifier_copy pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__Hash__op_call(
    pxr_PcpLayerStackIdentifier_Hash_t const * this_
    , size_t * return_
    , pxr_PcpLayerStackIdentifier_t const * x);
#define pxr_PcpLayerStackIdentifier_Hash__op_call pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__Hash__op_call


/** Construct with given identifier strings and context.  If all arguments
are empty strings and default-constructed ArResolverContext, then the
result is identical to the default constructed object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_ctor(
    pxr_PcpLayerStackIdentifierStr_t * * this_
    , std_string_t const * rootLayerId
    , std_string_t const * sessionLayerId
    , pxr_ArResolverContext_t const * resolverContext);
#define pxr_PcpLayerStackIdentifierStr_ctor pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_ctor


/** Allow implicit conversion from PcpLayerStackIdentifier */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_ctor_1(
    pxr_PcpLayerStackIdentifierStr_t * * this_
    , pxr_PcpLayerStackIdentifier_t const * lsid);
#define pxr_PcpLayerStackIdentifierStr_ctor_1 pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__eq(
    pxr_PcpLayerStackIdentifierStr_t const * this_
    , _Bool * return_
    , pxr_PcpLayerStackIdentifierStr_t const * rhs);
#define pxr_PcpLayerStackIdentifierStr__eq pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_operator_(
    pxr_PcpLayerStackIdentifierStr_t const * this_
    , _Bool * return_
    , pxr_PcpLayerStackIdentifierStr_t const * rhs);
#define pxr_PcpLayerStackIdentifierStr_operator_ pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_operator_


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_GetHash(
    pxr_PcpLayerStackIdentifierStr_t const * this_
    , size_t * return_);
#define pxr_PcpLayerStackIdentifierStr_GetHash pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_GetHash


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_copy(
    pxr_PcpLayerStackIdentifierStr_t * * this_
    , pxr_PcpLayerStackIdentifierStr_t const * rhs);
#define pxr_PcpLayerStackIdentifierStr_copy pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__assign(
    pxr_PcpLayerStackIdentifierStr_t * this_
    , pxr_PcpLayerStackIdentifierStr_t * * return_
    , pxr_PcpLayerStackIdentifierStr_t const * rhs);
#define pxr_PcpLayerStackIdentifierStr__assign pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_dtor(
    pxr_PcpLayerStackIdentifierStr_t * this_);
#define pxr_PcpLayerStackIdentifierStr_dtor pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__Hash__op_call(
    pxr_PcpLayerStackIdentifierStr_Hash_t const * this_
    , size_t * return_
    , pxr_PcpLayerStackIdentifierStr_t const * x);
#define pxr_PcpLayerStackIdentifierStr_Hash__op_call pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__Hash__op_call


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_5(
    size_t * return_
    , pxr_PcpLayerStackIdentifier_t const * x);
#define pxr_hash_value_5 pxrInternal_v0_21__pxrReserved___hash_value_5


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_6(
    size_t * return_
    , pxr_PcpLayerStackIdentifierStr_t const * x);
#define pxr_hash_value_6 pxrInternal_v0_21__pxrReserved___hash_value_6


#ifdef __cplusplus
}
#endif
