#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

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
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::SdfLayerOffset%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::SdfLayerOffset%) pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t pxr_SdfLayerOffset_t;


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_sizeof();
#define pxr_SdfLayerOffset_sizeof pxrInternal_v0_21__pxrReserved____SdfLayerOffset_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_alignof();
#define pxr_SdfLayerOffset_alignof pxrInternal_v0_21__pxrReserved____SdfLayerOffset_alignof


/** Constructs a new SdfLayerOffset instance. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_ctor(
    pxr_SdfLayerOffset_t * this_
    , double offset
    , double scale);
#define pxr_SdfLayerOffset_ctor pxrInternal_v0_21__pxrReserved____SdfLayerOffset_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerOffset_copy(
    pxr_SdfLayerOffset_t * this_
    , pxr_SdfLayerOffset_t const * rhs);
#define pxr_SdfLayerOffset_copy pxrInternal_v0_21__pxrReserved____SdfLayerOffset_copy


#ifdef __cplusplus
}
#endif
