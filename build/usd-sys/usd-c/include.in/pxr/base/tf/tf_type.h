#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \class TfType

TfType represents a dynamic runtime type.

TfTypes are created and discovered at runtime, rather than compile
time.

Features:

- unique typename
- safe across DSO boundaries
- can represent C++ types, pure Python types, or Python subclasses of
  wrapped C++ types
- lightweight value semantics -- you can copy and default construct
  TfType, unlike \c std::type_info.
- totally ordered -- can use as a \c std::map key */
typedef struct pxrInternal_v0_21__pxrReserved____TfType_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____TfType_t;
typedef pxrInternal_v0_21__pxrReserved____TfType_t pxr_TfType_t;


/** Construct an TfType representing an unknown type.

To actually register a new type with the TfType system, see
TfType::Declare().

Note that this always holds true:
\code
    TfType().IsUnknown() == true
\endcode */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfType_ctor(
    pxr_TfType_t * * this_);
#define pxr_TfType_ctor pxrInternal_v0_21__pxrReserved____TfType_ctor


/** Return an empty TfType, representing the unknown type.

This is equivalento the default constructor, TfType().  This form exists
as a clearer way to express intent in code explicitly dealing with
unknown types.

\see IsUnknown() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfType_GetUnknownType(
    pxr_TfType_t const * * return_);
#define pxr_TfType_GetUnknownType pxrInternal_v0_21__pxrReserved____TfType_GetUnknownType


/** Equality operator.

\note All unknown types (see IsUnknown()) are considered equal.
This is so all unknown types will only occupy one key when used in
an associative map. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfType__eq(
    pxr_TfType_t const * this_
    , _Bool * return_
    , pxr_TfType_t const * t);
#define pxr_TfType__eq pxrInternal_v0_21__pxrReserved____TfType__eq


/** Return true if this type is the same as or derived from \p queryType.
If \c queryType is unknown, this always returns \c false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfType_IsA(
    pxr_TfType_t const * this_
    , _Bool * return_
    , pxr_TfType_t queryType);
#define pxr_TfType_IsA pxrInternal_v0_21__pxrReserved____TfType_IsA


/** Return true if this is the unknown type, representing a type
unknown to the TfType system.

The unknown type does not derive from the root type, or any
other type. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfType_IsUnknown(
    pxr_TfType_t const * this_
    , _Bool * return_);
#define pxr_TfType_IsUnknown pxrInternal_v0_21__pxrReserved____TfType_IsUnknown


/** Return true if this is the root type. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfType_IsRoot(
    pxr_TfType_t const * this_
    , _Bool * return_);
#define pxr_TfType_IsRoot pxrInternal_v0_21__pxrReserved____TfType_IsRoot


/** Return true if this is an enum type. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfType_IsEnumType(
    pxr_TfType_t const * this_
    , _Bool * return_);
#define pxr_TfType_IsEnumType pxrInternal_v0_21__pxrReserved____TfType_IsEnumType


/** Return true if this is a plain old data type, as defined by C++. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfType_IsPlainOldDataType(
    pxr_TfType_t const * this_
    , _Bool * return_);
#define pxr_TfType_IsPlainOldDataType pxrInternal_v0_21__pxrReserved____TfType_IsPlainOldDataType


/** Return the size required to hold an instance of this type on the stack
(does not include any heap allocated memory the instance uses).

This is what the C++ sizeof operator returns for the type, so this
value is not very useful for Python types (it will always be
sizeof(boost::python::object)). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfType_GetSizeof(
    pxr_TfType_t const * this_
    , size_t * return_);
#define pxr_TfType_GetSizeof pxrInternal_v0_21__pxrReserved____TfType_GetSizeof


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfType_copy(
    pxr_TfType_t * * this_
    , pxr_TfType_t const * rhs);
#define pxr_TfType_copy pxrInternal_v0_21__pxrReserved____TfType_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfType_dtor(
    pxr_TfType_t * this_);
#define pxr_TfType_dtor pxrInternal_v0_21__pxrReserved____TfType_dtor


#ifdef __cplusplus
}
#endif
