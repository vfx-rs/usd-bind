#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;

/** \class NdrProperty

Represents a property (input or output) that is part of a `NdrNode`
instance.

A property must have a name and type, but may also specify a host of
additional metadata. Instances can also be queried to determine if another
`NdrProperty` instance can be connected to it.

In almost all cases, this class will not be used directly. More specialized
properties can be created that derive from `NdrProperty`; those specialized
properties can add their own domain-specific data and methods. */
typedef struct pxrInternal_v0_21__pxrReserved____NdrProperty_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____NdrProperty_t;
typedef pxrInternal_v0_21__pxrReserved____NdrProperty_t pxr_NdrProperty_t;


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_dtor(
    pxr_NdrProperty_t * this_);
#define pxr_NdrProperty_dtor pxrInternal_v0_21__pxrReserved____NdrProperty_dtor


/** Gets the name of the property. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_GetName(
    pxr_NdrProperty_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_NdrProperty_GetName pxrInternal_v0_21__pxrReserved____NdrProperty_GetName


/** Gets the type of the property. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_GetType(
    pxr_NdrProperty_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_NdrProperty_GetType pxrInternal_v0_21__pxrReserved____NdrProperty_GetType


/** Gets this property's default value. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_GetDefaultValue(
    pxr_NdrProperty_t const * this_
    , pxr_VtValue_t const * * return_);
#define pxr_NdrProperty_GetDefaultValue pxrInternal_v0_21__pxrReserved____NdrProperty_GetDefaultValue


/** Whether this property is an output. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_IsOutput(
    pxr_NdrProperty_t const * this_
    , _Bool * return_);
#define pxr_NdrProperty_IsOutput pxrInternal_v0_21__pxrReserved____NdrProperty_IsOutput


/** Whether this property's type is an array type. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_IsArray(
    pxr_NdrProperty_t const * this_
    , _Bool * return_);
#define pxr_NdrProperty_IsArray pxrInternal_v0_21__pxrReserved____NdrProperty_IsArray


/** Whether this property's array type is dynamically-sized. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_IsDynamicArray(
    pxr_NdrProperty_t const * this_
    , _Bool * return_);
#define pxr_NdrProperty_IsDynamicArray pxrInternal_v0_21__pxrReserved____NdrProperty_IsDynamicArray


/** Gets this property's array size.

If this property is a fixed-size array type, the array size is returned.
In the case of a dynamically-sized array, this method returns the array
size that the parser reports, and should not be relied upon to be
accurate. A parser may report -1 for the array size, for example, to
indicate a dynamically-sized array. For types that are not a fixed-size
array or dynamic array, this returns 0. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_GetArraySize(
    pxr_NdrProperty_t const * this_
    , int * return_);
#define pxr_NdrProperty_GetArraySize pxrInternal_v0_21__pxrReserved____NdrProperty_GetArraySize


/** Gets a string with basic information about this property. Helpful for
things like adding this property to a log. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_GetInfoString(
    pxr_NdrProperty_t const * this_
    , std_string_t * * return_);
#define pxr_NdrProperty_GetInfoString pxrInternal_v0_21__pxrReserved____NdrProperty_GetInfoString


/** Whether this property can be connected to other properties. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_IsConnectable(
    pxr_NdrProperty_t const * this_
    , _Bool * return_);
#define pxr_NdrProperty_IsConnectable pxrInternal_v0_21__pxrReserved____NdrProperty_IsConnectable


/** Determines if this property can be connected to the specified property. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_CanConnectTo(
    pxr_NdrProperty_t const * this_
    , _Bool * return_
    , pxr_NdrProperty_t const * other);
#define pxr_NdrProperty_CanConnectTo pxrInternal_v0_21__pxrReserved____NdrProperty_CanConnectTo


/** Provides default value corresponding to the SdfValueTypeName returned 
by GetTypeAsSdfType.

Derived classes providing an implementation for GetTypeAsSdfType should
also provide an implementation for this.

\sa GetTypeAsSdfType */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____NdrProperty_GetDefaultValueAsSdfType(
    pxr_NdrProperty_t const * this_
    , pxr_VtValue_t const * * return_);
#define pxr_NdrProperty_GetDefaultValueAsSdfType pxrInternal_v0_21__pxrReserved____NdrProperty_GetDefaultValueAsSdfType


#ifdef __cplusplus
}
#endif
