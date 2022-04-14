#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpMapFunction_t_s pxrInternal_v0_21__pxrReserved____PcpMapFunction_t;
typedef pxrInternal_v0_21__pxrReserved____PcpMapFunction_t pxr_PcpMapFunction_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t_s pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t pxr_SdfLayerOffset_t;

/** \class PcpMapExpression

An expression that yields a PcpMapFunction value.

Expressions comprise constant values, variables, and operators
applied to sub-expressions.  Expressions cache their computed values
internally.  Assigning a new value to a variable automatically
invalidates the cached values of dependent expressions.  Common
(sub-)expressions are automatically detected and shared.

PcpMapExpression exists solely to support efficient incremental
handling of relocates edits.  It represents a tree of the namespace
mapping operations and their inputs, so we can narrowly redo the
computation when one of the inputs changes. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpMapExpression_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpMapExpression_t;
typedef pxrInternal_v0_21__pxrReserved____PcpMapExpression_t pxr_PcpMapExpression_t;

/** A Variable is a mutable memory cell that holds a value.
Changing a variable's value invalidates any expressions using
that variable. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_t;
typedef pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_t pxr_PcpMapExpression_Variable_t;


/** Evaluate this expression, yielding a PcpMapFunction value.
The computed result is cached.
The return value is a reference to the internal cached value.
The cache is automatically invalidated as needed. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_Evaluate(
    pxr_PcpMapExpression_t const * this_
    , pxr_PcpMapFunction_t const * * return_);
#define pxr_PcpMapExpression_Evaluate pxrInternal_v0_21__pxrReserved____PcpMapExpression_Evaluate


/** Default-construct a NULL expression. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_ctor(
    pxr_PcpMapExpression_t * * this_);
#define pxr_PcpMapExpression_ctor pxrInternal_v0_21__pxrReserved____PcpMapExpression_ctor


/** Swap this expression with the other. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_Swap(
    pxr_PcpMapExpression_t * this_
    , pxr_PcpMapExpression_t * other);
#define pxr_PcpMapExpression_Swap pxrInternal_v0_21__pxrReserved____PcpMapExpression_Swap


/** Return true if this is a null expression. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_IsNull(
    pxr_PcpMapExpression_t const * this_
    , _Bool * return_);
#define pxr_PcpMapExpression_IsNull pxrInternal_v0_21__pxrReserved____PcpMapExpression_IsNull


/** Return an expression representing PcpMapFunction::Identity(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_Identity(
    pxr_PcpMapExpression_t * * return_);
#define pxr_PcpMapExpression_Identity pxrInternal_v0_21__pxrReserved____PcpMapExpression_Identity


/** Create a new constant. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_Constant(
    pxr_PcpMapExpression_t * * return_
    , pxr_PcpMapFunction_t const * constValue);
#define pxr_PcpMapExpression_Constant pxrInternal_v0_21__pxrReserved____PcpMapExpression_Constant


/** Create a new PcpMapExpression representing the application of
f's value, followed by the application of this expression's value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_Compose(
    pxr_PcpMapExpression_t const * this_
    , pxr_PcpMapExpression_t * * return_
    , pxr_PcpMapExpression_t const * f);
#define pxr_PcpMapExpression_Compose pxrInternal_v0_21__pxrReserved____PcpMapExpression_Compose


/** Create a new PcpMapExpression representing the inverse of f. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_Inverse(
    pxr_PcpMapExpression_t const * this_
    , pxr_PcpMapExpression_t * * return_);
#define pxr_PcpMapExpression_Inverse pxrInternal_v0_21__pxrReserved____PcpMapExpression_Inverse


/** Return a new expression representing this expression with an added
(if necessary) mapping from </> to </>. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_AddRootIdentity(
    pxr_PcpMapExpression_t const * this_
    , pxr_PcpMapExpression_t * * return_);
#define pxr_PcpMapExpression_AddRootIdentity pxrInternal_v0_21__pxrReserved____PcpMapExpression_AddRootIdentity


/** Return true if the map function is the constant identity function. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_IsConstantIdentity(
    pxr_PcpMapExpression_t const * this_
    , _Bool * return_);
#define pxr_PcpMapExpression_IsConstantIdentity pxrInternal_v0_21__pxrReserved____PcpMapExpression_IsConstantIdentity


/** Return true if the evaluated map function is the identity function.
For identity, MapSourceToTarget() always returns the path unchanged. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_IsIdentity(
    pxr_PcpMapExpression_t const * this_
    , _Bool * return_);
#define pxr_PcpMapExpression_IsIdentity pxrInternal_v0_21__pxrReserved____PcpMapExpression_IsIdentity


/** Map a path in the source namespace to the target.
If the path is not in the domain, returns an empty path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_MapSourceToTarget(
    pxr_PcpMapExpression_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_PcpMapExpression_MapSourceToTarget pxrInternal_v0_21__pxrReserved____PcpMapExpression_MapSourceToTarget


/** Map a path in the target namespace to the source.
If the path is not in the co-domain, returns an empty path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_MapTargetToSource(
    pxr_PcpMapExpression_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_PcpMapExpression_MapTargetToSource pxrInternal_v0_21__pxrReserved____PcpMapExpression_MapTargetToSource


/** The time offset of the mapping. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_GetTimeOffset(
    pxr_PcpMapExpression_t const * this_
    , pxr_SdfLayerOffset_t const * * return_);
#define pxr_PcpMapExpression_GetTimeOffset pxrInternal_v0_21__pxrReserved____PcpMapExpression_GetTimeOffset


/** Returns a string representation of this mapping for debugging
purposes. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_GetString(
    pxr_PcpMapExpression_t const * this_
    , std_string_t * * return_);
#define pxr_PcpMapExpression_GetString pxrInternal_v0_21__pxrReserved____PcpMapExpression_GetString


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_copy(
    pxr_PcpMapExpression_t * * this_
    , pxr_PcpMapExpression_t const * rhs);
#define pxr_PcpMapExpression_copy pxrInternal_v0_21__pxrReserved____PcpMapExpression_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression__assign(
    pxr_PcpMapExpression_t * this_
    , pxr_PcpMapExpression_t * * return_
    , pxr_PcpMapExpression_t const * rhs);
#define pxr_PcpMapExpression__assign pxrInternal_v0_21__pxrReserved____PcpMapExpression__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_dtor(
    pxr_PcpMapExpression_t * this_);
#define pxr_PcpMapExpression_dtor pxrInternal_v0_21__pxrReserved____PcpMapExpression_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_dtor(
    pxr_PcpMapExpression_Variable_t * this_);
#define pxr_PcpMapExpression_Variable_dtor pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_dtor


/** Return the current value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_GetValue(
    pxr_PcpMapExpression_Variable_t const * this_
    , pxr_PcpMapFunction_t const * * return_);
#define pxr_PcpMapExpression_Variable_GetValue pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_GetValue


/** Return an expression representing the value of this variable.
This lets you use the variable as a sub-term in other expressions. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_GetExpression(
    pxr_PcpMapExpression_Variable_t const * this_
    , pxr_PcpMapExpression_t * * return_);
#define pxr_PcpMapExpression_Variable_GetExpression pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_GetExpression


#ifdef __cplusplus
}
#endif
