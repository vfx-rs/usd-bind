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
typedef struct std__vector_pxr__SdfPath__t_s std__vector_pxr__SdfPath__t;
typedef std__vector_pxr__SdfPath__t std_SdfPathVector_t;
typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;

/** \class SdfPathAncestorsRange

Range representing a path and ancestors, and providing methods for
iterating over them.

An ancestor range represents a path and all of its ancestors ordered from
nearest to furthest (root-most).
For example, given a path like `/a/b.prop`, the range represents paths
`/a/b.prop`, `/a/b` and `/a`, in that order.
A range accepts relative paths as well: For path `a/b.prop`, the range
represents paths 'a/b.prop`, `a/b` and `a`.
If a path contains parent path elements, (`..`), those elements are treated
as elements of the range. For instance, given path `../a/b`, the range
represents paths `../a/b`, `../a` and `..`.
This represents the same of set of `prefix` paths as SdfPath::GetPrefixes,
but in reverse order. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_t_s {
    char _unused;
} USD_CPPMM_ALIGN(4) pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_t pxr_SdfPathAncestorsRange_t;

typedef struct pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_t_s {
    char _unused;
} USD_CPPMM_ALIGN(4) pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_t pxr_SdfPathAncestorsRange_iterator_t;

/** \class SdfPath 

A path value used to locate objects in layers or scenegraphs.

\section sec_SdfPath_Overview Overview

SdfPath is used in several ways:
\li As a storage key for addressing and accessing values held in a SdfLayer
\li As a namespace identity for scenegraph objects
\li As a way to refer to other scenegraph objects through relative paths

The paths represented by an SdfPath class may be either relative or
absolute.  Relative paths are relative to the prim object that contains them
(that is, if an SdfRelationshipSpec target is relative, it is relative to
the SdfPrimSpec object that owns the SdfRelationshipSpec object).

SdfPath objects can be readily created from and converted back to strings,
but as SdfPath objects, they have behaviors that make it easy and efficient
to work with them. The SdfPath class provides a full range of methods for
manipulating scene paths by appending a namespace child, appending a
relationship target, getting the parent path,
and so on.  Since the SdfPath class uses a node-based representation
internally, you should use the editing functions rather than converting to
and from strings if possible.

\section sec_SdfPath_Syntax Path Syntax

Like a filesystem path, an SdfPath is conceptually just a sequence of
path components.  Unlike a filesystem path, each component has a type,
and the type is indicated by the syntax.

Two separators are used between parts of a path. A slash ("/") following an
identifier is used to introduce a namespace child. A period (".") following
an identifier is used to introduce a property.  A property may also have
several non-sequential colons (':') in its name to provide a rudimentary
namespace within properties but may not end or begin with a colon.

A leading slash in the string representation of an SdfPath object indicates
an absolute path.  Two adjacent periods indicate the parent namespace.

Brackets ("[" and "]") are used to indicate relationship target paths for
relational attributes.

The first part in a path is assumed to be a namespace child unless
it is preceded by a period.  That means:
\li <c>/Foo</c> is an absolute path specifying the root prim Foo.
\li <c>/Foo/Bar</c> is an absolute path specifying namespace child Bar
    of root prim Foo.
\li <c>/Foo/Bar.baz</c> is an absolute path specifying property \c baz of
    namespace child Bar of root prim Foo.
\li <c>Foo</c> is a relative path specifying namespace child Foo of
    the current prim.
\li <c>Foo/Bar</c> is a relative path specifying namespace child Bar of
    namespace child Foo of the current prim.
\li <c>Foo/Bar.baz</c> is a relative path specifying property \c baz of
    namespace child Bar of namespace child Foo of the current prim.
\li <c>.foo</c> is a relative path specifying the property \c foo of the
    current prim.
\li <c>/Foo.bar[/Foo.baz].attrib</c> is a relational attribute path. The
    relationship <c>/Foo.bar</c> has a target <c>/Foo.baz</c>. There is a
    relational attribute \c attrib on that relationship-&gt;target pair.

\section sec_SdfPath_ThreadSafety A Note on Thread-Safety

SdfPath is strongly thread-safe, in the sense that zero additional
synchronization is required between threads creating or using SdfPath
values. Just like TfToken, SdfPath values are immutable. Internally,
SdfPath uses a global prefix tree to efficiently share representations
of paths, and provide fast equality/hashing operations, but
modifications to this table are internally synchronized. Consequently,
as with TfToken, for best performance it is important to minimize
the number of values created (since it requires synchronized access to
this table) or copied (since it requires atomic ref-counting operations). */
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s {
    char _unused;
} USD_CPPMM_ALIGN(4) pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

typedef struct pxrInternal_v0_21__pxrReserved____SdfPath__Hash_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____SdfPath__Hash_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath__Hash_t pxr_SdfPath_Hash_t;

typedef struct pxrInternal_v0_21__pxrReserved____SdfPath__FastLessThan_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____SdfPath__FastLessThan_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath__FastLessThan_t pxr_SdfPath_FastLessThan_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_PathIdentity_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_PathIdentity_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_PathIdentity_t pxr_Sdf_PathIdentity_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_ctor(
    pxr_SdfPathAncestorsRange_t * * this_
    , pxr_SdfPath_t const * path);
#define pxr_SdfPathAncestorsRange_ctor pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_GetPath(
    pxr_SdfPathAncestorsRange_t const * this_
    , pxr_SdfPath_t const * * return_);
#define pxr_SdfPathAncestorsRange_GetPath pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_GetPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_begin(
    pxr_SdfPathAncestorsRange_t const * this_
    , pxr_SdfPathAncestorsRange_iterator_t * * return_);
#define pxr_SdfPathAncestorsRange_begin pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_begin


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_end(
    pxr_SdfPathAncestorsRange_t const * this_
    , pxr_SdfPathAncestorsRange_iterator_t * * return_);
#define pxr_SdfPathAncestorsRange_end pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange_end


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_ctor(
    pxr_SdfPathAncestorsRange_iterator_t * * this_
    , pxr_SdfPath_t const * path);
#define pxr_SdfPathAncestorsRange_iterator_ctor pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_ctor_1(
    pxr_SdfPathAncestorsRange_iterator_t * * this_);
#define pxr_SdfPathAncestorsRange_iterator_ctor_1 pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__op_inc(
    pxr_SdfPathAncestorsRange_iterator_t * this_
    , pxr_SdfPathAncestorsRange_iterator_t * * return_);
#define pxr_SdfPathAncestorsRange_iterator__op_inc pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__op_inc


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__op_mul(
    pxr_SdfPathAncestorsRange_iterator_t const * this_
    , pxr_SdfPath_t const * * return_);
#define pxr_SdfPathAncestorsRange_iterator__op_mul pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__op_mul


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_operator__(
    pxr_SdfPathAncestorsRange_iterator_t const * this_
    , pxr_SdfPath_t const * * return_);
#define pxr_SdfPathAncestorsRange_iterator_operator__ pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_operator__


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__eq(
    pxr_SdfPathAncestorsRange_iterator_t const * this_
    , _Bool * return_
    , pxr_SdfPathAncestorsRange_iterator_t const * o);
#define pxr_SdfPathAncestorsRange_iterator__eq pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__ne(
    pxr_SdfPathAncestorsRange_iterator_t const * this_
    , _Bool * return_
    , pxr_SdfPathAncestorsRange_iterator_t const * o);
#define pxr_SdfPathAncestorsRange_iterator__ne pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator__ne


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_copy(
    pxr_SdfPathAncestorsRange_iterator_t * * this_
    , pxr_SdfPathAncestorsRange_iterator_t const * rhs);
#define pxr_SdfPathAncestorsRange_iterator_copy pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_dtor(
    pxr_SdfPathAncestorsRange_iterator_t * this_);
#define pxr_SdfPathAncestorsRange_iterator_dtor pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_dtor


/** The empty path value, equivalent to SdfPath(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_EmptyPath(
    pxr_SdfPath_t const * * return_);
#define pxr_SdfPath_EmptyPath pxrInternal_v0_21__pxrReserved____SdfPath_EmptyPath


/** The absolute path representing the top of the
namespace hierarchy. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AbsoluteRootPath(
    pxr_SdfPath_t const * * return_);
#define pxr_SdfPath_AbsoluteRootPath pxrInternal_v0_21__pxrReserved____SdfPath_AbsoluteRootPath


/** The relative path representing "self". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ReflexiveRelativePath(
    pxr_SdfPath_t const * * return_);
#define pxr_SdfPath_ReflexiveRelativePath pxrInternal_v0_21__pxrReserved____SdfPath_ReflexiveRelativePath


/** Constructs the default, empty path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ctor(
    pxr_SdfPath_t * * this_);
#define pxr_SdfPath_ctor pxrInternal_v0_21__pxrReserved____SdfPath_ctor


/** Creates a path from the given string.

If the given string is not a well-formed path, this will raise
a Tf error.  Note that passing an empty std::string() will also
raise an error; the correct way to get the empty path is SdfPath().

Internal dot-dots will be resolved by removing the first dot-dot,
the element preceding it, and repeating until no internal dot-dots
remain.

Note that most often new paths are expected to be created by
asking existing paths to return modified versions of themselves. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_from_string(
    pxr_SdfPath_t * * this_
    , std_string_t const * path);
#define pxr_SdfPath_from_string pxrInternal_v0_21__pxrReserved____SdfPath_from_string


/** Returns the number of path elements in this path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetPathElementCount(
    pxr_SdfPath_t const * this_
    , size_t * return_);
#define pxr_SdfPath_GetPathElementCount pxrInternal_v0_21__pxrReserved____SdfPath_GetPathElementCount


/** Returns whether the path is absolute. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsolutePath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsAbsolutePath pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsolutePath


/** Return true if this path is the AbsoluteRootPath(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsoluteRootPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsAbsoluteRootPath pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsoluteRootPath


/** Returns whether the path identifies a prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsPrimPath pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimPath


/** Returns whether the path identifies a prim or the absolute root. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsoluteRootOrPrimPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsAbsoluteRootOrPrimPath pxrInternal_v0_21__pxrReserved____SdfPath_IsAbsoluteRootOrPrimPath


/** Returns whether the path identifies a root prim.

the path must be absolute and have a single element
(for example <c>/foo</c>). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsRootPrimPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsRootPrimPath pxrInternal_v0_21__pxrReserved____SdfPath_IsRootPrimPath


/** Returns whether the path identifies a property.

A relational attribute is considered to be a property, so this
method will return true for relational attributes as well
as properties of prims. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsPropertyPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsPropertyPath pxrInternal_v0_21__pxrReserved____SdfPath_IsPropertyPath


/** Returns whether the path identifies a prim's property.

A relational attribute is not a prim property. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimPropertyPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsPrimPropertyPath pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimPropertyPath


/** Returns whether the path identifies a namespaced property.

A namespaced property has colon embedded in its name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsNamespacedPropertyPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsNamespacedPropertyPath pxrInternal_v0_21__pxrReserved____SdfPath_IsNamespacedPropertyPath


/** Returns whether the path identifies a variant selection for a
prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimVariantSelectionPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsPrimVariantSelectionPath pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimVariantSelectionPath


/** Return true if this path is a prim path or is a prim variant
selection path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimOrPrimVariantSelectionPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsPrimOrPrimVariantSelectionPath pxrInternal_v0_21__pxrReserved____SdfPath_IsPrimOrPrimVariantSelectionPath


/** Returns whether the path or any of its parent paths identifies
a variant selection for a prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ContainsPrimVariantSelection(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_ContainsPrimVariantSelection pxrInternal_v0_21__pxrReserved____SdfPath_ContainsPrimVariantSelection


/** Return true if this path contains any property elements, false
otherwise.  A false return indicates a prim-like path, specifically a
root path, a prim path, or a prim variant selection path.  A true return
indicates a property-like path: a prim property path, a target path, a
relational attribute path, etc. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ContainsPropertyElements(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_ContainsPropertyElements pxrInternal_v0_21__pxrReserved____SdfPath_ContainsPropertyElements


/** Return true if this path is or has a prefix that's a target path or a
mapper path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ContainsTargetPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_ContainsTargetPath pxrInternal_v0_21__pxrReserved____SdfPath_ContainsTargetPath


/** Returns whether the path identifies a relational attribute.

If this is true, IsPropertyPath() will also be true. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsRelationalAttributePath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsRelationalAttributePath pxrInternal_v0_21__pxrReserved____SdfPath_IsRelationalAttributePath


/** Returns whether the path identifies a relationship or
connection target. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsTargetPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsTargetPath pxrInternal_v0_21__pxrReserved____SdfPath_IsTargetPath


/** Returns whether the path identifies a connection mapper. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsMapperPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsMapperPath pxrInternal_v0_21__pxrReserved____SdfPath_IsMapperPath


/** Returns whether the path identifies a connection mapper arg. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsMapperArgPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsMapperArgPath pxrInternal_v0_21__pxrReserved____SdfPath_IsMapperArgPath


/** Returns whether the path identifies a connection expression. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsExpressionPath(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsExpressionPath pxrInternal_v0_21__pxrReserved____SdfPath_IsExpressionPath


/** Returns true if this is the empty path (SdfPath::EmptyPath()). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsEmpty(
    pxr_SdfPath_t const * this_
    , _Bool * return_);
#define pxr_SdfPath_IsEmpty pxrInternal_v0_21__pxrReserved____SdfPath_IsEmpty


/** Return the string representation of this path as a TfToken lvalue.

This function returns a persistent lvalue.  If an rvalue will suffice,
call GetAsToken() instead.  That avoids populating internal data
structures to hold the persistent token.

This function is recommended only for human-readable or diagnostic
output.  Use the SdfPath API to manipulate paths.  It is less
error-prone and has better performance. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetToken(
    pxr_SdfPath_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_SdfPath_GetToken pxrInternal_v0_21__pxrReserved____SdfPath_GetToken


/** Return the string representation of this path as a std::string.

This function returns a persistent lvalue.  If an rvalue will suffice,
call GetAsString() instead.  That avoids populating internal data
structures to hold the persistent string.

This function is recommended only for human-readable or diagnostic
output.  Use the SdfPath API to manipulate paths.  It is less
error-prone and has better performance. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetString(
    pxr_SdfPath_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfPath_GetString pxrInternal_v0_21__pxrReserved____SdfPath_GetString


/** Returns the string representation of this path as a c string.

This function returns a pointer to a persistent c string.  If a
temporary c string will suffice, call GetAsString().c_str() instead.
That avoids populating internal data structures to hold the persistent
string.

This function is recommended only for human-readable or diagnostic
output.  Use the SdfPath API to manipulate paths.  It is less
error-prone and has better performance. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetText(
    pxr_SdfPath_t const * this_
    , char const * * return_);
#define pxr_SdfPath_GetText pxrInternal_v0_21__pxrReserved____SdfPath_GetText


/** Returns the prefix paths of this path.

Prefixes are returned in order of shortest to longest.  The path
itself is returned as the last prefix.
Note that if the prefix order does not need to be from shortest to
longest, it is more efficient to use GetAncestorsRange, which
produces an equivalent set of paths, ordered from longest to shortest. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetPrefixes(
    pxr_SdfPath_t const * this_
    , std_SdfPathVector_t * * return_);
#define pxr_SdfPath_GetPrefixes pxrInternal_v0_21__pxrReserved____SdfPath_GetPrefixes


/** Fills prefixes with prefixes of this path.

This avoids copy constructing the return value.

Prefixes are returned in order of shortest to longest.  The path
itself is returned as the last prefix.
Note that if the prefix order does not need to be from shortest to
longest, it is more efficient to use GetAncestorsRange, which
produces an equivalent set of paths, ordered from longest to shortest. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetPrefixes_1(
    pxr_SdfPath_t const * this_
    , std_SdfPathVector_t * prefixes);
#define pxr_SdfPath_GetPrefixes_1 pxrInternal_v0_21__pxrReserved____SdfPath_GetPrefixes_1


/** Returns the name of the prim, property or relational
attribute identified by the path.

Returns EmptyPath if this path is a target or mapper path.

<ul>
    <li>Returns "" for EmptyPath.</li>
    <li>Returns "." for ReflexiveRelativePath.</li>
    <li>Returns ".." for a path ending in ParentPathElement.</li>
</ul> */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetName(
    pxr_SdfPath_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfPath_GetName pxrInternal_v0_21__pxrReserved____SdfPath_GetName


/** Returns the name of the prim, property or relational
attribute identified by the path, as a token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetNameToken(
    pxr_SdfPath_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_SdfPath_GetNameToken pxrInternal_v0_21__pxrReserved____SdfPath_GetNameToken


/** Returns an ascii representation of the "terminal" element
of this path, which can be used to reconstruct the path using
\c AppendElementString() on its parent.

EmptyPath(), AbsoluteRootPath(), and ReflexiveRelativePath() are
\em not considered elements (one of the defining properties of
elements is that they have a parent), so \c GetElementString() will
return the empty string for these paths.

Unlike \c GetName() and \c GetTargetPath(), which provide you "some"
information about the terminal element, this provides a complete
representation of the element, for all element types.

Also note that whereas \c GetName(), \c GetNameToken(), \c GetText(),
\c GetString(), and \c GetTargetPath() return cached results, 
\c GetElementString() always performs some amount of string
manipulation, which you should keep in mind if performance is a concern. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetElementString(
    pxr_SdfPath_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPath_GetElementString pxrInternal_v0_21__pxrReserved____SdfPath_GetElementString


/** Like GetElementString() but return the value as a TfToken. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetElementToken(
    pxr_SdfPath_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfPath_GetElementToken pxrInternal_v0_21__pxrReserved____SdfPath_GetElementToken


/** Return a copy of this path with its final component changed to
\a newName.  This path must be a prim or property path.

This method is shorthand for path.GetParentPath().AppendChild(newName)
for prim paths, path.GetParentPath().AppendProperty(newName) for
prim property paths, and
path.GetParentPath().AppendRelationalAttribute(newName) for relational
attribute paths.

Note that only the final path component is ever changed.  If the name of
the final path component appears elsewhere in the path, it will not be
modified.

Some examples:

ReplaceName('/chars/MeridaGroup', 'AngusGroup') -> '/chars/AngusGroup'
ReplaceName('/Merida.tx', 'ty') -> '/Merida.ty'
ReplaceName('/Merida.tx[targ].tx', 'ty') -> '/Merida.tx[targ].ty' */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ReplaceName(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_TfToken_t const * newName);
#define pxr_SdfPath_ReplaceName pxrInternal_v0_21__pxrReserved____SdfPath_ReplaceName


/** Returns the relational attribute or mapper target path
for this path.

Returns EmptyPath if this is not a target, relational attribute or
mapper path.

Note that it is possible for a path to have multiple "target" paths.
For example a path that identifies a connection target for a
relational attribute includes the target of the connection as well
as the target of the relational attribute.  In these cases, the
"deepest" or right-most target path will be returned (the connection
target in this example). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetTargetPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t const * * return_);
#define pxr_SdfPath_GetTargetPath pxrInternal_v0_21__pxrReserved____SdfPath_GetTargetPath


/** Returns all the relationship target or connection target
paths contained in this path, and recursively all the target paths
contained in those target paths in reverse depth-first order.

For example, given the path: '/A/B.a[/C/D.a[/E/F.a]].a[/A/B.a[/C/D.a]]'
this method produces: '/A/B.a[/C/D.a]', '/C/D.a', '/C/D.a[/E/F.a]',
'/E/F.a' */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetAllTargetPathsRecursively(
    pxr_SdfPath_t const * this_
    , std_SdfPathVector_t * result);
#define pxr_SdfPath_GetAllTargetPathsRecursively pxrInternal_v0_21__pxrReserved____SdfPath_GetAllTargetPathsRecursively


/** Return true if both this path and \a prefix are not the empty
path and this path has \a prefix as a prefix.  Return false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_HasPrefix(
    pxr_SdfPath_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * prefix);
#define pxr_SdfPath_HasPrefix pxrInternal_v0_21__pxrReserved____SdfPath_HasPrefix


/** Return the path that identifies this path's namespace parent.

For a prim path (like '/foo/bar'), return the prim's parent's path
('/foo').  For a prim property path (like '/foo/bar.property'), return
the prim's path ('/foo/bar').  For a target path (like
'/foo/bar.property[/target]') return the property path
('/foo/bar.property').  For a mapper path (like
'/foo/bar.property.mapper[/target]') return the property path
('/foo/bar.property).  For a relational attribute path (like
'/foo/bar.property[/target].relAttr') return the relationship target's
path ('/foo/bar.property[/target]').  For a prim variant selection path
(like '/foo/bar{var=sel}') return the prim path ('/foo/bar').  For a
root prim path (like '/rootPrim'), return AbsoluteRootPath() ('/').  For
a single element relative prim path (like 'relativePrim'), return
ReflexiveRelativePath() ('.').  For ReflexiveRelativePath(), return the
relative parent path ('..').

Note that the parent path of a relative parent path ('..') is a relative
grandparent path ('../..').  Use caution writing loops that walk to
parent paths since relative paths have infinitely many ancestors.  To
more safely traverse ancestor paths, consider iterating over an
SdfPathAncestorsRange instead, as returend by GetAncestorsRange(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetParentPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfPath_GetParentPath pxrInternal_v0_21__pxrReserved____SdfPath_GetParentPath


/** Creates a path by stripping all relational attributes, targets,
properties, and variant selections from the leafmost prim path, leaving
the nearest path for which \a IsPrimPath() returns true.

See \a GetPrimOrPrimVariantSelectionPath also.

If the path is already a prim path, the same path is returned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetPrimPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfPath_GetPrimPath pxrInternal_v0_21__pxrReserved____SdfPath_GetPrimPath


/** Creates a path by stripping all relational attributes, targets,
and properties, leaving the nearest path for which
\a IsPrimOrPrimVariantSelectionPath() returns true.

See \a GetPrimPath also.

If the path is already a prim or a prim variant selection path, the same
path is returned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetPrimOrPrimVariantSelectionPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfPath_GetPrimOrPrimVariantSelectionPath pxrInternal_v0_21__pxrReserved____SdfPath_GetPrimOrPrimVariantSelectionPath


/** Creates a path by stripping all properties and relational
attributes from this path, leaving the path to the containing prim.

If the path is already a prim or absolute root path, the same
path is returned. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetAbsoluteRootOrPrimPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfPath_GetAbsoluteRootOrPrimPath pxrInternal_v0_21__pxrReserved____SdfPath_GetAbsoluteRootOrPrimPath


/** Create a path by stripping all variant selections from all
components of this path, leaving a path with no embedded variant
selections. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_StripAllVariantSelections(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfPath_StripAllVariantSelections pxrInternal_v0_21__pxrReserved____SdfPath_StripAllVariantSelections


/** Creates a path by appending a given relative path to this path.

If the newSuffix is a prim path, then this path must be a prim path
or a root path.

If the newSuffix is a prim property path, then this path must be
a prim path or the ReflexiveRelativePath. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * newSuffix);
#define pxr_SdfPath_AppendPath pxrInternal_v0_21__pxrReserved____SdfPath_AppendPath


/** Creates a path by appending an element for \p childName
to this path.

This path must be a prim path, the AbsoluteRootPath
or the ReflexiveRelativePath. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendChild(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_TfToken_t const * childName);
#define pxr_SdfPath_AppendChild pxrInternal_v0_21__pxrReserved____SdfPath_AppendChild


/** Creates a path by appending an element for \p propName
to this path.

This path must be a prim path or the ReflexiveRelativePath. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendProperty(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_TfToken_t const * propName);
#define pxr_SdfPath_AppendProperty pxrInternal_v0_21__pxrReserved____SdfPath_AppendProperty


/** Creates a path by appending an element for \p variantSet
and \p variant to this path.

This path must be a prim path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendVariantSelection(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , std_string_t const * variantSet
    , std_string_t const * variant);
#define pxr_SdfPath_AppendVariantSelection pxrInternal_v0_21__pxrReserved____SdfPath_AppendVariantSelection


/** Creates a path by appending an element for
\p targetPath.

This path must be a prim property or relational attribute path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendTarget(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * targetPath);
#define pxr_SdfPath_AppendTarget pxrInternal_v0_21__pxrReserved____SdfPath_AppendTarget


/** Creates a path by appending an element for
\p attrName to this path.

This path must be a target path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendRelationalAttribute(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_TfToken_t const * attrName);
#define pxr_SdfPath_AppendRelationalAttribute pxrInternal_v0_21__pxrReserved____SdfPath_AppendRelationalAttribute


/** Replaces the relational attribute's target path

The path must be a relational attribute path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ReplaceTargetPath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * newTargetPath);
#define pxr_SdfPath_ReplaceTargetPath pxrInternal_v0_21__pxrReserved____SdfPath_ReplaceTargetPath


/** Creates a path by appending a mapper element for
\p targetPath.

This path must be a prim property or relational attribute path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendMapper(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * targetPath);
#define pxr_SdfPath_AppendMapper pxrInternal_v0_21__pxrReserved____SdfPath_AppendMapper


/** Creates a path by appending an element for
\p argName.

This path must be a mapper path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendMapperArg(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_TfToken_t const * argName);
#define pxr_SdfPath_AppendMapperArg pxrInternal_v0_21__pxrReserved____SdfPath_AppendMapperArg


/** Creates a path by appending an expression element.

This path must be a prim property or relational attribute path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendExpression(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfPath_AppendExpression pxrInternal_v0_21__pxrReserved____SdfPath_AppendExpression


/** Creates a path by extracting and appending an element
from the given ascii element encoding.

Attempting to append a root or empty path (or malformed path)
or attempting to append \em to the EmptyPath will raise an
error and return the EmptyPath.

May also fail and return EmptyPath if this path's type cannot
possess a child of the type encoded in \p element. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendElementString(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , std_string_t const * element);
#define pxr_SdfPath_AppendElementString pxrInternal_v0_21__pxrReserved____SdfPath_AppendElementString


/** Like AppendElementString() but take the element as a TfToken. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_AppendElementToken(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_TfToken_t const * elementTok);
#define pxr_SdfPath_AppendElementToken pxrInternal_v0_21__pxrReserved____SdfPath_AppendElementToken


/** Returns a path with all occurrences of the prefix path
\p oldPrefix replaced with the prefix path \p newPrefix.

If fixTargetPaths is true, any embedded target paths will also
have their paths replaced.  This is the default.

If this is not a target, relational attribute or mapper path this
will do zero or one path prefix replacements, if not the number of
replacements can be greater than one. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_ReplacePrefix(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * oldPrefix
    , pxr_SdfPath_t const * newPrefix
    , _Bool fixTargetPaths);
#define pxr_SdfPath_ReplacePrefix pxrInternal_v0_21__pxrReserved____SdfPath_ReplacePrefix


/** Returns a path with maximal length that is a prefix path of
both this path and \p path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetCommonPrefix(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfPath_GetCommonPrefix pxrInternal_v0_21__pxrReserved____SdfPath_GetCommonPrefix


/** Returns the absolute form of this path using \p anchor 
as the relative basis.

\p anchor must be an absolute prim path.

If this path is a relative path, resolve it using \p anchor as the
relative basis.

If this path is already an absolute path, just return a copy. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_MakeAbsolutePath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * anchor);
#define pxr_SdfPath_MakeAbsolutePath pxrInternal_v0_21__pxrReserved____SdfPath_MakeAbsolutePath


/** Returns the relative form of this path using \p anchor
as the relative basis.

\p anchor must be an absolute prim path.

If this path is an absolute path, return the corresponding relative path
that is relative to the absolute path given by \p anchor.

If this path is a relative path, return the optimal relative
path to the absolute path given by \p anchor.  (The optimal
relative path from a given prim path is the relative path
with the least leading dot-dots. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_MakeRelativePath(
    pxr_SdfPath_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * anchor);
#define pxr_SdfPath_MakeRelativePath pxrInternal_v0_21__pxrReserved____SdfPath_MakeRelativePath


/** Returns whether \p name is a legal identifier for any
path component. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsValidIdentifier(
    _Bool * return_
    , std_string_t const * name);
#define pxr_SdfPath_IsValidIdentifier pxrInternal_v0_21__pxrReserved____SdfPath_IsValidIdentifier


/** Returns whether \p name is a legal namespaced identifier.
This returns \c true if IsValidIdentifier() does. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsValidNamespacedIdentifier(
    _Bool * return_
    , std_string_t const * name);
#define pxr_SdfPath_IsValidNamespacedIdentifier pxrInternal_v0_21__pxrReserved____SdfPath_IsValidNamespacedIdentifier


/** Tokenizes \p name by the namespace delimiter.
Returns the empty vector if \p name is not a valid namespaced
identifier. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_TokenizeIdentifier(
    std_vector_string_t * * return_
    , std_string_t const * name);
#define pxr_SdfPath_TokenizeIdentifier pxrInternal_v0_21__pxrReserved____SdfPath_TokenizeIdentifier


/** Join \p names into a single identifier using the namespace delimiter.
Any empty strings present in \p names are ignored when joining. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_JoinIdentifier(
    std_string_t * * return_
    , std_vector_string_t const * names);
#define pxr_SdfPath_JoinIdentifier pxrInternal_v0_21__pxrReserved____SdfPath_JoinIdentifier


/** Join \p lhs and \p rhs into a single identifier using the
namespace delimiter.
Returns \p lhs if \p rhs is empty and vice verse.
Returns an empty string if both \p lhs and \p rhs are empty. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_JoinIdentifier_1(
    std_string_t * * return_
    , std_string_t const * lhs
    , std_string_t const * rhs);
#define pxr_SdfPath_JoinIdentifier_1 pxrInternal_v0_21__pxrReserved____SdfPath_JoinIdentifier_1


/** Join \p lhs and \p rhs into a single identifier using the
namespace delimiter.
Returns \p lhs if \p rhs is empty and vice verse.
Returns an empty string if both \p lhs and \p rhs are empty. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_JoinIdentifier_2(
    std_string_t * * return_
    , pxr_TfToken_t const * lhs
    , pxr_TfToken_t const * rhs);
#define pxr_SdfPath_JoinIdentifier_2 pxrInternal_v0_21__pxrReserved____SdfPath_JoinIdentifier_2


/** Returns \p name stripped of any namespaces.
This does not check the validity of the name;  it just attempts
to remove anything that looks like a namespace. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_StripNamespace(
    std_string_t * * return_
    , std_string_t const * name);
#define pxr_SdfPath_StripNamespace pxrInternal_v0_21__pxrReserved____SdfPath_StripNamespace


/** Returns \p name stripped of any namespaces.
This does not check the validity of the name;  it just attempts
to remove anything that looks like a namespace. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_StripNamespace_1(
    pxr_TfToken_t * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfPath_StripNamespace_1 pxrInternal_v0_21__pxrReserved____SdfPath_StripNamespace_1


/** Return true if \p pathString is a valid path string, meaning that
passing the string to the \a SdfPath constructor will result in a valid,
non-empty SdfPath.  Otherwise, return false and if \p errMsg is not NULL,
set the pointed-to string to the parse error. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_IsValidPathString(
    _Bool * return_
    , std_string_t const * pathString
    , std_string_t * errMsg);
#define pxr_SdfPath_IsValidPathString pxrInternal_v0_21__pxrReserved____SdfPath_IsValidPathString


/** Equality operator.
(Boost provides inequality from this.) */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath__eq(
    pxr_SdfPath_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * rhs);
#define pxr_SdfPath__eq pxrInternal_v0_21__pxrReserved____SdfPath__eq


/** Comparison operator.

This orders paths lexicographically, aka dictionary-style. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_operator_(
    pxr_SdfPath_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * rhs);
#define pxr_SdfPath_operator_ pxrInternal_v0_21__pxrReserved____SdfPath_operator_


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetHash(
    pxr_SdfPath_t const * this_
    , size_t * return_);
#define pxr_SdfPath_GetHash pxrInternal_v0_21__pxrReserved____SdfPath_GetHash


/** Given some vector of paths, get a vector of concise unambiguous
relative paths.

GetConciseRelativePaths requires a vector of absolute paths. It
finds a set of relative paths such that each relative path is
unique. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_GetConciseRelativePaths(
    std_SdfPathVector_t * * return_
    , std_SdfPathVector_t const * paths);
#define pxr_SdfPath_GetConciseRelativePaths pxrInternal_v0_21__pxrReserved____SdfPath_GetConciseRelativePaths


/** Remove all elements of \a paths that are prefixed by other
elements in \a paths.  As a side-effect, the result is left in sorted
order. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_RemoveDescendentPaths(
    std_SdfPathVector_t * paths);
#define pxr_SdfPath_RemoveDescendentPaths pxrInternal_v0_21__pxrReserved____SdfPath_RemoveDescendentPaths


/** Remove all elements of \a paths that prefix other elements in
\a paths.  As a side-effect, the result is left in sorted order. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_RemoveAncestorPaths(
    std_SdfPathVector_t * paths);
#define pxr_SdfPath_RemoveAncestorPaths pxrInternal_v0_21__pxrReserved____SdfPath_RemoveAncestorPaths


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_copy(
    pxr_SdfPath_t * * this_
    , pxr_SdfPath_t const * rhs);
#define pxr_SdfPath_copy pxrInternal_v0_21__pxrReserved____SdfPath_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_op_assign(
    pxr_SdfPath_t * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * rhs);
#define pxr_SdfPath_op_assign pxrInternal_v0_21__pxrReserved____SdfPath_op_assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath_dtor(
    pxr_SdfPath_t * this_);
#define pxr_SdfPath_dtor pxrInternal_v0_21__pxrReserved____SdfPath_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath__Hash__op_call(
    pxr_SdfPath_Hash_t const * this_
    , size_t * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfPath_Hash__op_call pxrInternal_v0_21__pxrReserved____SdfPath__Hash__op_call


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath__Hash_ctor(
    pxr_SdfPath_Hash_t * * this_);
#define pxr_SdfPath_Hash_ctor pxrInternal_v0_21__pxrReserved____SdfPath__Hash_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath__Hash_copy(
    pxr_SdfPath_Hash_t * * this_
    , pxr_SdfPath_Hash_t const * rhs);
#define pxr_SdfPath_Hash_copy pxrInternal_v0_21__pxrReserved____SdfPath__Hash_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath__Hash_dtor(
    pxr_SdfPath_Hash_t * this_);
#define pxr_SdfPath_Hash_dtor pxrInternal_v0_21__pxrReserved____SdfPath__Hash_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPath__FastLessThan__op_call(
    pxr_SdfPath_FastLessThan_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * a
    , pxr_SdfPath_t const * b);
#define pxr_SdfPath_FastLessThan__op_call pxrInternal_v0_21__pxrReserved____SdfPath__FastLessThan__op_call


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Sdf_PathIdentity__op_call(
    pxr_Sdf_PathIdentity_t const * this_
    , pxr_SdfPath_t const * * return_
    , pxr_SdfPath_t const * arg);
#define pxr_Sdf_PathIdentity__op_call pxrInternal_v0_21__pxrReserved____Sdf_PathIdentity__op_call


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_7(
    size_t * return_
    , pxr_SdfPath_t const * path);
#define pxr_hash_value_7 pxrInternal_v0_21__pxrReserved___hash_value_7


#ifdef __cplusplus
}
#endif
