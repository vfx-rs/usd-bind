#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfTimeCode_t_s pxrInternal_v0_21__pxrReserved____SdfTimeCode_t;
typedef pxrInternal_v0_21__pxrReserved____SdfTimeCode_t pxr_SdfTimeCode_t;

/** \class SdfLayerOffset 

Represents a time offset and scale between layers.

The SdfLayerOffset class is an affine transform, providing both a scale and
a translate.  It supports vector algebra semantics for composing
SdfLayerOffsets together via multiplication.  The SdfLayerOffset class is 
unitless: it does not refer to seconds or frames.

For example, suppose layer A uses layer B, with an offset of X:  
when bringing animation from B into A, you first apply the scale of X, and 
then the offset.  Suppose you have a scale of 2 and an offset of 24: 
first multiply B's frame numbers by 2, and then add 24.  The animation from 
B as seen in A will take twice as long and start 24 frames later.

Offsets are typically used in either sublayers or prim references. For more 
information, see the SetSubLayerOffset() method of the SdfLayer class (the 
subLayerOffsets property in Python), as well as the SetReference() and 
GetReferenceLayerOffset() methods (the latter is the referenceLayerOffset 
property in Python) of the SdfPrimSpec class. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t pxr_SdfLayerOffset_t;

/** Hash functor for hash maps and sets. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayerOffset__Hash_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____SdfLayerOffset__Hash_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerOffset__Hash_t pxr_SdfLayerOffset_Hash_t;


/** Constructs a new SdfLayerOffset instance. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_ctor(
    pxr_SdfLayerOffset_t * * this_
    , double offset
    , double scale);
#define pxr_SdfLayerOffset_ctor pxrInternal_v0_21__pxrReserved____SdfLayerOffset_ctor


/** Returns the time offset. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetOffset(
    pxr_SdfLayerOffset_t const * this_
    , double * return_);
#define pxr_SdfLayerOffset_GetOffset pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetOffset


/** Returns the time scale factor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetScale(
    pxr_SdfLayerOffset_t const * this_
    , double * return_);
#define pxr_SdfLayerOffset_GetScale pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetScale


/** Sets the time offset. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_SetOffset(
    pxr_SdfLayerOffset_t * this_
    , double newOffset);
#define pxr_SdfLayerOffset_SetOffset pxrInternal_v0_21__pxrReserved____SdfLayerOffset_SetOffset


/** Sets the time scale factor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_SetScale(
    pxr_SdfLayerOffset_t * this_
    , double newScale);
#define pxr_SdfLayerOffset_SetScale pxrInternal_v0_21__pxrReserved____SdfLayerOffset_SetScale


/** Returns \c true if this is an identity transformation, with
an offset of 0.0 and a scale of 1.0. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_IsIdentity(
    pxr_SdfLayerOffset_t const * this_
    , _Bool * return_);
#define pxr_SdfLayerOffset_IsIdentity pxrInternal_v0_21__pxrReserved____SdfLayerOffset_IsIdentity


/** Returns \c true if this offset is valid, i.e. both the offset and
scale are finite (not infinite or NaN).  Note that a valid layer
offset's inverse may be invalid. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_IsValid(
    pxr_SdfLayerOffset_t const * this_
    , _Bool * return_);
#define pxr_SdfLayerOffset_IsValid pxrInternal_v0_21__pxrReserved____SdfLayerOffset_IsValid


/** Gets the inverse offset, which performs the opposite transformation. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetInverse(
    pxr_SdfLayerOffset_t const * this_
    , pxr_SdfLayerOffset_t * * return_);
#define pxr_SdfLayerOffset_GetInverse pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetInverse


/** Returns hash for this offset. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetHash(
    pxr_SdfLayerOffset_t const * this_
    , size_t * return_);
#define pxr_SdfLayerOffset_GetHash pxrInternal_v0_21__pxrReserved____SdfLayerOffset_GetHash


/** Returns whether the offsets are equal. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset__eq(
    pxr_SdfLayerOffset_t const * this_
    , _Bool * return_
    , pxr_SdfLayerOffset_t const * rhs);
#define pxr_SdfLayerOffset__eq pxrInternal_v0_21__pxrReserved____SdfLayerOffset__eq


/** Returns whether this offset is less than another.  The meaning
of less than is somewhat arbitrary. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_operator_(
    pxr_SdfLayerOffset_t const * this_
    , _Bool * return_
    , pxr_SdfLayerOffset_t const * rhs);
#define pxr_SdfLayerOffset_operator_ pxrInternal_v0_21__pxrReserved____SdfLayerOffset_operator_


/** Composes this with the offset \e rhs, such that the resulting
offset is equivalent to first applying \e rhs and then \e *this. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset__op_mul(
    pxr_SdfLayerOffset_t const * this_
    , pxr_SdfLayerOffset_t * * return_
    , pxr_SdfLayerOffset_t const * rhs);
#define pxr_SdfLayerOffset__op_mul pxrInternal_v0_21__pxrReserved____SdfLayerOffset__op_mul


/** Applies the offset to the given value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset__op_mul_1(
    pxr_SdfLayerOffset_t const * this_
    , double * return_
    , double rhs);
#define pxr_SdfLayerOffset__op_mul_1 pxrInternal_v0_21__pxrReserved____SdfLayerOffset__op_mul_1


/** Applies the offset to the given value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset__op_mul_2(
    pxr_SdfLayerOffset_t const * this_
    , pxr_SdfTimeCode_t * return_
    , pxr_SdfTimeCode_t const * rhs);
#define pxr_SdfLayerOffset__op_mul_2 pxrInternal_v0_21__pxrReserved____SdfLayerOffset__op_mul_2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset__Hash__op_call(
    pxr_SdfLayerOffset_Hash_t const * this_
    , size_t * return_
    , pxr_SdfLayerOffset_t const * offset);
#define pxr_SdfLayerOffset_Hash__op_call pxrInternal_v0_21__pxrReserved____SdfLayerOffset__Hash__op_call


#ifdef __cplusplus
}
#endif
