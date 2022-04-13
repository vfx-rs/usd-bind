#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____PcpNodeRef_t_s pxrInternal_v0_21__pxrReserved____PcpNodeRef_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNodeRef_t pxr_PcpNodeRef_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_t_s pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPropertyIndex_t pxr_PcpPropertyIndex_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpPrimIndex_t_s pxrInternal_v0_21__pxrReserved____PcpPrimIndex_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPrimIndex_t pxr_PcpPrimIndex_t;

/** \class PcpNodeIterator

Object used to iterate over nodes in the prim index graph in strong-to-weak
order. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpNodeIterator_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpNodeIterator_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNodeIterator_t pxr_PcpNodeIterator_t;

/** \class PcpNodeReverseIterator

Object used to iterate over nodes in the prim index graph in weak-to-strong
order. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_t pxr_PcpNodeReverseIterator_t;

/** \class PcpPrimIterator

Object used to iterate over prim specs in the prim index graph in 
strong-to-weak order. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpPrimIterator_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpPrimIterator_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPrimIterator_t pxr_PcpPrimIterator_t;

/** \class PcpPrimReverseIterator

Object used to iterate over prim specs in the prim index graph in 
weak-to-strong order. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_t pxr_PcpPrimReverseIterator_t;

/** \class PcpPropertyIterator

Object used to iterate over property specs in a property index in
strong-to-weak order. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_t pxr_PcpPropertyIterator_t;

/** \class PcpPropertyReverseIterator

Object used to iterate over property specs in a property index in
weak-to-strong order. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_t;
typedef pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_t pxr_PcpPropertyReverseIterator_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator__op_inc(
    pxr_PcpNodeIterator_t * this_
    , pxr_PcpNodeIterator_t * * return_);
#define pxr_PcpNodeIterator__op_inc pxrInternal_v0_21__pxrReserved____PcpNodeIterator__op_inc


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator__op_dec(
    pxr_PcpNodeIterator_t * this_
    , pxr_PcpNodeIterator_t * * return_);
#define pxr_PcpNodeIterator__op_dec pxrInternal_v0_21__pxrReserved____PcpNodeIterator__op_dec


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator__op_dec_1(
    pxr_PcpNodeIterator_t * this_
    , pxr_PcpNodeIterator_t * * return_
    , int rhs);
#define pxr_PcpNodeIterator__op_dec_1 pxrInternal_v0_21__pxrReserved____PcpNodeIterator__op_dec_1


/** Constructs an invalid iterator. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator_ctor(
    pxr_PcpNodeIterator_t * * this_);
#define pxr_PcpNodeIterator_ctor pxrInternal_v0_21__pxrReserved____PcpNodeIterator_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator_copy(
    pxr_PcpNodeIterator_t * * this_
    , pxr_PcpNodeIterator_t const * rhs);
#define pxr_PcpNodeIterator_copy pxrInternal_v0_21__pxrReserved____PcpNodeIterator_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator_dtor(
    pxr_PcpNodeIterator_t * this_);
#define pxr_PcpNodeIterator_dtor pxrInternal_v0_21__pxrReserved____PcpNodeIterator_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator__assign(
    pxr_PcpNodeIterator_t * this_
    , pxr_PcpNodeIterator_t * * return_
    , pxr_PcpNodeIterator_t const * rhs);
#define pxr_PcpNodeIterator__assign pxrInternal_v0_21__pxrReserved____PcpNodeIterator__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_base(
    pxr_PcpNodeReverseIterator_t const * this_
    , pxr_PcpNodeIterator_t const * * return_);
#define pxr_PcpNodeReverseIterator_base pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_base


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_ctor(
    pxr_PcpNodeReverseIterator_t * * this_);
#define pxr_PcpNodeReverseIterator_ctor pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_ctor_1(
    pxr_PcpNodeReverseIterator_t * * this_
    , pxr_PcpNodeIterator_t const * iter);
#define pxr_PcpNodeReverseIterator_ctor_1 pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_copy(
    pxr_PcpNodeReverseIterator_t * * this_
    , pxr_PcpNodeReverseIterator_t const * rhs);
#define pxr_PcpNodeReverseIterator_copy pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_dtor(
    pxr_PcpNodeReverseIterator_t * this_);
#define pxr_PcpNodeReverseIterator_dtor pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator__op_inc(
    pxr_PcpPrimIterator_t * this_
    , pxr_PcpPrimIterator_t * * return_);
#define pxr_PcpPrimIterator__op_inc pxrInternal_v0_21__pxrReserved____PcpPrimIterator__op_inc


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator__op_dec(
    pxr_PcpPrimIterator_t * this_
    , pxr_PcpPrimIterator_t * * return_);
#define pxr_PcpPrimIterator__op_dec pxrInternal_v0_21__pxrReserved____PcpPrimIterator__op_dec


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator__op_dec_1(
    pxr_PcpPrimIterator_t * this_
    , pxr_PcpPrimIterator_t * * return_
    , int rhs);
#define pxr_PcpPrimIterator__op_dec_1 pxrInternal_v0_21__pxrReserved____PcpPrimIterator__op_dec_1


/** Constructs an invalid iterator. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator_ctor(
    pxr_PcpPrimIterator_t * * this_);
#define pxr_PcpPrimIterator_ctor pxrInternal_v0_21__pxrReserved____PcpPrimIterator_ctor


/** Constructs a prim iterator beginning at position \p pos in the
prim stack of prim index \p primIndex. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator_ctor_1(
    pxr_PcpPrimIterator_t * * this_
    , pxr_PcpPrimIndex_t const * primIndex
    , size_t pos);
#define pxr_PcpPrimIterator_ctor_1 pxrInternal_v0_21__pxrReserved____PcpPrimIterator_ctor_1


/** Returns the PcpNode from which the current prim originated. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator_GetNode(
    pxr_PcpPrimIterator_t const * this_
    , pxr_PcpNodeRef_t * * return_);
#define pxr_PcpPrimIterator_GetNode pxrInternal_v0_21__pxrReserved____PcpPrimIterator_GetNode


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator_copy(
    pxr_PcpPrimIterator_t * * this_
    , pxr_PcpPrimIterator_t const * rhs);
#define pxr_PcpPrimIterator_copy pxrInternal_v0_21__pxrReserved____PcpPrimIterator_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator_dtor(
    pxr_PcpPrimIterator_t * this_);
#define pxr_PcpPrimIterator_dtor pxrInternal_v0_21__pxrReserved____PcpPrimIterator_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator__assign(
    pxr_PcpPrimIterator_t * this_
    , pxr_PcpPrimIterator_t * * return_
    , pxr_PcpPrimIterator_t const * rhs);
#define pxr_PcpPrimIterator__assign pxrInternal_v0_21__pxrReserved____PcpPrimIterator__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_base(
    pxr_PcpPrimReverseIterator_t const * this_
    , pxr_PcpPrimIterator_t const * * return_);
#define pxr_PcpPrimReverseIterator_base pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_base


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_ctor(
    pxr_PcpPrimReverseIterator_t * * this_);
#define pxr_PcpPrimReverseIterator_ctor pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_ctor_1(
    pxr_PcpPrimReverseIterator_t * * this_
    , pxr_PcpPrimIterator_t const * iter);
#define pxr_PcpPrimReverseIterator_ctor_1 pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_GetNode(
    pxr_PcpPrimReverseIterator_t const * this_
    , pxr_PcpNodeRef_t * * return_);
#define pxr_PcpPrimReverseIterator_GetNode pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_GetNode


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_copy(
    pxr_PcpPrimReverseIterator_t * * this_
    , pxr_PcpPrimReverseIterator_t const * rhs);
#define pxr_PcpPrimReverseIterator_copy pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_dtor(
    pxr_PcpPrimReverseIterator_t * this_);
#define pxr_PcpPrimReverseIterator_dtor pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__op_inc(
    pxr_PcpPropertyIterator_t * this_
    , pxr_PcpPropertyIterator_t * * return_);
#define pxr_PcpPropertyIterator__op_inc pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__op_inc


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__op_dec(
    pxr_PcpPropertyIterator_t * this_
    , pxr_PcpPropertyIterator_t * * return_);
#define pxr_PcpPropertyIterator__op_dec pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__op_dec


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__op_dec_1(
    pxr_PcpPropertyIterator_t * this_
    , pxr_PcpPropertyIterator_t * * return_
    , int rhs);
#define pxr_PcpPropertyIterator__op_dec_1 pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__op_dec_1


/** Constructs an invalid iterator. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_ctor(
    pxr_PcpPropertyIterator_t * * this_);
#define pxr_PcpPropertyIterator_ctor pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_ctor


/** Constructs a property iterator for \p index beginning at position
\p pos in the property stack. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_ctor_1(
    pxr_PcpPropertyIterator_t * * this_
    , pxr_PcpPropertyIndex_t const * index
    , size_t pos);
#define pxr_PcpPropertyIterator_ctor_1 pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_ctor_1


/** Returns the PcpNode from which the current property originated. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_GetNode(
    pxr_PcpPropertyIterator_t const * this_
    , pxr_PcpNodeRef_t * * return_);
#define pxr_PcpPropertyIterator_GetNode pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_GetNode


/** Returns true if the current property is local to the owning
property index's layer stack, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_IsLocal(
    pxr_PcpPropertyIterator_t const * this_
    , _Bool * return_);
#define pxr_PcpPropertyIterator_IsLocal pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_IsLocal


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_copy(
    pxr_PcpPropertyIterator_t * * this_
    , pxr_PcpPropertyIterator_t const * rhs);
#define pxr_PcpPropertyIterator_copy pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_dtor(
    pxr_PcpPropertyIterator_t * this_);
#define pxr_PcpPropertyIterator_dtor pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__assign(
    pxr_PcpPropertyIterator_t * this_
    , pxr_PcpPropertyIterator_t * * return_
    , pxr_PcpPropertyIterator_t const * rhs);
#define pxr_PcpPropertyIterator__assign pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_base(
    pxr_PcpPropertyReverseIterator_t const * this_
    , pxr_PcpPropertyIterator_t const * * return_);
#define pxr_PcpPropertyReverseIterator_base pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_base


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_ctor(
    pxr_PcpPropertyReverseIterator_t * * this_);
#define pxr_PcpPropertyReverseIterator_ctor pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_ctor_1(
    pxr_PcpPropertyReverseIterator_t * * this_
    , pxr_PcpPropertyIterator_t const * iter);
#define pxr_PcpPropertyReverseIterator_ctor_1 pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_GetNode(
    pxr_PcpPropertyReverseIterator_t const * this_
    , pxr_PcpNodeRef_t * * return_);
#define pxr_PcpPropertyReverseIterator_GetNode pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_GetNode


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_IsLocal(
    pxr_PcpPropertyReverseIterator_t const * this_
    , _Bool * return_);
#define pxr_PcpPropertyReverseIterator_IsLocal pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_IsLocal


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_copy(
    pxr_PcpPropertyReverseIterator_t * * this_
    , pxr_PcpPropertyReverseIterator_t const * rhs);
#define pxr_PcpPropertyReverseIterator_copy pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_dtor(
    pxr_PcpPropertyReverseIterator_t * this_);
#define pxr_PcpPropertyReverseIterator_dtor pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_dtor


#ifdef __cplusplus
}
#endif
