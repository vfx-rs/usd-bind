#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

enum pxrInternal_v0_20__pxrReserved____TfToken___ImmortalTag_e {
    pxr_TfToken__ImmortalTag_Immortal = 0,
};
typedef unsigned int pxr_TfToken__ImmortalTag;

/** \class TfToken
\ingroup group_tf_String

Token for efficient comparison, assignment, and hashing of known strings.

A TfToken is a handle for a registered string, and can be compared,
assigned, and hashed in constant time.  It is useful when a bounded number
of strings are used as fixed symbols (but never modified).

For example, the set of avar names in a shot is large but bounded, and
once an avar name is discovered, it is never manipulated.  If these names
were passed around as strings, every comparison and hash would be linear
in the number of characters.  (String assignment itself is sometimes a
constant time operation, but it is sometimes linear in the length of the
string as well as requiring a memory allocation.)

To use TfToken, simply create an instance from a string or const char*.
If the string hasn't been seen before, a copy of it is added to a global
table.  The resulting TfToken is simply a wrapper around an string*,
pointing that canonical copy of the string.  Thus, operations on the token
are very fast.  (The string's hash is simply the address of the canonical
copy, so hashing the string is constant time.)

The free functions \c TfToTokenVector() and \c TfToStringVector() provide
conversions to and from vectors of \c string.

Note: Access to the global table is protected by a mutex.  This is a good
idea as long as clients do not construct tokens from strings too
frequently.  Construct tokens only as often as you must (for example, as
you read data files), and <i>never</i> in inner loops.  Of course, once
you have a token, feel free to compare, assign, and hash it as often as
you like.  (That's what it's for.)  In order to help prevent tokens from
being re-created over and over, auto type conversion from \c string and \c
char* to \c TfToken is disabled (you must use the explicit \c TfToken
constructors).  However, auto conversion from \c TfToken to \c string and
\c char* is provided. */
typedef struct pxrInternal_v0_20__pxrReserved____TfToken_t_s {
    char data[%SIZEpxrInternal_v0_20__pxrReserved__::TfToken%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_20__pxrReserved__::TfToken%) pxrInternal_v0_20__pxrReserved____TfToken_t;
typedef pxrInternal_v0_20__pxrReserved____TfToken_t pxr_TfToken_t;


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_sizeof();
#define pxr_TfToken_sizeof pxrInternal_v0_20__pxrReserved____TfToken_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_alignof();
#define pxr_TfToken_alignof pxrInternal_v0_20__pxrReserved____TfToken_alignof


/** Create the empty token, containing the empty string. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_ctor(
    pxr_TfToken_t * this_);
#define pxr_TfToken_ctor pxrInternal_v0_20__pxrReserved____TfToken_ctor


/** Copy constructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_copy(
    pxr_TfToken_t * this_
    , pxr_TfToken_t const * rhs);
#define pxr_TfToken_copy pxrInternal_v0_20__pxrReserved____TfToken_copy


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_dtor(
    pxr_TfToken_t * this_);
#define pxr_TfToken_dtor pxrInternal_v0_20__pxrReserved____TfToken_dtor


/** Acquire a token for the given string. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_from_string(
    pxr_TfToken_t * this_
    , std_string_t const * s);
#define pxr_TfToken_from_string pxrInternal_v0_20__pxrReserved____TfToken_from_string


/** \overload */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_immortal_from_string(
    pxr_TfToken_t * this_
    , std_string_t const * s
    , pxr_TfToken__ImmortalTag _param1);
#define pxr_TfToken_immortal_from_string pxrInternal_v0_20__pxrReserved____TfToken_immortal_from_string


/** Acquire a token for the given string. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_from_char_ptr(
    pxr_TfToken_t * this_
    , char const * s);
#define pxr_TfToken_from_char_ptr pxrInternal_v0_20__pxrReserved____TfToken_from_char_ptr


/** \overload */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_immortal_from_char_ptr(
    pxr_TfToken_t * this_
    , char const * s
    , pxr_TfToken__ImmortalTag _param1);
#define pxr_TfToken_immortal_from_char_ptr pxrInternal_v0_20__pxrReserved____TfToken_immortal_from_char_ptr


/** Find the token for the given string, if one exists. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_Find(
    pxr_TfToken_t * return_
    , std_string_t const * s);
#define pxr_TfToken_Find pxrInternal_v0_20__pxrReserved____TfToken_Find


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_Hash(
    pxr_TfToken_t const * this_
    , size_t * return_);
#define pxr_TfToken_Hash pxrInternal_v0_20__pxrReserved____TfToken_Hash


/** Return the size of the string that this token represents. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_size(
    pxr_TfToken_t const * this_
    , size_t * return_);
#define pxr_TfToken_size pxrInternal_v0_20__pxrReserved____TfToken_size


/** Return the text that this token represents.

\note The returned pointer value is not valid after this TfToken
object has been destroyed. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_GetText(
    pxr_TfToken_t const * this_
    , char const * * return_);
#define pxr_TfToken_GetText pxrInternal_v0_20__pxrReserved____TfToken_GetText


/** Synonym for GetText(). */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_data(
    pxr_TfToken_t const * this_
    , char const * * return_);
#define pxr_TfToken_data pxrInternal_v0_20__pxrReserved____TfToken_data


/** Return the string that this token represents. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_GetString(
    pxr_TfToken_t const * this_
    , std_string_t const * * return_);
#define pxr_TfToken_GetString pxrInternal_v0_20__pxrReserved____TfToken_GetString


/** Swap this token with another. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_Swap(
    pxr_TfToken_t * this_
    , pxr_TfToken_t * other);
#define pxr_TfToken_Swap pxrInternal_v0_20__pxrReserved____TfToken_Swap


/** Equality operator */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken__eq(
    pxr_TfToken_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * o);
#define pxr_TfToken__eq pxrInternal_v0_20__pxrReserved____TfToken__eq


/** Equality operator for \c char strings.  Not as fast as direct
token to token equality testing */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_eq_c_str(
    pxr_TfToken_t const * this_
    , _Bool * return_
    , char const * rhs);
#define pxr_TfToken_eq_c_str pxrInternal_v0_20__pxrReserved____TfToken_eq_c_str


/** Returns \c true iff this token contains the empty string \c "" */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_IsEmpty(
    pxr_TfToken_t const * this_
    , _Bool * return_);
#define pxr_TfToken_IsEmpty pxrInternal_v0_20__pxrReserved____TfToken_IsEmpty


/** Returns \c true iff this is an immortal token. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfToken_IsImmortal(
    pxr_TfToken_t const * this_
    , _Bool * return_);
#define pxr_TfToken_IsImmortal pxrInternal_v0_20__pxrReserved____TfToken_IsImmortal


#ifdef __cplusplus
}
#endif
