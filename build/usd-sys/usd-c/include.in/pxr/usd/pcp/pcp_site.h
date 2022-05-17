#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_t_s pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_t pxr_PcpLayerStackIdentifier_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_t_s pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_t pxr_PcpLayerStackIdentifierStr_t;

/** \class PcpLayerStackSite

A site specifies a path in a layer stack of scene description. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_t pxr_PcpLayerStackSite_t;

typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_t pxr_PcpLayerStackSite_Hash_t;

/** \class PcpSite

A site specifies a path in a layer stack of scene description. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpSite_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpSite_t;
typedef pxrInternal_v0_21__pxrReserved____PcpSite_t pxr_PcpSite_t;

typedef struct pxrInternal_v0_21__pxrReserved____PcpSite__Hash_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____PcpSite__Hash_t;
typedef pxrInternal_v0_21__pxrReserved____PcpSite__Hash_t pxr_PcpSite_Hash_t;

/** \class PcpSiteStr

A "string-based" version of PcpSite.  This stores layer identifiers as
strings rather than SdfLayerHandles, making it stable wrt layer lifetimes. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpSiteStr_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpSiteStr_t;
typedef pxrInternal_v0_21__pxrReserved____PcpSiteStr_t pxr_PcpSiteStr_t;

typedef struct pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_t;
typedef pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_t pxr_PcpSiteStr_Hash_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_ctor(
    pxr_PcpLayerStackSite_t * * this_);
#define pxr_PcpLayerStackSite_ctor pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__eq(
    pxr_PcpLayerStackSite_t const * this_
    , _Bool * return_
    , pxr_PcpLayerStackSite_t const * rhs);
#define pxr_PcpLayerStackSite__eq pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_operator_(
    pxr_PcpLayerStackSite_t const * this_
    , _Bool * return_
    , pxr_PcpLayerStackSite_t const * rhs);
#define pxr_PcpLayerStackSite_operator_ pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_operator_


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_copy(
    pxr_PcpLayerStackSite_t * * this_
    , pxr_PcpLayerStackSite_t const * rhs);
#define pxr_PcpLayerStackSite_copy pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__assign(
    pxr_PcpLayerStackSite_t * this_
    , pxr_PcpLayerStackSite_t * * return_
    , pxr_PcpLayerStackSite_t const * rhs);
#define pxr_PcpLayerStackSite__assign pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_dtor(
    pxr_PcpLayerStackSite_t * this_);
#define pxr_PcpLayerStackSite_dtor pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash__op_call(
    pxr_PcpLayerStackSite_Hash_t const * this_
    , size_t * return_
    , pxr_PcpLayerStackSite_t const * rhs);
#define pxr_PcpLayerStackSite_Hash__op_call pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash__op_call


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_ctor(
    pxr_PcpLayerStackSite_Hash_t * * this_);
#define pxr_PcpLayerStackSite_Hash_ctor pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_copy(
    pxr_PcpLayerStackSite_Hash_t * * this_
    , pxr_PcpLayerStackSite_Hash_t const * rhs);
#define pxr_PcpLayerStackSite_Hash_copy pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_dtor(
    pxr_PcpLayerStackSite_Hash_t * this_);
#define pxr_PcpLayerStackSite_Hash_dtor pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite_ctor(
    pxr_PcpSite_t * * this_);
#define pxr_PcpSite_ctor pxrInternal_v0_21__pxrReserved____PcpSite_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite_ctor_1(
    pxr_PcpSite_t * * this_
    , pxr_PcpLayerStackIdentifier_t const * _param0
    , pxr_SdfPath_t const * path);
#define pxr_PcpSite_ctor_1 pxrInternal_v0_21__pxrReserved____PcpSite_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite_ctor_2(
    pxr_PcpSite_t * * this_
    , pxr_SdfLayerHandle_t const * _param0
    , pxr_SdfPath_t const * path);
#define pxr_PcpSite_ctor_2 pxrInternal_v0_21__pxrReserved____PcpSite_ctor_2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite_ctor_3(
    pxr_PcpSite_t * * this_
    , pxr_PcpLayerStackSite_t const * rhs);
#define pxr_PcpSite_ctor_3 pxrInternal_v0_21__pxrReserved____PcpSite_ctor_3


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite__eq(
    pxr_PcpSite_t const * this_
    , _Bool * return_
    , pxr_PcpSite_t const * rhs);
#define pxr_PcpSite__eq pxrInternal_v0_21__pxrReserved____PcpSite__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite_operator_(
    pxr_PcpSite_t const * this_
    , _Bool * return_
    , pxr_PcpSite_t const * rhs);
#define pxr_PcpSite_operator_ pxrInternal_v0_21__pxrReserved____PcpSite_operator_


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite__assign(
    pxr_PcpSite_t * this_
    , pxr_PcpSite_t * * return_
    , pxr_PcpSite_t const * rhs);
#define pxr_PcpSite__assign pxrInternal_v0_21__pxrReserved____PcpSite__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite_copy(
    pxr_PcpSite_t * * this_
    , pxr_PcpSite_t const * rhs);
#define pxr_PcpSite_copy pxrInternal_v0_21__pxrReserved____PcpSite_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite__Hash__op_call(
    pxr_PcpSite_Hash_t const * this_
    , size_t * return_
    , pxr_PcpSite_t const * rhs);
#define pxr_PcpSite_Hash__op_call pxrInternal_v0_21__pxrReserved____PcpSite__Hash__op_call


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite__Hash_ctor(
    pxr_PcpSite_Hash_t * * this_);
#define pxr_PcpSite_Hash_ctor pxrInternal_v0_21__pxrReserved____PcpSite__Hash_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite__Hash_copy(
    pxr_PcpSite_Hash_t * * this_
    , pxr_PcpSite_Hash_t const * rhs);
#define pxr_PcpSite_Hash_copy pxrInternal_v0_21__pxrReserved____PcpSite__Hash_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite__Hash_dtor(
    pxr_PcpSite_Hash_t * this_);
#define pxr_PcpSite_Hash_dtor pxrInternal_v0_21__pxrReserved____PcpSite__Hash_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor(
    pxr_PcpSiteStr_t * * this_);
#define pxr_PcpSiteStr_ctor pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_1(
    pxr_PcpSiteStr_t * * this_
    , pxr_PcpLayerStackIdentifierStr_t const * _param0
    , pxr_SdfPath_t const * path);
#define pxr_PcpSiteStr_ctor_1 pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_2(
    pxr_PcpSiteStr_t * * this_
    , pxr_PcpLayerStackIdentifier_t const * _param0
    , pxr_SdfPath_t const * path);
#define pxr_PcpSiteStr_ctor_2 pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_3(
    pxr_PcpSiteStr_t * * this_
    , pxr_SdfLayerHandle_t const * _param0
    , pxr_SdfPath_t const * path);
#define pxr_PcpSiteStr_ctor_3 pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_3


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_4(
    pxr_PcpSiteStr_t * * this_
    , pxr_PcpLayerStackSite_t const * rhs);
#define pxr_PcpSiteStr_ctor_4 pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_4


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_5(
    pxr_PcpSiteStr_t * * this_
    , pxr_PcpSite_t const * rhs);
#define pxr_PcpSiteStr_ctor_5 pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_5


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr__eq(
    pxr_PcpSiteStr_t const * this_
    , _Bool * return_
    , pxr_PcpSiteStr_t const * rhs);
#define pxr_PcpSiteStr__eq pxrInternal_v0_21__pxrReserved____PcpSiteStr__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_operator_(
    pxr_PcpSiteStr_t const * this_
    , _Bool * return_
    , pxr_PcpSiteStr_t const * rhs);
#define pxr_PcpSiteStr_operator_ pxrInternal_v0_21__pxrReserved____PcpSiteStr_operator_


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_copy(
    pxr_PcpSiteStr_t * * this_
    , pxr_PcpSiteStr_t const * rhs);
#define pxr_PcpSiteStr_copy pxrInternal_v0_21__pxrReserved____PcpSiteStr_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash__op_call(
    pxr_PcpSiteStr_Hash_t const * this_
    , size_t * return_
    , pxr_PcpSiteStr_t const * rhs);
#define pxr_PcpSiteStr_Hash__op_call pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash__op_call


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_ctor(
    pxr_PcpSiteStr_Hash_t * * this_);
#define pxr_PcpSiteStr_Hash_ctor pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_copy(
    pxr_PcpSiteStr_Hash_t * * this_
    , pxr_PcpSiteStr_Hash_t const * rhs);
#define pxr_PcpSiteStr_Hash_copy pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_dtor(
    pxr_PcpSiteStr_Hash_t * this_);
#define pxr_PcpSiteStr_Hash_dtor pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_2(
    size_t * return_
    , pxr_PcpSite_t const * site);
#define pxr_hash_value_2 pxrInternal_v0_21__pxrReserved___hash_value_2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_3(
    size_t * return_
    , pxr_PcpSiteStr_t const * site);
#define pxr_hash_value_3 pxrInternal_v0_21__pxrReserved___hash_value_3


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_4(
    size_t * return_
    , pxr_PcpLayerStackSite_t const * site);
#define pxr_hash_value_4 pxrInternal_v0_21__pxrReserved___hash_value_4


#ifdef __cplusplus
}
#endif
