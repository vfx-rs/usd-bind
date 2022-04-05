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
typedef struct pxrInternal_v0_21__pxrReserved____TfType_t_s pxrInternal_v0_21__pxrReserved____TfType_t;
typedef pxrInternal_v0_21__pxrReserved____TfType_t pxr_TfType_t;

/** \struct SdfTupleDimensions

Represents the shape of a value type (or that of an element in an array). */
typedef struct pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_t_s {
    unsigned long d[2];
    size_t size;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_t;
typedef pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_t pxr_SdfTupleDimensions_t;

/** \class SdfValueTypeName

Represents a value type name, i.e. an attribute's type name.  Usually,
a value type name associates a string with a \c TfType and an optional
role, along with additional metadata.  A schema registers all known
value type names and may register multiple names for the same TfType
and role pair.  All name strings for a given pair are collectively
called its aliases.

A value type name may also represent just a name string, without a
\c TfType, role or other metadata.  This is currently used exclusively
to unserialize and re-serialize an attribute's type name where that
name is not known to the schema.

Because value type names can have aliases and those aliases may change
in the future, clients should avoid using the value type name's string
representation except to report human readable messages and when
serializing.  Clients can look up a value type name by string using
\c SdfSchemaBase::FindType() and shouldn't otherwise need the string.
Aliases compare equal, even if registered by different schemas. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::SdfValueTypeName%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::SdfValueTypeName%) pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t;
typedef pxrInternal_v0_21__pxrReserved____SdfValueTypeName_t pxr_SdfValueTypeName_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_ctor(
    pxr_SdfTupleDimensions_t * this_);
#define pxr_SdfTupleDimensions_ctor pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_new_1d(
    pxr_SdfTupleDimensions_t * this_
    , size_t m);
#define pxr_SdfTupleDimensions_new_1d pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_new_1d


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_new_2d(
    pxr_SdfTupleDimensions_t * this_
    , size_t m
    , size_t n);
#define pxr_SdfTupleDimensions_new_2d pxrInternal_v0_21__pxrReserved____SdfTupleDimensions_new_2d


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTupleDimensions__eq(
    pxr_SdfTupleDimensions_t const * this_
    , _Bool * return_
    , pxr_SdfTupleDimensions_t const * rhs);
#define pxr_SdfTupleDimensions__eq pxrInternal_v0_21__pxrReserved____SdfTupleDimensions__eq


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_sizeof();
#define pxr_SdfValueTypeName_sizeof pxrInternal_v0_21__pxrReserved____SdfValueTypeName_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_alignof();
#define pxr_SdfValueTypeName_alignof pxrInternal_v0_21__pxrReserved____SdfValueTypeName_alignof


/** Constructs an invalid type name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_ctor(
    pxr_SdfValueTypeName_t * this_);
#define pxr_SdfValueTypeName_ctor pxrInternal_v0_21__pxrReserved____SdfValueTypeName_ctor


/** Returns the type name as a token.  This should not be used for
comparison purposes. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetAsToken(
    pxr_SdfValueTypeName_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfValueTypeName_GetAsToken pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetAsToken


/** Returns the \c TfType of the type. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetType(
    pxr_SdfValueTypeName_t const * this_
    , pxr_TfType_t const * * return_);
#define pxr_SdfValueTypeName_GetType pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetType


/** Returns the C++ type name for this type.  This may not be the same
as the type name returned by GetType().GetTypeName(), since that
method may have had additional transformations applied for
readability. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetCPPTypeName(
    pxr_SdfValueTypeName_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfValueTypeName_GetCPPTypeName pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetCPPTypeName


/** Returns the type's role. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetRole(
    pxr_SdfValueTypeName_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_SdfValueTypeName_GetRole pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetRole


/** Returns the scalar version of this type name if it's an array type
name, otherwise returns this type name.  If there is no scalar type
name then this returns the invalid type name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetScalarType(
    pxr_SdfValueTypeName_t const * this_
    , pxr_SdfValueTypeName_t * return_);
#define pxr_SdfValueTypeName_GetScalarType pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetScalarType


/** Returns the array version of this type name if it's an scalar type
name, otherwise returns this type name.  If there is no array type
name then this returns the invalid type name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetArrayType(
    pxr_SdfValueTypeName_t const * this_
    , pxr_SdfValueTypeName_t * return_);
#define pxr_SdfValueTypeName_GetArrayType pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetArrayType


/** Returns \c true iff this type is a scalar.  The invalid type is
considered neither scalar nor array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_IsScalar(
    pxr_SdfValueTypeName_t const * this_
    , _Bool * return_);
#define pxr_SdfValueTypeName_IsScalar pxrInternal_v0_21__pxrReserved____SdfValueTypeName_IsScalar


/** Returns \c true iff this type is an array.  The invalid type is
considered neither scalar nor array. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_IsArray(
    pxr_SdfValueTypeName_t const * this_
    , _Bool * return_);
#define pxr_SdfValueTypeName_IsArray pxrInternal_v0_21__pxrReserved____SdfValueTypeName_IsArray


/** Returns the dimensions of the scalar value, e.g. 3 for a 3D point. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetDimensions(
    pxr_SdfValueTypeName_t const * this_
    , pxr_SdfTupleDimensions_t * return_);
#define pxr_SdfValueTypeName_GetDimensions pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetDimensions


/** Returns \c true if this type name is equal to \p rhs.  Aliases
compare equal. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName__eq(
    pxr_SdfValueTypeName_t const * this_
    , _Bool * return_
    , pxr_SdfValueTypeName_t const * rhs);
#define pxr_SdfValueTypeName__eq pxrInternal_v0_21__pxrReserved____SdfValueTypeName__eq


/** Returns \c true if this type name is equal to \p rhs.  Aliases
compare equal.  Avoid relying on this overload. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_eq_token(
    pxr_SdfValueTypeName_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * rhs);
#define pxr_SdfValueTypeName_eq_token pxrInternal_v0_21__pxrReserved____SdfValueTypeName_eq_token


/** Returns a hash value for this type name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetHash(
    pxr_SdfValueTypeName_t const * this_
    , size_t * return_);
#define pxr_SdfValueTypeName_GetHash pxrInternal_v0_21__pxrReserved____SdfValueTypeName_GetHash


/** Explicit bool conversion operator. Converts to \c true if this is a 
valid, non-empty type, \c false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfValueTypeName_operatorbool(
    pxr_SdfValueTypeName_t const * this_
    , _Bool * return_);
#define pxr_SdfValueTypeName_operatorbool pxrInternal_v0_21__pxrReserved____SdfValueTypeName_operatorbool


#ifdef __cplusplus
}
#endif
